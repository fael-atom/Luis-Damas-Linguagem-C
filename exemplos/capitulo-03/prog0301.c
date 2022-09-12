#include <stdio.h>

main(){
    int x,y;
    printf("Introduza 2 inteiros: ");
    scanf("%d%d",&x,&y);
    printf("O resultado de %d == %d : %d\n",x,y,x==y);
    printf("O resultado de %d > %d : %d\n",x,y,x>y);
    printf("O resultado de %d >= %d : %d\n",x,y,x>=y);
    printf("O resultado de %d < %d : %d\n",x,y,x<y);
    printf("O resultado de %d <= %d : %d\n",x,y,x<=y);
    printf("O resultado de %d != %d : %d\n",x,y,x!=y);
}