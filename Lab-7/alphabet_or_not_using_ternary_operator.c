#include "stdio.h"
int main(){
    char ch;
    printf("Enter any number or alphabet: ");
    scanf("%c",&ch);
    printf((ch>=65 && ch<=90) || (ch>=97 && ch<=122) ? ("Alphabet") : ((ch>=48 && ch<=57) ? ("Number") : ("Special Character")));
}