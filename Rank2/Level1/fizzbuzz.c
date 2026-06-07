/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthwe <tthwe@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:58:48 by tthwe             #+#    #+#             */
/*   Updated: 2026/01/06 00:13:17 by tthwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_num(int n)
{
	char *decimal;
	
	decimal = "0123456789";
	if (n > 9)
		put_num(n/10);
	write(1, &decimal[n%10],1);
}

int main (void)
{
	int	i;

	i = 0;
	while ( i <= 100)
	{
		if ( i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if ( i % 3 == 0)
			write(1, "fizz", 4);
		else if ( i % 5 == 0)
			write(1, "buzz", 4);
		else
			put_num(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}