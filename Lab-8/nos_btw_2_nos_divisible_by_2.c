#include "stdio.h"
int main(){
    int a,b;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    int i=a;
    if(i==1) i++;
    if(i%2!=0) i++;

    while(i<=b){
        printf("\n%d",i);
        i+=2;
    }
}