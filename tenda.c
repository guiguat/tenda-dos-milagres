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

float retira (Fila* f){
    No* novoInicio = f->ini->prox;
    free(f->ini);
    f->ini = novoInicio;
    return .5;
}

int vazia (Fila* f){}
void libera (Fila* f){}
void imprime (Fila* f){}
int conta(Fila *f){}

