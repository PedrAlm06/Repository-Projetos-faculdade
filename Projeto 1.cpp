#include <stdio.h>
#include <stdlib.h>
// criando estruturas 
typedef struct pessoa { //typedef define estruturas
 char nome[50];
 int idade;
 float salario;
}PESSOA;//apontador ponteiro
void mostrar(struct pessoa x)
{
	// mostrando os dados 
	printf("Nome:%s\n",x.nome);
	printf("idade:%d\n",x.idade);
	printf("Salario:%.2f\n",x.salario);
}
main(){
	struct pessoa p={"maria",23,4500.00};
	mostrar(p);
}
