#include<stdlib.h>
#include<stdio.h>


struct lista{
int dado;
struct lista *prox;
};
typedef struct lista Lista;

Lista* cria_lista(){
	return NULL;
}

Lista* inserir(Lista* r,int x){
	Lista* head;
	head=(Lista*)malloc(sizeof(Lista));
	head->dado=x;
	head->prox=r;
	return head;	
}
Lista* tornaCircular(Lista *r){
    Lista* head;
    Lista* inicio;
    Lista* fim;
    inicio=r;
    for (head=r;head->prox!= NULL;head=head->prox);
    fim=head;
    fim->prox=inicio;
    return head; 
       
       }
Lista* tornaLinear(Lista *r){
    Lista* head;
    Lista* inicio;
    Lista* fim;
    inicio=r;
    for (head=r;head->prox!= NULL;head=head->prox);
    fim=head;
    fim->prox=NULL;
    return head; 
    
       }
int tamanhoCircular(Lista* r){
    Lista* atual;
    int n=0;
    for(atual=r;atual!=NULL;atual=atual->prox){
     n++;
       }              
           return n;
                       }


main(){
	Lista* raiz;
	raiz=cria_lista();
   	raiz=inserir(raiz,2);
   	raiz=inserir(raiz,3);
   	raiz=inserir(raiz,4);
   	raiz=inserir(raiz,5);
   	printf("%d",tamanhoCircular(raiz));
    raiz=tornaCircular(raiz);
    raiz=tornaLinear(raiz);
    
}
