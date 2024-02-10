/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:29:53 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/29 11:37:03 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char src[] = "Hello, 42 Staff XD";
	char dest[20];

	ft_strncpy(dest, src, 10);

	dest[10] = '\0';

	printf("what should be copied: %s \n", src);
	printf("copied: %s", dest);

	return 0;
}
*/
