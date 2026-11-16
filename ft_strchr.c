/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:57:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

static void	show(const char *call, const char *s, const char *got)
{
	if (got)
		printf("%s -> s + %ld\n", call, (long)(got - s));
	else
		printf("%s -> NULL\n", call);
}

int	main(void)
{
	const char	*s;

	s = "hello world";
	show("ft_strchr(s, 'o')      ", s, ft_strchr(s, 'o'));
	show("strchr(s, 'o')         ", s, strchr(s, 'o'));
	show("ft_strchr(s, '\\0')     ", s, ft_strchr(s, '\0'));
	show("strchr(s, '\\0')        ", s, strchr(s, '\0'));
	show("ft_strchr(s, 'z')      ", s, ft_strchr(s, 'z'));
	show("strchr(s, 'z')         ", s, strchr(s, 'z'));
	show("ft_strchr(s, 'h' + 256)", s, ft_strchr(s, 'h' + 256));
	show("strchr(s, 'h' + 256)   ", s, strchr(s, 'h' + 256));
	return (0);
}
*/
