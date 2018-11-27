#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{

    int opcao, elem;
    Fila fila;


    do{
        system("cls");
        menu(&opcao);

        switch(opcao){

        case 1:
            fila = inicFila();
            printf("Fila iniciada...\n\n");
            system("pause");

            break;

        case 2:
            printf("Digite o elemento: ");
            scanf("%i", &elem);
            adicFila(fila, elem);
            printf("\n\n\n");
            system("pause");
            break;

        case 3:
            elimFila(fila);
            printf("\n\n");
            system("pause");

            break;

        case 4:
            printf("Elemento: %i", infoFila(fila));
            printf("\n\n");
            system("pause");

            break;

        case 5:
            if(vaziaFila(fila) == 1){
                printf("Fila esta vazia!!!");
            }else{
                printf("Fila esta populada!!!");
            }
            printf("\n\n");
            system("pause");
            break;

        case 6:
            destruirFila(fila);
            printf("\n\n");
            system("pause");

            break;

        default:

            if(opcao < 0 || opcao > 6){
                printf("Opcao errada");
                system("pause");
            }else{
                printf("     \t\t\t BYE BYE!!!");
            }


        }
    }while(opcao > 0 && opcao <=6);


    return 0;
}
