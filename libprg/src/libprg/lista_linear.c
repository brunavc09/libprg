#include "libprg/libprg.h"
#include <stdlib.h>
#include <stdio.h>

ListaLinear* criar_lista(void) {
    ListaLinear *lista=malloc(sizeof(ListaLinear));
    lista->inicio=NULL;
    lista->fim=NULL;
    lista->tamanho=0;
    return lista;
}

void inserir_lista(ListaLinear *lista, int valor) {
    No *novo=malloc(sizeof(No));
    novo->valor=valor;
    novo->proximo=NULL;

    if (lista->fim==NULL) {
        lista->inicio=novo;
        lista->fim=novo;
    } else {
        lista->fim->proximo=novo;
        lista->fim=novo;
    }
    lista->tamanho++;
}

int primeiro_lista(ListaLinear *lista) {
    return lista->inicio->valor;
}

int tamanho_lista(ListaLinear *lista) {
    return lista->tamanho;
}

void remover_inicio_lista(ListaLinear *lista) {
    if (lista->inicio==NULL) return;

    No *temp = lista->inicio;
    lista->inicio=lista->inicio->proximo;
    if (lista->inicio==NULL) {
        lista->fim=NULL;
    }
    free(temp);
    lista->tamanho--;
}

void imprimir_lista(ListaLinear *lista) {
    No *atual=lista->inicio;
    while (atual!=NULL) {
        printf("%d ", atual->valor);
        atual=atual->proximo;
    }
    printf("\n");
}

void destruir_lista(ListaLinear *lista) {
    No *atual=lista->inicio;
    while (atual!=NULL) {
        No *proximo=atual->proximo;
        free(atual);
        atual=proximo;
    }
    free(lista);
}