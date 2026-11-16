/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:59:20 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 12:10:10 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
** Test rapide de ft_strtrim. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strtrim.c libft.a && ./a.out
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
	show("ft_strtrim(\"  xxhixx \", \" x\")", ft_strtrim("  xxhixx ", " x"),
		"hi");
	show("ft_strtrim(\"xxxx\", \"x\")      ", ft_strtrim("xxxx", "x"), "");
	show("ft_strtrim(\"\", \"x\")          ", ft_strtrim("", "x"), "");
	show("ft_strtrim(\"abc\", \"\")        ", ft_strtrim("abc", ""), "abc");
	show("ft_strtrim(\"a-b-a\", \"a\")     ", ft_strtrim("a-b-a", "a"),
		"-b-");
	return (0);
}
*/
