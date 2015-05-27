#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"
#define MAX 50
struct pilha{
              int n;
              float vet[MAX];
};


Pilha* cria(){
  Pilha* c=(Pilha*)malloc(sizeof(Pilha));
  c->n=0;
  return c;
}

push(Pilha* p, float f){
    if (p->n==MAX) printf("Pilha Cheia");
    p->vet[p->n] = f;
	p->n++;
}

float pop(Pilha* p)
{
	float v;
	if(p->n == 0) printf("Pilha Vazia");
	v = p->vet[p->n-1];
	p->n--;
	return v;
}

int vazia(Pilha* p)
{
	if(p->n ==0)
	return 1;
	else
	return 0;
}

liberaPilha(Pilha* p)
{
	free(p);
}

imprime(Pilha* p)
{
	int i;
	for (i=p->n-1; i>=0; i--)
	printf("%f\n",p->vet[i]);
}

main(){
  Pilha* p=cria();
  p=push(p,1);
  p=push(p,2);
  p=push(p,3);
  imprime(p);
  pop(p);
  pop(p);

}
