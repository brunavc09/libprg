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

// |-- Lista Encadeada --|

typedef struct no
{
    int valor;
    struct no* proximo;
} no_t;


no_t* criar_lista_encadeada(int valor);
no_t* criar_lista_encadeada_circular(int valor);
int primeiro_elemento_lista_encadeada(no_t** inicio);
no_t* primeiro_no_lista_encadeada(no_t** inicio);
void adicionar_na_lista_encadeada(no_t** inicio, int valor);
void adicionar_na_lista_encadeada_circular(no_t** inicio, int valor);
no_t* buscar_na_lista_encadeada(no_t** inicio, int valor);
void listar_lista_encadeada(no_t** inicio);
void remover_da_lista_encadeada(no_t** inicio, int valor);
void destruir_lista_encadeada(no_t** inicio);
int tamanho_da_lista_encadeada(no_t* inicio);
void destruir_lista_encadeada_circular(no_t** inicio);
int limitar_na_lista_encadeada(no_t** inicio, int posicao);
void adicionar_na_posicao_da_lista_encadeada(no_t** inicio, int valor, int posicao);
bool lista_encadeada_vazia(no_t** inicio);
no_t* buscar_na_posicao_da_lista_encadeada(no_t** inicio, int posicao);
void remover_da_posicao_da_lista_encadeada(no_t** inicio, int posicao);
int tamanho_da_lista_encadeada_circular(no_t* inicio);
void adicionar_na_posicao_da_lista_encadeada_circular(no_t** inicio, int valor, int posicao);
no_t* buscar_na_posicao_da_lista_encadeada_circular(no_t** inicio, int posicao);
no_t* ultimo_no_da_lista_encadeada_circular(no_t* inicio);
void remover_da_posicao_da_lista_encadeada_circular(no_t** inicio, int posicao);
