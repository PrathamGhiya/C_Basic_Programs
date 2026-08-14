#include "stdio.h"
int main(){
    int n, ld=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf(((n%10)%2==0) ? "Even" : "Odd");
}