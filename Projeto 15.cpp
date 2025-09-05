#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *arquivo;
	char nome[100],c;
	printf("Digite o nome do arquivo para leitura:");
	gets(nome);
	if(!(arquivo=fopen(nome,"r")))
	    printf("Erro ao abrir o arquivo!\n");
	printf("Texto do arquivo:\n");
	while(!feof(arquivo)){
		fscanf(arquivo,"%c", &c);
		printf("%c" ,c);
	}
	fclose(arquivo);
	
}
