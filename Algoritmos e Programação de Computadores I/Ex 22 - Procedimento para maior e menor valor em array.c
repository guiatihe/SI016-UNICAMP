#include <stdio.h>
#include <math.h>
#include <limits.h>//a biblioteca limits é capaz de fornecer os valores mínimos e máximos de cada tipo de variável

int maior, menor;

//procedimento para achar o menor e o maior
void maiorMenor (int vetor[], int n){
  int i = 0;
  menor = INT_MAX;
  maior = INT_MIN;
  for (i = 0; i <n ; i++){
    if (vetor[i] <= menor){
      menor = vetor[i];
    }
  }
  for(i = 0; i<n; i++){
    if (vetor[i] >= maior){
      maior = vetor[i];
    }
  }
}
int main(){
  int i, n;
  scanf("%d", &n);
  int vetor[n]; //criando um vetor com a quantidade n de índices especificada
  //recebendo valores de vetor[n]
  for(i = 0; i<n; i++){
    scanf("%d", &vetor[i]);
  }
  //chamando o procedimento
  maiorMenor(vetor,n);
//imprimindo os maiores e menores valores
  printf("maior valor: %d\n", maior);
  printf("menor valor: %d\n", menor);

  return 0;




}
