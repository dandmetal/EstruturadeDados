#include<stdlib.h>
#include<stdio.h>

struct lista{
      int dado; 
      struct lista *prox; 
      struct lista *ant;
       };
typedef struct lista Lista;
Lista *r;
 cria_lista(){
     
      r=NULL; 
              
             }
inserir(int x){
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
     novo->prox->ant=novo;     
         }
                    }          
busca(int x){
    Lista* atual;
    atual=r;
    while (atual!=NULL && atual->dado!=x) atual=atual->prox;  
    if (atual->dado==x) printf("Elemento encontrado\n");                     
          }

remover(){
 
 r=r->prox;
 free(r->ant);
 r->ant=NULL;
          
          
          }

main(){
    
    cria_lista();
    inserir(1);
    inserir(2);
    inserir(3);
    busca(3);
    remover();
    
       
       
       }   

