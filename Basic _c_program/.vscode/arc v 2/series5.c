#include<Stdio.h>
int main()
{
    float n,i,sum=0;

    printf("Enter the last number :  ");
    scanf("%f",&n);

    printf("1 + 1/2 + 1/3 + ......+ 1/%f\n",n);
    for(i=1;i<=n;i++)
   {
        sum=sum+1/i;

   }
   printf("the sum is : %.2f",sum);

   return 0;

}