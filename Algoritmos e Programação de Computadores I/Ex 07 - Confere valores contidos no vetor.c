//Enunciado: Escreva um programa que leia 20 notas (valores reais entre 0 e 10), armazene-as em um vetor e ent�o diga se uma determinada nota x 
//digitada pelo usu�rio existe no vetor. O programa deve repetir o procedimento de leitura de x e busca de x no vetor at� que o usu�rio digite um 
//valor negativo. O usu�rio ir� inserir uma nota de cada vez e, ap�s ter inserido as 20 notas, o usu�rio ir� inserir a nota que deseja saber se est� 
//ou n�o no vetor. Caso a nota exista, seu programa dever� exibir: �existe� seguido de uma quebra de linha e esperar que o usu�rio digite a pr�xima nota 
//a ser encontrada. Caso a nota n�o exista, seu programa dever� fazer o mesmo procedimento com a mensagem: �nao existe� (tamb�m seguida de quebra de linha). 
//Quando o usu�rio inserir um valor negativo, seu programa deve parar a execu��o sem imprimir nada na tela.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	float notas[20], consulta;
	int i = 0,j = 0, true = 1, valor = 0;
	for(i = 0; i <20; i++){
		scanf("%f", &notas[i]);
		fflush(stdin);			
	} 	 
	
	while(true == 1){
		scanf("%f", &consulta);
		fflush(stdin);
		if(consulta < 0){
				break;
			}
			valor = 0;
		for(j = 0; j <20; j++){
			
			if(consulta == notas[j]){
				valor = 1;
				break;
			}
			
			}
		
		if(valor == 1){
			printf("existe\n");
		}
		else{
			printf("nao existe\n");
		}
	} 		
	}


