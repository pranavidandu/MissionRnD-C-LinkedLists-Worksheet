/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *ptr = head;
	struct node *ptr1 = head;
	while (ptr != NULL){
		while (ptr1->next != NULL){
			if (ptr1->data > ptr1->next->data){
				ptr1->data = ptr1->data + ptr1->next->data;
				ptr1->next->data = ptr1->data - ptr1->next->data;
				ptr1->data = ptr1->data - ptr1->next->data;
			}
			ptr1 = ptr1->next;
		}
		ptr = ptr->next;
		ptr1 = head;
	}
}