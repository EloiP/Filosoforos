#include <pthread.h>
#include <stdio.h>

void *func(void *i)
{
	printf("Hilo: %i\n", *(int *)i);
}

int	main()
{
	pthread_t t;
	int i;

	i = 0;
	while (i < 12)
	{
			pthread_create(&t, NULL, *func, &i);
			pthread_detach(t);
			++i;
	}
	return(0);
}
