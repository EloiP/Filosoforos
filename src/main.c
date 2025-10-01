/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:38:27 by epascual          #+#    #+#             */
/*   Updated: 2025/10/01 12:20:47 by epascual         ###   ########.fr       */
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
	if (!init_data(normas, argc, argv))
		return (ft_puterror("Argument parsing Error\n"));
	forks = init_forks(normas);
	if (!forks)
		return (ft_puterror("Fork malloc Error\n"));
	philos = ft_calloc(sizeof(t_filo) * normas->n);
	if (!init_filos(normas, philos, forks))
		return (ft_puterror("Filosofers initiation Error\n"));
	terminate(normas, forks, philos);
	//printf("Argumentos: %i %i %i %i\n", normas->n, normas->m, normas->c, normas->v);
	/*if (launcher(normas, philos))
		return ((ft_puterror("Thread Error\n")));
	*/return (0);
}
