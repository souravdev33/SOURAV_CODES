#include<stdio.h>
int main ()
{
    int num,temp,rem,sum=0,i;
  

    for (i = 1; i<=1000; i++){
    temp=i;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==i){
        printf("%d\n",i);
    }
    sum=0;
    }
 return 0;
}