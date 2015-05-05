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

percorrer(Lista* raiz){
Lista* atual;
for(atual=raiz;atual!=NULL;atual=atual->prox){
printf("%d\n",atual->dado);
       } 
}

lista_vazia(Lista* raiz){
if(raiz==NULL) printf("lista vazia\n");
else printf("lista nao vazia\n");
}

Lista* busca(Lista* raiz,int x){
Lista* atual;
for (atual=raiz;atual!=NULL;atual=atual->prox){
	if (atual->dado==x)
	{
		printf("Elemento encontrado\n");
		return atual;
	} 
}
return NULL;

}

Lista* remover(Lista* raiz){

Lista* apaga;
apaga=raiz;
raiz=apaga->prox;
free(apaga);
return raiz;

}

Lista* libera(Lista* raiz){
free(raiz);
raiz=NULL;
return raiz;
}

main(){
	Lista* raiz;
	raiz=cria_lista();
	lista_vazia(raiz);
   	raiz=inserir(raiz,2);
   	raiz=inserir(raiz,3);
   	raiz=inserir(raiz,4);
   	raiz=inserir(raiz,5);
   	percorrer(raiz);
   	lista_vazia(raiz);
   	busca(raiz,4);
      raiz=remover(raiz);
      percorrer(raiz);
      raiz=libera(raiz);
   	lista_vazia(raiz);  	
}
