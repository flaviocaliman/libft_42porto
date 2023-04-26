/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:52:13 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/04/26 20:04:38 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	printf("---ft_strlen---\n");
	printf("%lu\n", ft_strlen("Caliman"));
	printf("---ft_isalpha---\n");
	printf("%i\n", ft_isalpha('C'));
	printf("---ft_isdigit---\n");
	printf("%i\n", ft_isdigit('7'));
	printf("---ft_isalnum---\n");
	printf("%i\n", ft_isalnum(' '));
	printf("---ft_isascii---\n");
	printf("%i\n", ft_isascii('$'));
	printf("---ft_isprint---\n");
	printf("%i\n", ft_isprint('$'));	
	printf("---ft_strlcpy---\n");
	char dest[50];
	const char src[] = "Calimessi";
	printf("%lu\n", ft_strlcpy(dest, src, 9));	
	printf("---ft_strlcat---\n");
	char d1[] = "Flavio";
	const char s1[] = " Caliman";
	printf("%lu\n", ft_strlcat(d1, s1, 20));
	printf("---ft_strncmp---\n");
	const char s2[] = "Flavio";
	const char s3[] = "Caliman";
	printf("%i\n", ft_strncmp(s2, s3, 3));
	printf("---ft_toupper---\n");
	printf("%c\n", ft_toupper('a'));
	printf("---ft_tolower---\n");
	printf("%c\n", ft_tolower('A'));
	printf("---ft_strchr---\n");
	char s4[] = "Flavio";
	printf("%s\n", ft_strchr(s4, 'v'));
	printf("Posicao do caracter: %ld\n", ft_strchr(s4, 'v') - s4);
	printf("---ft_strrchr---\n");
	char s5[] = "Flavio";
	printf("%s\n", ft_strrchr(s5, 'a'));
	printf("Posicao do caracter: %ld\n", ft_strrchr(s5, 'a') - s5);
	printf("---ft_strnchr---\n");
	const char big[] = "Hello, world!";
    const char little[] = " ";
	char *result = ft_strnstr(big, little, 10);
    if (result != NULL)
        printf("Substring encontrada: %s\n", result);
    else
    {
		printf("Substring nao encontrada\n");
	}
	printf("---ft_memset---\n");
	char s6[] = "CaliMan";
	ft_memset(s6, 'x', 4);
	printf("%s\n", s6);
	printf("---ft_memcpy---\n");
	unsigned char d2[20];
	const char s7[] = "Flavio Caliman";
	char *memcpy = ft_memcpy(d2, s7, 6);
	printf("%s\n", memcpy);
	printf("---ft_memmove---\n");
	unsigned char d3[20];
	const char s8[] = "Flavio Caliman";
	char *memmove = ft_memmove(d3, s8, 11);
	printf("%s\n", memmove);
	printf("---ft_memchr---\n");
	const unsigned char s9[] = "Flavio Caliman";
	char *memchr = ft_memchr(s9, 'C', 10);
	if (memchr != NULL)
		printf("Pointer: %s\n", memchr);
	else
		printf("Caracter nao encontrado!\n");
	printf("---ft_memcmp---\n");
	const char s10[] = "Flavio Caliman";
	const char s11[] = "Flavio Chaliman";
	int memcmp = ft_memcmp(s10, s11, 10);
	printf("Resultado: %i\n", memcmp);
	printf("---ft_bzero---\n");
	char s12[] = "Flavio Caliman";
	ft_bzero(s12, 7);
	printf("%s\n", s12);
	printf("---ft_atoi---\n");
	char nptr[] = "-12345";
	int num = ft_atoi(nptr);
	printf("%i\n", num);
	printf("---ft_strdup---\n");
	const char s13[] = "Flavio Caliman";
	char *strdup = ft_strdup(s13);
	printf("%s\n", strdup);
	printf("---ft_calloc---\n");
	void *calloc = ft_calloc(10, 5);
	printf("%p\n", &calloc);
	printf("---ft_substr---\n");
	char const s14[] = "Flavio Caliman";
	char *substr = ft_substr(s14, 7, 20);
	printf("%s\n", substr);
	printf("---ft_strjoin---\n");
	char const s15[] = "abcd";
	char const s16[] = "efghi";
	char *strjoin = ft_strjoin(s15, s16);
	printf("%s\n", strjoin);
	printf("---ft_split---\n");
	char s17[] = " Flavio Gomes Caliman ";
	printf("%i\n", contador(s17, ' '));
	printf("---ft_putchar_fd---\n");
	char s17[] = " Flavio Gomes Caliman ";
	printf("%i\n", contador(s17, ' '));
}