//Enunciado: Escreva um programa que leia uma string qualquer (m�ximo 80 caracteres) e retorne o n�mero total de caracteres contidos nessa string. 
//N�o use a fun��o strlen(). O usu�rio dever� entrar com uma string qualquer. A sa�da dever� exibir somente o n�mero total de caracteres contidos na string, 
//seguido de uma quebra de linha no final.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	//declarando vari�veis e lendo a string
	char entrada[80],i;
    gets(entrada);
    // enquanto a posi��o i da string n�o for 0, o contador i vai ter seu valor incrementado
    for(i=0; entrada[i]!='\0'; ++i);
    //printa a quantidade de caracteres
    printf("%d", i);
    
    return 0;
	} 	 


	
	 		
	


