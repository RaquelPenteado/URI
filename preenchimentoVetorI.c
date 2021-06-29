#include <stdio.h>

int main() {
    int cont,valor;

    scanf("%i", &valor);

    for(cont=0;cont<10;cont++){
        printf("N[%i] = %i\n",cont,valor);
        valor += valor;
    }
}