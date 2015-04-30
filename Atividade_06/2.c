#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct aluno{
   char nome[81];
   int mat;
   char end[121];
   char tel[21];  
       };
typedef struct aluno Aluno;
typedef struct aluno *Paluno;
Paluno tab[MAX];  

inicia(){
  int i;
  for (i=0;i<MAX;i++) tab[i]=NULL;           
         }
inicia_tab(Paluno tabe[MAX]){
  int i;
  for (i=0;i<MAX;i++) tabe[i]=NULL;
           
         }         
adiciona(int i){
      if (tab[i]==NULL) tab[i]=(Paluno)malloc(sizeof(Aluno));    
      scanf("%s",tab[i]->nome);
      scanf("%d",&tab[i]->mat);
      scanf("%s",tab[i]->end);
      scanf("%s",tab[i]->tel);
      
      
           }
adiciona_tabe(Paluno tabe[MAX],int i){
      if (tabe[i]==NULL) tabe[i]=(Paluno)malloc(sizeof(Aluno));    
      scanf("%s",tabe[i]->nome);
      scanf("%d",&tabe[i]->mat);
      scanf("%s",tabe[i]->end);
      scanf("%s",tabe[i]->tel);
      
      
           }           
           
remover(int i){   
      free(tab[i]);   
      tab[i]=NULL;    
           }
remover_tab(Paluno tabe[MAX],int i){   
      free(tabe[i]);   
      tabe[i]=NULL;    
           }
consulta(int i){
    printf("%s\n%d\n%s\n%s\n",tab[i]->nome,tab[i]->mat,tab[i]->end,tab[i]->tel);         
             }
consulta_tab(Paluno tabe[MAX],int i){
    printf("%s\n%d\n%s\n%s\n",tabe[i]->nome,tabe[i]->mat,tabe[i]->end,tabe[i]->tel);         
             }
imprimir(){
    int i;
    for (i=0;i<MAX;i++) consulta(i);    
           
           }
imprimir_tab(Paluno tabe[MAX]){
    int i;
    for (i=0;i<MAX;i++) consulta_tab(tabe,i);    
           
           }
main(){
     Paluno tabe[MAX];
     inicia_tab(tabe);
     adiciona_tabe(tabe,0);
     consulta_tab(tabe,0);
     inicia();
     adiciona(0);
     consulta(0);
     remover(0);
     scanf("%d");  
       }
