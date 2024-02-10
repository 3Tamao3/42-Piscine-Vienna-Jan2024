/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:51:09 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/26 06:25:40 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	i;

	dest_l = 0;
	src_l = 0;
	i = 0;
	while (dest[dest_l] != '\0' && dest_l < size)
	{
		dest_l++;
	}
	while (src[src_l] != '\0')
	{
		src_l++;
	}
	while (dest_l + i + 1 < size && src[i] != '\0')
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	if (dest_l < size)
	{
		dest[dest_l + i] = '\0';
	}
	return (dest_l + src_l);
}
/*
int main(void)
{
	char dest[20];
	char src[] = "Hello :)(:";
	int size = 7;

	printf("%s", *ft_strlcat(dest, src, size));
}
*/
