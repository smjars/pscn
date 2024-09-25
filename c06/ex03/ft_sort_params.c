/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:10:18 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/29 18:16:48 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		cnt1;
	int		cnt2;

	cnt1 = 1;
	while (cnt1 < argc - 1)
	{
		cnt2 = 1;
		while (cnt2 < argc - 1)
		{
			if (ft_strcmp(argv[cnt2], argv[cnt2 + 1]) > 0)
			{
				temp = argv[cnt2];
				argv[cnt2] = argv[cnt2 + 1];
				argv[cnt2 + 1] = temp;
			}
			cnt2++;
		}
		cnt1++;
	}
}

int	main(int argc, char *argv[])
{
	int	cnt;

	ft_sort_params(argc, argv);
	cnt = 1;
	while (cnt < argc)
	{
		ft_putstr(argv[cnt]);
		ft_putchar('\n');
		cnt++;
	}
	return (0);
}
