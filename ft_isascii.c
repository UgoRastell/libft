/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:13:22 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 17:09:08 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
** Test rapide de ft_isascii. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_isascii.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_isascii('a') = %d  (attendu 1)\n", ft_isascii('a'));
	printf("ft_isascii(127) = %d  (attendu 1)\n", ft_isascii(127));
	printf("ft_isascii(128) = %d  (attendu 0)\n", ft_isascii(128));
	printf("ft_isascii(-1) = %d  (attendu 0)\n", ft_isascii(-1));
	c = -1;
	while (c <= 255)
	{
		if (ft_isascii(c) != !!isascii(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec isascii de -1 a 255 : terminee\n");
	return (0);
}
*/
