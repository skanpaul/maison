/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:09:43 by ski               #+#    #+#             */
/*   Updated: 2021/10/28 10:10:45 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
enum e_test
{
	etest,
	e_isalpha,	e_isdigit,	e_isalnum,	e_isascii,	e_isprint,	e_strlen,
	e_memset,	e_bzero,	e_memcpy,	e_memmove,	e_strlcpy,	e_strlcat,
	e_toupper,	e_tolower,	e_strchr,	e_strrchr,	e_strncmp,	e_memchr,
	e_memcmp,	e_strnstr,	e_atoi
};

/* ************************************************************************** */
int	main(void)
{
	enum e_test the_test;

	the_test = e_strlcpy;

	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");

	switch(the_test)
	{
		case etest: test_test(); break;
		case e_isalpha: if(testft_isalpha()) printf("testft_isalpha \n"); break;
		case e_isdigit: if(testft_isdigit()) printf("testft_isdigit \n"); break;
		case e_isalnum: if(testft_isalnum()) printf("testft_isalnum \n");	break;
		case e_isascii: if(testft_isascii()) printf("testft_isascii \n");	break;	
		case e_isprint: if(testft_isprint()) printf("testft_isprint \n");	break;
		case e_strlen: if(testft_strlen()) printf("testft_strlen \n");	break;
		case e_memset: testft_memset(); break;
		case e_bzero: testft_bzero(); break;
		case e_memcpy: testft_memcpy(); break;
		case e_memmove: testft_memmove(); break;
		case e_strlcpy: testft_strlcpy(); break;
		case e_strlcat: break;
		case e_toupper: break;
		case e_tolower: break;
		case e_strchr: break;
		case e_strrchr: break;
		case e_strncmp: break;
		case e_memchr: break;
		case e_memcmp: break;
		case e_strnstr: break;
		case e_atoi: break;
		default: break;
	}

	return (0);	
}
/* ************************************************************************** */