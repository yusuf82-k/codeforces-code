#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct next;
}
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    return newnode;
}
void insertAtbeginning(struct node** head, int data){
    struct node * newnode= createnode(data);
    newnode->next=*head;
    *head=newnode;
}
void printlist(struct node ** head){
    struct node* temp=*head;
    if(*head==NULL){
        printf("list is empty\n");
        return;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main(){
    int n;
   
    printf("enter number of element\n");
     scanf("%d",&n);
     struct node* head=NULL;
     for(int i=0;i<n;i++){
        int data;
        scanf("%d",&data);
         insertAtbeginning(&head,data)
     }
     printlist(&head);
     return 0;

}