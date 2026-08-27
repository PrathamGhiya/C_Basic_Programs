#include "stdio.h"
#include "math.h"
int main(){
    int n, digit=0, sum=0, temp=0, count=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        temp/=10;
        count++;
    }
    temp = n;
    while(temp!=0){
        digit = temp%10;
        sum+=pow(digit,count);
        temp/=10;
    }
    printf((n==sum) ? ("Armstrong") : ("Not Armstrong"));
}
