#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

struct Node
{
    char ch;
    int freq;
    Node *left, *right;

Node(char character, int frequency) : ch(character), freq(frequency),left(nullptr), right(nullptr) {}
};

struct Compare
{
    bool operator()(Node *left, Node *right)
    {
        return left->freq > right->freq;
    }
};

class HuffmanCoding
{
private:
    Node *root;
    unordered_map<char, string> huffmanCode;
    unordered_map<string, char> reverseHuffmanCode;

    void generateCodes(Node *node, const string &code)
    {
        if (!node)
            return; // Base case

        if (!node->left && !node->right)
        {
            huffmanCode[node->ch] = code;
            reverseHuffmanCode[code] = node->ch;
        }

        generateCodes(node->left, code + "0");
        generateCodes(node->right, code + "1");
    }

public:
    HuffmanCoding() : root(nullptr) {}

    void buildTree(const vector<pair<char, int>> &charFreq)
    {
        priority_queue<Node *, vector<Node *>, Compare> pq;

        for (const auto &pair : charFreq)
        {
            pq.push(new Node(pair.first, pair.second));
        }

        while (pq.size() > 1)
        {
            Node *left = pq.top();
            pq.pop();
            Node *right = pq.top();
            pq.pop();

            Node *newNode = new Node('\0', left->freq + right->freq);
            newNode->left = left;
            newNode->right = right;
            pq.push(newNode);
        }

        root = pq.top();
        generateCodes(root, "");
    }

    string encode(const string &text)
    {
        string encodedString;
        for (char ch : text)
        {
            encodedString += huffmanCode[ch];
        }
        return encodedString;
    }

    string decode(const string &encodedString)
    {
        string decodedString;
        string currentCode;
        for (char bit : encodedString)
        {
            currentCode += bit;
            if (reverseHuffmanCode.find(currentCode) != reverseHuffmanCode.end())
            {
                decodedString += reverseHuffmanCode[currentCode];
                currentCode.clear();
            }
        }
        return decodedString;
    }

    void printCodes()
    {
        cout << "Huffman Codes: "<<endl;
        for (const auto &pair : huffmanCode)
        {
            cout << pair.first << ": " << pair.second << '\n';
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;

    vector<pair<char, int>> charFreq(n);

    cout << "Enter the characters and their frequencies:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Character " << i + 1 << ": ";
        cin >> charFreq[i].first;
        cout << "Frequency of " << charFreq[i].first << ": ";
        cin >> charFreq[i].second;
    }

    HuffmanCoding huffman;
    huffman.buildTree(charFreq);

    huffman.printCodes();

    string text;
    cout << "\nEnter the text to encode: ";
    cin.ignore(); 
    getline(cin, text);

    string encoded = huffman.encode(text);
    cout << "Encoded text: " << encoded << '\n';

    string decoded = huffman.decode(encoded);
    cout << "Decoded text: " << decoded << "\n";

    return 0;
}
