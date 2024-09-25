/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:10:56 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/22 21:17:21 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	ln;
	int	con;

	ln = 0;
	while (dest[ln] != '\0')
		ln++;
	con = 0;
	while (src[con] != '\0')
	{
		dest[ln + con] = src[con];
		con++;
	}
	dest[con + ln] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	ft_strcat(argv[1],argv[2]);
	return 0;
}*/
