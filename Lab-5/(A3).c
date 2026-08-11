#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf((n>=0) ? ("Positive") : ("Negative"));
}
