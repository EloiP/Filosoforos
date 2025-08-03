/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:35:48 by epascual          #+#    #+#             */
/*   Updated: 2025/08/03 01:37:23 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

void	*ft_calloc(unsigned long nelem)
{
	void	*ptr;

	if ((nelem) > 2147483647)
		return (NULL);
	ptr = (void *)malloc(nelem);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelem);
	return (ptr);
}
