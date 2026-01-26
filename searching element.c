#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int search(struct Node* head, int x) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == x)
            return 1;   // found
        temp = temp->next;
    }

    return 0;   // not found
}

int main() {
    // 5 -> 8 -> 12 -> 20 -> NULL
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struc
