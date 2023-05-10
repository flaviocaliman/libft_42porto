/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:52:13 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/05/06 14:35:39 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	printf("---ft_strlen---\n");
	printf("%lu\n\n", ft_strlen("Caliman"));
	printf("---ft_isalpha---\n");
	printf("%i\n\n", ft_isalpha('C'));
	printf("---ft_isdigit---\n");
	printf("%i\n\n", ft_isdigit('7'));
	printf("---ft_isalnum---\n");
	printf("%i\n\n", ft_isalnum(' '));
	printf("---ft_isascii---\n");
	printf("%i\n\n", ft_isascii('$'));
	printf("---ft_isprint---\n");
	printf("%i\n\n", ft_isprint('$'));	
	printf("---ft_strlcpy---\n");
	char dest[50];
	const char src[] = "Calimessi";
	printf("%lu\n\n", ft_strlcpy(dest, src, 9));	
	printf("---ft_strlcat---\n");
	char d1[] = "Flavio";
	const char s1[] = " Caliman";
	printf("%lu\n\n", ft_strlcat(d1, s1, 20));
	printf("---ft_strncmp---\n");
	const char s2[] = "Flavio";
	const char s3[] = "Caliman";
	printf("%i\n\n", ft_strncmp(s2, s3, 3));
	printf("---ft_toupper---\n");
	printf("%c\n\n", ft_toupper('a'));
	printf("---ft_tolower---\n");
	printf("%c\n\n", ft_tolower('A'));
	printf("---ft_strchr---\n");
	char s4[] = "Flavio";
	printf("%s\n", ft_strchr(s4, 'v'));
	printf("Posicao do caracter: %ld\n\n", ft_strchr(s4, 'v') - s4);
	printf("---ft_strrchr---\n");
	char s5[] = "Flavio";
	printf("%s\n", ft_strrchr(s5, 'a'));
	printf("Posicao do caracter: %ld\n\n", ft_strrchr(s5, 'a') - s5);
	printf("---ft_strnstr---\n");
	const char big[] = "Hello, world!";
    const char little[] = " ";
	char *result = ft_strnstr(big, little, 10);
    if (result != NULL)
        printf("Substring encontrada: %s\n\n", result);
    else
    {
		printf("Substring nao encontrada\n\n");
	}
	printf("---ft_memset---\n");
	char s6[] = "CaliMan";
	ft_memset(s6, 'x', 4);
	printf("%s\n\n", s6);
	printf("---ft_memcpy---\n");
	unsigned char d2[20];
	const char s7[] = "Flavio Caliman";
	char *memcpy = ft_memcpy(d2, s7, 6);
	printf("%s\n\n", memcpy);
	printf("---ft_memmove---\n");
	unsigned char d3[20];
	const char s8[] = "Flavio Caliman";
	char *memmove = ft_memmove(d3, s8, 11);
	printf("%s\n\n", memmove);
	printf("---ft_memchr---\n");
	const unsigned char s9[] = "Flavio Caliman";
	char *memchr = ft_memchr(s9, 'C', 10);
	if (memchr != NULL)
		printf("Pointer: %s\n", memchr);
	else
		printf("Caracter nao encontrado!\n\n");
	printf("---ft_memcmp---\n");
	const char s10[] = "Flavio Caliman";
	const char s11[] = "Flavio Chaliman";
	int memcmp = ft_memcmp(s10, s11, 10);
	printf("Resultado: %i\n\n", memcmp);
	printf("---ft_bzero---\n");
	char s12[] = "Flavio Caliman";
	ft_bzero(s12, 7);
	printf("%s\n\n", s12);
	printf("---ft_atoi---\n");
	char nptr[] = "-12345";
	int num = ft_atoi(nptr);
	printf("%i\n\n", num);
	printf("---ft_strdup---\n");
	const char s13[] = "Flavio Caliman";
	char *strdup = ft_strdup(s13);
	printf("%s\n\n", strdup);
	printf("---ft_calloc---\n");
	void *calloc = ft_calloc(10, 5);
	printf("%p\n\n", &calloc);
	printf("---ft_substr---\n");
	char const s14[] = "Flavio Caliman";
	char *substr = ft_substr(s14, 7, 20);
	printf("%s\n/n", substr);
	printf("---ft_strjoin---\n");
	char const s15[] = "abcd";
	char const s16[] = "efghi";
	char *strjoin = ft_strjoin(s15, s16);
	printf("%s\n\n", strjoin);
	/*printf("---ft_split---\n");
	char s17[] = " Flavio Gomes Caliman ";
	printf("%i\n", contador(s17, ' '));*/
	printf("---ft_putchar_fd---\n");
	printf("Nao fiz main para testar a ft_putchar_fd\n\n");
	printf("---ft_putstr_fd---\n");
	printf("Nao fiz main para testar a ft_putstr_fd\n\n");
	printf("---ft_putendl_fd---\n");
	printf("Nao fiz main para testar a ft_putendl_fd()\n\n");
	printf("---ft_putnbr_fd---\n");
	printf("Nao fiz main para testar a ft_putnbr_fd()\n\n");
	printf("---ft_itoa---\n");
	int n = 1036;
	char *itoa = ft_itoa(n);
	printf("%s\n\n", itoa);
	printf("---ft_split---\n");
	char *s17 = " Flavio Gomes Caliman ";
	char	**split = ft_split(s17, ' ');
	printf("%s\n\n", *split);
	printf("---ft_strmapi---\n");
	printf("Nao fiz main para testar a ft_strmapi()\n\n");
	printf("---ft_striteri---\n");
	printf("Nao fiz main para testar a ft_striteri())\n\n");
	printf("---ft_lstnew---\n");
	t_list *newNode = ft_lstnew("Flavio Caliman");
	if (newNode == NULL)
	{
		printf("Erro: falha ao alocar memoria");
		return (1);
	}
	printf("Conteudo do novo no: %s\n\n", (char*)(newNode->content));
	free(newNode);
	return (0);
	printf("---ft_lstadd_front---\n");
	printf("Nao fiz main para testar a ft_lstadd_front()\n\n");
	printf("---ft_lstsize---\n");
	printf("Nao fiz main para testar a ft_lstsize\n\n");
	printf("---ft_lstlast---\n");
	printf("Nao fiz main para testar a ft_lstsize\n\n");
	printf("---ft_lstadd_back---\n");
	printf("Nao fiz main para testar a ft_lstadd_back\n\n");
	printf("---ft_lstdelone---\n");
	printf("Nao fiz main para testar a ft_lstdelone\n\n");
	printf("---ft_lstclear---\n");
	printf("Nao fiz main para testar a ft_lstclear\n\n");
	printf("---ft_lstiter---\n");
	printf("Nao fiz main para testar a ft_lstiter\n\n");
	printf("---ft_lstmap--\n");
	printf("Nao fiz main para testar a ft_lstmap\n\n");
}