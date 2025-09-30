/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:46:40 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 20:41:24 by epascual         ###   ########.fr       */
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

void	terminate(t_filo**philos)
{
	free(philos);
}
