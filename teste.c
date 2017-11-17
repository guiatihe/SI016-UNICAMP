#include <stdio.h>

int main () {
char command[50], archName[20], getAction[20];
printf("Insira seu command: ");
fgets(command, 50, stdin);
printf("este é o seu command: %s", command);
int j=0, i = 0, k =0;

if(command[0] == '.' && command[1] == '/' && command[2] == 'a' && command[3] == 'r' && command[4] == 'c' && command[5] == 'h' && command[6] == 'i' && command[7] == 'v' && command[8] == 'e' && command[9]== 32){
  //if(command[10]=='-'){
  //pegando a primeira palavra após o comando "archive -"
  for(i=10; command[i] != 32 && command[i] != '\0'; i++){
  //obtendo o nome do archiver
      archName[j] = command[i];
      j++;
  }
  printf("command[i]: %c\n",command[i] );
  printf("command[i+1]: %c\n",command[i+1] );
  printf("command[i+2]: %c\n",command[i+2] );
  //obtendo ação a ser feita
  if(command[i+1] == 32 && command[i+2] != '\0'){
    printf("foi");
    i = i +2;
    j = i;
    for (i = j; command[i] != 32 && command[i] != '\0'; i++){
      getAction[k] = command[i];
      k++;
      //printf("%c",getAction[k]);
    }
  }




}

return 0;
}
