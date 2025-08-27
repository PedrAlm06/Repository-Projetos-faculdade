#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *pont_arq;//ponteiro para o arquivo
	char Palavra[20]; //variavel para guardar uma palavra
	pont_arq=fopen("lista.txt","a");
	if(pont_arq==NULL)// se a variavel estiver nula
	  printf("Erro na abertura do arquivo");
	printf("Escreva uma palavra:");
	scanf("%s", &Palavra);
	//outro jeito de gravar
    fprintf(pont_arq,"%s",Palavra);//imprime o texto no arquivo
    fprintf(pont_arq,"%s", "\n");
	fclose(pont_arq);
    
}
