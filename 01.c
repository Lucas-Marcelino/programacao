#include<stdio.h>
#include<math.h>

int main(){

    double x1=0, x2=0, delta = 0;
    
    delta = 5*5 - 4 * 1 * 6;

    x1 = (-5 + sqrt(delta))/(2*1);
    x2 = (-5 - sqrt(delta))/(2*1);

    printf("\n");
    printf("Raizes de f(x) = x² +5x + 6\n\n");
    printf("x1 = %5.2f\n", x1);
    printf("x2 = %5.2f\n", x2);
    printf("\n");

}