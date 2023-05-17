// C program to find maximum between two numbers using switch case
#include<stdio.h>
int main(){
    int a,b;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    switch (a>b)
    {
    case 0:
        printf("b is max ",b);
        break;

    case 1:
        printf("a is max ",a);
        break;
    
    default:
        printf("they are equal");
        break;
    }           
}