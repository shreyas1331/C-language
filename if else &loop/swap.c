//SWAP NUMBERS WITHOUT USING THIRD VARIABLE 
/*#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping
  a = a + b;
  b = a - b;
  a = a - b;
  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}
*/
#include <stdio.h>
int main(){
  int a,b;
  printf("enter the number:");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("number a is :%d",a);
  printf("number b is %d",b);

}