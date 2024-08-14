

// /*---------------------------------------------------------------------------------
//                                     ॐ हरे कृष्णा ॐ                                  
//                                 Author :- Sourav Dev                               
// -----------------------------------------------------------------------------------*/

// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <iomanip>
// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using namespace std;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc;
//     cin>>tc;
//     while(tc--){
//         int r,c;
//         cin>>r>>c;
//         ll Mx[r][c];
//         for (ll i=0;i<r;i++) {
//             for (ll j=0;j<c;j++) {
//                 cin>>Mx[i][j];
//             }
//         }

//         for (int i=0;i<r;i++) {
//             for (ll j=0;j<c;j++) {
//                 ll maxx = 0;
//                 if (i>0)  maxx = max(maxx, Mx[i - 1][j]);
//                 if (j>0)  maxx = max(maxx, Mx[i][j - 1]);
//                 if (i<r-1)  maxx = max(maxx, Mx[i + 1][j]);
//                 if (j<c-1)  maxx = max(maxx, Mx[i][j + 1]);

//                 if ((i==0 or Mx[i][j]>Mx[i - 1][j]) and (j==0 or Mx[i][j] > Mx[i][j - 1]) and
//                     (i==r-1 or Mx[i][j] > Mx[i + 1][j]) and (j==c-1 or Mx[i][j] > Mx[i][j + 1])) 
//                 {
//                     Mx[i][j]=maxx;
//                 }
//             }
//         }

//         for(ll i=0;i<r;i++) {
//             for(ll j=0;j<c;j++) {
//                 cout<<Mx[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     return 0;
// }
/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- Sourav Dev                               
-----------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int rows, cols;
        cin >> rows >> cols;

        vector<vector<int>> matrix(rows, vector<int>(cols));
        
        // Input matrix values
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Process each element in the matrix
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int max_adj = 0;

                // Finding maximum adjacent value
                if (i > 0)
                    max_adj = max(max_adj, matrix[i - 1][j]);
                if (j > 0) 
                    max_adj = max(max_adj, matrix[i][j - 1]);
                if (i < rows - 1) 
                    max_adj = max(max_adj, matrix[i + 1][j]);
                if (j < cols - 1) 
                    max_adj = max(max_adj, matrix[i][j + 1]);

                // Updating the matrix element based on conditions
                if (i > 0 && matrix[i][j] <= matrix[i - 1][j])
                    continue;
                if (j > 0 && matrix[i][j] <= matrix[i][j - 1])
                    continue;
                if (i < rows - 1 && matrix[i][j] <= matrix[i + 1][j])
                    continue;
                if (j < cols - 1 && matrix[i][j] <= matrix[i][j + 1])
                    continue;

                matrix[i][j] = max_adj;
            }
        }

        // Output the modified matrix
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
