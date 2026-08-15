#include "stdio.h"
int main(){
    int a,b,c;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    printf("Enter 3rd no.: ");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("\nAll numbers are same...");
        printf("\nNo second largest no. found");
        return 0;
    }
    if(a>b){
        if(c>a){
            printf("\n%d is second largest",a);
        }
        else{
            if(b>c){
                printf("\n%d is second largest",b);
            }
            else{
                printf("\n%d is second largest",c);
            }
        }
    }
    else{   // b>a
        if(c>b){
            printf("\n%d is second largest",b);
        }
        else{
            if(a>c){
                printf("\n%d is second largest",a);
            }
            else{
                printf("\n%d is second largest",c);
            }   
        }
    }
}