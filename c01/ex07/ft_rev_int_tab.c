/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:44:35 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/15 06:21:21 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	d;
	int	temp;

	i = 0;
	d = size - 1;
	while (i < d)
	{
		temp = tab[i];
		tab[i] = tab[d];
		tab[d] = temp;
		i++;
		d--;
	}
}
