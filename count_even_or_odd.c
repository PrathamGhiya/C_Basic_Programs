#include "stdio.h"
int main(){
    int n, even=0, odd=0, i=1;
    while(i<=10){
        printf("Enter no. %d: ",i);
        scanf("%d",&n);
        (n%2==0) ? (even++) : (odd++);
        i++;
    }
    printf("Even nos are %d",even);
    printf("\nOdd nos are %d",odd);
}