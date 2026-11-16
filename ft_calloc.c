/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:35:20 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:59:14 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
#include <stdio.h>
#include <stdint.h>

int	main(void)
{
	int		*p;
	void	*z;
	int		i;

	p = ft_calloc(5, sizeof(int));
	printf("ft_calloc(5, sizeof(int)) -> ");
	i = 0;
	while (p && i < 5)
		printf("%d ", p[i++]);
	printf(" (attendu 0 0 0 0 0)\n");
	free(p);
	z = ft_calloc(0, 0);
	printf("ft_calloc(0, 0) != NULL         : %d  (attendu 1)\n", z != NULL);
	free(z);
	printf("ft_calloc(SIZE_MAX, 2) == NULL  : %d  (attendu 1)\n",
		ft_calloc(SIZE_MAX, 2) == NULL);
	return (0);
}
*/
