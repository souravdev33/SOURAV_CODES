#include<stdio.h>
int main() {
    
    int n=1000,T,N,A[n],B[n],ans[n],ans1[n],ans2[n],ans3[n];

    scanf("%d",&T);

    for (int i = 1; i <= T; i++)  //testcase
    {
        scanf("%d",&N);

        for ( int j = 1; j <= N; j++)   //A
        {
            scanf("%d",&A[j]);
        }

        for ( int k = 1; k <= N; k++)    //B
        {
            scanf("%d",&B[k]);
        }
        int x,y;
        
        for ( x = 1; x <= N; x++)       //Alice Optr.
        {
            ans[x] = A[x] * B[x];
            ans1[x] = ans[x] / A[x] ;
        }
    

        if (ans1[N] == B[N])
        {
            printf("Case %d: Yes ",i);
        }
        else
        {
            printf("Case %d: No ",i);
        }
        

        for (y = 1; y <= N; y++)
        {
            ans2[y-1] = A[y];
            ans3[y-1] = B[y];
        }
        if (ans2[N-1] == A[1] && ans3[N-1] == B[1])
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        
    }
    
    return 0;
}