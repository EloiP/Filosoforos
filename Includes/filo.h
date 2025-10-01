/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:13:40 by epascual          #+#    #+#             */
/*   Updated: 2025/10/01 12:32:56 by epascual         ###   ########.fr       */
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
//Info de las normas
//n = numero filosofos m = milis morir c=milis comer v=veces comer
typedef struct s_normas
{
	int	n;
	int	m;
	int	c;
	int	v;
}	t_n;

//Info de cada filosofo
typedef struct s_filo
{
	int		id;
	t_hilo	hid;
	char	status;
	int		*lfork;
	int		*rfork;
	t_mutex	mlfork;
	t_mutex	mrfork;
	t_mutex	sinchro;
	t_im	ultcomida;
	t_n		normas;
}	t_filo;

//Funciones
int		ft_atoi(const char *str);
void	*ft_calloc(unsigned long nelem);
void	ft_bzero(void *s, size_t n);

//pars
int		parsn(int n, int m, int c, int v);
int		init_data(t_n*norm, int argc, char**argv);

//launch
void	detach_philo_array(t_filo **philos);

//init
t_mutex		**init_forks(t_n*normas);
t_filo	fill_filo(int id, t_n *normas);
int		init_filos(t_n *normas, t_filo **philos, t_mutex **forks);
int		init(t_n *normas, t_filo **philos, int argc, char **argv, t_mutex**forks);

//time
t_im	actual(void);
t_im	timediff(t_im past, t_im pres);

//readmutex
t_mutex	*ft_mutex_init(void);
void	ft_mutex_destroy(t_mutex *mutex);

//terminate
void	terminate(t_n* normas, t_mutex **forks, t_filo**philos);
void	free_forks(t_mutex**forks);

//updatemutexes

//print
int		ft_puterror(char const *s);
void	ft_printestate(char status, t_filo *filo, t_im time);


//actions
void	*rutina(t_filo*filosofo);
#endif
