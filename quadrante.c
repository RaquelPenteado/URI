#include <stdio.h>

int main() {
    int quadrante1, quadrante2, cont;

    for(cont = 0; cont = quadrante1 != 0 || quadrante2 != 0; cont++){
        scanf("%d %d", &quadrante1, &quadrante2);
        if (quadrante1>0 && quadrante2>0){
            printf("primeiro\n");
        } else if(quadrante1<0 && quadrante2>0) {
            printf("segundo\n");
        } else if(quadrante1<0 && quadrante2<0) {
            printf("terceiro\n");
        } else if(quadrante1>0 && quadrante2<0) {
            printf("quarto\n");
        } else {
            return 0;
        }
    }
}