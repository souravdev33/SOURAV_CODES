#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, oper = 0;
        string s;
        cin >> n >> k >> s;

        for (int i = 0; i < n;) {
            if (s[i] == 'B') {
                oper++;
                i += k;
            } else {
                i++;
            }
        }

        cout << oper << endl;
    }

    return 0;
}
