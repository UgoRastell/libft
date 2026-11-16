/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:46:05 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
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
