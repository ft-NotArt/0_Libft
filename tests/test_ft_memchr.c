#include "test.h"

void test_ft_memchr ()
{
	printf("\n\n-- TEST MEMCHR --\n\n") ;

	printf("simple string, small n : ") ;
	if (memchr("abcdef", 'c', 2) == ft_memchr("abcdef", 'c', 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("simple string, big n : ") ;
	if (memchr("abcdef", 'c', 20) == ft_memchr("abcdef", 'c', 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("double occurence : ") ;
	if (memchr("abcdcef", 'c', 20) == ft_memchr("abcdcef", 'c', 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	int int_array[5] = {1, 2, 3, 4, 5} ;
	printf("int array : ") ;
	if (memchr(int_array, 3, 20) == ft_memchr(int_array, 3, 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}