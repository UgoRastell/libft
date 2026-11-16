/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:52:06 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_isprint(' ') = %d  (attendu 1)\n", ft_isprint(' '));
	printf("ft_isprint('~') = %d  (attendu 1)\n", ft_isprint('~'));
	printf("ft_isprint(127) = %d  (attendu 0)\n", ft_isprint(127));
	printf("ft_isprint('\\n') = %d  (attendu 0)\n", ft_isprint('\n'));
	c = -1;
	while (c <= 255)
	{
		if (ft_isprint(c) != !!isprint(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec isprint de -1 a 255 : terminee\n");
	return (0);
}
*/
