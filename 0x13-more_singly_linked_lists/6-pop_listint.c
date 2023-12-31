#include "lists.h"

/**
*pop_listint - delete the head node
*@head: linked list
*Return: 0 if list is empty
**/
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int num;
if (!(*head) || !head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
