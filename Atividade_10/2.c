#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

struct no {
float info;
struct no* prox;
};
typedef struct no No;

struct fila {
No* ini;
No* fim;
};


Fila* cria(){
	Fila* f=(Fila*)malloc(sizeof(Fila));
	f->ini=NULL;
	f->fim=f->ini;
	return f;
}

void queue(Fila* f,float v){
	f->fim->info=v;
    f->fim=f->fim->prox;
	}

float dequeue(Fila* f){
	No* p;
	int v;
	v=f->ini->info;
    p=f->ini;
    f->ini=f->ini->prox;
    free(p);
    return v;
}

int vazia(Fila* f){
	return (f->ini==NULL && f->fim==NULL);
}

void libera(Fila* f){
	No* n=f->ini;
    while (n!=NULL) {
        No* t = n->prox;
        free(n);
        n = t;
    }
	free(f);
}


