//Enunciado: Escreva um programa que leia 20 notas (valores reais entre 0 e 10), armazene-as em um vetor e então diga se uma determinada nota x 
//digitada pelo usuário existe no vetor. O programa deve repetir o procedimento de leitura de x e busca de x no vetor até que o usuário digite um 
//valor negativo. O usuário irá inserir uma nota de cada vez e, após ter inserido as 20 notas, o usuário irá inserir a nota que deseja saber se está 
//ou não no vetor. Caso a nota exista, seu programa deverá exibir: “existe” seguido de uma quebra de linha e esperar que o usuário digite a próxima nota 
//a ser encontrada. Caso a nota não exista, seu programa deverá fazer o mesmo procedimento com a mensagem: “nao existe” (também seguida de quebra de linha). 
//Quando o usuário inserir um valor negativo, seu programa deve parar a execução sem imprimir nada na tela.

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


