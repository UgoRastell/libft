/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:51:10 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 17:51:32 by urastell         ###   ########.fr       */
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
** Test rapide de ft_tolower. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_tolower.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	printf("ft_tolower('A') = %d  (attendu 'a' = 97)\n", ft_tolower('A'));
	printf("ft_tolower('z') = %d  (attendu 'z' = 122)\n", ft_tolower('z'));
	printf("ft_tolower('5') = %d  (attendu '5' = 53)\n", ft_tolower('5'));
	printf("ft_tolower(-1) = %d  (attendu -1)\n", ft_tolower(-1));
	c = -1;
	while (c <= 255)
	{
		if (ft_tolower(c) != tolower(c))
			printf("KO pour c = %d\n", c);
		c++;
	}
	printf("Comparaison avec tolower de -1 a 255 : terminee\n");
	return (0);
}
*/
