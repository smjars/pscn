/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:15:40 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/15 02:35:16 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	nc;

	nc = 0;
	while (*str != '\0')
	{
		nc++;
		str++;
	}
	return (nc);
}
/*
int	main(void)
{
	char	*string;

	string = "42 madrid";
	ft_strlen(string);
	return(0);
}*/
