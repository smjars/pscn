/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:15:50 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/12 14:38:01 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(char array[], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	ft_print_comb(void)
{
	char	n[5];

	n[0] = '0';
	n[3] = ',';
	n[4] = ' ';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] +1;
			while (n[2] <= '9')
			{
				if (n[0] == '7' && n[1] == '8' && n[2] == '9')
					write(1, "789", 3);
				else
					print_array(n, 5);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
