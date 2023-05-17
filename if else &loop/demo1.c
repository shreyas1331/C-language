#include <stdio.h>
int main()
{
    printf("enter your marks");
    int m = 0;
    scanf("%d",&m);

    if(m>=80)
        printf("grade A");
    else if (m>=65)
    printf ("B");
    else if (m>=45)
    printf ("C");
    else if (m>=30)
    printf ("D");
    else
    printf ("E");
}
