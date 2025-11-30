#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Append node to the end of the list
void append(Node** headRef, int data) {
    Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    Node* temp = *headRef;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Print the list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Remove all nodes with value == val
Node* removeElements(Node* head, int val) {
    // Remove all matching nodes at the beginning
    while (head != NULL && head->data == val) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->next->data == val) {
            Node* temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
        }
    }

    return head;
}

// Main to test
int main() {
    Node* head = NULL;
    append(&head, 6);
    append(&head, 1);
    append(&head, 6);
    append(&head, 2);
    append(&head, 3);
    append(&head, 6);

    printf("Original list:\n");
    printList(head);

    int val = 6;
    head = removeElements(head, val);

    printf("List after removing %d:\n", val);
    printList(head);

    return 0;
}
