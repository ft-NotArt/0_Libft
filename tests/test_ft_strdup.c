#include "test.h"

void test_ft_strdup ()
{
	printf("\n\n-- TEST STRDUP --\n\n") ;

	char *str = "abcd" ;

	printf("simple string : ") ;
	char *dup = strdup(str) ;
	char *ft_dup = ft_strdup(str) ;
	if (dup != ft_dup)
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	for (int i = 0; i < 4; i++)
	{
		if (dup[i] == ft_dup[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("empty string : ") ;
	dup = strdup("") ;
	ft_dup = ft_strdup("") ;
	if (dup != ft_dup)
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	if (*dup == *ft_dup)
		printf("✅") ;
	else
		printf("❌") ;
	printf("\n") ;
}