#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

/* insert global declarations here */
typedef struct Node {
    int val;
    struct Node *next;
} Node;

/* insert test function declaration here */
void reverseList(Node **head);

#endif /* _TEST_H_ */
