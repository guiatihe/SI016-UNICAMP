/*
Enunciado: Escreva um programa que simule o funcionamento de uma calculadora com cinco opera��es (+,-,*, / e ^). Esse programa dever� ler os operandos 
e o operador (no formato n�mero operador n�mero) e exibir o resultado da opera��o. O operador ^ corresponde ao operador �elevado a� (pot�ncia). Cada 
operador deve ser implementado em uma fun��o pr�pria, definida ap�s a main(). Sua sa�da deve mostrar apenas o resultado da opera��o desejada, com 3 casas 
decimais e seguida de uma quebra de linha.
*/
#include <math.h>
#include <stdio.h>


//prototipando as fun��es soma, subtra��o, multiplica��o, divisao e pot�ncia
float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);
float potencia(float a, float b);


int main(){
	float primeiroTermo, segundoTermo;
	char operador;
	
	scanf("%f%c%f", &primeiroTermo, &operador, &segundoTermo);
	
	if(operador == '+'){
		soma(primeiroTermo, segundoTermo);
	}
	else if(operador == '-'){
		subtracao(primeiroTermo, segundoTermo);
	}
	else if(operador == '*'){
		multiplicacao(primeiroTermo, segundoTermo);
	}
	else if(operador == '/'){
		divisao(primeiroTermo, segundoTermo);
	}
	else if(operador == '^'){
		potencia(primeiroTermo, segundoTermo);
	}
	
	return 0;
}

//defindindo as fun��es:
//soma:
float soma(float a, float b){
	float resultado;
	resultado = a + b;
	printf("%.3f", resultado);
	return a + b;
}
//subtra��o:
float subtracao(float a, float b){
	float resultado;
	resultado = a - b;
	printf("%.3f", resultado);
	return a-b;
}
//multiplica��o:
float multiplicacao(float a, float b){
	float resultado;
	resultado = a * b;
	printf("%.3f", resultado);
	return a*b;
}
//divis�o:
float divisao(float a, float b){
	float resultado;
	resultado = a / b;
	printf("%.3f", resultado);
	return a/b;
}
//potencia��o: 
float potencia(float a, float b){
	float resultado;
	resultado = pow(a, b);
	printf("%.3f", resultado);
	return pow(a,b);
}
