#include<stdio.h>
int main(){
    float feet, inches;
    printf("Enter feet: ");
    scanf("%f",&feet);
    if(feet>0){
        inches = feet*12;
        printf("%.2f feet = %.2f inches",feet,inches);
    }
    else printf("Invalid Input");
}
