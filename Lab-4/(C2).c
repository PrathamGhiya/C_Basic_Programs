#include<stdio.h>
int main(){
    int year, week, day;
    printf("Enter no. of Days: ");
    scanf("%d",&day);
    year = day/365;
    day %= 365;
    week = day/7;
    day %= 7;
    printf("\nYear/s = %d",year);
    printf("\nWeek/s = %d",week);
    printf("\nDay/s = %d",day);
}
