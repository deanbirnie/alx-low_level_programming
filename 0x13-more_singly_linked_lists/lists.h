#ifndef LISTS_H_
#define LISTS_H_

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif
