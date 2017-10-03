#include "tipofilaINT.h"


int main(){
	tipofila inicio, fim;
	int pid, op;
	char resp;
	INIT(&inicio, &fim);
	do{
		printf("Digite 1 - Submeter processo, 2- Processar, 3 - Encerrar: ");
		scanf("%d", &op);
		switch(op){
			case 1: 
				printf("\nDigite o pid: "); 
				scanf("%d", &pid);
				ENQUEUE(&inicio, &fim, pid);
				break;
			case 2: 
				if(DEQUEUE(&inicio, &fim, &pid)){
					printf("Valor pid: %d", pid);
					printf("\nDigite S ou N se o processo terminou: ");
					fflush(stdin);
					resp = getchar();
					if(resp == 's' || resp == 'S'){
						printf("\nProcesso: %d terminado com sucesso\n", pid);
					}
					else if(resp == 'n' || resp == 'N'){
						ENQUEUE(&inicio, &fim, pid);	
					}
					else{
						printf("\nValor invalido");
					}
				}
				else{
					printf("\nPilha esta vazia\n");
				}
				break;
			case 3:
					if(!IsEmpty(inicio, fim)){
						op = 0;
					}
				break;
		}
	}while(op != 3);
		
}
