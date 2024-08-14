 #include<stdio.h>
 int main ()
 {
    double a,b,c,d,x1,x2;
    printf("enter the value of a b c : ");
    scanf("%lf %lf %lf",&a, &b, &c);

    d = sqrt (b*b-4*a*c);
    
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("the result is x1=%lf\n,x2=%lf\n", x1,x2);
    return 0;
 }