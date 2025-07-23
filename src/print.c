/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:29:59 by epascual          #+#    #+#             */
/*   Updated: 2025/07/23 17:47:35 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

//Imprime errores por su salida
void	ft_puterror(char const *s)
{
	while (*s != 0)
	{
		write(2, s, 1);
		s++;
	}
}

//Imprime el estado del filosofo
void	ft_printestate(int status, t_filo *filo)
{
	if (status == 0)
		printf("%d %i has taken a fork\n", filo->id);
	if (status == 1)
		printf("%d %i is eating\n", filo->id);
	if (status == 2)
		printf("%d %i is sleeping\n", filo->id);
	if (status == 3)
		printf("%d %i is thinking\n", filo->id);
	if (status == 4)
		printf("%d %i died\n", filo->id);
}
