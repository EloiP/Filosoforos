/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:25:00 by epascual          #+#    #+#             */
/*   Updated: 2025/08/07 14:13:20 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

void	detach_philo_array(t_filo **philo_array)
{
	t_hilo	thread;
	size_t		i;

	i = 0;
	while (philo_array[i])
	{
		pthread_create(&thread, NULL, \
				(void) rutina, philo_array[i]);
		pthread_detach(thread);
		i++;
	}
	//pthread_mutex_unlock(philo_array[0]->print);
}
