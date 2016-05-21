//Enunciado: Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e retorne o número total de caracteres contidos nessa string. 
//Não use a função strlen(). O usuário deverá entrar com uma string qualquer. A saída deverá exibir somente o número total de caracteres contidos na string, 
//seguido de uma quebra de linha no final.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	//declarando variáveis e lendo a string
	char entrada[80],i;
    gets(entrada);
    // enquanto a posição i da string não for 0, o contador i vai ter seu valor incrementado
    for(i=0; entrada[i]!='\0'; ++i);
    //printa a quantidade de caracteres
    printf("%d", i);
    
    return 0;
	} 	 


	
	 		
	


