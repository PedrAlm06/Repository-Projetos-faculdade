#include <stdio.h>
#include <stdlib.h>
#include <string.h>// biblioteca de comandos 
//Criando estruturas 
typedef struct{
	char Nome[30];
	float Peso;
	int Idade;
	float Altura;
}Pessoa;//nome apenas para o ponteiro
void ImprimePessoa(Pessoa P)//declara o parametro p como struct
{
	printf("Nome:%s-idade:%d - Peso:%.2f - Altura:%.2f \n",
	P.Nome,P.Idade,P.Peso,P.Altura);
}
main(){
	Pessoa Joao,Maria;// joao e maria são do tipo Pessoa
	strcpy(Joao.Nome,"Joao");// strcpy string copy
	Joao.Idade=15;
	Joao.Peso=80.5;
	Joao.Altura=1.75; 
	strcpy(Maria.Nome,"Maria");//copia o texto para variavel
		Maria.Idade=23;
		Maria.Peso=60.5;
		Maria.Altura=1.65;
		ImprimePessoa(Joao);
		ImprimePessoa(Maria);
}
