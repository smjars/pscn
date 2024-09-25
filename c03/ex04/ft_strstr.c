/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:09:43 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/23 13:59:19 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	if (*tofind == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == tofind[j] && tofind[j] != '\0')
			j++;
		if (tofind[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (null);
}
/*
int	main(int argc, char *argv[])
{
	ft_strstr(argv[1],argv[2]);
	return (0);
}*/
