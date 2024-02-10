/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:33:26 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 23:07:42 by reozbay          ###   ########.fr       */
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

	a = 0;
	if (argc > 0)
	{
		while (argv[0][a] != '\0')
		{
			writefunc(argv[0][a]);
			a++;
		}
		writefunc('\n');
	}
	return (0);
}
