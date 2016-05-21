//Enunciado: Escreva um programa que (i) defina uma estrutura chamada “Ponto”, que deverá conter as coordenadas x e y de um ponto qualquer no espaço 
//bidimensional (valores reais), (ii) leia as coordenadas de dois pontos quaisquer do teclado, (iii) calcule a distância euclidiana entre eles e 
//(iv) diga se os dois pontos são iguais. Como você estará trabalhando com pontos flutuantes, não busque igualdades exatas: considere que dois pontos 
//são iguais se a distância euclidiana entre eles for inferior a 0,0000001. O usuário irá inserir primeiramente as coordenadas X e Y do primeiro ponto 
//separadas por ESPAÇO, em seguida, da mesma maneira, irá inserir as coordenadas do segundo ponto. O seu programa deverá imprimir na tela se os 
//pontos são considerados ou não iguais da seguinte maneira: “os pontos sao iguais” “os pontos nao sao iguais” (Ambas as saídas devem ter uma quebra 
//de linha no final).

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

	float pontoA[2], pontoB[2], quadrado1, quadrado2, dist;
	int i = 0,j = 0, true = 1, valor = 0;
		
		scanf("%f %f", &pontoA[0], &pontoA[1]);
		scanf("%f %f", &pontoB[0], &pontoB[1]);
		quadrado1 = pow((pontoA[0] - pontoB[0]), 2);
		quadrado2 = pow((pontoA[1] - pontoB[1]),2);
		dist = sqrt(quadrado1 + quadrado2);
		
		if(dist <= 0.0000001){
			printf("os pontos sao iguais");
		}
		
		else{
			printf("os pontos nao sao iguais");
		}
				
	} 	 
	
	 		
	


