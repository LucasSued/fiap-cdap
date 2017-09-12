#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "tipopilha_INT.h"

int main(){
	tipopilha pilha ;
	char frase[50],auxiliar[50];
	int i=0;
	INIT(&pilha);
	
	printf("digite uma palavra: ");
	gets(frase);
	for(;i<	strlen(frase);i++){
	  PUSH(&pilha,frase[i]);
	  
	}
    for(!IsEmpty(pilha)){
     POP(&pilha,&auxliar[i]);
     i++;
    	}
    	auxiliar[i]='\0';
    	printf(" frase desempilhada");
    	puts(auxiliar);
	
}
