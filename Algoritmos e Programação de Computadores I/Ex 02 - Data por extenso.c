//Enunciado: Escreva um programa que leia uma data no formato dd/mm/aaaa e escreva esta data com o m�s expresso por extenso. 
//Caso o m�s digitado n�o seja v�lido (por exemplo, 22/13/1980), seu programa dever� exibir a seguinte mensagem: "Mes invalido" (sem aspas e acentos) e 
//encerrar a execu��o. Imprima sempre uma quebra de linha ao final da sa�da do seu programa.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//obtendo as vari�veis referentes � dia, m�s e ano:

   int dia, mes, ano = 0; 
  
   
      scanf("%d/%d/%d", &dia, &mes, &ano); 


//o primeiro if confere se o mes � v�lido, j� os elseif escrevem o m�s em n�mero por extenso, o m�s escrito por extenso n�o foi armazenado em nenhuma vari�vel
//mas seria poss�vel tb colocar para armazenar em uma nova vari�vel o valor por extenso e somente ao fim utilizar apenas uma vez o printf para imprimir o 
//resultado final.

if(mes<1||mes>12){

	printf("Mes invalido");}
else
if(mes==1)
		
			printf("%d de janeiro de %d\n", dia, ano);
		
	else
if(mes==2)
		
			printf("%d de fevereiro de %d\n", dia, ano);
	
	else
if(mes==3)
		
			printf("%d de marco de %d\n", dia, ano);
		
	else
if(mes==4)
		
			printf("%d de abril de %d\n", dia, ano);
		
	else
if(mes==5)
		
			printf("%d de maio de %d\n", dia, ano);
		
	else
if(mes==6)
		
			printf("%d de junho de %d\n", dia, ano);
		
	else
if(mes==7)
		
			printf("%d de julho de %d\n", dia, ano);
		
	else
if(mes==8)
		
			printf("%d de agosto de %d\n", dia, ano);
		
	else
if(mes==9)
		
			printf("%d de setembro de %d\n", dia, ano);
		
	else
if(mes==10)
	
			printf("%d de outubro de %d\n", dia, ano);
		
	else
if(mes==11)
	
			printf("%d de novembro de %d\n", dia, ano);
		
	else
if(mes==12)
		
			printf("%d de dezembro de %d\n", dia, ano);
  return 0;
}

