#include <stdio.h>

main(){
    float quilos = 1.0E3;  /* Uma tonelada são 1000 quilos */
    double gramas = 1.0E6; /* Uma tonelada são 1000000 gramas */
    float n_toneladas;

    printf("Quantas toneladas comprou: ");
    scanf("%f",&n_toneladas);
    printf("Nº de quilos = %f = %e\n",n_toneladas*quilos,n_toneladas*quilos);
    printf("Nº de gramas = %f = %E\n",n_toneladas*gramas,n_toneladas*gramas);
}