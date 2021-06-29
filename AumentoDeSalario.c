#include <stdio.h>

int main(){
    float salario,novoSalario=0.0,reajuste=0.0;

    scanf("%f",&salario);

    if(salario >= 0.0 && salario <= 400.0){

        reajuste = (salario*15)/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 15 %%\n");

    }else if(salario >= 400.01 && salario <= 800.00){

        reajuste = (salario*12)/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 12 %%\n");

    }else if(salario >= 800.01 && salario <= 1200.00){

        reajuste = (salario*10)/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 10 %%\n");

    }else if(salario >= 1200.01 && salario <= 2000.00){

        reajuste = (salario*7)/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 7 %%\n");

    } else if(salario > 2000.00){

        reajuste = (salario*4)/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 4 %%\n");
     }

}