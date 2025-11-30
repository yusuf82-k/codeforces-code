#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the end of the list
void append(Node** headRef, int data) {
    Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to merge two sorted linked lists
Node* mergeSortedLists(Node* L1, Node* L2) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while (L1 != NULL && L2 != NULL) {
        if (L1->data < L2->data) {
            tail->next = L1;
            L1 = L1->next;
            tail = tail->next;
        } else {
            tail->next = L2;
            L2 = L2->next;
            tail = tail->next;
        }
        
    }

    // Attach the remaining list
    if (L1 != NULL) {
        tail->next = L1;
    } else {
        tail->next = L2;
    }

    return dummy.next;
}

// Main function to demonstrate merging
int main() {
    Node* L1 = NULL;
    Node* L2 = NULL;

    // First sorted list: 1 -> 3 -> 5
    append(&L1, 1);
    append(&L1, 3);
    append(&L1, 5);
    append(&L1,6);

    // Second sorted list: 2 -> 4 -> 6
    append(&L2, 2);
    append(&L2, 4);
    append(&L2, 6);

    printf("List 1: ");
    printList(L1);
    printf("List 2: ");
    printList(L2);

    Node* merged = mergeSortedLists(L1, L2);
    printf("Merged List: ");
    printList(merged);

    return 0;
}
