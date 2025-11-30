#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to delete an intermediate node
void deleteIntermediateNode(struct Node** head, int position) {
    // Check if list is empty
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    // Check if position is valid (must be > 1 and not last node)
    if (position <= 1) {
        printf("Position must be greater than 1 (use deleteFirstNode for head)\n");
        return;
    }
    
    struct Node* current = *head;
    int count = 1;
    
    // Traverse to the node at given position
    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }
    
    // Check if position was too large
    if (current == NULL) {
        printf("Position exceeds list length\n");
        return;
    }
    
    // Check if it's actually the last node
    if (current->next == NULL) {
        printf("This is the last node (use deleteLastNode instead)\n");
        return;
    }
    
    // Update neighboring nodes' pointers
    current->prev->next = current->next;
    current->next->prev = current->prev;
    
    // Free the memory of the deleted node
    free(current);
}

// Helper function to print the list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Helper function to insert at end (for testing)
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

int main() {
    struct Node* head = NULL;
    
    // Create a sample list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    printf("Original list: ");
    printList(head);
    
    // Delete node at position 2 (value 20)
    deleteIntermediateNode(&head, 2);
    printf("After deleting node at position 2: ");
    printList(head);
    
    // Try to delete first node (should fail)
    deleteIntermediateNode(&head, 1);
    
    // Try to delete last node (should fail)
    deleteIntermediateNode(&head, 4);
    
    // Delete node at position 3 (originally position 4 before deletions)
    deleteIntermediateNode(&head, 3);
    printf("After deleting node at position 3: ");
    printList(head);
    
    return 0;
}