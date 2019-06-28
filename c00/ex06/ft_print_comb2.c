/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:55:43 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/08 18:29:47 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fct1(int i, int j)
{
	ft_putchar('0' + (i / 10));
	ft_putchar('0' + (i % 10));
	ft_putchar(' ');
	ft_putchar('0' + (j / 10));
	ft_putchar('0' + (j % 10));
}

void	fct2(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			fct1(i, j);
			if (i != 98)
			{
				fct2();
			}
			j++;
		}
		j = 0;
		i++;
	}
}
