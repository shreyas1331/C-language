#include<stdio.h>
int fibonnaci(int n){
    if( n==0) {return 0;}
    else if (n==1) {return 1;}
    else{
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);

    if (n<0){
        return 1;
    }
    int result=fibonnaci(n);
    printf("%d",result);
    return 0;

}