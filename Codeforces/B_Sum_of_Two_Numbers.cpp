// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;

// int digits_sum(int num)
// {
//     int sum = 0;
//     while (num > 0)
//     {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin >> tc;
//     while (tc-- > 0)
//     {
//         ll n;
//         cin >> n;
//         if (n % 2 == 0)
//         {
//             cout << n / 2 << " " << n / 2 << endl;
//             continue;
//         }

//         ll i = floor(n / 2), j = n - floor(n / 2);

//         while ( j != 0)
//         {
//             ll sum1 = digits_sum(i);
//             ll sum2 = digits_sum(j);
//             if (i + j == n && abs(sum1 - sum2) <= 1)
//             {
//                 cout << i << " " << j << endl;
//                 break;
//             }
//             // cout << i << " " << j << endl;
//             i++;
//             j--;
//         }
//     }
//     return 0;
// }



#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int digits_sum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while (tc-- > 0)
    {
        ll n;
        cin >> n;

        ll i = 0, j = 0;
        ll place = 1;

        while (n > 0)
        {
            ll digit = n % 10;
            n /= 10;

          
            i += (digit / 2) * place;
            j += (digit / 2) * place;

            if (digit % 2 != 0)
            {
                if (digits_sum(i) <= digits_sum(j))
                {
                    i += place;
                }
                else
                {
                    j += place;
                }
            }

            place *= 10;
        }

        cout << i << " " << j << endl;
    }

return 0;
}
