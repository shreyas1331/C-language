#include<stdio.h>
#include<stdlib.h>
int main(){

    char name[100]="shreyas";
    char str[100];
    char ch='x';

    FILE *fp=NULL;
    fp=fopen("myfile.txt","r");//for  read nly 

    if(fp==NULL){
        printf("error while opening the file ");
        exit(1);
    }
    //fgetc
    //ch=fgetc(fp);
    //printf("%c",ch);

    //fgets
    fgets(str,5,fp);
    printf("%s",str);

    //printing all the lines
    // while(!feof(fp))
    // {
    //     ch=fgetc(fp);
    //     printf("%c",ch);
    // }
    fclose(fp);
}