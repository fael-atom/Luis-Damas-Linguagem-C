#include <stdio.h>

main(){
  int n,num;
  num=1;
  while(num<=5){
    n=1;
    while(n<=10){
      printf("%2d * %2d = %2d\n", num, n, num*n);
      n = n+1;
    }
    /* Passar para a próxima tabuada */
    num = num+1;
    putchar('\n');
  }
}