#include "stdio.h"
int main()
{
    int n, sum=0, count=0, avg=0, ch;
    do
    {
        printf("Enter a no.: ");
        scanf("%d",&n);
        sum+=n;
        count++;
        printf("Press any key to continue and (n) to stop?");
        scanf(" %c",&ch);
    }while(ch!='n');
    printf("Sum of numbers is %d",sum);
    printf("\nAverage of numbers is %f",(float)sum/count);
}