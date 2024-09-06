// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     string s;
// //     cin >> s;
// //     for (int i = 0; i < s.size(); i++)
// //     {
// //         if (s[i] != '1')
// //         {
// //             cout << "NO";
// //             return 0;
// //         }
// //         if (s[i + 1] == '4' && s[i + 2] == '4' && i < s.size() - 2)
// //         {
// //             i += 2;
// //             continue;
// //         }
// //         if (s[i + 1] == '4' && i < s.size() - 1)
// //         {
// //             i++;
// //             continue;
// //         }
// //     }
// //     cout << "YES";
// //}

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<regex>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    static const regex r{"(1|14|144)+"};
    string str{};

    cin >> str;

    if (regex_match(str.data(), r))
    {
        yes
    }
    else
    {
        no
    }
return 0;
}










