#include<stdio.h>
int main(){
    int h,m,s;
    printf("\nEnter Seconds: ");
    scanf("%d",&s);
    h = s/3600;
    s %= 3600;
    m = s/60;
    s %= 60;
    printf("\nHours = %d",h)   ;
    printf("\nMinutes = %d",m);
    printf("\nSeconds = %d",s);
}