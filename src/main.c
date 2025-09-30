/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:38:27 by epascual          #+#    #+#             */
/*   Updated: 2025/09/30 21:18:29 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filo.h"

int	main(int argc, char **argv)
{
	t_n		*normas;
	t_filo	**philos;
	t_mutex	**forks;

	if (argc != 4 && argc != 5)
		return (ft_puterror("Argument number Error\n"));
	normas = (t_n *)ft_calloc(sizeof(normas));
	if (init(normas, philos, argc, argv, forks))
		return (ft_puterror("Argument parsing Error\n"));
	
	//printf("Argumentos: %i %i %i %i\n", normas->n, normas->m, normas->c, normas->v);
	/*if (launcher(&normas, &philos))
		return ((ft_puterror("Thread Error\n")));
	*/return (0);
}
