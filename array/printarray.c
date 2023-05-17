#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the integers :");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Displaying array
    for (int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

}