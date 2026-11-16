/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:42:28 by urastell          #+#    #+#             */
/*   Updated: 2026/11/04 15:48:40 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
** Test rapide de ft_memcpy. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_memcpy.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

int	main(void)
{
	char	buf[11];

	ft_memset(buf, 'x', 10);
	buf[10] = '\0';
	ft_memcpy(buf, "abc", 3);
	printf("ft_memcpy(buf, \"abc\", 3) -> \"%s\"  (attendu \"abcxxxxxxx\")\n",
		buf);
	ft_memcpy(buf, "zz", 0);
	printf("ft_memcpy(buf, \"zz\", 0)  -> \"%s\"  (attendu \"abcxxxxxxx\")\n",
		buf);
	printf("renvoie buf : %d  (attendu 1)\n", ft_memcpy(buf, "a", 1) == buf);
	printf("ft_memcpy(NULL, NULL, 3) == NULL : %d  (attendu 1)\n",
		ft_memcpy(NULL, NULL, 3) == NULL);
	return (0);
}
*/
