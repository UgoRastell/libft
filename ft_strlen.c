/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:21:17 by urastell          #+#    #+#             */
/*   Updated: 2026/07/06 18:41:54 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
** Test rapide de ft_strlen. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_strlen.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strlen(\"\")            = %zu  (strlen : %zu)\n",
		ft_strlen(""), strlen(""));
	printf("ft_strlen(\"a\")           = %zu  (strlen : %zu)\n",
		ft_strlen("a"), strlen("a"));
	printf("ft_strlen(\"hello world\") = %zu  (strlen : %zu)\n",
		ft_strlen("hello world"), strlen("hello world"));
	return (0);
}
*/
