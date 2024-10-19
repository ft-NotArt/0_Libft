#include "test.h"

void test_ft_itoa ()
{
	printf("\n\n-- TEST ITOA --\n\n") ;

	char *itoa ;


	printf("just number : ") ;
	itoa = ft_itoa(42) ;
	if    (itoa[0] == '4'
		&& itoa[1] == '2'
		&& itoa[2] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
	printf("negative number : ") ;
	itoa = ft_itoa(-42) ;
	if    (itoa[0] == '-'
		&& itoa[1] == '4'
		&& itoa[2] == '2'
		&& itoa[3] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
		
	printf("ten : ") ;
	itoa = ft_itoa(10) ;
	if    (itoa[0] == '1'
		&& itoa[1] == '0'
		&& itoa[2] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
		
	printf("zero : ") ;
	itoa = ft_itoa(0) ;
	if    (itoa[0] == '0'
		&& itoa[1] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
		
	printf("big number : ") ;
	itoa = ft_itoa(42424242) ;
	if    (itoa[0] == '4'
		&& itoa[1] == '2'
		&& itoa[2] == '4'
		&& itoa[3] == '2'
		&& itoa[4] == '4'
		&& itoa[5] == '2'
		&& itoa[6] == '4'
		&& itoa[7] == '2'
		&& itoa[8] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("int min : ") ;
	itoa = ft_itoa(-2147483648) ;
	if    (itoa[0] == '-'
		&& itoa[1] == '2'
		&& itoa[2] == '1'
		&& itoa[3] == '4'
		&& itoa[4] == '7'
		&& itoa[5] == '4'
		&& itoa[6] == '8'
		&& itoa[7] == '3'
		&& itoa[8] == '6'
		&& itoa[9] == '4'
		&& itoa[10] == '8'
		&& itoa[11] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
		
	printf("int max : ") ;
	itoa = ft_itoa(2147483647) ;
	if    (itoa[0] == '2'
		&& itoa[1] == '1'
		&& itoa[2] == '4'
		&& itoa[3] == '7'
		&& itoa[4] == '4'
		&& itoa[5] == '8'
		&& itoa[6] == '3'
		&& itoa[7] == '6'
		&& itoa[8] == '4'
		&& itoa[9] == '7'
		&& itoa[10] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
		

	// printf("positive number : ") ;
	// if (itoa("+42") == ft_itoa("+42"))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;

	// printf("negative number : ") ;
	// if (itoa("-42") == ft_itoa("-42"))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;

	// printf("double '-' : ") ;
	// if (itoa("--42") == ft_itoa("--42"))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;

	// printf("w/ spaces : ") ;
	// if (itoa("  \t\r\v\f\n  -42") == ft_itoa("  \t\r\v\f\n  -42"))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;
	
	// printf("w/ garbage at start : ") ;
	// if (itoa("  abc  42") == ft_itoa("  abc  42"))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;
	
	// printf("w/ garbage at end : ") ;
	// if (itoa("42  abc  ") == ft_itoa("42  abc  "))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;
	
	// printf("empty string : ") ;
	// if (itoa("") == ft_itoa(""))
	// 	printf("✅\n") ;
	// else
	// 	printf("❌\n") ;
}