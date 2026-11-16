/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:54:02 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;

	p = ptr;
	while (count > 0)
	{
		*p = value;
		p++;
		count--;
	}
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char	buf[11];

	buf[10] = '\0';
	ft_memset(buf, 'x', 10);
	printf("ft_memset(buf, 'x', 10) -> \"%s\"  (attendu \"xxxxxxxxxx\")\n",
		buf);
	ft_memset(buf, 'A', 3);
	printf("ft_memset(buf, 'A', 3)  -> \"%s\"  (attendu \"AAAxxxxxxx\")\n",
		buf);
	ft_memset(buf, 'z', 0);
	printf("ft_memset(buf, 'z', 0)  -> \"%s\"  (attendu \"AAAxxxxxxx\")\n",
		buf);
	printf("renvoie buf : %d  (attendu 1)\n", ft_memset(buf, 'A', 1) == buf);
	return (0);
}
*/
