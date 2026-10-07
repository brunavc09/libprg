#ifndef LABORATORIO_LIBPRG_H
#define LABORATORIO_LIBPRG_H
#endif //LABORATORIO_LIBPRG_H

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

// |-- Lista Encadeada --|

typedef struct NoLE {
    int valor;
    struct NoLE *proximo;
} NoLE;

typedef struct {
    NoLE *inicio;
    int tamanho;
} ListaEncadeada;

ListaEncadeada *lenc_criar(void);
int  lenc_inserir(ListaEncadeada *l, int valor);
int  lenc_remover(ListaEncadeada *l, int *valor);
int  lenc_primeiro(const ListaEncadeada *l, int *valor);
int  lenc_tamanho(const ListaEncadeada *l);
void lenc_imprimir(const ListaEncadeada *l);
void lenc_destruir(ListaEncadeada *l);

// |-- Ordenacao --|

void bubble_sort(int *v,int n);
void insertion_sort(int *v,int n);
void selection_sort(int *v,int n);
