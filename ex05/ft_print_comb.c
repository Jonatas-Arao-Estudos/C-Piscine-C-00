/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:01:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/16 21:07:28 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = 48;
	number[1] = 48;
	number[2] = 48;
	while (number[0] <= 57)
	{
		while (number[1] <= 57)
		{
			while (number[2] <= 57)
			{
				if (number[0] < number[1] && number[1] < number[2])
				{
					write(1, &number, 3);
					write(1, ", ", 2);
				}
				number[2] = number[2] + 1;
			}
			number[2] = 48;
			number[1] = number[1] + 1;
		}
		number[1] = 48;
		number[0] = number[0] + 1;
	}
	write(1,"\b\b", 2);
}
