/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:04:27 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/28 23:12:54 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pwr;
	int	rtr;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pwr = 1;
	rtr = nb;
	while (pwr < power)
	{
		rtr = rtr * nb;
		pwr++;
	}
	return (rtr);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(34, 0));
	return (0);
}*/
