/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:39:36 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
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
