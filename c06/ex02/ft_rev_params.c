/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:44:00 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 11:48:28 by aboutin          ###   ########.fr       */
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

	arg = argc - 1;
	while (arg > 0)
	{
		a = 0;
		while (argv[arg][a] != '\0')
		{
			ft_putchar(argv[arg][a]);
			a++;
		}
		a = 0;
		ft_putchar('\n');
		arg--;
	}
	return (0);
}
