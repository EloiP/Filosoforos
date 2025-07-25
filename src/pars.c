/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:54:55 by epascual          #+#    #+#             */
/*   Updated: 2025/07/25 12:22:46 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

//Comprueba que los datos esten en rango
int	parsn(int n, int m, int c, int v)
{
	if (n < 1 || n > 200)
		return (0);
	if (m < 60 || m > 200)
		return (0);
	if (c < 60 || c > 200)
		return (0);
	if (v == -1)
		return (1);
	if (v < 0 || v > 2147483647 || v == -1)
		return (0);
	return (1);
}

//Mete datos en el struct de normas
int	init_data(t_n*norm, int argc, char**argv)
{
	norm->v = -1;
	norm->n = ft_atoi(argv[1]);
	norm->m = ft_atoi(argv[2]);
	norm->c = ft_atoi(argv[3]);
	if (argc == 5)
		norm->v = ft_atoi(argv[4]);
	if (!parsn(norm->n, norm->m, norm->c, norm->v))
		return (1);
}
