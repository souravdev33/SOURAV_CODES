#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if the string s becomes k-proper after performing the operation with p
bool is_k_proper(const string& s, int p, int k) {
    int n = s.size();
    vector<int> diff_count(k, 0); // Count of differences between characters at indices i and i+k

    for (int i = 0; i < n; ++i) {
        if (s[i] != s[(i + k) % n]) {
            ++diff_count[i % k];
        }
    }

    // If all differences are at most 1, then the string becomes k-proper after the operation
    for (int diff : diff_count) {
        if (diff > 1) {
            return false;
        }
    }

    return true;
}

// Function to find p to make the string k-proper
int find_p_for_k_proper(const string& s, int k) {
    int n = s.size();
    for (int p = 1; p <= n; ++p) {
        if (n % p == 0 && is_k_proper(s, p, k)) {
            return p;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << find_p_for_k_proper(s, k) << endl;
    }
    return 0;
}
