#include<stdio.h>
int main(){
    float f,c=0;
    printf("Enter temp in fahrenheit: ");
    scanf("%f",&f);
    c = ((f-32)*5/9);
    printf("Temp in Celsius is: %f",c);
}
