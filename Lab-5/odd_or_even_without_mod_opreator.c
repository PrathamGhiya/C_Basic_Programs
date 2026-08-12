#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    if((n/2)*2==n){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
