/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:50:01 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/20 22:35:06 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || (str[c] > 'Z' && str[c] < 'a' ) || str[c] > 'z')
			return (0);
		c++;
	}
	return (1);
}
/*
int 	main(void)
{
	int	ret;
	char	p;

	ret = ft_str_is_alpha("asdasdawgghhnjkkk");
	p = ret + 48;
	write (1,&p,1);
	return (0);
}*/
