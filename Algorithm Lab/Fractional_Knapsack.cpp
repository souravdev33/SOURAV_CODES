#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> obj(n);
    vector<int> profit(n);
    vector<int> weight(n);
    vector<pair<float, int>> profit_per_kg;

    for (int i = 0; i < n; i++) {
        cin >> obj[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    for (int i = 0; i < n; i++) {
        profit_per_kg.push_back({(float)profit[i] / weight[i], i});
    }
    sort(profit_per_kg.begin(), profit_per_kg.end(), greater<pair<float, int>>());

    vector<pair<int, float>> element; 

    float total_profit = 0;
    int remaining_weight = w;
    for (int i = 0; i < n; i++) {
        int idx = profit_per_kg[i].second;
        if (remaining_weight > 0 && weight[idx] <= remaining_weight) {
            remaining_weight -= weight[idx];
            total_profit += profit[idx];
            element.push_back({obj[idx], 1.0});  
        }
         else {
            if (remaining_weight > 0) {
                float fraction = (float)remaining_weight / weight[idx];
                total_profit += profit_per_kg[i].first * remaining_weight;
                element.push_back({obj[idx], fraction}); 
                remaining_weight = 0;
            }
            break;
        }
    }

    for (auto &it : element) {
        cout<<it.first<< " taken: "<< it.second*100<<"%"<<endl;
    }
    
    cout << fixed << setprecision(2) << "Total profit= " <<total_profit<<endl;

    return 0;
}
