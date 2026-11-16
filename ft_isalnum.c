/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:22:18 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 15:20:53 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
** Test rapide de ft_isalnum. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_isalnum.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_isalnum('a') = %d  (attendu 1)\n", ft_isalnum('a'));
	printf("ft_isalnum('7') = %d  (attendu 1)\n", ft_isalnum('7'));
	printf("ft_isalnum(' ') = %d  (attendu 0)\n", ft_isalnum(' '));
	printf("ft_isalnum('_') = %d  (attendu 0)\n", ft_isalnum('_'));
	c = -1;
	while (c <= 255)
	{
		if (ft_isalnum(c) != !!isalnum(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec isalnum de -1 a 255 : terminee\n");
	return (0);
}
*/
