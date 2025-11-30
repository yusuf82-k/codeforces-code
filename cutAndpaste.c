#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
void insertEnd(struct Node** head, struct Node** tail, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = *tail = newNode;
    } else {
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
    }
}

// Cut first k nodes and paste at the end using a for loop
void cutAndPasteK(struct Node** head, struct Node** tail, int k) {
    if (*head == NULL || k <= 0) return;

    struct Node* current = *head;
    int i;

    // Traverse to the kth node
    for (i = 1; current != NULL && i < k; i++) {
        current = current->next;
    }

    // If k is greater than or equal to list length, do nothing
    if (current == NULL || current->next == NULL)
        return;

    struct Node* newHead = current->next;
    struct Node* oldTail = *tail;

    // Break the list
    current->next = NULL;
    newHead->prev = NULL;

    // Connect the first k part at the end
    oldTail->next = *head;
    (*head)->prev = oldTail;

    // Update head and tail
    *head = newHead;
    *tail = current;
}

// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Free memory
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function
int main() {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    // Create list: 10 20 30 40 50 60
    insertEnd(&head, &tail, 10);
    insertEnd(&head, &tail, 20);
    insertEnd(&head, &tail, 30);
    insertEnd(&head, &tail, 40);
    insertEnd(&head, &tail, 50);
    insertEnd(&head, &tail, 60);

    printf("Original List:\n");
    printList(head);

    int k = 3;
    cutAndPasteK(&head, &tail, k);

    printf("After cutting first %d nodes and pasting at the end:\n", k);
    printList(head);

    // Free memory
    freeList(head);

    return 0;
}
