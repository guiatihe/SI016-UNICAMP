//Enunciado: Escreva um programa que imprima o quadrado de todos os n�meros inteiros de 1 a 20, sendo um por linha. 
//N�o se esque�a da quebra de linha na �ltima impress�o.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//declarando a vari�vel que ser� utilizada. Nesse caso, apenas o contador j� basta:

   int i = 0;  

//este la�o de repeti��o faz com que a vari�vel i varie de 1 � 20. Em cada valor que i assume, � impresso o seu quadrado:

for(i = 1; i <= 20; i++){
	printf("%d\n", i*i);
	
}	

return 0;
}

