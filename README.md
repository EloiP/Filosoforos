# Philosophers42

## TODO

- [ ] Investigar
- [ ] Esquema del programa
- [x] Parseo
- [ ] Structs
- [ ] Mutexes
- [ ] Ejecuciones
- [ ] Debuging

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

⚠️ Libft esta prohibida.

### Comunes
#### Usados antes
- void* **memset**(void *dest, int c, size_t count): Cambia los primeros count miembros de dest a c(unsigned char)
- int **printf**(const char *format-string, argument-list): Imprime los char * y devuelve el numero de char imprimidos.
- void* **malloc**(int s): Asigna s bytes de memoria
- void **free**(void *m): Libera memoria asignada
- ssize_t **write**(int fd, const void *buff, size_t n): Imprime n bytes de buff al fd.
#### Hilos
- int **pthread_create**(pthread_t *restrict thread, const pthread_attr_t *restrict attr, typeof(void *(void *)) *start_routine, void *restrict arg): Inicia un hilo. Recibe un hilo thread, que empieza por la funcion start_routine con parametros arg, el thread tiene los atributos attr. Devuelve standard.
- int **pthread_detach**(pthread_t thread): Separa un hilo, se autotermina 
- int **pthread_join**(pthread_t thread, void **value_ptr): Termina un hilo
#### Milis
- int **usleep**(useconds_t usec): espera durante usec milis, 0 exito, -1 error
- int **gettimeofday**(struct timeval, struct timezone): Obtiene un int que representa los milis.

### Normal
#### Mutex
- int **pthread_mutex_init**(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr): Inicia la reserva de la variable, inicia unlocked. Recibe mutex y atributos para mutex, si le pones NULL recibe los normales. Devuelve 0 en exito.
- int **pthread_mutex_destroy**(pthread_mutex_t *mutex): Termina la reserva de la variable.
- int **pthread_mutex_lock(**pthread_mutex_t *mutex): Bloquea el acceso a esta variable por otros procesos. Recibe mutex que bloquear. Devuelve 0 en exito numero en error.
- int **pthread_mutex_unlock**(pthread_mutex_t *mutex): Desbloquea el acceso a esta variable por otros procesos. Recibe mutex que desbloquear. Devuelve 0 en exito numero en error.

### Bonus
#### Procesos
- fork: Subdivide en 2 procesos
- kill: Elimina un proceso
- exit: Sale del programa
- waitpid: Espera a que termine un proceso
#### Semaforo
- sem_t * sem_open (const char *name, int oflag, mode_t mode, unsigned value): Devuelve la direccion a un nuevo objeto semaforo.
- int sem_close (sem_t * sem): Cierra el objeto semaforo.
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
