/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:38:27 by epascual          #+#    #+#             */
/*   Updated: 2025/06/16 19:08:11 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

int	main(int argc, char **argv)
{
	int	n;
	int	m;
	int	c;
	int	v;

	v = -1;
	if (argc == 5 || argc == 4)
	{
		n = ft_atoi(argv[1]);
		m = ft_atoi(argv[2]);
		c = ft_atoi(argv[3]);
		//philo();
		if (argc == 5)
			v = ft_atoi(argv[4]);
		if (!parsn(n, m, c, v))
			return (printf("Argument parsing Error\n"));
	}
	else
	{
		return (printf("Argument number Error\n"));
	}
	printf("1:%s=%d 2:%s=%d 3:%s=%d 4:%s=%d", argv[1], n, argv[2], m, argv[3], c, argv[4], v);
	return (0);
}
