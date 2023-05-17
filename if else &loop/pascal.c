#include<stdio.h>
int main()
{
    //0<n<999
    int lines;
    scanf("%d",&lines);

    for(int n=0;n<=lines;n++)
    {
        int c;
        for(int r=0;r<=n;r++)
        {
            if(r==0 || r==n)
            c=1;
            else
            c=c*(n-r+1)/r;
            printf("%d",c);
        }
        printf("\n");
    }

}