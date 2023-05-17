#include<stdio.h>
//1.with arguments and with return type 
int sum(int a,int b)
{
    return a+b;
}
//2.with arguments and without return type 
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }  
}
//3.without arguments and with return type 
int enterno(){
    int i;
    printf("enter the number ");
    
    scanf("%d",&i);
    return i;
}
int main(){

    //calling functions 
    int a,b,c;
    a=6;
    b=5;
    //c=sum(a,b);
    // printstar(8);
    // printf("the sum is %d\n",c);
    c=enterno();
    printf("the number entered is %d\n",c);
    return 0;

}