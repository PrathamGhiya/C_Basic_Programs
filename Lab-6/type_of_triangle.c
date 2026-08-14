#include "stdio.h"
int main(){
    int a, b, c;
    printf("For Triangle...\n");
    printf("\nEnter length of 1st side: ");
    scanf("%d",&a);
    printf("\nEnter length of 2nd side: ");
    scanf("%d",&b);
    printf("\nEnter length of 3rd side: ");
    scanf("%d",&c);

    if(a==b && b==c) printf("\nEquilateral Triangle");
    else if(a!=b && b!=c && c!=a) printf("\nScalene Triangle");
    else printf("\nIsosceles Triangle");

    if(a>c) c = (c+a) - (a=c);
    else if(b>c) c = (c+b) - (b=c);

    if((a*a + b*b) == c*c) printf("\nRight-angled Triangle");
}