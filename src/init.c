/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:15 by epascual          #+#    #+#             */
/*   Updated: 2025/10/01 13:09:25 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

t_mutex	**init_forks(t_n*normas)
{
	int		i;
	t_mutex	**forks;

	i = 0;
	forks = ft_calloc(sizeof(int) * (normas->n + 1));
	forks[(normas->n + 1)] = NULL;
	while (i < normas->n)
	{
		forks[i] = ft_mutex_init();
		if (!forks[i])
			return (free_forks(forks), NULL);
		i++;
	}
	return (forks);
}

t_filo	fill_filo(int id, t_n *normas, t_mutex**forks)
{
	t_filo	filo;

	filo.id = id;
	filo.status = 3;
	filo.normas = *normas;
	filo.ultcomida = actual();

	return (filo);


int	init_filos(t_n *normas, t_filo **philos, t_mutex**forks)
{
	int	i;

	i = 0;
	while (i++ < normas->n)
	{
		philos[i] = fill_filo(i, normas, forks);
	}
	return (0);
}
void	free_philos(t_philo **philo_array)
{
	int	i;

	i = 0;
	while (philo_array[i])
	{
		free_philo(philo_array[i]);
		i++;
	}
	free(philo_array);
}

static int	p_array_len(void **ptr_array)
{
	int	i;

	i = 0;
	while (ptr_array[i])
		i++;
	return (i);
}

t_philo	**make_philos(t_n info, t_mutex **forks, t_mutex *sinchro)
{
	int	i;
	t_philo	**philos;

	philos = ft_calloc(sizeof(t_philo *) * (p_array_len((void **) forks) + 1));
	if (!philos)
		return (NULL);
	i = 0;
	while (forks[i + 1])
	{
		info.id = i + 1;
		philos[i] = philo_make(info, print, \
				forks[i], forks[i + 1]);
		if (!philos[i])
			return (free_philos(philos), NULL);
		i++;
	}
	info.id = i + 1;
	philos[i] = philo_make(info, print, forks[i], forks[0]);
	if (!philos[i])
		return (free_philos(philos), NULL);
	return (philos);
}
