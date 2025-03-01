/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jating <jating@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:33:13 by jating            #+#    #+#             */
/*   Updated: 2025/03/01 17:34:10 by jating           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int row, char first, char between, char last)
{
	int	i;

	i = 1;
	while (i <= row)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == row)
			ft_putchar(last);
		else
			ft_putchar(between);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	row;
	int	column;

	i = 1;
	row = x;
	column = y;
	if (row >= 1 && column >= 1)
	{
		while (i <= column)
		{
			if (i == 1)
				ft_print(row, 'A', 'B', 'A');
			else if (i == column)
				ft_print(row, 'C', 'B', 'C');
			else
				ft_print(row, 'B', ' ', 'B');
			i++;
		}
	}
}
