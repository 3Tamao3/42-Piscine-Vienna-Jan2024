/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 06:29:32 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:54:41 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}
/*
int main(void)
{
	char test[] = "";
	int size;

	size = ft_strlen(test);

	printf("the size is: %d \n", size);
	printf("the word is: %s", test);
}
*/
