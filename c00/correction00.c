/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correction00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:33:08 by cjaimes           #+#    #+#             */
/*   Updated: 2019/06/16 22:58:22 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include "ex06/ft_print_comb2.c"
#include "ex07/ft_putnbr.c"
#include "ex08/ft_print_combn.c"
//#include <stdio.h>
//#i
void ft_putchar(char c);

void ft_print_alphabet(void);

void ft_print_reverse_alphabet(void);

void ft_print_numbers(void);

void ft_is_negative(int n);

void ft_print_comb(void);

void ft_print_comb2(void);

void ft_putnbr(int nb);

void ft_print_combn(int nb);

int main (void)
{
	//00
	ft_putchar('t');
	ft_putchar('\n');
	//01
	ft_print_alphabet();
	ft_putchar('\n');
	//02
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	//03
	ft_print_numbers();
	ft_putchar('\n');
	//04
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(5);
	ft_putchar('\n');
	//05
	ft_print_comb();
	ft_putchar('\n');
	//06
	ft_print_comb2();
	ft_putchar('\n');
	//07
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	//08
	ft_print_combn(9);

}
