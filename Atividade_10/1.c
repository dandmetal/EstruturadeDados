#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
#define N 100

struct fila {
int ini, fim;
float vet[N];
};


Fila* cria(){
	Fila* f=(Fila*)malloc(sizeof(Fila));
	f->ini=0;
	f->fim=f->ini;
	return f;
}

void queue(Fila* f,float v){
	if (f->fim==N) printf("Fila Cheia");
	else{
		f->vet[f->fim]=v;
		f->fim++;
	}
}

float dequeue(Fila* f){
	float v;
	if (f->fim==f->ini) printf("Fila Vazia");
	else{
	   v=f->vet[f->ini];
	   f->ini++;
	   return v;
	}
}

int vazia(Fila* f){
  	return (f->ini==f->fim);
  }

void libera(Fila* f){

	free(f);
}



