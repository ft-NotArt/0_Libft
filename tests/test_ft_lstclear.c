#include "test.h"

static void del(void *content)
{
	free(content) ;
}

static void not_del(void *content)
{
	(void) content ;
}


void test_ft_lstclear ()
{
	printf("\n\n-- TEST LSTCLEAR --\n\n") ;

	printf("del on list of 1 (str cont) : ") ;
	char *str1 = malloc(5) ;
	str1[0] = 'a' ;
	str1[1] = 'b' ;
	str1[2] = 'c' ;
	t_list *list1 = ft_lstnew(str1) ;
	ft_lstclear(&list1, del) ;
	printf("✅\n") ;

	printf("del on list of 3 (str cont) : ") ;
	char *str2 = malloc(5) ;
	str2[0] = 'a' ;
	str2[1] = 'b' ;
	str2[2] = 'c' ;
	char *str3 = malloc(5) ;
	str3[0] = 'a' ;
	str3[1] = 'b' ;
	str3[2] = 'c' ;
	char *str4 = malloc(5) ;
	str4[0] = 'a' ;
	str4[1] = 'b' ;
	str4[2] = 'c' ;
	t_list *list2 = ft_lstnew(str2) ;
	t_list *list3 = ft_lstnew(str3) ;
	ft_lstadd_back(&list2, list3) ;
	t_list *list4 = ft_lstnew(str4) ;
	ft_lstadd_back(&list3, list4) ;
	ft_lstclear(&list2, del) ;
	printf("✅\n") ;

	printf("not del on list of 1 (str cont) : ") ;
	char *str5 = malloc(5) ;
	str5[0] = 'a' ;
	str5[1] = 'b' ;
	str5[2] = 'c' ;
	t_list *list5 = ft_lstnew(str5) ;
	ft_lstclear(&list5, not_del) ;
	printf("✅\n") ;
	free(str5) ;

	printf("del null : ") ;
	t_list *list6 = ft_lstnew(NULL) ;
	ft_lstclear(&list6, del) ;
	printf("✅\n") ;

	printf("del on list of 3 (different cont) : ") ;
	char *str6 = malloc(5) ;
	str6[0] = 'a' ;
	str6[1] = 'b' ;
	str6[2] = 'c' ;
	t_list *list7 = ft_lstnew(str6) ;
	t_list *list8 = ft_lstnew(NULL) ;
	ft_lstadd_back(&list7, list8) ;
	int *int1 = malloc(sizeof(int)) ;
	t_list *list9 = ft_lstnew(int1) ;
	ft_lstadd_back(&list8, list9) ;
	ft_lstclear(&list7, del) ;
	printf("✅\n") ;
}