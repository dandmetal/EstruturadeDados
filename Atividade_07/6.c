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
    Lista* inicio=r;
    Lista* fim;
    if (r==NULL){
    
    novo=(Lista*)malloc(sizeof(Lista));                
    novo->ant=NULL;
    novo->dado=x;
    inicio=novo;
    fim=inicio;
    novo->prox=r;
    r=novo;
    return novo;
       }
    else {
     novo->dado=x;
     novo->ant=head;
     novo->prox=r;
     r=novo;
     fim=novo;
     head=r; 
     fim->prox=inicio;
     inicio->ant=fim;
     return novo;   
         }
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
    l=remover(l);
    
       
       
       }   

