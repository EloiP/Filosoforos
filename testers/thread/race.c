#include <pthread.h>
#include <stdio.h>

void *func(void *s)
{
	if (customutex == 0){
	*customutex = 1;
	printf("Hilo: %i\n", *(int *)i);}
	else {func(i, customutex);}
	*customutex = 0;
	return ();
}

int	main()
{
	pthread_t t;
	int i;
	int customutex;

	customutex = 0;
	i = 0;
	while (i < 12)
	{
			pthread_create(&t, NULL, *func, &i, &customutex);
			pthread_detach(t);
			++i;
	}
	return(0);
}
