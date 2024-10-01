#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>m;
vector<vector<int>>k;

int MatrixChainOrder(vector<int> &v, int i, int j)
{
    if (i == j)
        return 0;

    if (m[i][j] != -1)
        return m[i][j];

    int mini = INT32_MAX;

    for (int x = i; x < j; x++)
    {
        int count = MatrixChainOrder(v, i, x) + MatrixChainOrder(v, x + 1, j) + v[i - 1] * v[x] * v[j];
        if (count < mini)
        {
            mini = count;
            k[i][j] = x;
        }
    }

    return m[i][j] = mini;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }



    int row,col;
    for(int i=0;i<n;i++){
        cin>>row>>col;
        if(i==0){
            v[i]=row;
        }
        v[i+1]=col;
    }
    // m.assign(n+1,vector<int>(n+1,-1));
    // k.assign(n+1,vector<int>(n+1,-1));

    cout << "Minimum number of multiplications is " << MatrixChainOrder(v, 1, n) << endl;

    cout << "m matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (m[i][j] == -1)
                cout << "0 ";
            else
                cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << "k matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (k[i][j] == -1)
                cout << "0 ";
            else
                cout << k[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

