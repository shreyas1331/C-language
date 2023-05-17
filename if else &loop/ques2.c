#include<stdio.h>
// int main(){
//     int qty,rate,price;
//     printf("quantity is :");
//     scanf("%d",&qty);
//     printf("rate is :");
//     scanf("%d",&rate);
//     price=qty*rate;
//     if (qty>=1000){
//         price=price -(price/10);
//     }
//     printf("%d",price);
// }

int main(){
    int a, b, c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    if(d==180){
        printf("it is a valid triangle ");
    }
    else{
        printf("not a triangle ");
    }
    return 0;
}