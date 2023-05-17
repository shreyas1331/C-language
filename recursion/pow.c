#include<stdio.h>
int power(int n,int x){
    if(x==0){return 1;}
    return n*power(n,x-1);
}
int main(){
    int n=3;
    printf("%d",power(2,4));









    
}