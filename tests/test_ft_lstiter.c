#include "test.h"

static void valid_if_strlen_more_than_2(void *content)
{
	if (strlen(content) > 2)
		printf("✅") ;
	else
		printf("❌") ;
}

static void valid_if_strlen_less_than_2(void *content)
{
	if (strlen(content) < 2)
		printf("✅") ;
	else
		printf("❌") ;
}

void test_ft_lstiter ()
{
	printf("\n\n-- TEST LSTITER --\n\n") ;

	printf("len > 2 on list of 3 (str cont) : ") ;
	char *str1 = malloc(5) ;
	str1[0] = 'a' ;
	str1[1] = 'b' ;
	str1[2] = 'c' ;
	char *str2 = malloc(5) ;
	str2[0] = 'a' ;
	str2[1] = 'b' ;
	str2[2] = 'c' ;
	char *str3 = malloc(5) ;
	str3[0] = 'a' ;
	str3[1] = 'b' ;
	str3[2] = 'c' ;
	t_list *list1 = ft_lstnew(str1) ;
	t_list *list2 = ft_lstnew(str2) ;
	ft_lstadd_back(&list1, list2) ;
	t_list *list3 = ft_lstnew(str3) ;
	ft_lstadd_back(&list2, list3) ;
	ft_lstiter(list1, valid_if_strlen_more_than_2) ;
	printf("\n") ;

	printf("len < 2 on list of 3 (str cont) : ") ;
	char *str4 = malloc(5) ;
	str4[0] = 'a' ;
	char *str5 = malloc(5) ;
	str5[0] = 'a' ;
	char *str6 = malloc(5) ;
	str6[0] = 'a' ;
	t_list *list4 = ft_lstnew(str4) ;
	t_list *list5 = ft_lstnew(str5) ;
	ft_lstadd_back(&list4, list5) ;
	t_list *list6 = ft_lstnew(str6) ;
	ft_lstadd_back(&list5, list6) ;
	ft_lstiter(list4, valid_if_strlen_less_than_2) ;
	printf("\n") ;
}