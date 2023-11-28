#include <stdio.h>
#include "divisao.h" /*Biblioteca utlizada para poder fazer a função de divisão e poder incluir no main da calculadora,
para poder juntar e poder funcionar a calculadora com as operações*/

int divisao(float num1, float num2){ //funcao para calcular divisao que vai ser colocada na main da calculadora
    int res = 0; //defini res como 0
   
    while (num1>=num2) {/*ai comeca o laco de repeticao para poder calcular a divisao usando soma e subtracao,
    que é se o numero que esta como dividendo que é o num1 for maior ou igual ao divisor que é o numero 2 ele entra na repeticao*/
   
        num1-=num2; /*essa repeticacao faz com que o num1 vai fazer uma incrementacao de -1 com o num2, ate 
        dar o limite que pode*/
        res++; // aqui o resultado vai ser incremetando +1 ate que acabe
    }
    

return res; //retornar a resposta
}