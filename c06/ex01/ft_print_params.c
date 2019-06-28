/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:37:12 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 11:43:05 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int arg;
	int a;

	arg = 1;
	while (arg < argc)
	{
		a = 0;
		while (argv[arg][a] != '\0')
		{
			ft_putchar(argv[arg][a]);
			a++;
		}
		a = 0;
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
