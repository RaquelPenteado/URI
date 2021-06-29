#include <stdio.h>

int main(){
    int m[5][3],i,j;

    for(i = 1; i < 10; i++){
        for(j = 7; j > 4; j--){
            if(i%2 != 0){
                printf("I=%i J=%i\n",i,j);
            }
        }
    }
}