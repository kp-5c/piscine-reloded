/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:46:06 by ebenoist          #+#    #+#             */
/*   Updated: 2025/04/24 16:09:08 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*resultat;
	int	i;

	if (min >= max)
		return (NULL);
	size = (max - min);
	resultat = malloc ((size + 1) * sizeof (int));
	if (resultat == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		resultat[i] = min;
		min ++;
		i++;
	}
	return (resultat);
}
/*
#include <stdio.h>
int	main ()
{
	int	*i;
	int	j;

	i = ft_range(4, 10);
	j = 0;
	while (i[j])
	{
		printf("%d", i[j]);
		j++;
	}
	
	return (0);
}*/
