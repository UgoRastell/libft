/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:27:47 by urastell          #+#    #+#             */
/*   Updated: 2026/11/04 14:16:14 by urastell         ###   ########.fr       */
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
** Test rapide de ft_toupper. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_toupper.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_toupper('a') = %d  (attendu 'A' = 65)\n", ft_toupper('a'));
	printf("ft_toupper('Z') = %d  (attendu 'Z' = 90)\n", ft_toupper('Z'));
	printf("ft_toupper('5') = %d  (attendu '5' = 53)\n", ft_toupper('5'));
	printf("ft_toupper(-1) = %d  (attendu -1)\n", ft_toupper(-1));
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
