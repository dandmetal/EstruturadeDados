
typedef struct pilha Pilha;
typedef struct no No;


Pilha* cria();


push(Pilha* p, float f);


float pop(Pilha* p);


int vazia(Pilha* p);


liberaPilha(Pilha* p);

No* insereInicio(No* n, float f);

No* removeInicio(No* n);

imprime (Pilha* p);
