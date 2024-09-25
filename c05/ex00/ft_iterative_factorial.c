/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:35:21 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/27 19:29:51 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbf;
	int	cont;

	if (nb < 0)
		return (0);
	nbf = 1;
	cont = 1;
	while (cont <= nb)
	{
		nbf = nbf * cont;
		cont ++;
	}
	return (nbf);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
