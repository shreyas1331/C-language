#include<stdio.h>
void printpattern(int n){
    if(n==0)return ;

    for(int i=0;i<n;i++){
    printf("*");}
    printf("\n");
    printpattern(n-1);
}
int main(){
    int n=5;
printpattern(5);
}