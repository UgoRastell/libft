/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:47:01 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 17:09:59 by urastell         ###   ########.fr       */
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
** Test rapide de ft_memcmp. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_memcmp.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

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
