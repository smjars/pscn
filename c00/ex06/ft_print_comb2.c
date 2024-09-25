/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:58:27 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/13 17:53:19 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_d(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	print_int(int n)
{
	if (n / 10 != 0)
	{
		print_int(n / 10);
	}
	print_d(n % 10);
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] < 99)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			if (num[0] < 10)
				write(1, "0", 1);
			print_int(num[0]);
			write(1, " ", 1);
			if (num[1] < 10)
				write(1, "0", 1);
			print_int(num[1]);
			if (!(num[0] == 98 && num[1] == 99))
				write(1, ", ", 2);
			num[1]++;
		}
		num[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
