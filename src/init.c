/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:15 by epascual          #+#    #+#             */
/*   Updated: 2025/08/07 13:32:58 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

int	**init_forks(t_n*normas)
{
	int	i;
	int	**forks;

	i = 0;
	forks = ft_calloc(sizeof(int) * normas->n)
	while (i++ < normas->n)
	{
		*(forks[i]) = 1;
	}	
	return (0)
}

t_filo	fill_filo(int id, t_n*normas)
{
	t_filo	filo;

	filo.id = id;
	filo.status = 3;
	filo.normas = normas;
	filo.ultcomida = actual();
}

int	init_filos(t_n*normas, t_filo**philos)
{
	int	i;

	philos = ft_calloc(sizeof(t_filo)*normas->n);
	i = 0;
	while (i++ < normas->n)
	{
		philos[i] = fill_filo(i, normas);
	}
	return (0);
}

int	init(t_n*normas, t_filo**philos,int argc,char*argv)
{
	if (!init_data(normas, argc, argv))
		return (1);
	if (!init_forks(normas))
		return (1);
	if (!init_filos(normas))
		return (1);
	return (0);
}
