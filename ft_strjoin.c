/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:11:29 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 11:59:07 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, len1);
	ft_memcpy(join + len1, s2, len2 + 1);
	return (join);
}

/*
** Test rapide de ft_strjoin. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strjoin.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

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
	show("ft_strjoin(\"ab\", \"cd\")", ft_strjoin("ab", "cd"), "abcd");
	show("ft_strjoin(\"\", \"cd\")  ", ft_strjoin("", "cd"), "cd");
	show("ft_strjoin(\"ab\", \"\")  ", ft_strjoin("ab", ""), "ab");
	show("ft_strjoin(\"\", \"\")    ", ft_strjoin("", ""), "");
	return (0);
}
*/
