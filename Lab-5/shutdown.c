#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    printf("Choose any one acc. to ur System: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Shutting down Windows...");
        system("shutdown /s /t 0");
    }
    // else if(choice==2){
    //     printf("Shutting down Linux...");
    //     system("shutdown -h now");
    // }
    else{
        printf("Invaild choice");
    }
}
