//Enunciado: Escreva um programa que receba do usu�rio as dimens�es NUM_LIN e NUM_COL (n�o maiores que 20) e os dados de uma matriz bidimensional 
//(de dimens�es NUM_LIN x NUM_COL), converta-a em um vetor e imprima na tela os valores armazenados neste vetor. Os dados de entrada, digitados pelo 
//usu�rio, dever�o ser, em um primeiro momento, os valores de NUM_LIN e NUM_COL separados por espa�o. Em seguida, o usu�rio dever� entrar com um elemento 
//da matriz por linha, na seguinte ordem: o primeiro elemento da primeira linha, uma quebra de linha, o segundo elemento da primeira linha, uma quebra 
//de linha e assim sucessivamente. A sa�da dever� exibir somente o vetor desta matriz. Os elementos dever�o estar um em seguida do outro separados por 
//espa�o, sendo que, no final, sua sa�da dever� conter uma quebra de linha

#include <stdio.h>
#define N 20

int main() {
int m1[N][N];
int l, c, nlin, ncol;
scanf("%d %d",&nlin,&ncol); /* nlin e ncol < 20*/

for (l=0; l < nlin; l++) {

 for (c=0; c < ncol; c++) {
 
scanf("%d",&m1[l][c]);
}}

for(l=0; l<nlin; l++){
	
for (c=0; c < ncol; c++) {
	printf("%d ", m1[l][c]);
}

}
}


