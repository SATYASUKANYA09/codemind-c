#include<stdio.h>
#include<math.h>
int Length(int no)
{
    int c = no;
    int I = 0;
    while (c != 0)
    {
        I++;
        c /= 10;
        
    }
    return I;
}
int D(int no,int I)
{
    int sum = 0;
    int c = no;
    int ID;
    while (c > 0)
    {
        ID = c % 10;
        sum += (int)pow(ID,I);
        c /= 10;
        I--;
    }
    return sum == no;
    
}
int main()
{
    int no;
    scanf("%d",&no);
    int I = Length(no);
    if (D(no,I)==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
