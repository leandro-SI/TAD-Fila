#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void menu(int *op){

    printf("[1] - Iniciar Fila\n");
    printf("[2] - Adiciona na Fila\n");
    printf("[3] - Eliminar primeiro elemento da Fila\n");
    printf("[4] - Retornar elemento da Fila\n");
    printf("[5] - Fila vazia ou populada\n");
    printf("[6] - Destruir Fila\n");
    printf("[0] - SAIR\n");
    printf("OPCAO: ");
    scanf("%i", op);
}


Fila inicFila(void){

    Fila f = (Fila) malloc(sizeof(TFila));
    f->primeiro = -1;
    f->ultimo = -1;
    return f;
}

void adicFila(Fila f, TipoF elem){

    if(f->primeiro == -1){

        f->info[0] = elem;
        f->primeiro = 0;
        f->ultimo = 0;
        printf("Elemento adicionado!");
    }else if(!(((f->ultimo + 1) % MAX) == f->primeiro)){

        f->ultimo = (f->ultimo + 1) % MAX;
        f->info[f->ultimo] = elem;
        printf("Elemento adicionado!");
    }else{
        printf("Lista Cheia");
    }
}

void elimFila(Fila f){

	if(f->primeiro != -1){
		if(f->primeiro == f->ultimo){
			f->primeiro = f->ultimo = -1;
			printf("Elemento elimicado!");
		}
		else{
			f->primeiro = (f->primeiro + 1)%MAX;
			printf("Elemento elimicado!");
		}
	}else{
        printf("Lista está vazia!!!");
	}

}

TipoF infoFila(Fila f){
	return f->info[f->primeiro];
}

int vaziaFila(Fila f){
	return (f->primeiro == -1 && f->ultimo == -1);
}

void destruirFila(Fila f){
	free(f);
	printf("Fila Destruida!!!");
}
