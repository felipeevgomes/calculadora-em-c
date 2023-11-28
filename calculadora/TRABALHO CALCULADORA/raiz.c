#include <stdio.h>
#include "raiz.h" /*Biblioteca utlizada para poder fazer a função de raiz quadrada e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/


int raiz(float num){ //funcao para calcular raiz quadrada que vai ser colocada na main da calculadora
    float raiz = 0.0; //definir a raiz como 0 e tambem criei a variavel i.
    int i;

    if(num<0){ //aqui comeca o laço de repetição, que se o primeiro numero for menor que 0 nao tem raiz exata
        printf("RAIZ QUADRADA NAO EXATA\n");

    } else{ // mas se o numero for maior que 0, ele faz um while que faz raiz multiplica raiz que é menor ou igual ao numero
        while (raiz * raiz <= num){
            raiz++ ; //dai o resultado do while sai e a raiz vai incrementar +1
        }
        raiz--; // quando sai do laço, a raiz incrementa - 1;
    }
    return raiz; // retorna a raiz para poder retornar o resultado da raiz quadrada.
}