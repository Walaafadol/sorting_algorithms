#include "sort.h"
/**
*swapn - program
*Return:0
*@a:parameter
*@b:argument
*/
void swapn(listint_t *a, listint_t *b)
{
if (a->prev)
a->prev->next = b;
if (b->next)
b->next->prev = a;
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a
}

/**
*insertion_sort_list - program
*Return:0
*@list:parameter
*/
void insertion_sort_list(listint_t **list)
{
listint_t *i, listint_t *j;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
i = (*list)->next;
while (i)
{
j = i;
i = i->next;
while (j && j->prev)
{

if (j->prev->n > j->n)
{
swapn(j->prev, j)
if (!j->prev)
*list = j;
print_list((const listint_t *)*list);

}
else
{
j = j->prev
}

}
}