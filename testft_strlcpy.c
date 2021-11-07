#include "libft.h"
#include "libft_test.h"

#include <string.h>

void testft_strlcpy(void)
{
	int a;
	
	size_t ret;
	size_t ret_o;
	
	char src[] = "coucou";
	char dest_o[10]; 
	char dest[10]; 

	/* --TEST 1------------------------------------------------------- */
	memset(dest_o, 'A', 10);
	memset(dest, 'A', 10);
	ret_o = 0;
	ret = 0;
	ret_o = strlcpy(dest_o, src, 0);
	ret = ft_strlcpy(dest, src, 0);
	if (ret != ret_o)
		printf("!!!ERROR!!! ret: |%lu vs. %lu|: ret_o\n", ret, ret_o);
	
	/* --TEST 2------------------------------------------------------- */
	memset(dest_o, 'A', 10);
	memset(dest, 'A', 10);
	ret_o = 0;
	ret = 0;
	ret_o = strlcpy(dest_o, src, 1);
	ret = ft_strlcpy(dest, src, 1);
	if (ret != ret_o)
		printf("!!!ERROR!!! ret: |%lu vs. %lu|: ret_o\n", ret, ret_o);

	/* --TEST 3------------------------------------------------------- */
	memset(dest_o, 'A', 10);
	memset(dest, 'A', 10);
	ret_o = 0;
	ret = 0;
	ret_o = strlcpy(dest_o, src, 2);
	ret = ft_strlcpy(dest, src, 2);
	if (ret != ret_o)
		printf("!!!ERROR!!! ret: |%lu vs. %lu|: ret_o\n", ret, ret_o);

	/* --TEST 4------------------------------------------------------- */
	// memset(dest_o, 'A', 10);
	// memset(dest, 'A', 10);
	// ret_o = 0;
	// ret = 0;
	// ret_o = strlcpy(dest_o, src, -1);
	// ret = ft_strlcpy(dest, src, -1);
	// if (ret != ret_o)
	// 	printf("!!!ERROR!!! ret: |%lu vs. %lu|: ret_o\n", ret, ret_o);

	a = 1;
}
/*
char src[] = "coucou";
char dest[10]; memset(dest, 'A', 10);
1  check(ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A'); showLeaks();
2  check(ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A'); showLeaks();
3  check(ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A'); showLeaks();
4  check(ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A'); showLeaks(); memset(dest, 'A', 10);
5  check(ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0); showLeaks(); memset(dest, 'A', 10);
6  check(ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7)); showLeaks(); memset(dest, 'A', 10);
7  check(ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7)); showLeaks(); memset(dest, 'A', 10);
8  check(ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1)); showLeaks(); memset(dest, 0, 10);
9  check(ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0); showLeaks(); memset(dest, 'A', 10);