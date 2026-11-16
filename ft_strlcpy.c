/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:22:43 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 14:30:28 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
** Test rapide de ft_strlcpy. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strlcpy.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

int	main(void)
{
	char	buf[20];
	size_t	r;

	r = ft_strlcpy(buf, "hello world", 6);
	printf("(buf, \"hello world\", 6)  -> %zu \"%s\"  (attendu 11 \"hello\")\n",
		r, buf);
	r = ft_strlcpy(buf, "abc", 0);
	printf("(buf, \"abc\", 0)          -> %zu \"%s\"  (attendu 3 \"hello\")\n",
		r, buf);
	r = ft_strlcpy(buf, "hi", 20);
	printf("(buf, \"hi\", 20)          -> %zu \"%s\"     (attendu 2 \"hi\")\n",
		r, buf);
	return (0);
}
*/
