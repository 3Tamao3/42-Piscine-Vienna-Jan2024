/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:20:28 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 23:07:06 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writefunc(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	if (argc > 1)
	{
		while (a < argc)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				writefunc(argv[a][b]);
				b++;
			}
			a++;
			writefunc('\n');
		}
	}
	return (0);
}
