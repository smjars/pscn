/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabetc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:16:23 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/12 12:24:13 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write (1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
