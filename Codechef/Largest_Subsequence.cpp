// 



#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int count_a = 0, count_b = 0;

    // Count the number of 'a's and 'b's in the string
    for (char c : s) {
        if (c == 'a') count_a++;
        else count_b++;
    }

    // The largest good subsequence will have twice the minimum of count_a and count_b
    int max_good_length = 2 * min(count_a, count_b);

    cout << max_good_length << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
