#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (char ch = 'E' - i; ch >= 'A'; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
