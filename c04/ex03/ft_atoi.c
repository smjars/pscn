/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:32:44 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/27 16:30:55 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt;
	int	sig;
	int	rtn;

	cnt = 0;
	while ((str[cnt] >= '\t' && str[cnt] <= '\r') || str[cnt] == ' ')
		cnt++;
	sig = 0;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			sig++;
		cnt++;
	}
	rtn = 0;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		rtn = (rtn * 10) + (str[cnt] - '0');
		cnt++;
	}
	if (sig % 2 != 0)
		rtn = rtn * -1;
	return (rtn);
}
/*#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_atoi("   --+---+--+6342abc5c57"));
	return (0);
}*/
