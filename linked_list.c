#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(struct Node** head,int value){
    struct Node* newNode=createNode(value);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return;
}
void insertAtPosition(struct Node** head,int data,int position){
    struct Node* newNode=createNode(data);

    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    if(position<=1)
    {
        insertAtBeginning(head,data);
        return;
    }
    for(int i=1;i<position-1&&temp!=NULL;i++)
    { 
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("positon is out of bounds\n");
        insertAtEnd(head,data);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return;

}
void deleteFirst(struct Node** head)
{ 
    if(*head==NULL)
    return;
    struct Node* temp=*head;
    *head=(*head)->next;
    free(temp);
    return;
}
void deleteLast(struct Node** head)
{
  if(*head==NULL)
  return;
  if((*head)->next==NULL){
  *head==NULL;
  return;
  }
  struct Node* temp=*head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  free(temp->next);
  temp->next=NULL;

}
void deleteIntermediate(struct Node** head,int position){
    if(*head==NULL)
    {
        printf("The list is empty\n");
        return;
    }
    struct Node* temp=*head;
    if(position==1){
        *head=(*head)->next;
         free(temp);
         return;
    }
    for(int i=1;i<position-1&&temp!=NULL;i++){
        temp=temp->next;
        if(temp==NULL||temp->next==NULL){
            printf("Position is out of bound\n");
            return;
        }
    }
    struct Node* nodeToDelete=temp->next;
    temp->next=temp->next->next;
    free(nodeToDelete);
    return;
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
    struct Node* head = NULL;
    int n,data;
    scanf("%d",&n);
    printf("Enter %d data element\n",n);
   /* for(int i=0;i<n;i++){
        scanf("%d",&data);
        insertAtBeginning(&head,data);
    } */

     for(int i=0;i<n;i++){
        scanf("%d",&data);
        insertAtEnd(&head,data);
    }


    printList(head);
    int value,position;
    scanf("%d%d",&value,&position);
    insertAtPosition(&head,value,position);
    printList(head);
    deleteFirst(&head);
    printList(head);
    deleteLast(&head);
    printList(head);
    int pos;
    scanf("%d",&pos);
    deleteIntermediate(&head,pos);
    printList(head);

    return 0;
}
