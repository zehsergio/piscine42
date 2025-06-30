/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:09:58 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/30 16:15:23 by jdias-ju       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// Si la string n'est pas compris entre 'a' et 'z' en minuscules, le retour est 0
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	*str1 = "helloworld";
	char	*str2 = "helloWorld";
	printf("%s est lowercase? %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s est lowercase? %d\n", str2, ft_str_is_lowercase(str2));
}
*/
