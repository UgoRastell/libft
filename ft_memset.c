/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:54:02 by urastell          #+#    #+#             */
/*   Updated: 2026/11/04 15:24:29 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;

	p = ptr;
	while (count > 0)
	{
		*p = value;
		p++;
		count--;
	}
	return (ptr);
}

/*
** Test rapide de ft_memset. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_memset.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

int	main(void)
{
	char	buf[11];

	buf[10] = '\0';
	ft_memset(buf, 'x', 10);
	printf("ft_memset(buf, 'x', 10) -> \"%s\"  (attendu \"xxxxxxxxxx\")\n",
		buf);
	ft_memset(buf, 'A', 3);
	printf("ft_memset(buf, 'A', 3)  -> \"%s\"  (attendu \"AAAxxxxxxx\")\n",
		buf);
	ft_memset(buf, 'z', 0);
	printf("ft_memset(buf, 'z', 0)  -> \"%s\"  (attendu \"AAAxxxxxxx\")\n",
		buf);
	printf("renvoie buf : %d  (attendu 1)\n", ft_memset(buf, 'A', 1) == buf);
	return (0);
}
*/
