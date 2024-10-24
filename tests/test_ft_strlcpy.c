#include "test.h"

void test_ft_strlcpy ()
{
	printf("\n\n-- TEST STRLCPY --\n\n") ;

	char *b = "bbbbbbbbbb" ;
	char a1[20] = "aaaaaaaaaa" ;
	char a2[20] = "aaaaaaaaaa" ;

	printf("n < len : ") ;
	if (strlcpy(a1, b, 5) == ft_strlcpy(a2, b, 5))
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
	if (strlcpy(a3, b, 10) == ft_strlcpy(a4, b, 10))
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
	if (strlcpy(a5, b, 50) == ft_strlcpy(a6, b, 50))
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
	if (strlcpy(over1, over1+2, 8) == ft_strlcpy(over2, over2+2, 8))
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

	char only[10] = "abcdefgh" ;

	printf("dest = src : ") ;
	if (strlcpy(only, only, 8) == ft_strlcpy(only, only, 8))
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