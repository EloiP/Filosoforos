/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:38:27 by epascual          #+#    #+#             */
/*   Updated: 2025/08/07 14:56:28 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

int	main(int argc, char **argv)
{
	t_n	normas;

	if (argc != 5 && argc != 6)
		return (ft_puterror("Argument number Error\n"));
	if (init_data(&normas, argc, argv))
		return (ft_puterror("Argument parsing Error\n"));
	if (launcher(&normas))
		return ((ft_puterror("Thread Error\n")));
	return (0);
}
