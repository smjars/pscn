/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:10:08 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/19 15:49:12 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
			return (0);
		c++;
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
	n = ft_str_is_numeric(argv[1]);
	c = n +48;
	write(1, &c,1);
}*/
