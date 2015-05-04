#include <stdio.h>
#include <stdlib.h>

struct ponto{
      float x;
      float y;       
       };
typedef struct ponto Ponto;

Ponto* cria_ponto(){
    Ponto* f=(Ponto*)malloc(sizeof(Ponto));  
    return f;
       }

captura_0(Ponto p){
  float i;
  scanf("%f",&i);
  p.x=i;
  scanf("%f",&i);
  p.y=i;                          
                }
captura_1(Ponto* f){
  float i;
  scanf("%f",&i);
  f->x=i;
  scanf("%f",&i);
  f->y=i;                          
                }                
imprimi_0(Ponto p){
  printf("%f\n",p.x);
  printf("%f\n",p.y);              
                
                }
imprimi_1(Ponto* f){
  printf("%f\n",f->x);
  printf("%f\n",f->y);                 
}

float distancia(Ponto* f,Ponto* q){
      float d;
      d=(f->x-q->x)*(f->x-q->x)+(f->y-q->y)*(f->y-q->y);
      d=sqrt(d);
      return d;
      }

main(){
   
  Ponto p;
  Ponto k;
  Ponto *f=&p;
  Ponto *q=&k;
  captura_0(p);
  imprimi_0(p);  
  captura_1(f);
  imprimi_1(f);
  captura_1(q);
  imprimi_1(q);
  printf("%f",distancia(f,q));

    
       }
