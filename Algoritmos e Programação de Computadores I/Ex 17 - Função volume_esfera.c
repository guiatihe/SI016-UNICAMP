#include <stdio.h>
#include <math.h>

//declarando e definindo a fun��o volume_esfera() ao mesmo tempo
float volume_esfera(float raio){
	float volume;
	volume = ((pow(raio, 3) * (4* 3.14159))/3);
	printf("%.5f", volume);
}

int main(){
	float raio;
	scanf("%f", &raio);
	//chamando a fun��o utilizando a variavel raio como par�metro
	volume_esfera(raio);
	
	return 0;	
}
