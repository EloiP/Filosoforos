## Estructura de src
- main.c: Main, llama 2 funciones, init_data que reune la info de argc argv, launcher, que ejecuta el filosofers.
- pars.c: Parseo de datos init_data, hace atoi de argv y mete en el struct norm, despues usa parsn para comprovar valores en dentro del rango.
- print.c: Imprime textos ft_puterror y ft_printestate
- actions.c: Tiene la rutina de los filosofos. rutina.
- readmutex.c: Lee los mutexes ft_mutex_init y ft_mutex_destroy
- launch.c: Recorre los filosofos y los ejecuta como hilos independientes usando detach_philo_array.


- time.c: Controla los tiempos. actual recibe timestamp actual, timediff hace differencia entre dos tiempos.
- ft_atoi.c: Contiene la version de atoi para filosofers
- ft_calloc.c: Contiene la version de calloc para filosofers
## Vacios
- updatemutexes.c -> Quiero que sean las funciones que cambian variables mutexadas.
- terminate.c -> Quiero que sea el salir del programa.
- init.c -> Quiero que sea lo que inicia los tenedores y los filosofos
