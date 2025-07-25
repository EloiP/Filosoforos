/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:13:40 by epascual          #+#    #+#             */
/*   Updated: 2025/07/25 12:49:16 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILO_H
# define FILO_H
//Includes
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

//types
typedef long long		t_im;
typedef pthread_t		t_hilo;
typedef pthread_mutex_t	t_mutex;

//Structs
//Info de cada filosofo
typedef struct s_filo
{
	int		id;
	t_hilo	hid;
	int		*lfork;
	int		*rfork;
	tim		ultcomida;
	t_n		normas;
}	t_filo;

//Info de las normas
//n = numero filosofos m = milis morir c=milis comer v=veces comer
typedef struct s_normas
{
	int	n;
	int	m;
	int	c;
	int	v;
}	t_n;

//Funciones
int		ft_atoi(const char *str);
int		parsn(int n, int m, int c, int v);

//time
t_im	actual(void);
t_im	timediff(t_im past, t_im pres);

//print
int		ft_puterror(char const *s);
void	ft_printestate(int status, t_filo *filo);

#endif
