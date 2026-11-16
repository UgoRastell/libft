/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:44:36 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
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
	show("ft_strrchr(s, 'o') ", s, ft_strrchr(s, 'o'));
	show("strrchr(s, 'o')    ", s, strrchr(s, 'o'));
	show("ft_strrchr(s, 'l') ", s, ft_strrchr(s, 'l'));
	show("strrchr(s, 'l')    ", s, strrchr(s, 'l'));
	show("ft_strrchr(s, '\\0')", s, ft_strrchr(s, '\0'));
	show("strrchr(s, '\\0')   ", s, strrchr(s, '\0'));
	show("ft_strrchr(s, 'z') ", s, ft_strrchr(s, 'z'));
	show("strrchr(s, 'z')    ", s, strrchr(s, 'z'));
	return (0);
}
*/
