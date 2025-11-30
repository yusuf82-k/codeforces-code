#include <stdio.h>
#include <stdlib.h>

// Definition of the linked list node
struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Append to the list
void appendNode(struct ListNode** headRef, int val) {
    struct ListNode* newNode = createNode(val);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct ListNode* temp = *headRef;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

// Convert binary linked list to decimal
int getDecimalValue(struct ListNode* head) {
    int result = 0;
    while (head != NULL) {
        result = result * 2 + head->val;
        head = head->next;
    }
    return result;
}

// Print list
void printList(struct ListNode* head) {
    while (head) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Free list
void freeList(struct ListNode* head) {
    while (head) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function
int main() {
    struct ListNode* head = NULL;
    int n, bit;

    printf("Enter number of bits: ");
    scanf("%d", &n);

    printf("Enter %d bits (0 or 1):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &bit);
        if (bit != 0 && bit != 1) {
            printf("Invalid input. Only 0 and 1 are allowed.\n");
            return 1;
        }
        appendNode(&head, bit);
    }

    printf("Binary linked list: ");
    printList(head);

    int decimal = getDecimalValue(head);
    printf("Decimal value: %d\n", decimal);

    freeList(head);
    return 0;
}

