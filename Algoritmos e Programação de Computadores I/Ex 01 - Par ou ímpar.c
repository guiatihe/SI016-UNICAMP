//Enunciado: Escreva um programa que leia um n�mero inteiro e imprima na tela se ele � par ou �mpar. 
//O seu programa deve esperar que o usu�rio digite o n�mero na entrada, sem exibir nenhuma mensagem. 
//Uma vez lida a entrada, o programa deve exibir, sa�da, apenas os termos �par� ou �impar� (sem aspas ou acentos), seguidos de uma quebra de linha.

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
