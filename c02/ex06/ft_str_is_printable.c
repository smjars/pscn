/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:32:28 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/19 20:54:07 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	pr;

	pr = 0;
	while (str[pr] != '\0')
	{
		if (str[pr] < 32 || str[pr] > 127)
			return (0);
		pr++;
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
		write(1, "Error\n", 6);
		return (0);
	}
	n = ft_str_is_printable(argv[1]);
	c = n +48;
	write(1, &c,1);
}*/
