#include<stdio.h>
int main(){
    float b,h,area=0;
    printf("Enter length of base of triangle: ");
    scanf("%f",&b);
    printf("Enter height of triangle: ");
    scanf("%f",&h);
    area = 0.5*b*h;
    printf("Area of triangle is: %.2f",area);
}