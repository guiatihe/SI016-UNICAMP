//Enunciado: Escreva um programa que imprima o quadrado de todos os números inteiros de 1 a 20, sendo um por linha. 
//Não se esqueça da quebra de linha na última impressão.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//declarando a variável que será utilizada. Nesse caso, apenas o contador já basta:

   int i = 0;  

//este laço de repetição faz com que a variável i varie de 1 à 20. Em cada valor que i assume, é impresso o seu quadrado:

for(i = 1; i <= 20; i++){
	printf("%d\n", i*i);
	
}	

return 0;
}

