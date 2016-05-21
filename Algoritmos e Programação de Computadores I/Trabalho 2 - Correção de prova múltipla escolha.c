/*
O Prof. Raimundo decidiu aplicar somente provas de múltipla escolha em um dado semestre de sua disciplina, para facilitar a correção. Em cada prova cada 
questão terá cinco alternativas (identificadas por A, B, C, D e E) e será distribuída uma folha de respostas para cada aluno. Ao final da prova, estas folhas 
de resposta serão escaneadas e processadas digitalmente, para que se obtenha as notas finais.

Inicialmente, o Prof. Raimundo pediu ajuda a um sobrinho, que sabe programar muito bem, para escrever um programa para extrair as alternativas marcadas 
pelos alunos das folhas de resposta. O sobrinho escreveu uma boa parte do software, mas não pôde terminá-lo pois precisava treinar para uma Maratona de 
Programação.

Durante o processamento, cada prova é escaneada usando tons de cinza entre 0 (preto total) e 255 (branco total). Após detectar os cinco retângulos 
correspondentes a cada uma das alternativas, o programa calcula a média dos tons de cinza de cada pixel, retornando um valor inteiro correspondente 
àquela alternativa. Se o quadrado foi preenchido corretamente, o valor da média é zero (preto total). Se o quadrado foi deixado em branco, o valor da média 
é 255 (branco total). Sendo assim, em uma situação ideal, se os valores de cada quadrado de uma questão são (255, 0, 255, 255, 255), sabemos que o aluno 
marcou a alternativa B para essa questão.

No entanto, como as folhas são preenchidas manualmente, o valor médio de nível de cinza para o quadrado totalmente preenchido não é necessariamente 0 (pode 
ser maior). Da mesma forma, o valor para o quadrado não preenchido não é necessariamente 255 (pode ser menor). Diante disso, o Prof. Raimundo determinou 
que os quadrados seriam divididos em duas classes: aqueles com média menor ou igual a 127 serão considerados pretos, enquanto que aqueles com média maior 
que 127 serão considerados brancos.

Obviamente nem todas as questões das folhas de resposta são marcadas de maneira correta, já que pode acontecer de um aluno se enganar e marcar mais de uma 
alternativa na mesma questão ou até mesmo não marcar nenhuma alternativa. Em tais casos, a resposta deve ser desconsiderada.

O Prof. Raimundo precisa agora de voluntários para escrever um programa que, dados os valores de tons de cinza dos cinco retângulos correspondentes às 
alternativas de uma questão, determine qual alternativa foi marcada pelo aluno ou se a resposta à questão deve ser desconsiderada.


Observações
A entrada do seu programa corresponderá a múltiplas folhas de respostas com diferentes números de questões. A primeira linha da entrada associada a uma folha 
de respostas sempre conterá um número inteiro N, indicativo do número de questões presentes nesta folha de respostas (1 = N = 20). Cada uma das N linhas 
seguintes descreverá a resposta a uma questão, e deverá conter cinco números inteiros que representam os valores de nível de cinza médio para cada uma das 
alternativas A, B, C, D e E (0 = A, B, C, D, E = 255).
Para cada folha de resposta, seu programa deve imprimir N linhas, sendo cada linha correspondente a uma questão. Se a resposta à questão foi corretamente 
preenchida na folha de resposta, a linha deve conter a alternativa marcada (‘A’, ‘B’, ‘C’, ‘D’ ou ‘E’). Caso contra´rio, a linha deve conter o caractere 
(*) (asterisco). Caso seja informando um número de questões fora dos limites estabelecidos (1 = N = 20), o programa deve exibir a seguinte mensagem “Numero 
de questoes fora dos limites permitidos!” e encerrar a execução (desconsiderando evetuais folhas de resposta adicionais que possam existir na entrada).
O seu programa deve encerrar a execução ao encontrar, durante o processamento, uma folha de questões com 0 questões.
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
//descobrindo através de comparação qual é o operador, logo em sequencia o resultado desejado é imprimido:
	

  return 0;
}

