/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:10:39 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

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

	s = "lorem ipsum dolor sit";
	show("ft_strnstr(s, \"ipsum\", 30) (attendu s + 6)", s,
		ft_strnstr(s, "ipsum", 30));
	show("ft_strnstr(s, \"ipsum\", 11) (attendu s + 6)", s,
		ft_strnstr(s, "ipsum", 11));
	show("ft_strnstr(s, \"ipsum\", 10) (attendu NULL) ", s,
		ft_strnstr(s, "ipsum", 10));
	show("ft_strnstr(s, \"\", 0)       (attendu s + 0)", s,
		ft_strnstr(s, "", 0));
	show("ft_strnstr(s, \"sitx\", 30)  (attendu NULL) ", s,
		ft_strnstr(s, "sitx", 30));
	return (0);
}
*/
