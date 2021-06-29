#include <stdio.h>

int main(){
    int valor,cont, c=1;

    scanf("%i",&valor);
    for(cont = 0; cont <valor; cont++){
        printf("%d %d %d PUM\n", c, c+1, c+2);
        c +=4;
    }
}