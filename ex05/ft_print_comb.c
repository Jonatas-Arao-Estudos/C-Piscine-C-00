/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:01:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 09:32:33 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '0';
	number[2] = '0';
	while (number[0] <= '9')
	{
		while (number[1] <= '9')
		{
			while (number[2] <= '9')
			{
				if (number[0] < number[1] && number[1] < number[2])
				{
					write(1, &number, 3);
					if (number[0] < '7' && number[0] < '8' && number[0] < '9')
						write(1, ", ", 2);
				}
					number[2] = number[2] + 1;
			}
			number[2] = '0';
			number[1] = number[1] + 1;
		}
		number[1] = '0';
		number[0] = number[0] + 1;
	}
}
