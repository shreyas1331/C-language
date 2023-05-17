//factorial of a number using recursion 
#include <stdio.h>

int factorial(int number){
    if (number==0 || number==1){
        return 1;
    }
    else {
        return (number *(factorial(number-1)));
    }

}

int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
printf("the factorial of %d is %d\n",num,factorial(num));
return 0;
}

//factorial of number using simple loops
// int main()    
// {    
//  int i,fact=1,number;    
//  printf("Enter a number: ");    
//   scanf("%d",&number);    
//     for(i=1;i<=number;i++){    
//       fact=fact*i;    
//   }    
//   printf("Factorial of %d is: %d",number,fact);    
// return 0;  
// }   