#include "test.h"

void test_ft_memcmp ()
{
	printf("\n\n-- TEST MEMCMP --\n\n") ;

	printf("same string, small n : ") ;
	if (memcmp("abcdef", "abcdef", 2) == ft_memcmp("abcdef", "abcdef", 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("same string, big n : ") ;
	if (memcmp("abcdef", "abcdef", 20) == ft_memcmp("abcdef", "abcdef", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("different string, small n : ") ;
	if (memcmp("abcdef", "abdef", 2) == ft_memcmp("abcdef", "abdef", 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("different string, big n : ") ;
	if (memcmp("abcdef", "abdef", 20) == ft_memcmp("abcdef", "abdef", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	int int_array1[5] = {1, 2, 3, 4, 5} ;
	int int_array2[5] = {1, 2, 4, 3, 5} ;
	printf("int arrays w/ diff : ") ;
	if (memcmp(int_array1, int_array2, sizeof(int) * 5) == ft_memcmp(int_array1, int_array2, sizeof(int) * 5))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("int arrays w/out diff : ") ;
	if (memcmp(int_array1, int_array1, sizeof(int) * 5) == ft_memcmp(int_array1, int_array1, sizeof(int) * 5))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}