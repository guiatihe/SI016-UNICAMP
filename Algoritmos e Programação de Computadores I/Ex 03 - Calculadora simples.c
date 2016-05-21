//Enunciado: Escreva um programa que simule o funcionamento de uma calculadora simples com quatro operações (+,-,*e /). 
//Este programa deverá ler os operandos e o operador, como ilustrado abaixo e exibir o resultado da operação 
//(repetindo os operandos e o operador fornecidos pelo usuário). Implemente as verificações condicionais apenas com comandos ifelse. 
//Você deve supor que os números que serão inseridos nessa calculadora terão, no máximo, 3 casas depois da vírgula, portanto, a saída
//do seu programa deve mostrar tanto os operandos como o resultado da operação com 3 casas decimais. Além disso, os números serão inseridos
//sem espaço entre os operandos e o operador, e a saída deve ter o mesmo formato. 
//Caso o operador inserido não seja válido, seu programa deverá mostrar a mensagem "Operador invalido" (sem acentos e aspas) e encerrar a execução. 
//Sempre coloque uma quebra de linha ao final da saída de seu programa.


#include<stdio.h>

int main() {


   float primeiroTermo, segundoTermo, soma, subtracao, divisao, multiplicacao = 0; 
   char operador;

//obtendo os dois termos (float) e o operador (char):   
      scanf("%f%c%f", &primeiroTermo, &operador, &segundoTermo); 

//realizando o cálculo para todos os operadores possíveis:
	soma = primeiroTermo + segundoTermo;
	subtracao = primeiroTermo - segundoTermo;
	divisao = primeiroTermo / segundoTermo;
	multiplicacao = primeiroTermo * segundoTermo;

//descobrindo através de comparação qual é o operador, logo em sequencia o resultado desejado é imprimido:
	
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

