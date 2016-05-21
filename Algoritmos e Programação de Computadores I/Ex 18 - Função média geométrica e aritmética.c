/*
Enunciado: Escreva uma fun��o chamada �media� que receba duas notas (float) e um caractere. Caso este caractere seja 'A', a fun��o deve retornar a m�dia 
aritm�tica das duas notas. Caso seja 'B', a m�dia geom�trica (raiz quadrada do produto das duas notas) deve ser retornada. Escreva tamb�m um programa que 
leia os valores das duas notas e do caractere, chame a fun��o m�dia e imprima o resultado na tela. A fun��o �media� deve ser definida ap�s a fun��o main(). 
O usu�rio ir� inserir primeiramente o caractere que indicar� se ele escolheu a m�dia aritm�tica ou geom�trica e, em seguida, digitar� as duas notas separadas 
por ESPA�O A sa�da do programa dever� imprimir na tela a m�dia desejada com 3 casas decimais, seguida e uma quebra de linha.
*/
#include <stdio.h>
#include <math.h>

//declarando (ou prototipando) a fun��o antes de defini-la
float media(char condicao, float nota1, float nota2);


int main(){
	char condicao;
	float nota1, nota2;
	scanf("%c", &condicao);
	scanf("%f %f", &nota1, &nota2);
	//chamando a fun��o
	media(condicao, nota1, nota2);
	return 0;	
}

//definindo a fun��o
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
