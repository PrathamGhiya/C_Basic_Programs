#include<stdio.h>
int main(){
    int n,x,y,sum=0;
    printf("Enter base: ");
    scanf("%d",&x);
    printf("Enter exponent: ");
    scanf("%d",&y);

    int base = x;
    int temp;

    for(int i=1;i<=y;i++){
        temp = 0;
        for(int j=1;j<=x;j++){
            temp+=base;
        }
        base = temp;
    }
    printf("\n%d",base);

// OR

    // for(int i=1;i<=(y-1);i++){
    //     for(int j=1;j<=x;j++){
    //         sum+=base;
    //     }
    //     if(i>1){
    //         sum -= base;
    //     }
    //     base = sum;
    //     // printf("\n%d",sum);
    // }
    // printf("\n%d",sum);
    
}