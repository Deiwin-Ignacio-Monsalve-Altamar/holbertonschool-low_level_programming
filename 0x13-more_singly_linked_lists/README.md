# 0x13. C - More singly linked lists

** Foundations - Low-level programming & Algorithm ― Data structures and Algorithms

 by Julien Barbier, co-founder at Holberton School**

 ## 0. Print list
Write a function that prints all the elements of a listint_t list.

## 1. List length
Write a function that returns the number of elements in a linked listint_t list.

## 2. Add node mandatory
Write a function that adds a new node at the beginning of a listint_t list.

## 3. Add node at the end mandatory
Write a function that adds a new node at the end of a listint_t list.

## 4. Free list
Write a function that frees a listint_t list.

## 5. Free
Write a function that frees a listint_t list.

## 6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

## 7. Get node at index
Write a function that returns the nth node of a listint_t linked list.

## 8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

## 9. Insert
Write a function that inserts a new node at a given position.

## 10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.

##  11. Reverse list #advanced 
Write a function that reverses a listint_t linked list.

## 12. Print (safe version) #advanced
Write a function that prints a listint_t linked list.

## 13. Free (safe version) #advanced
Write a function that frees a listint_t list.

## 14. Find the loop
Write a function that finds the loop in a linked list.

<!-- Headings -->
## Example Struct

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```
## Example Exercise

```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

### Creator

# Deiwin Ignacio Monsalve Altamar

