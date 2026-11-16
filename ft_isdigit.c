/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:12:53 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 17:27:59 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
** Test rapide de ft_isdigit. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_isdigit.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_isdigit('0') = %d  (attendu 1)\n", ft_isdigit('0'));
	printf("ft_isdigit('9') = %d  (attendu 1)\n", ft_isdigit('9'));
	printf("ft_isdigit('a') = %d  (attendu 0)\n", ft_isdigit('a'));
	printf("ft_isdigit('/') = %d  (attendu 0)\n", ft_isdigit('/'));
	c = -1;
	while (c <= 255)
	{
		if (ft_isdigit(c) != !!isdigit(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec isdigit de -1 a 255 : terminee\n");
	return (0);
}
*/
