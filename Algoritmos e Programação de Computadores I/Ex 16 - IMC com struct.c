/*
Enunciado: Escreva um programa que contenha uma estrutura chamada “corpo”, com os campos altura (tipo float), peso (tipo float) e nome (tipo string). 
Este programa deve ler os dados de um usuário (altura, peso e nome), armazená-los em uma variável da estrutura corpo e, em seguida, acessar estes 
valores armazenados, calcular o IMC (divisão entre peso e o quadrado da altura) e exibir o resultado na tela. O usuário irá inserir seus dados um de 
cada vez na seguinte ordem: 1) altura 2) peso 3) nome Seu programa deverá imprimir na tela somente o valor do IMC, com 3 casas decimais, seguido de uma 
quebra de linha.
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	float imc;
	
	//criando a struc corpo: contem nome, peso e altura
	struct corpo {
		char nome[40];
		float peso;
		float altura;
	};
	
	//criando 1 variavel da struct corpo
	struct corpo corpo1;
	
	//altura
	fflush(stdin); 
	scanf("%f", &corpo1.altura);
	//peso
	fflush(stdin); 
	scanf("%f", &corpo1.peso);
	//nome
	fflush(stdin); 
	scanf("%c", &corpo1.nome);
	//calculo do imc
	imc = corpo1.peso/pow(corpo1.altura, 2);
	printf("%.3f\n", imc);
	
		
	
	
	
}
