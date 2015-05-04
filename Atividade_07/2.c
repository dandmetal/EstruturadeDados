#include<stdlib.h>
#include<stdio.h>

struct lista{
      int dado; 
      struct lista *prox; 
       };
typedef struct lista Lista;
 
 Lista* raiz;
 Lista* galho;
 
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
int igual(Lista* l1,Lista* l2){
    int igual;
    while(l1!=NULL){
           if (l1->dado==l2->dado){
           igual=1;
           l1=l1->prox;
           l2=l2->prox;            
           }
           else {
                igual=0;
                break; }           
                             }
    return igual;
    
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
  galho=raiz;
  Lista* l1=raiz;
  Lista* l2=galho;
  printf("%d\n",igual(l1,l2));
     
       
       
       }
