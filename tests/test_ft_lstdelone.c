#include "test.h"

static void del(void *content)
{
	free(content) ;
}

static void not_del(void *content)
{
	(void) content ;
}


void test_ft_lstdelone ()
{
	printf("\n\n-- TEST LSTDELONE --\n\n") ;

	printf("del string : ") ;
	char *str1 = malloc(5) ;
	str1[0] = 'a' ;
	str1[1] = 'b' ;
	str1[2] = 'c' ;
	t_list *list1 = ft_lstnew(str1) ;
	ft_lstdelone(list1, del) ;
	printf("✅\n") ;

	printf("not del string : ") ;
	char *str2 = malloc(5) ;
	str2[0] = 'a' ;
	str2[1] = 'b' ;
	str2[2] = 'c' ;
	t_list *list2 = ft_lstnew(str2) ;
	ft_lstdelone(list2, not_del) ;
	printf("✅\n") ;
	free(str2) ;

	printf("del null : ") ;
	t_list *list3 = ft_lstnew(NULL) ;
	ft_lstdelone(list3, del) ;
	printf("✅\n") ;
}