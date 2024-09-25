/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:18:10 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/28 23:33:46 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cnt;

	if (nb <= 1)
		return (0);
	cnt = 2;
	while (cnt <= nb / cnt)
	{
		if (nb % cnt == 0)
			return (0);
		cnt++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(17));
	return (0);
}*/
