#include<stdio.h>
#include<math.h>
int main()
{
    double side1,side2;
    scanf("%lf%lf",&side1,&side2);
    double hypotenuse= sqrt((side1*side1)+(side2*side2));
    printf("%.2lf
",hypotenuse);
}