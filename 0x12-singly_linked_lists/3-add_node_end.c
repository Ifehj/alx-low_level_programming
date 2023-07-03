#include<stdio.h>
#include<stdlib.h>

#include"lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp, *ptr;
	ptr = *head;

	temp->next = ptr;
	ptr->str = strdup(str);
	ptr->len = i;	

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(list_t));
	if(ptr == NULL)
		return (NULL);
	
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	
	return(ptr);
}
