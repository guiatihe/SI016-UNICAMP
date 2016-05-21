//O número de combinações de n objetos diferentes onde s objetos são escolhidos de cada vez é dado pela seguinte fórmula: 
/*       n           / n \
       C      =      |   |       =   n!/ s! *  (n - s)!
         s           \ s /                                                                           */
//Escreva um programa que calcule o número de combinações de n objetos tomados s de cada vez. O usuário irá inserir o valor de n e s, 
//respectivamente, da seguinte maneira: • Inserir valor de n e pressionar enter. • Inserir o valor de s e pressionar enter. 
//Seu programa deverá mostrar apenas o resultado da combinação no final da execução, seguido por uma quebra de linha.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int n){
	int j1 = 1, i ;
	for(i = 1; i <= n; i++){
		j1 = j1 * i;
	}		
	return j1;
}

int main() {


    int i, a, b, j1 = 0, j2 = 0,j3 = 0, n = 0, s, difns = 0, resultado;
    scanf("%d", &n);    
	scanf("%d", &s);
	 	 
	j1 = fatorial(n);
	j2 = fatorial(s);
	difns = n - s;
	j3 = fatorial(difns);
	
	resultado = (j1 / (j2 * j3));
	

printf("%d", resultado);

}

