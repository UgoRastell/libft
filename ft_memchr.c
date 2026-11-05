/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:44:15 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 16:59:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memchr(const void *ptr, int ch, size_t count)
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
