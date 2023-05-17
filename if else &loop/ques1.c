// #include<stdio.h>
// int main(){
//     int a , b, c, d;
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     // printf("%d",(a+b)*(c+d));
//     // printf("%d",(a+b)/(c+d));
//     return 0;
// }


//QUES-2->DIGIT SUM
// #include <stdio.h>
// int main(){
//     int num = 58612;
//     int sum = 0;
   
//     while(num!=0){
//         sum += num % 10;
//     num = num/10;
//     }
    
    
    
//     printf("Digit sum: %d", sum);
// }


//QUES-3->SWAP
#include<stdio.h>
int main(){
    int a,b,temp;
    a=5;
    b=6;
    temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
