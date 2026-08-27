#include "stdio.h"
int main(){
    int n, digit=0, rev=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(n!=0){
        digit = n%10;
        rev = rev*10 + (n%10);
        n/=10;
    }
    while(rev!=0){
        digit = rev%10;
        printf("%d\n",digit);
        rev/=10;
    }
}