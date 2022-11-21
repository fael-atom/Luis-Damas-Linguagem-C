#include <stdio.h>

main(){
  int n, num, soma, produto;
  printf("Introd. um Nº: ");
  scanf("%d",&num);

  for (soma=0, n=produto=1; n<=num; n=n+1){
    soma = soma + n;
    produto = produto * n;
  }

  printf("Soma = %d\nProduto = %d\n",soma,produto);
}