#include "lists.h"
#include <stdlib.h>

/**
 * reverse_list - reverses a singly linked list
 * @head: pointer to the head of the list
 * Return: pointer to the head of the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
listint_t *prev = NULL, *next = NULL;

while (head != NULL)
{
next = head->next;
head->next = prev;
prev = head;
head = next;
}

return prev;
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to the head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
listint_t *slow = *head, *fast = *head, *tmp = NULL;

if (*head == NULL)
return (1);

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
}

slow = reverse_list(slow);
tmp = slow;

while (tmp != NULL)
{
if ((*head)->n != tmp->n)
{
reverse_list(slow);
return (0);
}
*head = (*head)->next;
tmp = tmp->next;
}

reverse_list(slow);
return (1);
}