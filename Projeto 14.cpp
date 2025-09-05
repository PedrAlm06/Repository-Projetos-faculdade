#include <stdio.h>
#include <stdlib.h>

void incluir(){
	FILE *pont_arq;
	char lanche[20];
	pont_arq=fopen("lanche.txt","a");
	if(pont_arq==NULL)
	   printf("Erro na abertura do arquivo");
	printf("Digite o nome do lanche:");
	scanf("%s",&lanche);
	fprintf(pont_arq,"%s",lanche);
	fprintf(pont_arq, "%s", "\n");
	fclose(pont_arq);
	}
void consultar(){
	FILE *pont_arq;
	char texto[20];
	pont_arq=fopen("lanche.txt","r");
	while(fgets(texto,20,pont_arq)!=NULL)
	printf("%s",texto);
	fclose(pont_arq);
}
main(){
	int opcao;
	char continua='s';
	while(continua=='s' || continua=='s')
	{
		printf("=============================\n");
		printf("=LANCHONETE SANTA LUCIA=\n");
		printf("=============================\n");
		printf("=       1-Incluir          =\n");
		printf("=       2-Consultar        =\n");
		printf("=============================\n");
		printf("ESCOLHA A OPCAO:");
		scanf("%i", &opcao);
		if(opcao==1) incluir();
		if(opcao==2) consultar();
		printf("Deseja continuar?");
		scanf(" %c",&continua);
		
	}
}
