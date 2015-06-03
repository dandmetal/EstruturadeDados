typedef struct fila Fila;
Fila* cria();

void queue(Fila* f,float v);

float dequeue(Fila* f);

int vazia(Fila* f);

void libera(Fila* f);

