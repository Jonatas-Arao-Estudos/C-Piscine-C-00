/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:01:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/19 15:55:43 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	numbers[5];
	int		first;
	int		second;

	first = 0;
	numbers[2] = ' ';
	while (first <= 99)
	{
		second = 0;
		while (second <= 99)
		{
			numbers[0] = '0' + first / 10;
			numbers[1] = '0' + first % 10;
			numbers[3] = '0' + second / 10;
			numbers[4] = '0' + second % 10;
			if (first < second)
			{
				write(1, &numbers, 5);
				write(1, ", ", 2);
			}
			second = second + 1;
		}
		first = first + 1;
	}
	write(1, "\b\b", 2);
}
