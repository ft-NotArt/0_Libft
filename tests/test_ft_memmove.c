#include "test.h"

void test_ft_memmove ()
{
	printf("\n\n-- TEST MEMMOVE --\n\n") ;

	char *null1 = NULL ;
	char *null2 = NULL ;
	printf("null : ") ;
	if (memmove(null1, null2, 0) == ft_memmove(null1, null2, 0))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char dest1[10] = "alakazam" ;
	char src1[10] = "rrrrrrrr" ;
	char dest2[10] = "alakazam" ;
	char src2[10] = "rrrrrrrr" ;

	memmove(dest1, src1, 5) ;
	ft_memmove(dest2, src2, 5) ;
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
	memmove(dest_src1, dest_src1 + 3, 10);
	ft_memmove(dest_src2, dest_src2 + 3, 10);
	printf("overlap1 : ") ;
	for (int i = 0; i < 10; i++)
	{
		if (dest_src1[i] == dest_src2[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	char dest_src3[20] = "abcdefghij" ;
	char dest_src4[20] = "abcdefghij" ;
	memmove(dest_src3 + 3, dest_src3, 10);
	ft_memmove(dest_src4 + 3, dest_src4, 10);
	printf("overlap2 : ") ;
	for (int i = 0; i < 10; i++)
	{
		if (dest_src3[i] == dest_src4[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;
}