/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:15 by epascual          #+#    #+#             */
/*   Updated: 2025/10/02 13:03:38 by epascual         ###   ########.fr       */
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
}
void	free_philos(t_filo **philos)
{
	int	i;

	i = 0;
	while (philos[i])
	{
		free(philos[i]);
		i++;
	}
	free(philos);
}

static int	p_array_len(void **ptr_array)
{
	int	i;

	i = 0;
	while (ptr_array[i])
		i++;
	return (i);
}

t_filo	**init_filos(t_n *normas, t_mutex **forks)
{
	int	i;
	t_filo	**philos;

	philos = ft_calloc(sizeof(t_filo *) * (p_array_len((void **) forks) + 1));
	if (!philos)
		return (NULL);
	i = 0;
	while (forks[i + 1])
	{
		philos[i] = philo_make(normas, forks[i], forks[i + 1]);
		if (!philos[i])
			return (free_philos(philos), NULL);
		i++;
	}
	philos[i] = philo_make(normas, forks[i], forks[0]);
	if (!philos[i])
		return (free_philos(philos), NULL);
	return (philos);
}
/*
int	init_filos(t_n *normas, t_filo **philos, t_mutex**forks)
{
	int	i;

	i = 0;
	while (i++ < normas->n)
	{
		philos[i] = fill_filo(i, normas, forks);
	}
	return (0);
}*/
