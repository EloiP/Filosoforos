#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void *func(void *arg) {
    int thread_num = *(int *)arg;
    printf("Hilo: %i\n", thread_num);
    return NULL;
}
int main() {
    pthread_t t;
    pthread_mutex_t m;
    int i;
    pthread_mutex_init(&m, NULL);
    
	i = 0;
    while(i < 12) 
	{
        int *arg = malloc(sizeof(*arg)); // Asignar memoria para el argumento
        *arg = i; // Asignar el valor de i al argumento
        pthread_mutex_lock(&m);
        pthread_create(&t, NULL, func, arg);
        pthread_detach(t); // Desvincular el hilo
        pthread_mutex_unlock(&m);
		i++;
    }
    pthread_mutex_destroy(&m);
    // Esperar un momento para que los hilos terminen antes de salir
    return 0;
}
