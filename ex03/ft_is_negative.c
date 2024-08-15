/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:27:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/15 19:54:23 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (number > 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
