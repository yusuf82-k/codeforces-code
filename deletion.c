#include<stdio>
struct node{
    int data;
    struct node*link;

};
struct node* createNode(int value){
    struct node* newNode=malloc(sizeof(struct node));
    newNode ->data=value;
    newNode ->link=NULL;
    return newNode;
}
void insertAtFirst(struct node** head ,int value){
       struct node* newNode =createNode(value);
       newNode->link=*head;
       *head=newNode;

}
void insertAtEnd(struct node** head, int value){
    struct node* newNode=createNode(value);
    if (*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct node* temp=*head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newNode;
}
void insertAtPosition(struct node** head,int value, int pos){
    struct node* newNode=createNode(value);
    struct node*temp=*head;
    if(pos<=1)
    insertAtfirst(head,value);\

    for (int i = 1; i <pos-1&&temp!=NULL; i++)
    {
        temp=temp->link;
    }
    if(temp==NULL)
    {
        printf("Position is out of bound\n");
        inserAtEnd(head,value);
        return;
    }
    newNode->link=temp->link;
    temp->link=newNode;
}
void deleteAtFirst(struct node**head,int value){
    if(*head==NULL)
    {
        return;
    }
    struct node* temp=*head;
    *head=*head->link;
    free(temp);
}
void deleteAtEnd(struct node** head,int value){
    if(*head==NULL)
    return;
    if(*head->link==NULL)
    {
        free(*head);
        *head=NULL;
        return;
    }
    struct node* temp=*head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;
}
