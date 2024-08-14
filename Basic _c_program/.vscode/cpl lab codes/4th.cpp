#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p=1,num;
    while(scanf("%d",&num)!=EOF)
    {
        if(num<0)
             break;
        int S=0;
         while(num>1)
         {
             S++;
             num=(num+1)/2;
         }
         printf("Case %d: %d\n",p++,S);
     }
     return 0;
 }
