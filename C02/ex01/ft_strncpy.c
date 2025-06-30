/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 09:40:52 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/30 11:44:10 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char *src;
	char dest[20];

	src = "Piscine 42 test test";
	printf("base: %s\n", src);
	ft_strncpy(dest, src, 8);
	printf("cpy: %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy: %s\n", dest);
}
*/