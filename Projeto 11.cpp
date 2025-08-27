#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *pont_arq;//ponteiro para o arquivo
	char item[20]; //variavel para guardar uma palavra
	pont_arq=fopen("item.txt","a");
	if(pont_arq==NULL)// se a variavel estiver nula
	  printf("Erro na abertura do arquivo");
	printf("Escreva um item para a lista de compras:");
	scanf("%s", &item);
	//outro jeito de gravar
    fprintf(pont_arq,"%s",item);//imprime o texto no arquivo
    fprintf(pont_arq,"%s", "\n");
	fclose(pont_arq);
    
}
