#include "stdio.h"
#include "math.h"
int main(){
    int n, flag=0, i=2;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(i<=sqrt(n)){
        if(n%i==0){
            flag++;
            break;
        }
        i++;
    }
    printf((flag==0) ? ("Prime no.") : ("Not a Prime no."));
}