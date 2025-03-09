/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:51:44 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:51:46 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (!dst || size == 0)
		return (len_src);
	while (i < len_src && i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*
int main() {
	char src[] = "coucou";
	char dest[30] = "AAAAAAAAAA";
	size_t result;

	char dest2[30] = "AAAAAAAAAA";
	result = ft_strlcpy(dest, src, 6);
	printf("Taille obtenue de la destination strlcpy: %zu\n", result);
	printf("Taille attendue de la destination : %zu\n", strlen(src));
	printf("dest = %s \n\n", dest);

	result = strlcpy(dest2, src, 6);
	printf("Taille obtenue de la destination strlcpy: %zu\n", result);
	printf("Taille attendue de la destination : %zu\n", strlen(src));
	printf("dest = %s \n\n", dest2);

	return 0;
}*/
/*
size_t strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = strlen(src);
    size_t i;

    // Ensure destination has at least 1 byte for the null terminator
    if (size == 0) {
        return src_len;
    }

    // Copy characters from source to destination
    for (i = 0; i < size - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // Null-terminate the destination
    dest[i] = '\0';

    // Return the total length of the source string
    return src_len;
}
*/
