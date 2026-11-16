/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:58:55 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	tofill;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	i = 0;
	tofill = size - destlen - 1;
	if (destlen >= size)
		return (size + srclen);
	while (src[i] && tofill--)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}

/*
#include <stdio.h>

int	main(void)
{
	char	buf[8];
	size_t	r;

	ft_strlcpy(buf, "abc", 8);
	r = ft_strlcat(buf, "def", 8);
	printf("(\"abc\", \"def\", 8)      -> %zu \"%s\"", r, buf);
	printf("   (attendu 6 \"abcdef\")\n");
	r = ft_strlcat(buf, "ghijk", 8);
	printf("(\"abcdef\", \"ghijk\", 8) -> %zu \"%s\"", r, buf);
	printf(" (attendu 11 \"abcdefg\")\n");
	r = ft_strlcat(buf, "xyz", 2);
	printf("(\"abcdefg\", \"xyz\", 2)  -> %zu \"%s\"", r, buf);
	printf("  (attendu 5 \"abcdefg\")\n");
	return (0);
}
*/
