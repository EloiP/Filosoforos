/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:25:00 by epascual          #+#    #+#             */
/*   Updated: 2025/08/07 14:54:01 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

void	detach_philo_array(t_filo **philos)
{
	t_hilo	thread;
	size_t	i;

	i = 0;
	while (philos[i])
	{
		pthread_create(&thread, NULL, \
				(void) rutina, philos[i]);
		pthread_detach(thread);
		i++;
	}
	//pthread_mutex_unlock(philos[0]->print);
}
