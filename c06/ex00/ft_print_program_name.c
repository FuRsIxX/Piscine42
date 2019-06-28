/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:26:55 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 11:36:37 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	while (argv[0][a] != '\0' && argc)
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
}
