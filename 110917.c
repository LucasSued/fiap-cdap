#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "tipopilha_INT.h"
int main(){
	tipopilha pilha;
	int numero;
	INIT(&pilha);
	printf("qual o numero para conversao?");
	scanf("%d",&numero);
	while(numero!=0){
	  PUSH(&pilha,numero%2);
	  numero=numero/2;
	  	
		}
		while(IsEmpty(pilha)==0){
			POP(&pilha,&numero);
			printf("%d",numero);
		}
	
	
}
