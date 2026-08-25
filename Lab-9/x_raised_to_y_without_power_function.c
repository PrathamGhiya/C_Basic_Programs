#include<stdio.h>
int main(){
    int x,y,i=1,pro=1;
    printf("Enter base: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);
    while(i<=y){
        pro*=x;
        i++;
    }
    printf("%d to the power %d is %d",x,y,pro);
}