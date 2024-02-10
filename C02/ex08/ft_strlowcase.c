/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:45:40 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/25 03:23:14 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char test1[] = "Hello";
	char test2[] = "acedw21";
	char test3[] = "UPPER";
	char test4[] = "lower";

	printf("Before: %s \n", test1);
	printf("After: %s \n", ft_strlowcase(test1));

	printf("Before: %s \n", test2);
	printf("After: %s \n", ft_strlowcase(test2));
	
	printf("Before: %s \n", test3);
	printf("After: %s \n", ft_strlowcase(test3));

	printf("Before: %s \n", test4);
	printf("After: %s \n", ft_strlowcase(test4));
}
*/
