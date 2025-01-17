#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}

// Creating and allocating memory for 3 nodes.
struct node *head, *middle, *last;

head = malloc(sizeof(struct node));
middle = malloc(sizeof(struct node));
last = malloc(sizeof(struct node));

head->data = 10;
middle->data = 20;
last->data = 30;

/* 1. Stack memory stores all the local variables and function calls (static memory).

Example: int a = 10;

2. Heap memory stores all the dynamically allocated variables.

Example: int *ptr = malloc(sizeof(int)); Here, memory will be allocated in the heap section. And the ptr resides in the stack section and receives the heap section memory address on successful memory allocation.

3. Address of the dynamic memory which will be assigned to the corresponding variable. */

head->next   = middle;
middle->next = last;
last->next   = NULL;     //NULL indicates the end of the linked list

// temp is a reference for head pointer.
struct node *temp = head;

//till the node becomes null, printing each nodes data
while(temp != NULL)
{
    printf("%d ",temp->data);
    temp = temp->next;
}