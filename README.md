# Philosophers42

## TODO

- [ ] Actualizar libft
- [ ] Investigar
- [ ] Esquema del programa
- [ ] Parseo

## Filosofos

Filosofo come, piensa xo duerme.
Tantos tenedores como filosofos.
Cogen dos tenedores cada filosofo al comer.

Argumentos: 
- number_of_philosophers [1, 200]
- time_to_die [60, inf]
- time_to_eat [60, inf]
- time_to_sleep [60, inf]
- number_of_times_each_philosopher_must_eat [0, maxint]

Cambios de filosofos:
- timestamp_in_ms X has taken a fork
- timestamp_in_ms X is eating
- timestamp_in_ms X is sleeping
- timestamp_in_ms X is thinking
- timestamp_in_ms X died

## Funciones permitidas

Libft esta prohibida.

### Comunes
#### Usados antes
- void* **memset**(void *dest, int c, size_t count): Cambia los primeros count miembros de dest a c(unsigned char)
- int **printf**(const char *format-string, argument-list): Imprime los char * y devuelve el numero de char imprimidos.
- void* **malloc**(int s): Asigna s bytes de memoria
- void **free**(void *m): Libera memoria asignada
- ssize_t **write**(int fd, const void *buff, size_t n): Imprime n bytes de buff al fd.
#### Hilos
- pthread_create: 
- pthread_detach: 
- pthread_join: 
#### Milis
- usleep: 
- gettimeofday: 

### Normal
#### Mutex
- pthread_mutex_init
- pthread_mutex_destroy
- pthread_mutex_lock
- pthread_mutex_unlock

### Bonus
#### Procesos
- fork
- kill
- exit
- waitpid
#### Semaforo
- sem_open
- sem_close
- sem_post
- sem_wait
- sem_unlink

## Includes

- string.h -> memset
- stdio.h -> printf
- stdlib.h -> malloc, free
- unistd.h -> write, usleep, 
- pthread.h -> pthread_create, pthread_detach, pthread_join
- sys/time.h -> gettimeofday
