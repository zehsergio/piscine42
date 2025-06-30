/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:33:48 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/27 09:47:13 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int div = 0;
	int mod = 0;
	ft_div_mod(42, 5, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}
	*/