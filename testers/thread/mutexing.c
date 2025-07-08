#include <pthread.h>
#include <stdio.h>

void *func(void *i)
{
	printf("Hilo: %i\n", *(int *)i);
	pthread_mutex_unlock();
}

int	main()
{
	pthread_t t;
	int i;

	i = 0;
	pthread_mutex_init();
	while (i < 12)
	{
			pthread_mutex_lock
			pthread_create(&t, NULL, *func, &i);
			pthread_detach(t);
			++i;
	}
	pthread_mutex_destroy();
	return(0);
}
