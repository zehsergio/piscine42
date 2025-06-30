/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:32:22 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/27 12:32:33 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int main (void)
{
	int x = 67;
	int z = 3;

	ft_ultimate_div_mod(&x, &z);
	printf("Division is %d and rest is %d", x, z);
	
}
*/