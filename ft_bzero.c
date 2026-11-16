/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:07:43 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:59:10 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	buf[7];
	int		i;

	ft_memcpy(buf, "abcdef", 7);
	ft_bzero(buf + 2, 2);
	printf("ft_bzero(buf + 2, 2) sur \"abcdef\" -> ");
	i = 0;
	while (i < 6)
	{
		if (buf[i])
			printf("%c", buf[i]);
		else
			printf("\\0");
		i++;
	}
	printf("  (attendu ab\\0\\0ef)\n");
	return (0);
}
*/
