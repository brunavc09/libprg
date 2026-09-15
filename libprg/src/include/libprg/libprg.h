#ifndef LABORATORIO_LIBPRG_H
#define LABORATORIO_LIBPRG_H
#include <stdbool.h>

// |-- LISTA -- |


typedef struct no {
    int valor;
    struct no *proximo;
} No;

typedef struct lista_linear {
    No *inicio;
    No *fim;
    int tamanho;
} ListaLinear;

ListaLinear* criar_lista(void);
void inserir_lista(ListaLinear *lista, int valor);
int primeiro_lista(ListaLinear *lista);
int tamanho_lista(ListaLinear *lista);
void remover_inicio_lista(ListaLinear *lista);
void imprimir_lista(ListaLinear *lista);
void destruir_lista(ListaLinear *lista);


#endif //LABORATORIO_LIBPRG_H
