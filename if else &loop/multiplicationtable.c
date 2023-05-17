#include<stdio.h>
int main(){
    int num;
    printf("enter the multiplication table of: ");
    scanf("%d",&num);
    printf("Multiplication table of %d is as follows :\n",num);
    for (int i = 1; i < 11; i++)
    {printf("%dx%d=%d\n",num,i,num*i);}
    return 0;
}