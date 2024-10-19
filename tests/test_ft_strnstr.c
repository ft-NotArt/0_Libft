#include "test.h"

void test_ft_strnstr ()
{
	printf("\n\n-- TEST STRNSTR --\n\n") ;

	printf("simple char in string, small n : ") ;
	if (strnstr("abcdef", "c", 2) == ft_strnstr("abcdef", "c", 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("simple char in string, big n : ") ;
	if (strnstr("abcdef", "c", 20) == ft_strnstr("abcdef", "c", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("simple string in string, small n : ") ;
	if (strnstr("abcdef", "cde", 2) == ft_strnstr("abcdef", "cde", 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("simple string in string, big n : ") ;
	if (strnstr("abcdef", "cde", 20) == ft_strnstr("abcdef", "cde", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("string not present at all in string : ") ;
	if (strnstr("abcdef", "123", 20) == ft_strnstr("abcdef", "123", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("string partially present in string : ") ;
	if (strnstr("abcdef", "c123", 20) == ft_strnstr("abcdef", "c123", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("substring longer than string : ") ;
	if (strnstr("abcdef", "abcdefghij", 20) == ft_strnstr("abcdef", "abcdefghij", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ null char into strings : ") ;
	if (strnstr("abc\0def", "c\0de", 20) == ft_strnstr("abc\0def", "c\0de", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("searching for null char : ") ;
	if (strnstr("abc\0def", "\0", 20) == ft_strnstr("abc\0def", "\0", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;


}