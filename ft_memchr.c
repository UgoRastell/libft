/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:44:15 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 11:29:49 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p = ptr;
	unsigned char		target;
	size_t				i;

	target = ch;
	i = 0;
	while (i < count)
	{
		if (p[i] == target)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}

/*
** Test rapide de ft_memchr. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_memchr.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <string.h>

static void	show(const char *call, const char *s, const char *got)
{
	if (got)
		printf("%s -> s + %ld\n", call, (long)(got - s));
	else
		printf("%s -> NULL\n", call);
}

int	main(void)
{
	const char	*s;

	s = "hello\0world";
	show("ft_memchr(s, 'l', 11)", s, ft_memchr(s, 'l', 11));
	show("memchr(s, 'l', 11)   ", s, memchr(s, 'l', 11));
	show("ft_memchr(s, 'w', 11)", s, ft_memchr(s, 'w', 11));
	show("memchr(s, 'w', 11)   ", s, memchr(s, 'w', 11));
	show("ft_memchr(s, 'w', 5) ", s, ft_memchr(s, 'w', 5));
	show("memchr(s, 'w', 5)    ", s, memchr(s, 'w', 5));
	return (0);
}
*/
