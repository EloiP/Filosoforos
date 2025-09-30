/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:15 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 21:16:29 by epascual         ###   ########.fr       */
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

t_filo	fill_filo(int id, t_n *normas)
{
	t_filo	filo;

	filo.id = id;
	filo.status = 3;
	filo.normas = *normas;
	filo.ultcomida = actual();

	return (filo);
}

int	init_filos(t_n *normas, t_filo **philos, t_mutex**forks)
{
	int	i;

	philos = ft_calloc(sizeof(t_filo) * normas->n);
	i = 0;
	forks = forks-1;
	while (i++ < normas->n)
	{
		//philos[i] = fill_filo(i, normas);
	}
	return (0);
}

int	init(t_n *normas, t_filo **philos, int argc, char **argv, t_mutex**forks)
{
	if (!init_data(normas, argc, argv))
		return (1);
	forks = init_forks(normas);
	if (!forks)
		return (ft_puterror("Mutex error\n"), 1);
	if (!init_filos(normas, philos, forks))
		return (1);
	return (0);
}
