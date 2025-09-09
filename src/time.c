/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:00:51 by epascual          #+#    #+#             */
/*   Updated: 2025/07/23 17:06:20 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

t_im	actual(void)
{
	struct timeval	t;

	gettimeofday(&t, NULL);
	return ((t.tv_sec * 1000) + (t.tv_usec / 1000));
}

t_im	timediff(t_im past, t_im pres)
{
	return (pres - past);
}
