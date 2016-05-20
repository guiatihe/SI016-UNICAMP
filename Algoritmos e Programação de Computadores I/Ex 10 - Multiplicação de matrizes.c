//Enunciado: Escreva um programa que leia as dimens�es e os dados de duas matrizes bidimensionais (m�ximo de 20 linhas e 20 colunas) e 
//imprima na tela o resultado da multiplica��o destas duas matrizes. Caso as dimens�es das duas matrizes n�o permitam a multiplica��o, o usu�rio 
//dever� ser notificado. O usu�rio dever� entrar com os dados NUM_LIN e NUM_COL da primeira matriz separados por espa�o, uma quebra de linha, e os 
//dados NUM_LIN e NUM_COL da segunda matriz separados, tamb�m por espa�o. Em seguida, este dever� entrar com um elemento da primeira matriz por vez, 
//sendo que estes dever�o estar na seguinte ordem: o primeiro elemento da primeira linha, uma quebra de linha, o segundo elemento da primeira linha, 
//uma quebra de linha e assim sucessivamente. Feito isto, o usu�rio dever� entrar com um elemento da segunda matriz por vez, da mesma maneira utilizada 
//na primeira matriz. A sa�da dever� exibir somente a matriz resultante da multiplica��o destas matrizes. Os elementos da mesma linha dever�o ser 
//separados por espa�o e os elementos de diferentes linhas dever�o conter uma quebra de linha, sendo que, no final, sua sa�da dever� conter uma quebra 
//de linha. Caso as dimens�es das duas matrizes n�o permitam a multiplica��o, o usu�rio dever� ser notificado com a seguinte mensagem: 
//"As dimensoes das duas matrizes nao permitem a multiplicacao " seguida por uma quebra de linha.

#include <stdio.h>
#define N 20

int main() {
int m1[N][N], m2[N][N];

//variaveis iN servir�o de contadores e �ndices utilizados na multiplica��o
//l e c atribui-se aos contadores para obten��o das matrizes
int nlin0, ncol0, nlin1, ncol1, guardador, i1, i2, i3, l, c ;

//Obtendo o tamanho das matr�zes
scanf("%d %d",&nlin0,&ncol0); /* nlin e ncol < 20*/
scanf("%d %d",&nlin1,&ncol1); /* nlin e ncol < 20*/

//Conferindo se � poss�vel realizar a multiplica��o

if(ncol0 != nlin1){
	printf("As dimensoes das duas matrizes nao permitem a multiplicacao");
}
//caso poss�vel:
else{

//obtendo PRIMEIRA MATRIZ

for (l=0; l < nlin0; l++) {

 for (c=0; c < ncol0; c++) {
 
scanf("%d",&m1[l][c]);
}}

//obtendo SEGUNDA MATRIZ
for (l=0; l < nlin1; l++) {

 for (c=0; c < ncol1; c++) {
 
scanf("%d",&m2[l][c]);
}}

// criando a matriz resutado
int m3[nlin0][ncol1];

//realizando a multiplica��o

for(i1=0; i1 < nlin0; i1++) {
   
   for(i2=0; i2 < ncol1; i2++) {
      
	  guardador=0;
      for(i3=0; i3 < nlin1; i3++) {
      	
         guardador = guardador + (m1[i1][i3] * m2[i3][i2]);
         m3[i1][i2] = guardador;
      }
   }
}

//imprimindo a matriz
for(l=0; l<nlin0; l++){
 
    for(c=0; c<ncol1; c++) {
		printf("%d ", m3[l][c]); 
	  }
    printf("\n");

}
}
}
