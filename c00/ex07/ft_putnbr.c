/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:05:00 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/13 19:09:03 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_one_int(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	print_one_int(nb % 10);
}
/*
int	main(void)
{
	ft_putnbr(8954213);
	return (0);
}*/
