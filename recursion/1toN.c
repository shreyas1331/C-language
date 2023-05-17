#include<stdio.h>
void fn(int x){
    if(x>0){
        printf("%d",x);
        fn(x-1);
        // fn(x-1);
    }
}
int main(){
    fn(3);

}