#include<stdio.h>
int main(){
    int a,b,c;
    float avg=0;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    printf("Enter 3rd no.: ");
    scanf("%d",&c);
    avg = (a+b+c)/3.0;
    printf("Average of 3 nos. is %.2f",avg);
}