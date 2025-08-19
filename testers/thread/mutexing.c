#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *func(void *i)
{
	printf("Hilo: %i\n", *(int *)i);
	return (i);
}

int	main()
{
	pthread_t t;
	pthread_mutex_t m;
	int i;

	i = 0;
	pthread_mutex_init(&m, NULL);
	while (i < 12)
	{
			pthread_mutex_lock(&m);
			pthread_create(&t, NULL, func, &i);
			pthread_detach(t);
			++i;
	pthread_mutex_unlock(&m);
	}
			pthread_mutex_destroy(&m);
			sleep(1);
	return(0);
}
