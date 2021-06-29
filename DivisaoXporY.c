#include <stdio.h>

int main() {
    int limite=0,cont;
    int X, Y;
    float f;

    scanf("%i", &limite);
    for(cont = 0; cont != limite; cont++){
        scanf("%d %d", &X, &Y);
        if(Y == 0){
            printf("divisao impossivel\n");
        } else{
            f=(float) X/Y;
            printf("%.1f\n",f);
        }
    }
}