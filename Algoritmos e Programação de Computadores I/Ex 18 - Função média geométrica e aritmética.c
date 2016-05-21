/*
Enunciado: Escreva uma função chamada “media” que receba duas notas (float) e um caractere. Caso este caractere seja 'A', a função deve retornar a média 
aritmética das duas notas. Caso seja 'B', a média geométrica (raiz quadrada do produto das duas notas) deve ser retornada. Escreva também um programa que 
leia os valores das duas notas e do caractere, chame a função média e imprima o resultado na tela. A função “media” deve ser definida após a função main(). 
O usuário irá inserir primeiramente o caractere que indicará se ele escolheu a média aritmética ou geométrica e, em seguida, digitará as duas notas separadas 
por ESPAÇO A saída do programa deverá imprimir na tela a média desejada com 3 casas decimais, seguida e uma quebra de linha.
*/
#include <stdio.h>
#include <math.h>

//declarando (ou prototipando) a função antes de defini-la
float media(char condicao, float nota1, float nota2);


int main(){
	char condicao;
	float nota1, nota2;
	scanf("%c", &condicao);
	scanf("%f %f", &nota1, &nota2);
	//chamando a função
	media(condicao, nota1, nota2);
	return 0;	
}

//definindo a função
float media(char condicao, float nota1, float nota2){
	
	float resultado;
	if (condicao == 'A'){
		resultado = ((nota1 + nota2)/2);
	}
	if(condicao == 'B'){
		resultado = sqrt(nota1 * nota2);
	}
	printf("%.3f", resultado);
}
