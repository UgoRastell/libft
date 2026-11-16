/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:04:01 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 17:12:11 by urastell         ###   ########.fr       */
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
** Test rapide de ft_isalpha. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_isalpha.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

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
