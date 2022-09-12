#include <stdio.h>

main(){
    float salario;
    printf("Qual o salário ");
    scanf("%f",&salario);
    if (salario < 100000)
        salario = salario + 1000;
    printf("Salário final: %.2f\n",salario);
}