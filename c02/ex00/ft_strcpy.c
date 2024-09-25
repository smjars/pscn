/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:23:22 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/16 23:06:05 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*cdest;

	cdest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cdest);
}
/*
int	main(void)
{
	char	src[] = "Hola, mundo!";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("Contenido Des: %s\n", dest);
	return (0);
}*/
