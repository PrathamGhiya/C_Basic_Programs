#include "stdio.h"
int main(){
    int bs, hra=0, da=0, gs=0;
    printf("Enter basic salary: ");
    scanf("%d",&bs);
    if(bs>=30000){
        hra = 0.30*bs;
        da = 0.95*bs;
    }
    else if(bs>=20000){
        hra = 0.25*bs;
        da = 0.90*bs;
    }
    else if(bs>=10000){
        hra = 0.20*bs;
        da = 0.80*bs;
    }
    printf("\nBasic Salary = %d",bs);
    printf("\nHRA = %d",hra);
    printf("\nDA = %d",da);
    printf("\nGross Salary = %d",bs+hra+da);
}