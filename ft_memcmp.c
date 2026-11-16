/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:47:01 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	const unsigned char	*p;
	const unsigned char	*q;

	p = ptr1;
	q = ptr2;
	while (size > 0)
	{
		if (*p != *q)
			return (*p - *q);
		size--;
		p++;
		q++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("(\"abc\", \"abc\", 3)    : ft = %d  memcmp = %d\n",
		ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));
	printf("(\"abc\", \"abd\", 3)    : ft = %d  memcmp = %d\n",
		ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));
	printf("(\"abc\", \"abd\", 2)    : ft = %d  memcmp = %d\n",
		ft_memcmp("abc", "abd", 2), memcmp("abc", "abd", 2));
	printf("(\"a\\0b\", \"a\\0c\", 3) : ft = %d  memcmp = %d\n",
		ft_memcmp("a\0b", "a\0c", 3), memcmp("a\0b", "a\0c", 3));
	printf("(\"\\200\", \"\\0\", 1)   : ft = %d  memcmp = %d\n",
		ft_memcmp("\200", "\0", 1), memcmp("\200", "\0", 1));
	printf("Seul le signe compte : 0, negatif ou positif.\n");
	return (0);
}
*/
