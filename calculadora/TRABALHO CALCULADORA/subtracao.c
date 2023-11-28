#include <stdio.h>
#include "subtracao.h" /*Biblioteca utlizada para poder fazer a função de subtracao e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int subtracao(float num1, float num2){ /*criei a funcao sutracao, que vai ser colocada no main da calculadora*/
    
    int res = num1 - num2; /*criei uma variavel res para que o resultado da equacao num1 - num2 vai dar o 
    o resultado da subtracao que voce deseja fazer*/
    
    return res; // retornar a resposta

}