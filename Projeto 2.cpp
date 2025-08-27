#include <stdio.h>
#include <stdlib.h>
// criando estruturas
typedef struct sorvete{
	int codigo;
	char sabor[20];
}SORVETE;
void mostrar(struct sorvete x)
{
	printf("Codigo:%d\n",x.codigo);
	printf("Sabor :%s\n",x.sabor);
}
void Ler(SORVETE *ptr){// ptr= ponteiro Sorvete
printf("Digite o codigo:");
scanf("%i",&(*ptr).codigo);
printf("Digite o Sabor:");
scanf("%s",&(*ptr).sabor);
}
main(){
struct sorvete p={};// vazio porque o usuario vai digitar 
mostrar(p);
printf("\n");// pula uma linha
Ler(&p);// Ler os dados digitados pelo usario
mostrar(p);
}

