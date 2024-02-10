/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:40:26 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/25 12:38:12 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	str_ptr = str;
	to_find_ptr = to_find;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr && *to_find_ptr && *str_ptr == *to_find_ptr)
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
/*
int main(void)
{
	char string[] = "HelloSpaceglideXDplsff15";
	char to_find[] = "Spaceglide";

	printf("%s", ft_strstr(string, to_find));
}
*/
