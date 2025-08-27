#include <stdio.h>
#include <stdlib.h>
//exemplo de funções
void vista(float valor){
	float resultado;
	resultado = valor-(valor*0.05);
	printf("Total a pagar=%3.2f com desconto",resultado);
}
void iguais(float valor){
		float resultado;
	resultado = valor/2;
	printf("Total a pagar, duas parcelas de=%3.2f",resultado);
}
void parcelas3(float valor){
		float resultado;
	resultado = (valor/3)+(valor*0.05);
	printf("Total a pagar, tres parcelas de=%3.2f",resultado);
}
void parcelas4(float valor){
		float resultado;
	resultado = (valor/4)+(valor*0.10);
	printf("Total a pagar, quatro parcelas de=%3.2f",resultado);
}
void menu(){
	printf("Escolha a opcao:\n");
	printf("1-a vista ou Pix\n");
	printf("2-entrada + 1 parcela\n");
	printf("3-entrada + 2 parcela\n");
	printf("4-entrada + 3 parcela\n");
}
main(){
	float produto;
	printf("Digite o valor do produto:");
	scanf("%f" ,&produto);
	menu();//chama o menu
	int opcao;
	scanf("%d", &opcao);
	if(opcao==1)vista(produto);
	if(opcao==2)iguais(produto);
	if(opcao==3)parcelas3(produto);
	if(opcao==4)parcelas4(produto);
}
