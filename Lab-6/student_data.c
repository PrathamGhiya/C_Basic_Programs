#include "stdio.h"
int main(){
    int s1,s2,s3,s4,s5,out_of;
    printf("Enter obtained marks of 1st sub.: ");
    scanf("%d",&s1);
    printf("Enter obtained marks of 2nd sub.: ");
    scanf("%d",&s2);
    printf("Enter obtained marks of 3rd sub.: ");
    scanf("%d",&s3);
    printf("Enter obtained marks of 4th sub.: ");
    scanf("%d",&s4);
    printf("Enter obtained marks of 5th sub.: ");
    scanf("%d",&s5);
    printf("Enter Total marks of each sub.: ");
    scanf("%d",&out_of);
    int per=((s1+s2+s3+s4+s5)/out_of)*100;
    printf("Your Percentage: %d",per);
    if(per>70) printf("Distinction");
    else if(per>60) printf("First Class");
    else if(per>45) printf("Second Class");
    else if(per>35) printf("Pass Class");
    else printf("Fail");
}