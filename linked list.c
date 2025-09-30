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
void main(){
    struct Node*head=createNode(12);
    head->next=NULL;
}
