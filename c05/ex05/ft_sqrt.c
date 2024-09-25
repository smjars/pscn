/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:21:49 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/28 23:11:01 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	cnt;

	cnt = 0;
	if (nb < 0)
		return (0);
	while (cnt * cnt <= nb)
	{
		if (cnt * cnt == nb)
			return (cnt);
		cnt++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(9));
	return (0);
}*/
