/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:36:36 by wrikuto           #+#    #+#             */
/*   Updated: 2023/09/16 17:49:30 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
	// char ft_source[] = "Hello, World!";
	// char *ft_destination = NULL;

	char source[] = "Hello, World!";
	char *destination = NULL;

	// ft_memcpy(ft_destination, ft_source, sizeof(ft_source));
	memcpy(destination, source, sizeof(source));


	// printf("Copied string: %s\n", ft_destination);
	printf("Copied string: %s\n", destination);

	return (0);
}
