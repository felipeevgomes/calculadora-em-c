#include <stdio.h>
#include "exponencial.h" /*Biblioteca utlizada para poder fazer a função de exponencial e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int exponencial(double num1, int num2){ //funcao para calcular exponencial que vai ser colocada na main da calculadora
    int res = 1; // definir o resultado com 1
    if(num2 < 0){ //se o segundo numero  que a pessoa colocar for menor que 0 nao vai poder calcular
        printf("NAO TEM COMO CALCULAR:");
    } else { //mas se não for igual a 0 o segundo numero ai cria um for
        for(int i = 0; i<num2 ; i++){ //esse for é se o i for igual a 0, e i for menor que o segundo numero, ele tem que encrementar +1
            res *=num1; // ai o resultado vai vai fazer uma multiplicacao com o primeiro numero
        }
    }
    

    return res; // para retonar o resultado da ultima operacao que vai dar a exponencial
}