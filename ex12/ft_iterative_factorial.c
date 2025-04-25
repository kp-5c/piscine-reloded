/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:29:45 by ebenoist          #+#    #+#             */
/*   Updated: 2025/04/24 10:20:10 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	factorial;

	result = 1;
	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main ()
{
	printf("%d", ft_iterative_factorial(5));
}*/
