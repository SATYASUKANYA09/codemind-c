#include<stdio.h>
int main(){
    int n,i,j,a,b;
    scanf("%d",&n);
    if(3<=n && n<=100){
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    for(a=n-1;a>0;a--){
        for(b=a;b>=1;b--){
            printf("*");
        }
        printf("
");
    }
    }
    else{
        printf("The pattern is not possible");
    }
}