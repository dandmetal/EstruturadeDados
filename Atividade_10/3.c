#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

imprime_vetor(Fila* f){
   int i;
   for (i=f->ini;i<f->fim;i++){
        printf("%f",f->vet[i]);
   }

}

imprime_lista(Fila* f){
   No* n;
   for (n=f->ini;n!=NULL;n=n->prox){
    printf("%f",q->info);
   }

}
