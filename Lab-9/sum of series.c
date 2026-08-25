#include<stdio.h>
#include<math.h>
int main(){
    int n, i=1, sum=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    while(abs(i)<=n){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
        i++;
    }
    printf("Sum of series is %d",sum);
}
