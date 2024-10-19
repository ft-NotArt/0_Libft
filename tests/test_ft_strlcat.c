#include "test.h"

void test_ft_strlcat ()
{
	printf("\n\n-- TEST STRLCAT --\n\n") ;

	char *b = "bbbbbbbbbb" ;
	char a1[20] = "aaaaaaaaaa" ;
	char a2[20] = "aaaaaaaaaa" ;

	printf("n < len : ") ;
	if (strlcat(a1, b, 5) == ft_strlcat(a2, b, 5))
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	for (int i = 0; i < 10; i++)
	{
		if (a1[i] == a2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	char a3[20] = "aaaaaaaaaa" ;
	char a4[20] = "aaaaaaaaaa" ;

	printf("n = len : ") ;
	if (strlcat(a3, b, 10) == ft_strlcat(a4, b, 10))
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	for (int i = 0; i < 10; i++)
	{
		if (a1[i] == a2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	char a5[20] = "aaaaaaaaaa" ;
	char a6[20] = "aaaaaaaaaa" ;

	printf("n > len : ") ;
	if (strlcat(a5, b, 50) == ft_strlcat(a6, b, 50))
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	for (int i = 0; i < 10; i++)
	{
		if (a1[i] == a2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	char over1[10] = "abcdefgh" ;
	char over2[10] = "abcdefgh" ;

	printf("overlap : ") ;
	if (strlcat(over1, over1+2, 8) == ft_strlcat(over2, over2+2, 8))
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	for (int i = 0; i < 10; i++)
	{
		if (a1[i] == a2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;
}