#include <stdio.h>
#include "resto.h" /*Biblioteca utlizada para poder fazer a função de resto de uma divisao e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int resto(float num1, float num2){ //funcao para calcular o resto de uma divisao que vai ser colocada na main da calculadora
    int res=0; // defini o resultado como igual a 0
        while (num1>=num2){ /*aqui comeca o laço de repetição que é o while, que enquanto primeiro numero 
        for maior ou igual ao segundo numero ele vai fazer o primeiro numero menos o segundo.*/
            num1 -= num2;
        }
    res = num1;     // aqui o resultado vai ser o resultado da conta feita ali em cima.

    return res; // retornar o resultado da conta do resto.
}