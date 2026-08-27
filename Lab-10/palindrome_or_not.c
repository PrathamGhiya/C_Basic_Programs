#include "stdio.h"
int main(){
    int n, rev=0, temp=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    printf((n==rev) ? ("Palindrome") : ("Not a Palindrome"));
}