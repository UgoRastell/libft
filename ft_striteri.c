/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:39:36 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 17:49:33 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
** Test rapide de ft_striteri. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_striteri.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

static void	star_second(unsigned int i, char *c)
{
	if (i == 1)
		*c = '*';
}

int	main(void)
{
	char	s[4];
	char	e[1];

	ft_strlcpy(s, "abc", 4);
	ft_striteri(s, star_second);
	printf("ft_striteri(\"abc\", star_second) -> \"%s\"  (attendu \"a*c\")\n",
		s);
	e[0] = '\0';
	ft_striteri(e, star_second);
	printf("ft_striteri(\"\", star_second)    -> \"%s\"     (attendu \"\")\n",
		e);
	return (0);
}
*/
