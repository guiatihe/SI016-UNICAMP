//Enunciado: Escreva um programa que receba do usuário as dimensões NUM_LIM e NUM_COL (máximo 20) e os dados de uma matriz bidimensional, 
//e imprima a matriz transposta na tela. O usuário deverá entrar com os dados NUM_LIN e NUM_COL separados por espaço. 
//Em seguida, este deverá entrar com um elemento da matriz por vez, sendo que estes deverão estar na seguinte ordem: o primeiro elemento da primeira linha, 
//uma quebra de linha, o segundo elemento da primeira linha, uma quebra de linha e assim sucessivamente. A saída deverá exibir somente a matriz 
//transposta desta matriz. Os elementos da mesma linha deverão ser separados por espaço e os elementos de diferentes linhas deverão ser exibidos 
//em linhas diferentes. No final, sua saída deverá ser seguida por uma quebra de linha.

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


