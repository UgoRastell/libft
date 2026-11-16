/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:46:05 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 12:36:24 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}

/*
** Test rapide de ft_strdup. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strdup.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

int	main(void)
{
	const char	*s;
	char		*d;

	s = "hello world";
	d = ft_strdup(s);
	printf("ft_strdup(\"%s\") -> \"%s\"\n", s, d);
	printf("nouvelle adresse : %d  (attendu 1)\n", d != s);
	free(d);
	d = ft_strdup("");
	printf("ft_strdup(\"\") -> \"%s\"  (attendu \"\")\n", d);
	free(d);
	return (0);
}
*/
