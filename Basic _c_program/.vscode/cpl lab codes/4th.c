
 1 #include <bits/stdc++.h>
 2 using namespace std;
 3 int n;
 4 int main()
 5 {
 6     int p=1;
 7     while(scanf("%d",&n)!=EOF)
 8     {
 9         if(n<0)
10             break;
11         int ans=0;
12         while(n>1)
13         {
14             ans++;
15             n=(n+1)/2;
16         }
17         printf("Case %d: %d\n",p++,ans);
18     }
19     return 0;
20 }
