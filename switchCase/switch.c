#include<stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d",&age);

    switch (age)
    {
    case 3:
        printf("age is 3");
        break;
    case 13:
        printf("age is 13");
        break;
    case 18:
        printf("age is 18");
        break;
    
    default:
    printf("age is not 3,13,18");
        break;
    }
    return 0;
}