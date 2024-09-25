/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:23:53 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/22 19:08:07 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && s1[cont] && s2[cont])
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
		cont++;
	}
	if (cont < n)
		return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
	return (0);
}
