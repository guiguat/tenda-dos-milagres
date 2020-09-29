#include <stdio.h>
#include <stdlib.h>
#include "tenda.h"

Fila* cria (void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = (No*) malloc(sizeof(No));
    f->ini->senha = 1;
    f->fim = f->ini;
    return f;
}

void insere (Fila* f){
    No* novoNo = (No*) malloc(sizeof(No));
    int senhaAnterior = f->fim->senha;
    novoNo->senha = senhaAnterior++;
    f->fim->prox = novoNo;
    f->fim = novoNo;
}

int retira (Fila* f){
    int senha = f->ini->senha;
    No* novoPrimeiroNo = f->ini->prox;
    free(f->ini);
    f->ini = novoPrimeiroNo;
    return senha;
}

int vazia (Fila* f){
    if(&(f->ini) == &(f->fim)){
        return 1;
    }
    return 0;
}
void libera (Fila* f){
    if(f->ini != NULL){
        No* proxNo = f->ini->prox;
        free(f->ini);
        f->ini = proxNo;
        libera(f);
    }
    return;
}
void imprime (Fila* f){}
int conta(Fila *f){}

