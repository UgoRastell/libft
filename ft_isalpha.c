/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:04:01 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_isalpha('a') = %d  (attendu 1)\n", ft_isalpha('a'));
	printf("ft_isalpha('Z') = %d  (attendu 1)\n", ft_isalpha('Z'));
	printf("ft_isalpha('5') = %d  (attendu 0)\n", ft_isalpha('5'));
	printf("ft_isalpha(-1) = %d  (attendu 0)\n", ft_isalpha(-1));
	c = -1;
	while (c <= 255)
	{
		if (ft_isalpha(c) != !!isalpha(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec isalpha de -1 a 255 : terminee\n");
	return (0);
}
*/
