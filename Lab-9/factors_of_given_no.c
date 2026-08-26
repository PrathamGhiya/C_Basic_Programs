#include<stdio.h>
#include<math.h>
int main(){
    int n,i=1;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(i<=sqrt(n)){
        if(n%i==0){
            printf("\n%d",i);
        }
        if(i!=n/i){
            printf("\n%d",n/i);
        }
        i++;    
    }
}