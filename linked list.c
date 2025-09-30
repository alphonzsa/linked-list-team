#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* createNode(int data){
    struct Node *newNode =(struct Node*) malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode; 
}
void print(struct Node *head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void main(){
    struct Node*head=createNode(12);
    head->next=NULL;
    head = insertAtBeginning(head, 11);
    printf("Roll numbers in linked list : ");
    print(head);
}
