#include "stdio.h"
int main(){
    int  n, rem1, rem2;
    printf("Enter a no.: ");
    scanf("%d",&n);
    rem1 = n%10;
    while(n>=10){
        n/=10;
    }
    printf("\n1st digit is %d",n);
    printf("\nLast digit is %d",rem1);
    printf("\nSum of both is %d",rem1 + n);
}