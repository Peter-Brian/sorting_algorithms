#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void quicksort(int *array, int low, int high, size_t size);
void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **prmList);
void swap_node(listint_t **prmCurrent);
void swap_node_after(listint_t **prmCurrent);
void swap_node_before(listint_t **prmCurrent);
void selection_sort(int *prmArray, size_t prmSize);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void quick_sort_hoare(int *array, size_t size);
void quicksort_hoare(int *array, int begining, int end, size_t size);
int partition_hoare(int *array, int begining, int end, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *prmArray, size_t prmSize);

#endif
