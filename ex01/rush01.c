/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:39:14 by arau              #+#    #+#             */
/*   Updated: 2023/09/23 17:42:50 by arau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	riga(int x)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar('/');
		}
		else if (counter == 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		counter--;
	}
	ft_putchar('\n');
}

void	riga2(int x)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar('\\');
		}
		else if (counter == 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		counter--;
	}
	ft_putchar('\n');
}

void	colonna(int x)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar('*');
		}
		else if (counter == 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		counter--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = y;
	while (counter > 0)
	{
		if (counter == y)
		{
			riga(x);
		}
		else if (counter == 1)
		{
			riga2(x);
		}
		else
		{
			colonna(x);
		}
		counter--;
	}
}
