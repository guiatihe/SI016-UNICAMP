//Enunciado: Escreva um programa que receba do usu�rio as dimens�es NUM_LIM e NUM_COL (m�ximo 20) e os dados de uma matriz bidimensional, 
//e imprima a matriz transposta na tela. O usu�rio dever� entrar com os dados NUM_LIN e NUM_COL separados por espa�o. 
//Em seguida, este dever� entrar com um elemento da matriz por vez, sendo que estes dever�o estar na seguinte ordem: o primeiro elemento da primeira linha, 
//uma quebra de linha, o segundo elemento da primeira linha, uma quebra de linha e assim sucessivamente. A sa�da dever� exibir somente a matriz 
//transposta desta matriz. Os elementos da mesma linha dever�o ser separados por espa�o e os elementos de diferentes linhas dever�o ser exibidos 
//em linhas diferentes. No final, sua sa�da dever� ser seguida por uma quebra de linha.

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

for(l=0; l<ncol; l++){
	
for (c=0; c < nlin; c++) {
	printf("%d ", m1[c][l]);
}
printf("\n");
}
}


