/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:16:39 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:46:54 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	origindest;

	origindest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (origindest);
}
/*
int main(void)
{
	char destination[20] = "I miss spacegliding :c";
	char source[] = "XD XD XD";

	ft_strncat(destination, source, 7);
	printf("Result: %s\n", destination);
}
*/
