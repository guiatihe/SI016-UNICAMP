#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	float absissa[10], ordenadas[10], dist, menordistancia = 1000000;
	int i, j;
	
	for(i = 0; i< 10; i++){
	//pontoreferencia
		scanf("%f %f", &absissa[i], &ordenada[i]);
		}
		
		
		for(i = 0, j = 1; i<=8; i = i+2, j = j+2){
		
		dist= sqrt(pow(referencia[i] - ponto1[i],2) + pow(referencia[i]-ponto1[j], 2));
			if(dist < menordistancia){
				menordistancia = dist;
		}
		
		
		}
		printf("%f ", dist);
		
}
