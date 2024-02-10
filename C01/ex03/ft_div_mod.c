/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:32:18 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/18 13:19:33 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int a = 20;
    int b = 3;
    int div_result;
    int mod_result;

    ft_div_mod(a, b, &div_result, &mod_result);

    printf("Division result: %d\n", div_result);
    printf("Modulus result: %d\n", mod_result);

    return 0;
}
*/
