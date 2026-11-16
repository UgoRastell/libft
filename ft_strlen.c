/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:21:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
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
