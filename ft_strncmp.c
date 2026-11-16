/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:19:23 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("(\"abc\", \"abc\", 3) : ft = %d  strncmp = %d\n",
		ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("(\"abc\", \"abd\", 3) : ft = %d  strncmp = %d\n",
		ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("(\"abc\", \"abd\", 2) : ft = %d  strncmp = %d\n",
		ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
	printf("(\"abc\", \"ab\", 5)  : ft = %d  strncmp = %d\n",
		ft_strncmp("abc", "ab", 5), strncmp("abc", "ab", 5));
	printf("(\"\\200\", \"a\", 1)  : ft = %d  strncmp = %d\n",
		ft_strncmp("\200", "a", 1), strncmp("\200", "a", 1));
	printf("Seul le signe compte : 0, negatif ou positif.\n");
	return (0);
}
*/
