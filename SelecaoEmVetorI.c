#include <stdio.h>

int main(){
    int cont;
    double vetor[10];

    for(cont = 0; cont <=9; cont++){
        scanf("%lf", &vetor[cont]);
    }

    for(cont = 0; cont <=9; cont++){
        if(vetor[cont] <= 10.0){
            printf("A[%d] = %.1lf\n", cont,vetor[cont]);
        }
    }
    return 0;
}
