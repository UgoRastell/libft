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

#include <stddef.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*p;
	unsigned char	*q;

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
