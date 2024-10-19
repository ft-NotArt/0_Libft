#include "test.h"

static void *add_one(void *content)
{
	char *c = (char *) content ;
	c[0] += 1 ;
	return c;
}

static void *same_but_malloc(void *content)
{
	char *c = malloc(2) ;
	strlcpy(c, content, 2) ;
	return c ;
}

static void del(void *content)
{
	free(content) ;
}

static void not_del(void *content)
{
	(void) content ;
}

void test_ft_lstmap ()
{
	printf("\n\n-- TEST LSTMAP --\n\n") ;

	printf("fct add_one and not_del : ") ;
	char *str1 = malloc(5) ;
	str1[0] = 'a' ;
	char *str2 = malloc(5) ;
	str2[0] = 'b' ;
	char *str3 = malloc(5) ;
	str3[0] = 'c' ;
	t_list *list1 = ft_lstnew(str1) ;
	t_list *list2 = ft_lstnew(str2) ;
	ft_lstadd_back(&list1, list2) ;
	t_list *list3 = ft_lstnew(str3) ;
	ft_lstadd_back(&list2, list3) ;
	t_list *map = ft_lstmap(list1, add_one, not_del) ;
	char c1[] = "b" ;
	for (int i = 0; i < 3; i++)
	{
		if   (!memcmp(map->content, c1, 1))
			printf("✅") ;
		else
			printf("❌") ;
		map = map->next ;
		c1[0] += 1 ;
	}
	free(str1) ;
	free(str2) ;
	free(str3) ;
	printf("\n") ;

	printf("fct same_but_malloc and del : ") ;
	char *str4 = malloc(5) ;
	str4[0] = 'a' ;
	char *str5 = malloc(5) ;
	str5[0] = 'b' ;
	char *str6 = malloc(5) ;
	str6[0] = 'c' ;
	t_list *list4 = ft_lstnew(str4) ;
	t_list *list5 = ft_lstnew(str5) ;
	ft_lstadd_back(&list4, list5) ;
	t_list *list6 = ft_lstnew(str6) ;
	ft_lstadd_back(&list5, list6) ;
	map = ft_lstmap(list4, same_but_malloc, del) ;
	char c2[] = "a" ;
	for (int i = 0; i < 3; i++)
	{
		if   (!memcmp(map->content, c2, 1))
			printf("✅") ;
		else
			printf("❌") ;
		map = map->next ;
		c2[0] += 1 ;
	}
	printf("\n") ;
}