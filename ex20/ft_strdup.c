/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:25:46 by ebenoist          #+#    #+#             */
/*   Updated: 2025/04/24 12:44:22 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*copy;

	if (src == 0)
		return (0);
	i = 0;
	while (src[i])
		i++;
	size = i + 1;
	copy = malloc(size * sizeof (char));
	if (copy == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	i = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "salut la terre";
	printf("%s", ft_strdup(src));
}*/
