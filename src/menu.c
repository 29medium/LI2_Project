#include "headers.h"

void menu()
{
  printf("\nSelecione a sua opção:\n");
  printf("- coordenada <coluna> <linha>\n");
  printf("- gr <nome>\n");
  printf("- ler <nome>\n");
  printf("- movs\n");
  printf("- jog\n");
  printf("- pos <numero_da_jogada>\n");
  printf("- Q\n");
  printf("\nIntroduza o seu comando: ");
}

void execute(char* buffer, STATE* e)
{
  char* s = strsep(&buffer, " ");

  printf("%d\n", strcmp(s, "coordenada"));

  /*
  if(strcmp(s, "coordenada") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "gr") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "ler") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "movs") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "jog") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "pos") == 0) {
    printf("%s\n", s);
  }

  else if(strcmp(s, "Q") == 0) {
    printf("A sair do jogo\n");
  }

  else {
    printf("Comando Inválido\n");
  }
  */
}
