#include<stdio.h>
int main(){

    // With temp var
    // int a ,b, temp;
    // printf("\nEnter 1st no.: ");
    // scanf("%d",&a);
    // printf("\nEnter 2nd no.: ");
    // scanf("%d",&b);
    // printf("\nBefore swapping: a = %d and b = %d",a,b);
    // if(a!=b){
    //     temp = a;
    //     a = b;
    //     b = temp;
    //     printf("\nAfter swapping: a = %d and b = %d",a,b);
    // }
    // else{
    //     printf("\nBoth are same");
    //     printf("\nThus a = %d and b = %d",a,b);
    // }

    // Witout temp var
    int a ,b;
    printf("\nEnter 1st no.: ");
    scanf("%d",&a);
    printf("\nEnter 2nd no.: ");
    scanf("%d",&b);
    printf("\nBefore swapping: a = %d and b = %d",a,b);
    if(a!=b){
        a = (a+b) - (b=a);
        printf("\nAfter swapping: a = %d and b = %d",a,b);
    }
    else{
        printf("\nBoth are same");
        printf("\nThus a = %d and b = %d",a,b);
    }
}
