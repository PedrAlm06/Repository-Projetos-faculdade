#include <stdio.h>
#include <stdlib.h>
#include <string.h>// biblioteca de comandos 
// A struct é uma forma de agrupar tipos diferentes de dados
//Pense nela como uma ficha ou registro
struct Aluno{
	char nome[50];
	int idade;
	float notaMedia;
};
main(){
struct Aluno aluno1;
strcpy(aluno1.nome,"Pedro rei do pingo");
aluno1.idade=18;
aluno1.notaMedia=8,5;
//populando em uma unica linha
struct Aluno aluno2={"joao santos",19,7.8};
//mostrando os dados
printf("Dados do Aluno 1:\n");
printf("Nome: %s\n",aluno1.nome);
printf("idade: %d\n",aluno1.idade);
printf("Nota Media:%.2f \n",aluno1.notaMedia);
printf("Dados do Aluno 2:\n");
printf("Nome: %s\n",aluno2.nome);
printf("idade: %d\n",aluno2.idade);
printf("Nota Media:%.2f \n",aluno2.notaMedia);

}
