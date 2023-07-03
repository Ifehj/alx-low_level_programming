#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *new_string;
	int i;
	list_t *ptr;

	if(str == NULL)
		return(NULL);
	
	for(i = 0; i != '\0'; i++)
	{
		
	}

	new_string = malloc(sizeof(char) * i);

	new_string = strdup(str);

	ptr = malloc(sizeof(list_t));
	ptr->str = new_string;
	ptr->next=NULL;

	ptr->next = *head;
	*head = ptr;
	return(ptr);
}
