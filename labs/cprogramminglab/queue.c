/* 
 * Code for basic C skills diagnostic.
 * Developed for courses 15-213/18-213/15-513 by R. E. Bryant, 2017
 */

/*
 * This program implements a queue supporting both FIFO and LIFO
 * operations.
 *
 * It uses a singly-linked list to represent the set of queue elements
 */

#include <stdlib.h>
#include <stdio.h>

#include "harness.h"
#include "queue.h"

/*
  Create empty queue.
  Return NULL if could not allocate space.
*/
queue_t *q_new()
{
    /* Remember to handle the case if malloc returned NULL */
    queue_t *temp = (queue_t *)malloc(sizeof(queue_t));
    if (temp == NULL)
        return NULL;
    temp->head = NULL;
    temp->tail = NULL;
    temp->size = 0;
    return temp;
}

/* Free all storage used by queue */
void q_free(queue_t *q)
{
    /* Remember to free the queue structue and list elements */
    if (q == NULL)
        return;
    list_ele_t *temp = q->head;
    while (temp != NULL)
    {
        list_ele_t *p = temp;
        temp = temp->next;
        free(p);
    }
    free(q);
}

/*
  Attempt to insert element at head of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
 */
bool q_insert_head(queue_t *q, int v)
{
    /* What should you do if the q is NULL? */
    /* What if malloc returned NULL? */
    if (q == NULL)
        return false;
    list_ele_t *temp;
    temp = (list_ele_t *)malloc(sizeof(list_ele_t));
    if (temp == NULL)
        return false;
    temp->value = v;
    temp->next = q->head;
    q->head = temp;
    q->size++;
    if (q->size == 1)
        q->tail = temp;
    return true;
}

/*
  Attempt to insert element at tail of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
 */
bool q_insert_tail(queue_t *q, int v)
{
    /* Remember: It should operate in O(1) time */
    if (q == NULL)
        return false;
    list_ele_t *temp;
    temp = (list_ele_t *)malloc(sizeof(list_ele_t));
    if (temp == NULL)
        return false;
    temp->value = v;
    temp->next = NULL;
    if (q->size == 0)
    {
        q->head = temp;
        q->tail = temp;
    }
    else
    {
        q->tail->next = temp;
        q->tail = temp;
    }
    q->size++;
    return true;
}

/*
  Attempt to remove element from head of queue.
  Return true if successful.
  Return false if queue is NULL or empty.
  If vp non-NULL and element removed, store removed value at *vp.
  Any unused storage should be freed
*/
bool q_remove_head(queue_t *q, int *vp)
{
    if (q == NULL || q->size == 0)
        return false;
    list_ele_t *temp = q->head;
    q->head = q->head->next;
    if (q->size == 1)
        q->tail = NULL;
    if (vp != NULL)
        *vp = temp->value;
    free(temp);
    q->size--;
    return true;
}

/*
  Return number of elements in queue.
  Return 0 if q is NULL or empty
 */
int q_size(queue_t *q)
{
    /* Remember: It should operate in O(1) time */
    if (q == NULL)
        return 0;
    else
        return q->size;
}

/*
  Reverse elements in queue.

  Your implementation must not allocate or free any elements (e.g., by
  calling q_insert_head or q_remove_head).  Instead, it should modify
  the pointers in the existing data structure.
 */
void q_reverse(queue_t *q)
{
    if (q == NULL || q->size <= 1)
        return;
    list_ele_t *p = NULL;
    list_ele_t *c = q->head;
    list_ele_t *n = c->next;
    q->tail = c;
    while (n != NULL)
    {
        c->next = p;
        p = c;
        c = n;
        n = c->next;
    }
    c->next = p;
    q->head = c;
}
