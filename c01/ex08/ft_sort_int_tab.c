/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:41:00 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/08/29 22:41:07 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cnt1;
	int	cnt2;
	int	temp;

	cnt1 = 0;
	while (cnt1 < size -1)
	{
		cnt2 = 0;
		while (cnt2 < size - cnt1 - 1)
		{
			if (tab[cnt2] > tab[cnt2 + 1])
			{
				temp = tab[cnt2];
				tab[cnt2] = tab[cnt2 + 1];
				tab[cnt2 + 1] = temp;
			}
			cnt2++;
		}
		cnt1++;
	}
}
/*
int	main(void)
{
	int arr[5] = {5, 2, 3, 4, 6};
	int nb = 5;
	ft_sort_int_tab(arr, nb);
	return (0);
}*/
