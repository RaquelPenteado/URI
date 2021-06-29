#include <stdio.h>
int main(){
    int ind,numero;

    scanf("%d", &numero);
    (5 < numero < 2000);

    for(ind = 1; ind <= numero; ind++){
        if(ind%2 == 0){
            printf("%i^2 = %i\n", ind, ind*ind);
        }
    }
    getch();
}