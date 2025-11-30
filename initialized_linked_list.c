#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createList(int arr[], int size) {
    struct Node* head = NULL;
    for (int i = size - 1; i >= 0; i--) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = head;
        head = newNode;
    }
    return head;
}

void printList(struct Node* head) {
    printf("Linked list: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    int values[] = {10, 20, 30, 40, 50};
    int size = sizeof(values) / sizeof(values[0]);

    struct Node* head = createList(values, size);
    printList(head);

    return 0;
}
