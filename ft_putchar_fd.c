/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:03:32 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 15:20:23 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** Test rapide de ft_putchar_fd. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_putchar_fd.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
int	main(void)
{
	ft_putstr_fd("ft_putchar_fd('a', 1) -> ", 1);
	ft_putchar_fd('a', 1);
	ft_putstr_fd("  (attendu a)\n", 1);
	ft_putstr_fd("ft_putchar_fd('E', 2) -> ", 1);
	ft_putchar_fd('E', 2);
	ft_putstr_fd("  (attendu E, sur la sortie d'erreur)\n", 1);
	return (0);
}
*/
