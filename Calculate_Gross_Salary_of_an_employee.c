#include<stdio.h>
int main()
{
    float BS,HRA,DA,GROSS,PF;
    scanf("%f%f%f",&BS,&HRA,&DA);
    PF=(12*BS)/100;
    GROSS=BS+HRA+DA+PF;
    printf("%.2f
%.2f",PF,GROSS);
}