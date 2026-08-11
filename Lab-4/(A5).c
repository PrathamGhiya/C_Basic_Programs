#include<stdio.h>
int main(){
    float pi = 3.1415, area=0, r;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("Area of circle: %f",area);
}
