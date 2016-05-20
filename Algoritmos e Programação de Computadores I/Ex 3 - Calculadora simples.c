//Enunciado: Escreva um programa que simule o funcionamento de uma calculadora simples com quatro opera��es (+,-,*e /). 
//Este programa dever� ler os operandos e o operador, como ilustrado abaixo e exibir o resultado da opera��o 
//(repetindo os operandos e o operador fornecidos pelo usu�rio). Implemente as verifica��es condicionais apenas com comandos ifelse. 
//Voc� deve supor que os n�meros que ser�o inseridos nessa calculadora ter�o, no m�ximo, 3 casas depois da v�rgula, portanto, a sa�da
//do seu programa deve mostrar tanto os operandos como o resultado da opera��o com 3 casas decimais. Al�m disso, os n�meros ser�o inseridos
//sem espa�o entre os operandos e o operador, e a sa�da deve ter o mesmo formato. 
//Caso o operador inserido n�o seja v�lido, seu programa dever� mostrar a mensagem "Operador invalido" (sem acentos e aspas) e encerrar a execu��o. 
//Sempre coloque uma quebra de linha ao final da sa�da de seu programa.


#include<stdio.h>

int main() {


   float primeiroTermo, segundoTermo, soma, subtracao, divisao, multiplicacao = 0; 
   char operador;

//obtendo os dois termos (float) e o operador (char):   
      scanf("%f%c%f", &primeiroTermo, &operador, &segundoTermo); 

//realizando o c�lculo para todos os operadores poss�veis:
	soma = primeiroTermo + segundoTermo;
	subtracao = primeiroTermo - segundoTermo;
	divisao = primeiroTermo / segundoTermo;
	multiplicacao = primeiroTermo * segundoTermo;

//descobrindo atrav�s de compara��o qual � o operador, logo em sequencia o resultado desejado � imprimido:
	
	if (operador == '+'){
		printf("%.3f+%.3f=%.3f", primeiroTermo, segundoTermo, soma);
	}
	else if (operador == '-'){
		printf("%.3f-%.3f=%.3f", primeiroTermo, segundoTermo, subtracao);
	}
	else if (operador == '*'){
		printf("%.3f*%.3f=%.3f", primeiroTermo, segundoTermo, multiplicacao);
	}
	else if (operador == '/'){
		printf("%.3f/%.3f=%.3f", primeiroTermo, segundoTermo, divisao);
	}
	else {
		printf("Operador invalido");
	}
  return 0;
}

