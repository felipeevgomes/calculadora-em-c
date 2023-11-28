#include <stdio.h> // Biblioteca padrão de entrada/saída em C
#include "soma.h" // Biblioteca para a função de soma
#include "subtracao.h" // Biblioteca para a função de subtração
#include "multiplicacao.h" // Biblioteca para a função de multiplicação
#include "divisao.h" // Biblioteca para a função de divisão
#include "resto.h" // Biblioteca para a função de resto
#include "fatorial.h" // Biblioteca para a função de cálculo do fatorial
#include "exponencial.h" // Biblioteca para a função de exponenciação
#include "raiz.h" // Biblioteca para a função de cálculo de raiz quadrada
#include "reset.h" // Biblioteca para a função de reset da calculadora
#include "off.h" // Biblioteca para a função de desligar a calculadora

int main() {
    float num1, num2;  // Variáveis para armazenar os números inseridos pelo usuário
    int res; // Variável para armazenar o resultado das operações
    char operador; // Variável para armazenar o operador inserido pelo usuário

    printf("FALE OS NUMEROS E OPERADOR QUE DESEJA UTILIZAR:\n");

    printf("DIGITE O PRIMEIRO NUMERO:\n "); //digitar o primeiro numero desejado
    scanf("%f", &num1);

    do {
        printf("DIGITE O SEGUNDO NUMERO:\n "); //falar o segundo numero desejado para fazer o calculo
        scanf("%f", &num2);
            //nessa parte já começa o lopp de repeticao
        printf("DIGITE O OPERADOR QUE DESEJA UTILIZAR (+, -, *, /, %, !, ^, r, c, t)\n");
        scanf(" %c", &operador); // digite o operador que deseja usar

        if (operador == 't') {
            break; // Saia do loop se o operador for 't'
        }

        // Use uma estrutura switch-case para determinar a operação com base no operador
        switch (operador) {
            case '+': //para fazer a funcao de soma
                res = soma(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case '-': //para fazer a funcao de subtracao
                res = subtracao(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case '*': //para fazer a funcao de multiplicacao
                res = multiplicacao(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case '/': //para fazer a funcao de divisao
                res = divisao(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case '%': //para fazer a funcao de resto
                res = resto(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case '!': //para fazer a funcao de fatoracao
                res = fatorial(num1);
                printf("O RESULTADO EH %.2f %c  = %d\n", num1, operador, res);
                break;

            case '^': //para fazer a funcao de exponencial
                res = exponencial(num1, num2);
                printf("O RESULTADO EH %.2f %c %.2f = %d\n", num1, operador, num2, res);
                break;

            case 'r': //para fazer a funcao de raiz quadrada
                res = raiz(num1);
                printf("O RESULTADO EH %.2f %c  = %d\n", num1, operador, res);
                break;

            case 'c': //para fazer a funcao de reset
                res = reset(num1, num2, operador, res);
                printf("CALCULADORA RESETADA!\n");
                break;

            case 't': // para fazer a funcao de desligar a calculadora
                return 0; // Saia do programa se o operador for 't'
                break;

            default:
                printf("NAO FOI POSSIVEL FAZER O CONTA"); // Mensagem de erro para operador inválido
                break;
        }

        num1 = res; // Atualize num1 com o resultado da operação

    } while (operador != 't'); // Continue o loop até que o operador seja 't'

    return 0; // Retorne 0 para indicar que o programa terminou com sucesso
}
