/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:52:41 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/07/02 23:09:25 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while(*s1 == *s2 && *s1 && --n)
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}

/*
int	main(void)
{
	char *s1 = "ab";
	char *s2 = "abc";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
}
*/