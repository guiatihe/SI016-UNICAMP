//Enunciado: Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela pode ser lida da mesma forma 
//tanto na ordem correta quanto na ordem invertida. Este programa não pode ser sensível a letras maiúsculas, ou seja, 
//por exemplo, ele deve indicar que “Arara” é um palíndromo. O usuário deverá entrar com uma string qualquer e a saída
// deverá ser “Esta palavra e um palindromo” ou “Esta palavra nao e um palindromo”, conforme a entrada, seguida por uma quebra de linha.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	//declarando variáveis e lendo a string
	char entrada[80];
	int palindromo = 0, i, j, l;
    gets(entrada);
    

    // enquanto a posição i da string não for 0, o contador i vai ter seu valor incrementado
    for(i=0; entrada[i]!='\0'; ++i);
    
    //convertendo maíscula para minúscula através da tabela ascii
    	for(l = 0; l<i; l++){
			if(entrada[l] >= 97 && entrada[l]<=122){
			entrada[l] = entrada[l] - 32;
}}

    
	//correção do índice explicada no ex anterior
    i = i-1;
    //comparação da última(j) com a primeira(i) letra, enquanto j diminui, i cresce
    for(i, j; i>=0; i--, j++){
    	if(entrada[i] != entrada[j]){
    		palindromo = 1;
		}
    	
    	
	}
	if(palindromo == 0){
		printf("Esta palavra e um palindromo");
	}
	else{
		printf("Esta palavra nao e um palindromo");
	}
    
    
	} 	 


	
	 		
	


