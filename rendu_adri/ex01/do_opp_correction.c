/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_opp_correction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <smonte-e@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:14:54 by smonte-e          #+#    #+#             */
/*   Updated: 2024/02/08 17:14:55 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}

int	main(int ac, char **av)
{
	int res;
	int a;
	int b;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '-')
			res = a - b;
		else if (av[2][0] == '+')
			res = a + b;
		else if (av[2][0] == '*')
			res = a * b;
		else if (av[2][0] == '/')
		{
			if (b == 0)
				res = 0;
			else
				res = a / b;
		}
		ft_putnbr(res);
	}
	else
		write(1, "\n", 1);
	return (0);
}