#include<stdio.h>
#include<stdlib.h>
// r w a
// r+ (read + edit)  w+ (write + read)  a+ (append + read)
int main()
{
    char name[100] = "Jitendra Singh";
    char str[100];
    int n = 5;
    char ch = 'x';
    FILE *fp = NULL;
    fp = fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("error while opening the file");
        exit(1);
    }
    fputs("silver",fp);
    //  fputs("data",fp);
    //  rewind(fp);
    //  fputs("new data after rewind",fp);
    //  while(!feof(fp))
    // {
    //     ch = fgetc(fp);
    //     printf("%c",ch);
    // }
    // fgetc
    // ch = fgetc(fp);
    // printf("%c",ch);
    // fgets
    // print till newline
    // fgets(str,10,fp);
    // printf("%s",str);
    // printing all the lines
    // while(!feof(fp))
    // {
    //     ch = fgetc(fp);
    //     printf("%c",ch);
    // }
    // 1. fputc
    //fputc(ch,fp);
    // 2. fputs
    //fputs(name,fp);
    // 3. fprintf
    //fprintf(fp,"%d .... %s",n,name);
    fclose(fp);
}