#include <stdio.h>
#include <stdlib.h>
void alteraValor(int x){//void não retorna nada
	x=100;
}
main(){
	int a=10;
	alteraValor(a);
	printf("O valor de a depois da funcao:%i", a);
}
