/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:21:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 17:54:43 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
** Test rapide de ft_putstr_fd. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_putstr_fd.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
int	main(void)
{
	ft_putstr_fd("ft_putstr_fd(\"salut 42\", 1) -> [", 1);
	ft_putstr_fd("salut 42", 1);
	ft_putstr_fd("]  (attendu [salut 42])\n", 1);
	ft_putstr_fd("ft_putstr_fd(\"\", 1)         -> [", 1);
	ft_putstr_fd("", 1);
	ft_putstr_fd("]  (attendu [])\n", 1);
	return (0);
}
*/
