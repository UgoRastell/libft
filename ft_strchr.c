/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:57:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 16:31:48 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *string, int c)
{
	while (string++)
	{
		if (*string == c)
			return (string);
		if (!*string)
			return (NULL);
	}
	return (NULL);
}
