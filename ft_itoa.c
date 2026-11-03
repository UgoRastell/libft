/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:54 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 12:05:57 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int nb, char *base)
{
	char	*result;
	int		len;
	int		neg;

	neg = 0;
	if (nb == 0)
		return (zero_case(base));
	if (nb < 0)
		neg = 1;
	len = count_digits(nb, base);
	result = malloc(sizeof(char) * (len + neg + 1));
	if (!result)
		return (NULL);
	result[len + neg] = '\0';
	fill_result(result, nb, base, neg);
	return (result);
}
