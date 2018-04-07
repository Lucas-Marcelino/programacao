#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){    //x² + 5x + 6

    double x1, x2, delta, a, b, c;

    setlocale(LC_ALL,"pt-br");
    printf("Entre os valores de 'a', 'b' e 'c'\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Seus números são:");
    printf("%.2f %.2f %.2f", a, b, c);

    delta = b*b - 4 * a * c;
    printf("\nRaízes de f(x) = %.fx² + %.fx + %.f\n\n",a,b,c);
    
        if (delta == 0){
            x1 = (-b + sqrt(delta))/(2*a);
            printf("x = %5.2f", x1);
}       else if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("x1 = %5.2f\n", x1);
            printf("x2 = %5.2f\n\n", x2);
}       else{
            printf("Delta é: %.2f\n", delta);
            printf("Não existe raiz real! \n");
}

}