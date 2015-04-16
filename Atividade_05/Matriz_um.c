#include "interface.h"

struct matriz{
	int linha;
	int coluna;
	int* dado;
};
 
 
 Matriz* cria_matriz(int i,int j){
 	Matriz* mat=(Matriz*)malloc(sizeof(Matriz));
 	if (mat==NULL){
 		printf("ERROR");
 	}
 	mat->linha=i;
 	mat->coluna=j;
 	mat->dado=(int*)malloc(i*j*sizeof(int));
 	return mat;
 }
 void libera_matriz(Matriz* mat){
 	free(mat->dado);
 	free(mat);
 }
 int acessa_matriz(Matriz* mat,int i,int j){
 	int k;
 	if (i>mat->linha||j>mat->coluna) printf("Acesso Invalido");
 	else{
    k=i*mat->coluna + j;
	return mat->dado[k]; 	
}
 }
 void atribui_matriz(Matriz* mat,int i,int j,int d){
 	 int k;
 	 if (i>mat->linha||j>mat->coluna) printf("Acesso Invalido");
 	 else{ 
	 k=i*mat->coluna + j;
 	 mat->dado[k]=d;
 }
 }
 int linhas_matriz(Matriz* mat){
	 return mat->linha;
 }
 int colunas_matriz(Matriz* mat){
 	return mat->coluna;
 }
 void matriz_simetrica(Matriz* mat){
      int k,l,i,j;
      int sime=1;
      if (mat->linha!=mat->coluna) {
                                   sime=0;
                                   printf("Matriz nao simetrica\n");}
      else{
          printf("Matriz Quadrada\n"); 
         
          for (i=0; (i<mat->linha)&&(sime==1); i++) {
             for (j=0; (j<mat->coluna)&&(sime==1); j++) {
              k=i*mat->coluna+j;
              l=j*mat->coluna+i;
               if (mat->dado[k] !=mat->dado[l]) sime=0;
               }
               } 
            if (sime==1) printf ("Matriz simetrica\n");
            if (sime==0) printf ("Matriz nao simetrica\n");                                     
            }  
     }
 void matriz_transposta(Matriz* mat){
      int i,j,k;
      int trans[mat->coluna][mat->linha];
      for (j = 0; j < mat->linha;j++){
         for (i = 0; i < mat->coluna; i++){
             k=i*mat->coluna+j;
             trans[j][i] = mat->dado[k];                           
                        }
                        } 
       printf("Transposta feita");                 
        }
 
 main(){
 	Matriz* m;
 	m=cria_matriz(5,5);
 	atribui_matriz(m,1,1,1);
 	atribui_matriz(m,1,2,3);
 	atribui_matriz(m,1,3,4);
 	atribui_matriz(m,2,1,1);
 	printf("%d\n",acessa_matriz(m,1,1));
 	printf("%d\n",acessa_matriz(m,1,2));
 	printf("%d\n",acessa_matriz(m,1,3));
 	printf("%d\n",acessa_matriz(m,2,1));
 	printf("%d\n",colunas_matriz(m));
    matriz_simetrica(m);
    matriz_transposta(m);
    libera_matriz(m);
  
    
 }
