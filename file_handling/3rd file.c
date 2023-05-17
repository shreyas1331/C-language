#include<stdio.h>
#include<stdlib.h>
int main(){

    char name[100]="shreyas";
    char str[100];
    char ch='x';
    int n=5;
    FILE *fp=NULL;
    fp=fopen("myfile.txt","a");//for  read nly 

    if(fp==NULL){
        printf("error while opening the file ");
        exit(1);
    }

    //for appending -> 
    gets(str);
    fprintf(fp,"--%s--",str);

    // fclose(fp);
}