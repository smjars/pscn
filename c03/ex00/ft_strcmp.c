/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:23:11 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/22 18:10:36 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	uc1;
	unsigned char	uc2;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	uc1 = (unsigned char)*s1;
	uc2 = (unsigned char)*s2;
	return (uc1 - uc2);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (0);
	}
	printf("argv 1 %s", argv[1]);
	printf("argv 2 %s", argv[2]);
	ft_strcmp(argv[1], argv[2]);
}*/
