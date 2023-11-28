#include <stdio.h>
#include "soma.h" /*Biblioteca utlizada para poder fazer a função de soma e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int soma(float num1, float num2){ /*criei a funcao soma, que vai ser adicionado na funcao main da calculadora*/

    int res = num1 + num2; /*criei a variavel res para poder o resultado da equacao num1 + num2 vai dar o 
    o resultado da subtracao que voce deseja fazer*/
    
    return res; // retorna a res que é o resultado da equacao
}