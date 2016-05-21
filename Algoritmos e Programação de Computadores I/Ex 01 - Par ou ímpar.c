//Enunciado: Escreva um programa que leia um número inteiro e imprima na tela se ele é par ou ímpar. 
//O seu programa deve esperar que o usuário digite o número na entrada, sem exibir nenhuma mensagem. 
//Uma vez lida a entrada, o programa deve exibir, saída, apenas os termos “par” ou “impar” (sem aspas ou acentos), seguidos de uma quebra de linha.

#include<stdio.h>


int main(){
int numero;

	scanf ("%d",&numero );


	if(numero %2==0){
	printf("par\n");
}
	else{
		printf("impar");
	}
	
return 0;
}
