#include<stdio.h> 

int main(){
    
    double multiplicando, multiplicador;

    printf("qual o multiplicador?");
    scanf("%lf", &multiplicando);
    printf("qual o multiplicador");
    scanf("%lf", &multiplicador);

    printf("multiplicador: %f\n", multiplicando);
    printf("multiplicador: %f\n", multiplicador);
    printf("produto      : %f\n", multiplicando*multiplicador);


}