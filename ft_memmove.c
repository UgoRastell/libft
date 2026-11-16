/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:49:19 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[11];
	char	b[11];

	ft_memcpy(a, "0123456789", 11);
	ft_memcpy(b, "0123456789", 11);
	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);
	printf("dest apres src (a + 2, a, 5) : \"%s\"  (memmove : \"%s\")\n",
		a, b);
	ft_memmove(a, a + 3, 5);
	memmove(b, b + 3, 5);
	printf("dest avant src (a, a + 3, 5) : \"%s\"  (memmove : \"%s\")\n",
		a, b);
	printf("ft_memmove(NULL, NULL, 5) == NULL : %d  (attendu 1)\n",
		ft_memmove(NULL, NULL, 5) == NULL);
	return (0);
}
*/
