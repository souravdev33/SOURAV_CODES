#include <iostream>
#include <vector>

using namespace std;

// Function declaration for hello
void hello(int size, vector<int>& numbers) {
    int count = 0;
    for (int i = 1; i < size; i++) {
        for (int j = i + 1; j <= size; j++) {
            if ((numbers[i - 1] * numbers[j - 1]) % (i * j) == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int size;
        cin >> size;
        vector<int> numbers(size);
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
        
        // Calling hello function
        hello(size, numbers);
    }
    return 0;
}
