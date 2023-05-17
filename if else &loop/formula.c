#include<stdio.h>
#include<math.h>
int main(){
    int cx,cy,r,px,py;
    printf("enter the origin cx and cy:");
    scanf("%d%d",&cx,&cy);

    printf("enter the radius of circle:");
    scanf("%d",&r);

    printf("enter the picked point px and py:");
    scanf("%d%d",&px,&py);

    int d = sqrt((cx-px)*(cx-px)+(cy-py)*(cy-py));

    if(r>d){
        printf("point lies inside circle ");
    }
    else {
        printf("point lies outside circle");
    }
    return 0;



}