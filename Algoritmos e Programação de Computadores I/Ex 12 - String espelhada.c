//Enunciado: Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e imprima na tela a sua versão espelhada, 
//ou seja, a mesma string mas com a ordem dos caracteres invertida. O usuário deverá entrar com uma string qualquer e a saída deverá exibir 
//somente a string invertida, seguida de uma quebra de linha.

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
    //professor, não sei ao certo porque, mas na hora de printar, ele começava com um espaço (caracter) e o resultado dava incorreto
    //consegui corrigir ao subtrair 1 do índice i
    i = i-1;
    
    //regredindo a contagem e printando ao mesmo tempo 
    while(i>=0){
    	printf("%c",entrada[i]);
    	i--;
	}
    
    return 0;
	} 	 


	
	 		
	


