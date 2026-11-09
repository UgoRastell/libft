/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:35:20 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 12:34:12 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (num * size))
	{
		(*(unsigned char *)(ptr + i)) = 0;
		i++;
	}
	return (ptr);
}
