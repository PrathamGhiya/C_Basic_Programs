#include<stdio.h>
int main(){
    int n, digit=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    int temp = n;

    for(;temp!=0;){
        temp/=10;
        digit++;
    }

    temp=n;
    int rev=0;
    for(;temp!=0;){
        rev = rev*10 + (temp%10);
        temp/=10;
    }

    int ans=0;
    for(int i=1;i<=digit;i++){
        if(i==1){
            ans = n%10;
        }
        else if(i==digit){
            ans = ans*10 + (n%10);
        }
        else{
            ans = ans*10 + (rev%10);
        }
        n/=10;
        rev/=10;
    }
    printf("Ans = %d",ans);
}