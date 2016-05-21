//Enunciado: Usando as estruturas de loop vistas em aula, escreva um programa que leia dez números inteiros quaisquer e imprima 
//na tela quantos destes números são pares e quantos são ímpares (no formato ilustrado abaixo, seguido de uma quebra de linha).

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	//declarando as variáveis
   int  i = 0, a = 0, par = 0, impar = 0;
   
   //contador para que o processo se repita para 10 entradas
   for  (i; i <10; i++){
   
   scanf("%d", &a);
   //checagem par - impar
   if(a % 2 == 0){
   	par = par + 1;
   }
   else{
   	impar = impar + 1;
   }
   }
   
   //impressao do resultado
   printf("%d pares, %d impares", par, impar);   
   
}

