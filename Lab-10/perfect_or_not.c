#include "stdio.h"
int main(){
    int n, i=1, sum=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(i<=(n/2)){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    printf((sum==n) ? ("Perfect No.") : ("Not a Perfect No."));
}