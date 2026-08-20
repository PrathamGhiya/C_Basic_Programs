#include "stdio.h"
int main(){
    int sum = 0, n, i=1;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(i<=n){
        sum += i;
        i++;
    }
    printf("Sum of 1 to %d numbers is %d",n,sum);
}