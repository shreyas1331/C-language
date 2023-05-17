#include <stdio.h>
//shift
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=arr[0];
    for (int i=0;i<9;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[9]=x;
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}