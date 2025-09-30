/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:29:59 by epascual          #+#    #+#             */
/*   Updated: 2025/09/29 12:32:58 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

//Imprime errores por su salida
int	ft_puterror(char const *s)
{
	while (*s != 0)
	{
		write(2, s, 1);
		s++;
	}
	return (1);
}

//Imprime el estado del filosofo
void	ft_printestate(char status, t_filo *filo, t_im timestamp)
{
	if (status == 5)
		printf("Synchronizando\n");
	if (status == 4)
		printf("%lld %i has taken a fork\n", timestamp, filo->id);
	if (status == 1)
		printf("%lld %i is eating\n", timestamp, filo->id);
	if (status == 2)
		printf("%lld %i is sleeping\n", timestamp, filo->id);
	if (status == 3)
		printf("%lld %i is thinking\n", timestamp, filo->id);
	if (status == 0)
		printf("%lld %i died\n", timestamp, filo->id);
}
