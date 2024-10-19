#include "test.h"

void test_ft_lstsize ()
{
	printf("\n\n-- TEST LSTSIZE --\n\n") ;

	t_list *list1 = ft_lstnew(NULL) ;
	t_list *list2 = ft_lstnew(NULL) ;
	t_list *list3 = ft_lstnew(NULL) ;

	printf("list of 1 : ") ;
	if (ft_lstsize(list1) == 1)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("list of 3 : ") ;
	ft_lstadd_back(&list1, list2) ;
	ft_lstadd_back(&list1, list3) ;
	if    (ft_lstsize(list1) == 3
		&& ft_lstsize(list2) == 2
		&& ft_lstsize(list3) == 1)
		printf("✅\n") ;
	else
		printf("❌\n") ;
}