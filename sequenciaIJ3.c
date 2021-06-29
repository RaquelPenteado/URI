#include <stdio.h>

int main(){
    int m[5][3],i,j,k;

    for(j = 7, i = 1; i <= 9; i += 2, j += 2){
        for(k = 0; k < 3; k++){
            if(i%2 != 0){
                printf("I=%i J=%i\n",i,j-k);
            }
        }
    }
}