#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    if (x==0 && y==0){
        printf("origin");
    }
    else if (x>0 && y==0){
        printf("x axis");
    }
    else if (y>0 && x==0){
        printf("y axis ");
    }
    else
    {
        printf("xy plane ");
    }
    return 0;
}