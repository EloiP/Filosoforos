/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:48:11 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 20:24:05 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

void	*rutina(t_filo*filosofo)
{
	while (filosofo->status != 0)
	{
	/*	pensar(filosofo);
		comer(filosofo);
		dormir(filosofo);*/
	}
	ft_printestate(0, filosofo, actual());
	return (NULL);
}
