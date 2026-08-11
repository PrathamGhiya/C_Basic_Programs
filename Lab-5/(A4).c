#include<stdio.h>
int main(){
    int odd, even, n;
    printf("\nEnter a no.: ");
    scanf("%d",&n);
    printf((n%2==0) ? ("Even") : ("Odd"));
}
