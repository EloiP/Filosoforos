/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmutex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:49:06 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 17:34:02 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

t_mutex	*ft_mutex_init(void)
{
	t_mutex	*mutex;

	mutex = ft_calloc(sizeof(t_mutex));
	if (!mutex)
		return (NULL);
	pthread_mutex_init(mutex, NULL);
	return (mutex);
}

void	ft_mutex_destroy(t_mutex *mutex)
{
	pthread_mutex_destroy(mutex);
	free(mutex);
}
