#include <iostream>
#include <algorithm>
#include <set>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while (tc-- > 0)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        for (char &c : str)
        {
            c = tolower(c);
        }

        set<char> s;
        int i = 0;

        while (i < n and str[i] == 'm')
        {
            s.insert(str[i]);
            i++;
        }

        while (i < n and str[i] == 'e')
        {
            s.insert(str[i]);
            i++;
        }

        while (i < n and str[i] == 'o')
        {
            s.insert(str[i]);
            i++;
        }

        while (i < n and str[i] == 'w')
        {
            s.insert(str[i]);
            i++;
        }

        if (i == n and s.size() == 4 ){
            yes
        }
        else{
            no
        }
    }

    return 0;
}
