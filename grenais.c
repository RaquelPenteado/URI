#include <stdio.h>

int main() {
    int Inter, Gremio,novoG, cont,grenais=0;
    int empate=0, vitoriaInter=0,vitoriaGremio=0;

    for(cont = 0; cont = novoG != 2; cont++){
        scanf("%d %d", &Inter, &Gremio);
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &novoG);

        if(Inter > Gremio) {
            vitoriaInter++;
        } else {
            vitoriaGremio++;
        } if(Inter == Gremio){
            empate++;
        }
    }
    printf("%i grenais\n",grenais);
    printf("Inter: %i\n", vitoriaInter);
    printf("Gremio: %i\n", vitoriaGremio);
    printf("Empates: %i\n", empate);

    if(vitoriaInter > vitoriaGremio) {
        printf("Inter venceu mais\n");
    } else {
        printf("Gremio venceu mais\n");
    }

    return 0;
}