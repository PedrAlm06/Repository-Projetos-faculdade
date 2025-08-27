#include <stdio.h>
#include <stdlib.h>
//exemplo arquivo
main (){
	FILE *fp;//criando um ponteiro chamado fp do tipo arquivo 
	char string[100];//variavel com ate 100 caracteres
	int i;
	fp=fopen("arquivo.txt", "w"); //abre o arquivo
	//w=escrita, a= acrescenta, r=leitura
	if(!fp){
		printf("Erro na abertura");
	
	}
	printf("Digite seu primeiro nome para gravar:");
	scanf("%s", &string);
	//escrevendo no arquivo
	for (i=0;string [i];i++)//percorrer letra por letra
	putc(string[i],fp);//escrever no arquivo
	fclose(fp);//fecha arquivo
}
