#include <stdio.h>
#include <math.h>

//procedimento para elevar os arrays ao cubo
void cubo (int vetora[], int vetorb[]){
  int i = 0;
  for (i = 0; i <10 ; i++){
      vetorb[i] = pow(vetora[i], 3);
  }
}
int main(){
int vetora[10], vetorb[10], i;
//recebendo os valores de vetora[]
  for(i = 0; i<10; i++){
    scanf("%d", &vetora[i]);
  }
//chamando o procedimento
  cubo(vetora,vetorb);
//loop para imprimir os valores que foram atribuídos ao vetorb[] através do procedimento
  for(i = 0; i < 10; i++){
    printf("%d\n", vetorb[i]);
  }

  return 0;




}
