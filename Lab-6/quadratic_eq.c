#include "stdio.h"
#include "math.h"
int main(){
    float a, b, c, root1=0, root2=0, D=0;
    printf("\nFor equation ax^2 + bx + c = 0\n");
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    printf("Enter value of c: ");
    scanf("%f",&c);
    D = b*b - 4*a*c;
    if(D>0){
        printf("\nRoot 1 = %.2f",(-b + sqrt(D))/(2*a));
        printf("\nRoot 2 = %.2f",(-b - sqrt(D))/(2*a));
    }
    else if(D==0){
        printf("\nBoth roots are same...");
        printf("\nRoot = %.2f",-b/(2*a));
    }
    else printf("\nBoth roots are imaginary/complex");
}