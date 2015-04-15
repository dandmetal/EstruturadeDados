#include <stdio.h>
#include <stdlib.h>
 typedef struct matriz Matriz;
 
 Matriz* cria_matriz(int i,int j);

 void libera_matriz(Matriz* mat);

 int acessa_matriz(Matriz* mat,int i,int j);
 
 void atribui_matriz(Matriz* mat,int i,int j,int d);
 
 int linhas_matriz(Matriz* mat);
 
 int colunas_matriz(Matriz* mat);
