#include<stdio.h>
int main(){
    
    int n,reverse=0,remainder;
    printf("enter the no:");
    scanf("%d",&n);

    while (n!=0){
    remainder=n%10;
    reverse =reverse *10 + remainder;
    n=n/10;
    }
    printf("the reversed no is %d",reverse );
    return 0;
}