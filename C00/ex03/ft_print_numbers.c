/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:32:18 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/18 13:19:33 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	s;

	s = '0';
	while (s <= '9')
	{
		write (1, &s, 1);
		s++;
	}
}
/*
int	main()
{
	ft_print_numbers();
	return 0;
}
*/
