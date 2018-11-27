#ifndef MINHA_LIBRY
#define MINHA_LIBRY

#define MAX 6

typedef int TipoF;

typedef struct{

    TipoF info[MAX];
    int primeiro;
    int ultimo;

}TFila, *Fila;


void menu(int *op);

Fila inicFila(void);

void adicFila(Fila f, TipoF elem);

void elimFila(Fila f);

TipoF infoFila(Fila f);

int vaziaFila(Fila f);

void destruirFila(Fila f);




#endif // MINHA_LIBRY
