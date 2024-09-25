/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:41:41 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/19 21:44:09 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cn;

	cn = 0;
	while (str[cn] != '\0')
	{
		if (str[cn] > 64 && str[cn] < 91)
			str[cn] += 32;
		cn++;
	}
	return (str);
}
