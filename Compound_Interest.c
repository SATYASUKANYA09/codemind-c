#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,c;
    scanf("%f%f%f",&p,&r,&t);
    a=p*(pow(1+(r/100),t));
    c=a-p;
    printf("%.2f",c);
}