/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:44:15 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 17:06:57 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p = ptr;
	unsigned char		target;
	size_t				i;

	target = (unsigned char)ch;
	while (i == 0 && i < count)
	{
		if (p[i] == target)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
