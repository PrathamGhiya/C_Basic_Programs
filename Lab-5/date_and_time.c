#include<stdio.h>
#include<time.h>
int main(){
    time_t current_d_and_t;
    time(&current_d_and_t);
    if(current_d_and_t!=(time_t)-1){
        printf("Date and Time is: %s",ctime(&current_d_and_t));
    }
    else{
        printf("Unable to get current date and time... Please retry");
    }
}
