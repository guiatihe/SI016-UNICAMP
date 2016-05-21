/*
Enunciado: Defina um tipo �Ret�ngulo� para armazenar as coordenadas dos pontos inferior esquerdo e superior direito de um ret�ngulo contido no primeiro 
quadrante do plano cartesiano e cujos lados s�o paralelos aos eixos (utilize a estrutura �Ponto� do ES_T8a). A partir deste tipo definido, seu programa 
dever� ler as coordenadas (inferior esquerda e superior direita) de dois ret�ngulos e indicar se o segundo ret�ngulo est� totalmente contido no primeiro 
ou n�o. O usu�rio ir� inserir primeiramente as coordenadas do ponto inferior esquerdo do primeiro ret�ngulo, separadas por espa�o, e em seguida, as coordenadas 
do ponto superior direito, tamb�m do primeiro ret�ngulo e separadas por espa�o. As coordenadas de cada ponto dever�o ser separadas por uma quebra de linha. 
Feito esse processo de leitura para os pontos do primeiro ret�ngulo, seu programa dever� seguir o mesmo procedimento para ler os dados do segundo ret�ngulo. 
Ap�s a leitura de todos os dados, seu programa dever� imprimir na tela se o segundo ret�ngulo est� totalmente inserido no primeiro ou n�o da seguinte maneira 
(com uma quebra de linha no final): �o segundo retangulo esta contido no primeiro� ou �o segundo retangulo nao esta contido no primeiro� As coordenadas dos 
pontos, nesse exerc�cio, devem ser valores inteiros.
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	float referencia[4], teste[4];
	int condicao = 0;
	
	//pontoA             //x1            //y1
		scanf("%f %f", &referencia[0], &referencia[1]);
	//pontoB              //x2            //y2
		scanf("%f %f", &referencia[2], &referencia[3]);
	//segundo ret�ngulo
	//pontoA            //x3         //y3
		scanf("%f %f", &teste[0], &teste[1]);
	//pontoB            //x4        //y4
		scanf("%f %f", &teste[2], &teste[3]);
	//  /                   primeira linha                     /                segunda linha                          /                           terceira linha                  /                   quarta linha                                  /
	if (teste[0] <= referencia[2] && teste[0] >= referencia[0] && teste[1] >= referencia[1] && teste[1] <= referencia[3] && teste[3] >= referencia[1] && teste[3] <= referencia[3] && teste[2] >= referencia[0] && teste[2] <= referencia[2]) {
		condicao = 1;
	}
	
	if(condicao == 1){
		printf("o segundo retangulo esta contido no primeiro");
	}
	else{
		printf("o segundo retangulo nao esta contido no primeiro");
	}
	
		
	
return 0;	
	
}
