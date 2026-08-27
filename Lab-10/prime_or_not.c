#include<stdio.h>
int main(){
    int n, i=2;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(i<=(n/2)){
        if(n%i==0){
            printf("Not Prime No.");
            return 0;
        }
        i++;
    }
    printf("Prime No.");
}