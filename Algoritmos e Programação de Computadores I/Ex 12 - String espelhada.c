//Enunciado: Escreva um programa que leia uma string qualquer (m�ximo 80 caracteres) e imprima na tela a sua vers�o espelhada, 
//ou seja, a mesma string mas com a ordem dos caracteres invertida. O usu�rio dever� entrar com uma string qualquer e a sa�da dever� exibir 
//somente a string invertida, seguida de uma quebra de linha.

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
    //professor, n�o sei ao certo porque, mas na hora de printar, ele come�ava com um espa�o (caracter) e o resultado dava incorreto
    //consegui corrigir ao subtrair 1 do �ndice i
    i = i-1;
    
    //regredindo a contagem e printando ao mesmo tempo 
    while(i>=0){
    	printf("%c",entrada[i]);
    	i--;
	}
    
    return 0;
	} 	 


	
	 		
	


