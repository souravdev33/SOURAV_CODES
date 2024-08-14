#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;zz

        if (n % m != 0) {
            cout << -1 << endl;  // It's impossible to divide the apples equally
        } else {
            long long operations = 0;
            while (n > m) {
                if (n % 2 == 0) {
                    n /= 2;
                } else {
                    n++;
                }
                operations++;
            }
            cout << operations << endl;
        }
    }

    return 0;
}
