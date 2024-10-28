#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long W;
        cin >> n >> W;

        vector<pair<int, int>> items(n); // {weight, index}
        for (int i = 0; i < n; ++i) {
            cin >> items[i].first;
            items[i].second = i + 1; // Store original 1-based index
        }

        long long half_W = (W + 1) / 2;
        vector<int> selected_indices;
        long long current_sum = 0;

        // Check for any single item that can satisfy the condition
        for (int i = 0; i < n; ++i) {
            if (items[i].first >= half_W && items[i].first <= W) {
                cout << 1 << endl << items[i].second << endl;
                goto next_case;
            }
        }

        // Sort items based on weight to facilitate subset selection
        sort(items.begin(), items.end());

        // Try to build a subset of items
        for (auto &item : items) {
            if (current_sum + item.first > W) break;
            selected_indices.push_back(item.second);
            current_sum += item.first;
            
            if (current_sum >= half_W) {
                cout << selected_indices.size() << endl;
                for (int idx : selected_indices) {
                    cout << idx << " ";
                }
                cout << endl;
                goto next_case;
            }
        }

        // If no solution was found
        cout << -1 << endl;

    next_case:;
    }

    return 0;
}
