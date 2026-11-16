/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:06:54 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 17:16:55 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** Test rapide de ft_strmapi. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strmapi.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

static char	up_odd(unsigned int i, char c)
{
	if (i % 2 == 1)
		return (ft_toupper(c));
	return (c);
}

static void	show(const char *call, char *got, const char *want)
{
	if (got)
		printf("%s -> \"%s\"  (attendu \"%s\")\n", call, got, want);
	else
		printf("%s -> NULL  (attendu \"%s\")\n", call, want);
	free(got);
}

int	main(void)
{
	show("ft_strmapi(\"abcd\", up_odd)", ft_strmapi("abcd", up_odd), "aBcD");
	show("ft_strmapi(\"\", up_odd)    ", ft_strmapi("", up_odd), "");
	return (0);
}
*/
