#include<stdio.h>
int main(){
    
    int n,reverse=0,remainder,original;
    printf("enter the no:");
    scanf("%d",&n);
    original=n;

    while (n!=0){
    remainder=n%10;
    reverse =reverse *10 + remainder;
    n=n/10;
    }
    printf("the reversed no is %d\n",reverse );

    if(original==reverse){
        printf("it is palindrome\n");
    }
    else {
        printf("it is not ");
    }
    return 0;
}