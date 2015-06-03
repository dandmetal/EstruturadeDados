#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
#include "1.c"
#include "3.c"

main(){
 Fila* f = cria();
 queue(f,1);
 queue(f,2);
 queue(f,3);
 queue(f,4);
 printf("%f\n", dequeue(f));
 imprime_vetor(f);
 libera(f);

}
