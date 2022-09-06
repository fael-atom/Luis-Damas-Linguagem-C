#include <stdio.h>

main(){
    char ch1, ch2;
    printf("Introduza um caractere: ");
    scanf("%c",&ch1);
    printf("Introduza outro caractere: ");
    scanf(" %c",&ch2);
    printf("Os caracteres introduzidos foram '%c' e '%c'\n",ch1,ch2);
}