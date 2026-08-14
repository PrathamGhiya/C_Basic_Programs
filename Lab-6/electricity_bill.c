#include "stdio.h"
int main(){
    int bill = 0, unit, tot_bill = 0;
    printf("Enter ur unit: ");
    scanf("%d",&unit);
    if(unit <= 50){
        bill = unit * 0.5;
    }
    else if(unit <= 150){
        bill = (50 * 0.5) + (unit - 50)*0.75 ;
    }
    else if(unit <= 250){
        bill = (50 * 0.5) + (100 * 0.75) + (unit - 150)*1.2;
    }
    else{
        bill = (50 * 0.5) + (100 * 0.75) + (100 * 1.2) + (unit - 250)*1.5;
    }
    int sur_charge = 0.2*bill;
    tot_bill = bill + sur_charge;
    printf("\nBill : %d",bill);
    printf("\nSurcharge : %d",sur_charge);
    printf("\nYour total bill: %d",tot_bill);
}