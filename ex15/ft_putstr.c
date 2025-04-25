/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:08:29 by ebenoist          #+#    #+#             */
/*   Updated: 2025/04/24 10:22:38 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int	main ()
{
	char str[] = "coucou les loulou";
	ft_putstr(str);
	return (0);
}*/
