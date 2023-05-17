#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("myfile.txt","w");//for  write nly 

    if(fp==NULL){
        printf("error while opening the file ");
        exit(1);
    }

    //1.fputc(for char)
    // fputc('X',fp);//jo put krvana hai file mai vo phir file ko jo point kr raha hai

    //2.fputs(for string)
    // char name[100]="Shreyas";
    // fputs(name,fp);
    // int n=5;
    //3.fprintf(fp,"%d .... %s",n,name);(kisi particular format mai krna ho)

    fclose(fp);
}