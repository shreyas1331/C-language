/*for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}*/
//DO WHILE LOOP
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    do{
        i++;
        printf("%d\n",i);
    }
    while(i<10);


//FOR LOOP
for (int i=0;i<5;i++){
    printf("%d\n",i);
}
}