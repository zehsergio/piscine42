/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 23:16:27 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/07/03 00:14:59 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	// Go to the end of dest, direct.
	while (dest[i])
		i++;

	// Copy src to dest from the end.
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

// ANOTHER OPTION WITH POINTERS
/*
char	*ft_strcat(char *dest, char *src)
{
	char *start = dest;
	
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}
*/

/*
int	main(void)
{
	char dest[] = "Hello ";
	char src[] = "World!";
	printf("%s", ft_strcat(dest, src));
}
*/