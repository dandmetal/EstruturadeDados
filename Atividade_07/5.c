#include<stdlib.h>
#include<stdio.h>

struct lista{
      int dado; 
      struct lista *prox; 
      struct lista *ant;
       };
typedef struct lista Lista;

Lista* cria_lista(){
     
      return NULL; 
              
             }
Lista* inserir(Lista* r,int x){
    Lista* novo;
    Lista* head=r;
    
    if (r==NULL){
    
    novo=(Lista*)malloc(sizeof(Lista));                
    novo->ant=NULL;
    novo->dado=x;
    novo->prox=r;
    r=novo;
    
       }
    else {
     novo->dado=x;
     novo->ant=head;
     novo->prox=r;
     r=novo;
     head=r; 
     return novo;   
         }
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

Lista* remover(Lista* r){
 
 r=r->prox;
 free(r->ant);
 r->ant=NULL;
 return r;        
          
          }

main(){
    Lista* l;
    l=cria_lista();
    l=inserir(l,1);
    l=inserir(l,2);
    l=inserir(l,3);
    busca(l,3);
    l=remover(l);
    
       
       
       }   

