#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *pont_arq;//ponteiro para o arquivo
	char texto [20];
	pont_arq=fopen("lista.txt","r");// r=leitura
	while(fgets(texto,20,pont_arq)!=NULL)//!=diferente
	//enquanto tiver item no arquivo
	printf("s", texto);
	fclose(pont_arq);
	//fgtes
}
	
