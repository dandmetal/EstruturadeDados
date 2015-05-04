#include<stdlib.h>
#include<stdio.h>

struct lista{
      int dado; 
      struct lista *prox; 
       };
typedef struct lista Lista;
 
 Lista* raiz;
 
 cria_lista(){ 
   
   raiz=NULL;
  
   
      }
inserir(int x){
     Lista *atual;
     atual=(Lista*)malloc(sizeof(Lista));
     atual->dado=x;
     atual->prox=raiz;
     raiz=atual;   
     }       


percorrer(){
   Lista* atual;
   for(atual=raiz;atual!=NULL;atual=atual->prox){
        printf("%d\n",atual->dado);
        
    }  
            
            }
lista_vazia(){               
    if(raiz==NULL) printf("lista vazia\n"); 
    else printf("lista nao vazia\n");              
                   
                   }
busca(int x){
     Lista* atual;
     atual=raiz;
     while (atual!=NULL && atual->dado!=x) atual=atual->prox;  
     if (atual->dado==x) printf("Elemento encontrado\n");      
             }
remover(){
     Lista* apaga;
     apaga=raiz;
     raiz=apaga->prox;
     free(apaga);          
               
               }
libera(){
     free(raiz);
     raiz=NULL;    
         
         }

main(){
 
  cria_lista();
  inserir(10);
  inserir(20);
  inserir(30);
  inserir(40);
  lista_vazia();
  busca(20);
  percorrer();
  remover();
  percorrer();
  libera();
     
       
       
       }
