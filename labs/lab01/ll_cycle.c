#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node* hare = head, *tortoise = head;
    while (hare != NULL && hare -> next != NULL) {
        hare = hare -> next -> next;
        tortoise = tortoise -> next;
        if (hare == tortoise) {
            return 1;
        }
    }
    return 0;
}
