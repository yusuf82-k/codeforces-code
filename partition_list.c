#include <stdio.h>
#include <stdlib.h>

// Definition of a singly linked list node
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

// Function to append a node to the end of the list
void appendNode(struct ListNode** headRef, int val) {
    struct ListNode* newNode = createNode(val);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct ListNode* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to free the list
void freeList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

// Function to partition the list
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* lessHead = createNode(0);
    struct ListNode* greaterHead = createNode(0);
    struct ListNode* less = lessHead;
    struct ListNode* greater = greaterHead;

    while (head != NULL) {
        if (head->val < x) {
            less->next = head;
            less = less->next;
        } else {
            greater->next = head;
            greater = greater->next;
        }
        head = head->next;
    }

    greater->next = NULL;           // end greater list
    less->next = greaterHead->next; // connect less to greater

    struct ListNode* result = lessHead->next;

    // Free dummy nodes
    free(lessHead);
    free(greaterHead);

    return result;
}

// Main function
int main() {
    struct ListNode* head = NULL;
    int n, val, x;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        appendNode(&head, val);
    }

    printf("Enter value of x for partitioning: ");
    scanf("%d", &x);

    printf("Original list:\n");
    printList(head);

    head = partition(head, x);

    printf("Partitioned list:\n");
    printList(head);

    freeList(head);
    return 0;
}
