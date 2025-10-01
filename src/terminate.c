/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:40 by epascual          #+#    #+#             */
/*   Updated: 2025/10/01 12:33:41 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

void	free_forks(t_mutex**forks)
{
	int	i;

	if (!forks)
		return ;
	i = 0;
	while (forks[i])
	{
		ft_mutex_destroy(forks[i]);
		i++;
	}
	free(forks);
}

void	terminate(t_n *normas, t_mutex **forks, t_filo**philos)
{
	free(normas);
	free_forks(forks);
	free(philos);
}
