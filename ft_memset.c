/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:54:02 by urastell          #+#    #+#             */
/*   Updated: 2026/11/04 14:03:58 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memset(void *ptr, int value, size_t count)
{
	int				i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (count > 0)
	{
		p = value;
		p++;
		count--;
	}
	return (ptr);
}
