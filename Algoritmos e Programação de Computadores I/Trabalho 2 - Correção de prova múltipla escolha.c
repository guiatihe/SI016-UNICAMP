/*
O Prof. Raimundo decidiu aplicar somente provas de m�ltipla escolha em um dado semestre de sua disciplina, para facilitar a corre��o. Em cada prova cada 
quest�o ter� cinco alternativas (identificadas por A, B, C, D e E) e ser� distribu�da uma folha de respostas para cada aluno. Ao final da prova, estas folhas 
de resposta ser�o escaneadas e processadas digitalmente, para que se obtenha as notas finais.

Inicialmente, o Prof. Raimundo pediu ajuda a um sobrinho, que sabe programar muito bem, para escrever um programa para extrair as alternativas marcadas 
pelos alunos das folhas de resposta. O sobrinho escreveu uma boa parte do software, mas n�o p�de termin�-lo pois precisava treinar para uma Maratona de 
Programa��o.

Durante o processamento, cada prova � escaneada usando tons de cinza entre 0 (preto total) e 255 (branco total). Ap�s detectar os cinco ret�ngulos 
correspondentes a cada uma das alternativas, o programa calcula a m�dia dos tons de cinza de cada pixel, retornando um valor inteiro correspondente 
�quela alternativa. Se o quadrado foi preenchido corretamente, o valor da m�dia � zero (preto total). Se o quadrado foi deixado em branco, o valor da m�dia 
� 255 (branco total). Sendo assim, em uma situa��o ideal, se os valores de cada quadrado de uma quest�o s�o (255, 0, 255, 255, 255), sabemos que o aluno 
marcou a alternativa B para essa quest�o.

No entanto, como as folhas s�o preenchidas manualmente, o valor m�dio de n�vel de cinza para o quadrado totalmente preenchido n�o � necessariamente 0 (pode 
ser maior). Da mesma forma, o valor para o quadrado n�o preenchido n�o � necessariamente 255 (pode ser menor). Diante disso, o Prof. Raimundo determinou 
que os quadrados seriam divididos em duas classes: aqueles com m�dia menor ou igual a 127 ser�o considerados pretos, enquanto que aqueles com m�dia maior 
que 127 ser�o considerados brancos.

Obviamente nem todas as quest�es das folhas de resposta s�o marcadas de maneira correta, j� que pode acontecer de um aluno se enganar e marcar mais de uma 
alternativa na mesma quest�o ou at� mesmo n�o marcar nenhuma alternativa. Em tais casos, a resposta deve ser desconsiderada.

O Prof. Raimundo precisa agora de volunt�rios para escrever um programa que, dados os valores de tons de cinza dos cinco ret�ngulos correspondentes �s 
alternativas de uma quest�o, determine qual alternativa foi marcada pelo aluno ou se a resposta � quest�o deve ser desconsiderada.


Observa��es
A entrada do seu programa corresponder� a m�ltiplas folhas de respostas com diferentes n�meros de quest�es. A primeira linha da entrada associada a uma folha 
de respostas sempre conter� um n�mero inteiro N, indicativo do n�mero de quest�es presentes nesta folha de respostas (1 = N = 20). Cada uma das N linhas 
seguintes descrever� a resposta a uma quest�o, e dever� conter cinco n�meros inteiros que representam os valores de n�vel de cinza m�dio para cada uma das 
alternativas A, B, C, D e E (0 = A, B, C, D, E = 255).
Para cada folha de resposta, seu programa deve imprimir N linhas, sendo cada linha correspondente a uma quest�o. Se a resposta � quest�o foi corretamente 
preenchida na folha de resposta, a linha deve conter a alternativa marcada (�A�, �B�, �C�, �D� ou �E�). Caso contra�rio, a linha deve conter o caractere 
(*) (asterisco). Caso seja informando um n�mero de quest�es fora dos limites estabelecidos (1 = N = 20), o programa deve exibir a seguinte mensagem �Numero 
de questoes fora dos limites permitidos!� e encerrar a execu��o (desconsiderando evetuais folhas de resposta adicionais que possam existir na entrada).
O seu programa deve encerrar a execu��o ao encontrar, durante o processamento, uma folha de quest�es com 0 quest�es.
*/

#include<stdio.h>

int main() {

	int alternativaA, alternativaB, alternativaC, alternativaD, alternativaE, n = 1, i = 0;
	
	while(n != 0){
	
	
	scanf("%d", &n);
	
	if (n < 0 || n>20){
		printf("Numero de questoes fora dos limites permitidos!\n");
		break;
		
	}
	
//obtendo as respostas
		for (i = 0; i < n; i++){
		scanf("%d", &alternativaA);
		scanf("%d", &alternativaB);
		scanf("%d", &alternativaC);
		scanf("%d", &alternativaD);
		scanf("%d", &alternativaE);
	
	//A
	if (alternativaA <= 127 && alternativaB > 127 && alternativaC > 127 && alternativaD > 127 && alternativaE > 127){
		printf("A\n");
	}
	
	//B
	else if (alternativaB <= 127 && alternativaA > 127 && alternativaC > 127 && alternativaD > 127 && alternativaE > 127){
		printf("B\n");
	}
	
	//C
	else if (alternativaC <= 127 && alternativaA > 127 && alternativaB > 127 && alternativaD > 127 && alternativaE > 127){
		printf("C\n");
	}
	
	//D
	else if (alternativaD <= 127 && alternativaA > 127 && alternativaB > 127 && alternativaC > 127 && alternativaE > 127){
		printf("D\n");
	}
	
	//E
	else if (alternativaE <= 127 && alternativaA > 127 && alternativaB > 127 && alternativaC > 127 && alternativaD > 127){
		printf("E\n");
	}
	
	//INVALIDA
	else {
		printf("*\n");
	}
	
		   
	   
}

}
//descobrindo atrav�s de compara��o qual � o operador, logo em sequencia o resultado desejado � imprimido:
	

  return 0;
}

