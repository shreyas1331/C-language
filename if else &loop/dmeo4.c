
#include<stdio.h>
int main(){
    // int a=8;
    // float b=7.056;
    // printf("the value of a is %d and the value of b is %6.3f\n",a,b );
    // return 0;
    int num;
    printf("Enter a number less than 10\n");
    scanf("%d",&num);
    if (num<=10)
    printf("less than 10\n");
    else 
    printf("greater than 10\n"); 
    


    int age;
    printf("enter the age\n ");
    scanf("%d",&age);
    if (age<18)
    printf("cant vote");
    else if (age>=18)
    printf("vote");
    return 0;
    
}