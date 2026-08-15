#include "stdio.h"
#include "math.h"
int main(){
    int choice, a, b;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);

    printf("\n1. Addition");
    printf("\n2. Difference/Absolute value");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Addition of %d and %d is %d",a,b,a+b);
        break;
        case 2:
        printf("Difference/Absolute value of %d and %d is %d",a,b,abs(a-b));
        break;
        case 3:
        printf("Multiplication of %d with %d is %d",a,b,a*b);
        break;
        case 4:
        printf("Division of %.2f by %.2f is %.2f",(float)a,(float)b,(float)a/b);
        break;

        default:
        printf("Invalid Choice");
        break;
    }
}