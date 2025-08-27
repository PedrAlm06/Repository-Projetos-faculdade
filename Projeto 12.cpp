#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *pont_arq;//ponteiro para o arquivo
	char item[20]; //variavel para guardar uma palavra
	char continuar = 'S';//variavel para continuar
	do{
	
	pont_arq=fopen("item.txt","a");
	if(pont_arq==NULL)// se a variavel estiver nula
	 {
	  printf("Erro na abertura do arquivo");
	  break;
    }
 	printf("Escreva um item para a lista de compras:");
 	 scanf("%s", &item);
    fprintf(pont_arq,"%s",item);//imprime o texto no arquivo
    fprintf(pont_arq,"%s","\n");
    fclose(pont_arq);
    printf("Deseja continuar (S/N)");
    scanf(" %c",&continuar);
 }while(continuar=='S' || continuar=='S');
}
