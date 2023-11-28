#include <stdio.h>
#include <stdlib.h>
#include "reset.h" /*Biblioteca utlizada para poder fazer a função de fazer o reset da calculadora e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações e fazer o reset*/

int reset(float num1, float num2, char operador, int res){ //funcao para fazer o reset da calculadora que vai ser colocada na main da calculadora
    num1 = 0.0; /*defini todos as variaveis que sao usadas na main da calculadora como 0
    para poder dar um reset nelas*/
    num2 = 0.0;
    operador = ' ';
    res = 0;

    return res; // e defini o retorno como a res que é 0 tambem, assim vai dar o reset
}
