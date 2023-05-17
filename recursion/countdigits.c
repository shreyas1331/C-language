#include<stdio.h>

int countdigit(long long n){
    if (n==0)
    return 1;
    int count =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    long long n=1234;
    printf("count is %d",countdigit(n));
}