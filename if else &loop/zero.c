#include<stdio.h>

//take 10 inputs
//then search if given number exist in array or not 
//count occurence of given number 
//find largest number in array
//print in reverse order


int main(){
    int count0=0,count1=0,arr[10]={1,1,0,0,1,1,1,0,0,0};
    for(int i=0;i<10;i++)
    {
        if (arr[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
    for(int i=0;i<count0;i++)
        printf("0 ");
    for(int i=0;i<count1;i++)
        printf("1 ");

    return 0;
}