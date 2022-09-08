#include <stdio.h>

main(){
    float raio, perimetro;
    double Pi = 13.1415927, area;

    printf("Introduza o raio da circunferência: ");
    scanf("%f",&raio);
    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("Área = %f\nPerímetro = %f\n",area,perimetro);
}