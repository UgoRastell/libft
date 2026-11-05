/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:58:55 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 15:08:42 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcat(char *destination, const char *source, size_t destinationSize)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	while (destination[i])
		i++;
	while (source[j] && j < destinationSize)
	{
		destination[i + j] = source[j];
		j++;
	}
	destination[i + j] = '\0';
	return (destination);
}
