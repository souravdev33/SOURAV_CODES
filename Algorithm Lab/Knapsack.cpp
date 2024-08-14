#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item {
    int object;
    int profit;
    int weight;
};

// Custom comparator for sorting items based on value-to-weight ratio
bool compare(Item a, Item b) {
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

int main() {
    int n;
    cin >> n;
    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> items[i].profit >> items[i].weight;
        items[i].object = i; // Store the original index
    }
    int w;
    cin >> w;

    sort(items.begin(), items.end(), compare); // Sort based on value-to-weight ratio

    double ans = 0;
    vector<pair<int, double>> selected_items; // Vector to store selected items (original index, weight taken)

    for (int i = 0; i < n; i++) {
        if (w >= items[i].weight) {
            ans += items[i].profit;
            selected_items.push_back({items[i].object, (double)items[i].weight});
            w -= items[i].weight;
     } 
     else {
            double v_per_unit = (double)items[i].profit / items[i].weight;
            ans += v_per_unit * w;
            selected_items.push_back({items[i].object, (double)w});
            break;
        }
    }

    cout << fixed << setprecision(2) << ans << endl;

    for (auto &item : selected_items) {
        cout << "Item index: " << item.first << ", Weight: " << item.second << endl;
    }

    return 0;
}
