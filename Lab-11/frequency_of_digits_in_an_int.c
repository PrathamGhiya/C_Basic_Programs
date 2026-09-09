#include<stdio.h>
int main(){
    int n, num, count=0;
    printf("Enter a single no.: ");
    scanf("%d",&n);
    printf("Enter a no. to search for it's frequency: ");
    scanf("%d",&num);
    int temp = n;
    for(;n!=0;){
        if((n%10)==num){
            count++;
        }
        n/=10;
    }
    printf("Frequency of %d in %d is %d",num,temp,count);
}