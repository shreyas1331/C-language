#include<stdio.h>
int main(){
    int week;
    printf("enter the week:");
    scanf("%d",&week);
    switch (week)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturaday");
        break;
    
    default:
    printf("chutiya");
        break;
    }
}