#include <stdio.h>
#include "fatorial.h" /*Biblioteca utlizada para poder fazer a função de fatorial e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int fatorial(int num1){  //funcao para calcular fatorial que vai ser colocada na main da calculadora
    int res = 1; //defini resultado igual a 1
    if(num1<0){ // aqui começa o laço de repetição, se o primeiro numero for menor que 0 não tem como calcular.
        printf("NAO TEM COMO CALCULAR");
    } else{ // entretando, se for maior que 0, entao ele faz um for
        for (int i = 1; i <=num1; i++) { // esse for diz que de o i é igual a 1, e se o i for menor ou igual a primeiro numero, ele incremente +1
            res*=i; //aqui o resultado faz uma multiplicacao com o i que dai vai dar o res
        }
    }
    

    return res; // vai retornar o resultado da fatorial.

