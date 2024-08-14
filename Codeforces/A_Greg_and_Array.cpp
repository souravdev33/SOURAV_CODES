#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;
 
ll arr[1000000];
ll q[1000000];
ll diff[1000000];


int main() {
	ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
	vector<pair<int, int>>range(m + 1);
	vector<long long>val(m + 1);
	
	for(int i = 1; i <= m; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		range[i] = {l,r};
		val[i] = x;
    }
	while(k--) {
		int x, y;
        cin >> x >> y;
		q[x]++;
		q[y + 1]--;
	}
	
	for (int i = 1; i <= m; i++){
        q[i] += q[i - 1];

    }
	for (int i = 1; i <= m; i++)
		val[i] = val[i] * q[i];



	for (int i = 1; i <= m; i++) {
		int l = range[i].first;
		int r = range[i].second;

		diff[l] += (val[i]);
		diff[r + 1] -= (val[i]);

	}

	for (int i = 1; i <= n; i++){
        diff[i] += diff[i - 1];
    }

	for (int i = 1; i <= n; i++){
        cout << diff[i] + arr[i] << " ";
    }

return 0;
}