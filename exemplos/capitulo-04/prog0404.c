#include <stdio.h>

main(){
  int n, num;
  printf("Introduza um número: ");
  scanf("%d",&num);
  n=1;
  while(n<=10){
    printf("%2d * %2d = %2d\n", num, n, num*n);
    n = n+1;
  }
}


