#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int light(int n){
    if (n == 0){
        return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[3][3],res[3][3];

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
            if (arr[i][j] % 2 == 0){

                arr[i][j] = 0;
            }
            else{

                arr[i][j] = 1;
            }
            res[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            if (arr[i][j] == 1){

                res[i][j] = light(res[i][j]);

                if (i > 0){

                    res[i - 1][j] = light(res[i - 1][j]);
                }
                if (j > 0){

                    res[i][j - 1] = light(res[i][j - 1]);
                }
                if (i < 2){

                    res[i + 1][j] = light(res[i + 1][j]);
                }
                if (j < 2){

                    res[i][j + 1] = light(res[i][j + 1]);
                }
            }
        }
    }
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            cout << res[i][j];
        }
        cout << endl;
    }
return 0;
}