#include<stdio.h>
int main(){
    int n,last=0,next=1,current=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",last);
        current = last;
        last = next;
        next = last + current;
    }
}