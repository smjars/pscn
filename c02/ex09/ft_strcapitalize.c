/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:47:08 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/20 18:01:48 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cn;
	int	up;

	up = 1;
	cn = 0;
	while (str[cn] != '\0')
	{
		if (str[cn] >= 'A' && str[cn] <= 'Z')
			str[cn] += 32;
		if (str[cn] >= 'a' && str[cn] <= 'z' && up == 1)
		{
			str[cn] -= 32;
			up = 0;
		}
		if (str[cn] >= '0' && str[cn] <= '9')
			up = 0;
		if (str[cn] < '0' || (str[cn] > '9' && str[cn] < 'A'))
			up = 1;
		if (str[cn] > 'z' || (str[cn] > 'Z' && str[cn] < 'a'))
			up = 1;
		cn++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	ft_strcapitalize(argv[1]);
	return (0);
}*/
