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
    //fseek(file_ptr,pos,from_position)
    //SEEK_SET
    //SEEK_CUR
    //SEEK_END

    fseek(fp,3,SEEK_SET);
    printf("%c\n",fgetc(fp));
    fseek(fp,-4,SEEK_CUR);
    printf("%c\n",fgetc(fp));
    fseek(fp,-2,SEEK_END);
    printf("%c\n",fgetc(fp));
    //ftell function 
    //tells the cursor position
    printf("%d",ftell(fp));

    
}