/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:11:34 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/30 15:11:34 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
int	main(void)
{
	char	dest[100];
	char	src[] = "Piscine 42";
	int	n = 5;
	
	ft_strncpy(dest, src, n);
	printf("dest ok: %s\n", dest);
}
*/