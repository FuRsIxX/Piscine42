/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 08:09:19 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/27 11:04:24 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int rc;

	rc = 1;
	if (nb == 0)
		return (0);
	while ((rc * rc) < nb && rc < 46500)
		rc++;
	if ((rc * rc) == nb)
		return (rc);
	else
		return (0);
}
