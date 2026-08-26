#include "stdio.h"
int main(){
    int dec, rev_binary=0, binary=0, digit=0;
    printf("Enter a no.: ");
    scanf("%d",&dec);
    while(dec!=0){
        digit = dec%2;
        rev_binary = rev_binary*10 + digit;
        dec/=2;
    }
    while(rev_binary!=0){
        digit = rev_binary%10;
        printf("%d",digit);
        rev_binary/=10;
    }
}