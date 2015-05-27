#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"
struct no{
          float info;
          struct no* prox;
};

struct pilha {
          No* prim;
};

Pilha* cria(){
 Pilha* p = (Pilha*) malloc(sizeof(Pilha));
 p->prim = NULL;
 return p;
  }

No* insereInicio(No* n, float f)
{
	No* head = (No*)malloc(sizeof(No));
		head->info = f;
		head->prox = n;
		return head;
}

No* removeInicio(No* n)
{
 No* p = n->prox;
 free(n);
 return p;
}

push(Pilha* p, float f)
{
	p->prim = insereInicio(p->prim,f);
}

float pop(Pilha* p)
{
	float v;
	if(vazia(p))		printf("Pilha vazia");
	v = p->prim->info;
	p->prim = removeInicio(p->prim);
	return v;
}

int vazia(Pilha* p)
{
    if (p->prim == NULL)
	 return 1;
	 else
	 return 0;
}

liberaPilha(Pilha* p)
{
	No* novo = p->prim;
	while(novo!= NULL)
	{
		No* t = novo->prox;
		free(novo);
		novo = t;
	}
	free(p);
}

imprime(Pilha* p)
{
	No* n;
	for (n=p->prim; n!=NULL; n=n->prox)	printf("%f\n",n->info);
}

main(){
  Pilha* p=cria();
  No* n;
  n=push(p,1);
  n=push(p,2);
  n=push(p,3);
  imprime(p);
  pop(p);
  pop(p);
  imprime(p);

}
