/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:51:10 by urastell          #+#    #+#             */
/*   Updated: 2026/11/17 11:54:59 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_tolower('A') -> '%c'  (attendu 'a')\n", ft_tolower('A'));
	printf("ft_tolower('z') -> '%c'  (attendu 'z')\n", ft_tolower('z'));
	printf("ft_tolower('5') -> '%c'  (attendu '5')\n", ft_tolower('5'));
	printf("ft_tolower(-1)  -> %d   (attendu -1)\n", ft_tolower(-1));
	c = -1;
	while (c <= 255)
	{
		if (ft_tolower(c) != tolower(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec tolower de -1 a 255 : termine\n");
	return (0);
}
*/
