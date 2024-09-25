/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:25:22 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/22 23:07:16 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cn;
	unsigned int	ln;

	ln = 0;
	while (dest[ln] != '\0')
		ln++;
	cn = 0;
	while (cn < nb && src[cn] != '\0')
	{
		dest[ln + cn] = src[cn];
		cn++;
	}
	dest[ln + cn] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	unsigned int ui= *argv[3] - '0';
	ft_strncat(argv[1],argv[2], ui);
	return (0);
}*/
