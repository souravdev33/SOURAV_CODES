#include<stdio.h>
#include<math.h>
int main()
{
    float x=4.35687,result1,result2,result3,result4;
    result1=round(x);    //round shows the round int figure
    result2=trunc(x);    //trunc removes all the floating point and only shows the int value
    result3=ceil(x);     //ceil shows the top int point of a int num along with the floating point
    result4=floor(x);    //ceil shows the down int point of a int num along with the floating point
    printf("the result is \nround= %f\ntrunc=%f\n ceil=%f\n floor=%f",result1,result2,result3,result4);
    return 0;
}