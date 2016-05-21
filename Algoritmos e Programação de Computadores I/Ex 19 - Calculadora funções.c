/*
Enunciado: Escreva um programa que simule o funcionamento de uma calculadora com cinco operações (+,-,*, / e ^). Esse programa deverá ler os operandos 
e o operador (no formato número operador número) e exibir o resultado da operação. O operador ^ corresponde ao operador “elevado a” (potência). Cada 
operador deve ser implementado em uma função própria, definida após a main(). Sua saída deve mostrar apenas o resultado da operação desejada, com 3 casas 
decimais e seguida de uma quebra de linha.
*/
#include <math.h>
#include <stdio.h>


//prototipando as funções soma, subtração, multiplicação, divisao e potência
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

//defindindo as funções:
//soma:
float soma(float a, float b){
	float resultado;
	resultado = a + b;
	printf("%.3f", resultado);
	return a + b;
}
//subtração:
float subtracao(float a, float b){
	float resultado;
	resultado = a - b;
	printf("%.3f", resultado);
	return a-b;
}
//multiplicação:
float multiplicacao(float a, float b){
	float resultado;
	resultado = a * b;
	printf("%.3f", resultado);
	return a*b;
}
//divisão:
float divisao(float a, float b){
	float resultado;
	resultado = a / b;
	printf("%.3f", resultado);
	return a/b;
}
//potenciação: 
float potencia(float a, float b){
	float resultado;
	resultado = pow(a, b);
	printf("%.3f", resultado);
	return pow(a,b);
}
