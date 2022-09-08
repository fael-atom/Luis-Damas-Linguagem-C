#include <stdio.h>

main()
{
    short int idade;  /* ou short idade  */
    int montante;
    long int n_conta; /* ou long n_conta */

    printf("Qual a idade: ");
    scanf("%hd",&idade);
    printf("Qual o montante a depositar: ");
    scanf("%d",&montante);
    printf("Qual o nº da conta: ");
    scanf("%ld",&n_conta);

    printf("Uma pessoa de %hd anos depositou $%d na conta %ld\n",idade,montante,n_conta);

}