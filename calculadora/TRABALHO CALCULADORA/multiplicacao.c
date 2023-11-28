#include <stdio.h>
#include "multiplicacao.h"

int multiplicacao(float num1, float num2){ //funcao de multiplicacao usando soma, ai usamos essa funcao para colocar na main
  int res=0; // defini resultado igual a 0

  if(num1 == 0 || num2 == 0){ /*se alguem digitar o numero 0, nao vai ter como calcular, ai retorna a 0*/
    return 0;
  }  if (num2<0){ /*se o numero 2 for maior que 0, o numero um passa a ser possitivo e o segundo numero tambem 
  para que a multiplicacao possa funcionar*/
    num1= +num1;
    num2= +num2;
  } for(int i =0; i<num2; i++){ /*e agora, entra no for, se i for 0, e i for maior que o numero dois, o i vai adicinar mais 1 e 
  assim vai entrar em um loop , ate que atija o maximo que pode, assim no final vai ser mostrado o resultado*/
    
    res+= num1; /*aqui o numero que foi digitado por primeiro, vai sendo incrementado sempre 1.*/
  }
 

return res; //retorna o resultado da multiplicacao
}