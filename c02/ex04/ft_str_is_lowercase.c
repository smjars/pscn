/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:13:21 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/19 18:42:20 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] < 'a' || str[ct] > 'z' )
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
	n = ft_str_is_lowercase(argv[1]);
	c = n +48;
	write(1, &c,1);
}*/
