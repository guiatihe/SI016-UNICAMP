#include <stdio.h>
#include <math.h>

//resultadopt = Primeiro termo do resultado | resultadost = Segundo termo do resultado
int resultadopt, resultadost;

//procedimento para soma de números complexos
//nos parâmetros pt é equivalente à primeiro termo e st equivalente à segundo termo
void soma (int realpt, int imaginariopt, int realst, int imaginariost){
  resultadopt = realpt + realst;
  resultadost = imaginariopt + imaginariost;
  }
//procedimento para multiplicação de números complexos
//nos parâmetros pt é equivalente à primeiro termo e st equivalente à segundo termo
void multiplicacao (int realpt, int imaginariopt, int realst, int imaginariost){
  resultadopt = ((realpt * realst) - (imaginariopt * imaginariost));
  resultadost = ((realpt * imaginariost + realst * imaginariopt));
  }
int main(){
//variaveis 'a' e 'c' vão receber valores reais do primeiro e do segundo termo
//variaveis 'b' e 'd' vão receber valores imaginários do primeiro e segundo termo
  int a, b, c, d;
  char operador;
//recebendo os valores e o operador
  scanf("%d %d %c %d %d", &a, &b, &operador, &c, &d);
//condicao pra escolher se os valores serão somados ou multiplicados de acordo com o operador inserido
if (operador == '+'){
//chamando o procedimento soma()
  soma(a, b, c, d);
}
else if(operador == '*'){
//chamando o procedimento multiplicacao()
  multiplicacao(a, b, c, d);
}
//imprimindo o resultado
  printf("%d %c %di\n", resultadopt, operador, resultadost);
  return 0;
}
