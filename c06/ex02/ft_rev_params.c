/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:10:18 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/29 16:56:51 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt;
	int	cnt2;

	cnt = argc - 1;
	while (cnt > 0)
	{
		cnt2 = 0;
		while (argv[cnt][cnt2] != '\0')
		{
			write(1, &argv[cnt][cnt2], 1);
			cnt2++;
		}
		write(1, "\n", 1);
		cnt--;
	}
	return (0);
}
