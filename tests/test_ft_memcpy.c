#include "test.h"

void test_ft_memcpy ()
{
	printf("\n\n-- TEST MEMCPY --\n\n") ;


	char *null1 = NULL ;
	char *null2 = NULL ;
	printf("null : ") ;
	if (memcpy(null1, null2, 0) == ft_memcpy(null1, null2, 0))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char dest1[10] = "alakazam" ;
	char src1[10] = "rrrrrrrr" ;
	char dest2[10] = "alakazam" ;
	char src2[10] = "rrrrrrrr" ;

	memcpy(dest1, src1, 5) ;
	ft_memcpy(dest2, src2, 5) ;
	printf("copy : ") ;
	for (int i = 0; i < 10; i++)
	{
		if (dest1[i] == dest2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	char dest_src1[20] = "abcdefghij" ;
	char dest_src2[20] = "abcdefghij" ;
	memcpy(dest_src1, dest_src1+3, 10);
	ft_memcpy(dest_src2, dest_src2+3, 10);
	printf("overlap : ") ;
	for (int i = 0; i < 10; i++)
	{
		if (dest_src1[i] == dest_src2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;
}