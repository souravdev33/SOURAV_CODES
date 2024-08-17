// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     cin >> tc;

//     while(tc--)
//     {
//         string str1, str2;
//         cin >> str1 >> str2;
//         ll j = 0;
//         for (int i = 0; i < str1.length(); i++){
//             if (j >= str2.length()) break;

//             if (str1[i] == str2[j]){
//                 j++;
//                 continue;
//             }
//             if (str1[i] == '?'){
//                 str1[i] = str2[j];
//                 j++;
//                 continue;
//             }
//         }
//         for (int i = 0; i < str1.length(); i++){
//             if (str1[i] == '?')
//             {
//                 str1[i] = 'a';
//             }
//         }
//         if(j >= str2.length()){
//             yes
//             cout << str1 << endl;
//         }
//         else no
//     }

// return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str1, str2;
        cin >> str1;
        cin >> str2;
        int j = 0;

        for (int i = 0; i < str1.length(); i++)
        {
            if (j >= str2.size())
                break;

            if (str1[i] == str2[j])
            {
                j++;
                continue;
            }

            if (str1[i] == '?')
            {
                str1[i] = str2[j];
                j++;
                continue;
            }
        }
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] == '?')
            {
                str1[i] = 's';
            }
        }

        if (j >= str2.length())
        {
            yes
            cout << str1 << endl;
        }
        else
            no
    }
}
