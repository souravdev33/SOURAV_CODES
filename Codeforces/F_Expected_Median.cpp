#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

// Function to calculate the binomial coefficient C(n, r)
long long binomial_coefficient(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    long long result = 1;
    for (int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // k is odd, calculate the median position
        int median_position = (k + 1) / 2;

        long long result = 0;

        // Calculate the contribution of each element being the median
        for (int i = 0; i < n; i++) {
            // Calculate how many elements can be chosen before and after the current element
            int left_elements = i;
            int right_elements = n - i - 1;

            // Calculate number of subsequences where a[i] is the median
            long long count = (binomial_coefficient(left_elements, median_position - 1) *
                               binomial_coefficient(right_elements, median_position - 1)) % MOD;

            // Add the contribution to the result if a[i] is 1
            if (a[i] == 1) {
                result = (result + count) % MOD;
            }
        }

        cout << result << endl;
    }

    return 0;
}
