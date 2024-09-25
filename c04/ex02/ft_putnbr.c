/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:14:01 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/25 19:27:41 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int p)
{
	char	cp;

	cp = p + '0';
	write (1, &cp, 1);
}

void	recursive(int rc)
{
	if (rc / 10 != 0)
		recursive(rc / 10);
	print(rc % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -(nb);
		write(1, "-", 1);
	}
	recursive(nb);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
