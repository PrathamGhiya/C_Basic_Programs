#include "stdio.h"
#include "math.h"
int main(){
    int a,b,choice;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    printf("\n1. Addition");
    printf("\n2. Subtraction/Absolute)");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter ur choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Addition of %d and %d is %d",a,b,a+b);
    }
    else if(choice==2){
        printf("Subtraction/Absolute value of %d and %d is %d",a,b,abs(a-b));
    }
    else if(choice==3){
        printf("Multiplication of %d and %d is %d",a,b,a*b);
    }
    else if(choice==4){
        printf("Division of %d and %d is %.2f",a,b,(float)a/b);
    }
    else{
        printf("Invalid choice");
    }
}
