#include <stdio.h>
#include <math.h>

int main(){
	char entrada[1000], convercao[62];
	int i, j[62], k = 0, l, m, n, o,s, condicao = 1, x ;
	float total = 0, ocorrencia[62], probabilidade;
	/*
	atribuindo valor 0 à todos os itens do vetor j[62], é importante pois o vetor j[62] é responsável pela contagem de ocorrências
	j[0]= A, j[1] = B, j[2] = C, ..., j[25] = Z, j[26] = a, j[27] = b, j[28] = c, ..., j[51] = z, j[52] = 0, j[53] = 1, j[54]=2...j[61] = 9
	*/
	for(i = 0; i < 62; i++){
		j[i] = 0;
	}
	//ocorrencia é um vetor igual ao j, porém contido por floats e não ints. Todos também iniciam com valor 0
	for(i = 0; i < 62; i++){
		ocorrencia[i] = 0;
	}
	// vetor que será referência para imprimir as letras maiúsculas
	for (i = 0, l = 65; i < 27; i++, l++){
		convercao[i] = l;
	}
	//vetor que será referência para imprimir as letras minusculas
	for (i = 26, l = 97; i < 52; i++, l++){
		convercao[i] = l;
	}
	for (i = 52, l = 48; i < 62; i++, l++){
		convercao[i] = l;
	}
	while (condicao == 1) {

	//recebendo a entrada do usuário
	fgets(entrada, 1000, stdin);


	//Encerra a contagem ao ler FIM
	for (i = 0; entrada[i]='\0'; i++){
	if(entrada[i] == 'F' && entrada[i+1]=='I' && entrada[i+2] == 'M'){
		condicao = 0;
		break;
	}
	}
}
	//contando a qtde de letras na entrada
	for(i=0; entrada[i]!='\0'; i++){

	//removendo caracteres especiais na conta do total de caracteres
	if((entrada[i] > 47 && entrada[i] < 57) || (entrada[i] > 64 && entrada[i] < 91 )|| (entrada[i] > 96 && entrada[i] < 127)){
		total = total + 1;
	}

}


																//CONTANDO A QTDE DE CADA DIGITO (EXCETO CARACTERES ESPECIAIS)
			while (i >= 0){

				//letras maiúsculas
				for(l = 65; l <= 90; l++){
					m = l - 65;
				if(entrada[i] == l){
					j[m] = j[m] + 1;
					ocorrencia[m] = ocorrencia[m] +1;
				}
				}
				//letras minúsculas
				for(n = 97; n <= 122; n++){
					o = n - 71;
					if (entrada[i] == n) {
						j[o] = j[o] +1;
						ocorrencia[o] = ocorrencia[o] +1;
					}
				}
				//números
				for(n = 48; n < 58; n++){
					o = n + 4;
					if (entrada[i] == n) {
						j[o] = j[o] +1;
						ocorrencia[o] = ocorrencia[o] +1;
					}
				}
					i--;
				}

																						// IMPRIMINDO OS RESULTADOS
			printf("Caracteres Maiusculos:\n");

			/*laço for vai imprimir os digitos de 0 a 9;  o while vai imprimir a quantidade de asteriscos = quantidade de ocorrencias
			por fim, será impresso a probabilidade*/
			for(s=0; s<26;s++){
				printf("%c: ", convercao[s]);
				k = 0;
				while (k<j[s]){
					printf("*");
					k = k+1;
				}
				probabilidade = ocorrencia[s]/total;
			printf(" (%d - %.2f)\n", j[s], probabilidade);
			}
			printf("\n");

			printf("Caracteres Minusculos:\n");

			/*laço for vai imprimir os digitos de 0 a 9;  o while vai imprimir a quantidade de asteriscos = quantidade de ocorrencias
			por fim, será impresso a probabilidade*/
			for(s=26; s<52;s++){
				printf("%c: ", convercao[s]);
				k = 0;
				while (k<j[s]){
					printf("*");
					k = k+1;
				}
				probabilidade = ocorrencia[s]/total;
			printf(" (%d - %.2f)\n", j[s], probabilidade);
		}

		printf("\n");

		printf("Digitos:\n");
		for(s=52; s<62;s++){
			printf("%c: ", convercao[s]);
			k = 0;
			while (k<j[s]){
				printf("*");
				k = k+1;
			}
			probabilidade = ocorrencia[s]/total;
		printf(" (%d - %.2f)\n", j[s], probabilidade);
		}

return 0;

		}
