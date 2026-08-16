#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf((n%2==0) ? ("Even") : ("Odd"));
}