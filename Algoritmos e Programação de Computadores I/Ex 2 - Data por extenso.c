//Enunciado: Escreva um programa que leia uma data no formato dd/mm/aaaa e escreva esta data com o mês expresso por extenso. 
//Caso o mês digitado não seja válido (por exemplo, 22/13/1980), seu programa deverá exibir a seguinte mensagem: "Mes invalido" (sem aspas e acentos) e 
//encerrar a execução. Imprima sempre uma quebra de linha ao final da saída do seu programa.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//obtendo as variáveis referentes à dia, mês e ano:

   int dia, mes, ano = 0; 
  
   
      scanf("%d/%d/%d", &dia, &mes, &ano); 


//o primeiro if confere se o mes é válido, já os elseif escrevem o mês em número por extenso, o mês escrito por extenso não foi armazenado em nenhuma variável
//mas seria possível tb colocar para armazenar em uma nova variável o valor por extenso e somente ao fim utilizar apenas uma vez o printf para imprimir o 
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

