#include<stdio.h>
#include<math.h>

int main(){    //x² + 5x + 6

    double x1, x2, delta, a=1, b=5, c=6;
    
    delta = b*b - 4 * a * c;

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("\n");
    printf("Raizes de f(x) = %.fx² + %.fx + %.f\n\n",a,b,c);
    printf("x1 = %5.2f\n", x1);
    printf("x2 = %5.2f\n", x2);
    printf("\n");

}