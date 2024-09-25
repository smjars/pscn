/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:55:05 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/19 20:27:53 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] < 'A' || str[ct] > 'Z' )
			return (0);
		ct++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	int	n;
	char	c;
	
	if (argc > 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	n = ft_str_is_uppercase(argv[1]);
	c = n +48;
	write(1, &c,1);
}*/
