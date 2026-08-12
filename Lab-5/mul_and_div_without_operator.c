#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf("\nMultiplication of %d with 2 is: %d",n,(n << 1));
    printf("\nDivision of %d by 2 is: %d",n,(n >> 1));
}
