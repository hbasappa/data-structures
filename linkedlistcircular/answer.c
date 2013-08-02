/**
 * problem:
 *      find the mid-point of a singly linked list
 * examples:
 *      1->2->3->4->5 => 3
 *      1->2->3->4->5->6 => 3 4 (two mid-points in lists with even nodes)
 * input: 
 *      list head pointer
 * output:
 *      value at mid-point(s)
 *      "empty" if list is empty
 * complexity:
 *      time = O(N)
 *      space = O(1)
**/

#include "test.h"

/* 
typedef struct Node {
    int val;
    struct Node *next;
} Node;
*/

bool listCircular(Node *head) {
    /* 1. if the list is empty, print 'empty' and bail */
    if (head == NULL) { printf("empty\n"); return false; }

    /**
     * 2. Two pointers, slow and fast. slow takes 1 step at a time, fast takes
     *    two. If fast points to slow or slow->next then list is circular.
     *    if fast points to NULL then end of list has been reached.
    **/
    Node *slow, *fast;
    slow = fast = head;

    while (true) {
	if(!fast || !fast->next)
		return false;
	else if(fast == slow || fast->next == slow)
		return true;
	else {
		slow = slow->next;          /* 1 step at a time */
		fast = fast->next->next;    /* 2 steps at a time */
	}
    }
}
