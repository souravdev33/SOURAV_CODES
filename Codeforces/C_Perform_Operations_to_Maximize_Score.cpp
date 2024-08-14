#include <bits/stdc++.h>
using namespace std;


int median(vector<int>& v) {
    int n = v.size();
    nth_element(v.begin(), v.begin() + n / 2, v.end());
    return v[n / 2];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

    
        auto score = [&](int idx) -> int {
            vector<int> c;
            for (int i = 0; i < n; ++i) {
                if (i != idx) c.push_back(a[i]);
            }
            int maxPossibleIncrease = b[idx] ? min(k, INT_MAX - a[idx]) : 0;
            return a[idx] + maxPossibleIncrease + median(c);
        };

        int left = 0, right = n - 1;
        while (right - left > 2) {
            int m1 = left + (right - left) / 3;
            int m2 = right - (right - left) / 3;
            if (score(m1) < score(m2)) {
                left = m1;
            } else {
                right = m2;
            }
        }

        int maxScore = 0;
        for (int i = left; i <= right; ++i) {
            maxScore = max(maxScore, score(i));
        }

        cout << maxScore << '\n';
    }

    return 0;
}
