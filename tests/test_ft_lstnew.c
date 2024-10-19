#include "test.h"

void test_ft_lstnew ()
{
	printf("\n\n-- TEST LSTNEW --\n\n") ;

	t_list *list ;

	printf("string content : ") ;
	list = ft_lstnew("abc") ;
	if   (!ft_memcmp(list->content, "abc", 4)
		&& list->next == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;
	free(list) ;

	printf("int content : ") ;
	int ft = 42 ;
	list = ft_lstnew(&ft) ;
	if   (!ft_memcmp(list->content, &ft, 4)
		&& list->next == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;
	free(list) ;

	printf("null content : ") ;
	char *null = NULL ;
	list = ft_lstnew(null) ;
	if    (list->content == NULL
		&& list->next == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;
	free(list) ;
}