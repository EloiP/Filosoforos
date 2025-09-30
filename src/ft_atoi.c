/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:04:20 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 19:43:01 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

int	ft_atoi(const char *n)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while ((n[i] >= '\t' && n[i] <= '\r') || n[i] == ' ')
		i++;
	if (n[i] == '+')
		i++;
	if (n[i] == '-')
		return (-2);
	while (n[i] >= '0' && n[i] <= '9')
	{
		res = res * 10;
		res = res + n[i] - '0';
		i++;
	}
	return (res);
}
