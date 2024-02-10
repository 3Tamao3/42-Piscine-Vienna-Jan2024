/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:32:18 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/18 13:19:33 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}
/*
int main()
{
    int a = 20;
    int b = 3;

    printf("Before division, a = %d and b = %d\n", a, b);
    
    ft_ultimate_div_mod(&a, &b);
    
    printf("After division, a = %d and b = %d\n", a, b);

    return 0;
}
*/
