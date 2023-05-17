#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};

    // char str[6] = "harry";
    // char str[34];
    // gets(str);
    // printf("Using custom function printStr\n");
    printStr(str);
    // char *p=str;
    // printf("Using printf %s\n", *p);
    // printf("using puts: ");
    // puts(str);
    // return 0;
}
