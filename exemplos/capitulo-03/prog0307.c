#include <stdio.h>

main(){
    float salario,taxa;
    printf("Qual é o salário: ");
    scanf("%f",&salario);
    if(salario < 1000)
        taxa = .05;
    else
        if(salario < 5000)
            taxa = .11;
        else
            taxa = .35;
    printf("Salário: %.2f Imposto: %.2f Líquido: %.2f\n",salario,salario*taxa,salario*(1.0-taxa));
        
}