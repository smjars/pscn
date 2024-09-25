/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:59:44 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/14 19:51:58 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	divicion;
	int	modulo;

	divicion = 0;
	modulo = 0;
	ft_div_mod(35, 10, &divicion, &modulo);
	return (0);
}*/
