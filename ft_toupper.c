/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:27:47 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_toupper('a') -> '%c'  (attendu 'A')\n", ft_toupper('a'));
	printf("ft_toupper('Z') -> '%c'  (attendu 'Z')\n", ft_toupper('Z'));
	printf("ft_toupper('5') -> '%c'  (attendu '5')\n", ft_toupper('5'));
	printf("ft_toupper(-1)  -> %d   (attendu -1)\n", ft_toupper(-1));
	c = -1;
	while (c <= 255)
	{
		if (ft_toupper(c) != toupper(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec toupper de -1 a 255 : terminee\n");
	return (0);
}
*/
