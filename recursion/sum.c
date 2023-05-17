#include<stdio.h>
int Recsum( int n){
    if (n<=1)
    return n;
    else
    return n+Recsum(n-1);
}
int main(){
    int n=3;
    printf("sum is %d",Recsum(n));
}