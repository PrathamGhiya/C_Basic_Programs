#include "stdio.h"
int main(){
    int hcf=0, lcm=0, n1, n2, i=1, min=0;
    printf("Enter 1st no.: ");
    scanf("%d",&n1);
    printf("Enter 2nd no.: ");
    scanf("%d",&n2);
    min = ((n1<n2) ? (n1) : (n2));
    while(i<=min){
        if(n1%i==0 && n2%i==0){
            hcf = i;
        }
        i++;
    }
    lcm = (n1*n2)/hcf;
    printf("\nHCF = %d",hcf);
    printf("\nLCM = %d",lcm);
}