#include "stdio.h"
#include "math.h"
int main(){
    int R, G, B;
    float white, cyan, magenta, yellow, black;
    printf("Enter value of R: ");
    scanf("%d",&R);
    printf("Enter value of G: ");
    scanf("%d",&G);
    printf("Enter value of B: ");
    scanf("%d",&B);

    white = R/255.0;
    if(G/255.0 > white) white = G/255.0;
    if(B/255.0 > white) white = B/255.0;

    black = 1 - white;

    if(white==0){
        cyan = 0;
        magenta = 0;
        yellow = 0;
    }

    else{
        cyan = (white - R/255.0)/white;
        magenta = (white - G/255.0)/white;
        yellow = (white - B/255.0)/white;
    }


    printf("CMYK (%.1f, %.1f, %.1f, %.1f)",cyan,magenta,yellow,black);
}