/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:57:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 14:43:42 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
** Test rapide de ft_strchr. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strchr.c libft.a && ./a.out
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

	s = "hello world";
	show("ft_strchr(s, 'o')      ", s, ft_strchr(s, 'o'));
	show("strchr(s, 'o')         ", s, strchr(s, 'o'));
	show("ft_strchr(s, '\\0')     ", s, ft_strchr(s, '\0'));
	show("strchr(s, '\\0')        ", s, strchr(s, '\0'));
	show("ft_strchr(s, 'z')      ", s, ft_strchr(s, 'z'));
	show("strchr(s, 'z')         ", s, strchr(s, 'z'));
	show("ft_strchr(s, 'h' + 256)", s, ft_strchr(s, 'h' + 256));
	show("strchr(s, 'h' + 256)   ", s, strchr(s, 'h' + 256));
	return (0);
}
*/
