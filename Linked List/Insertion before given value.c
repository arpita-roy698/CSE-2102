#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head;
    struct Node *newNode;
    struct Node *PTR;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=20;
    head->next=NULL;
    PTR=(struct Node *)malloc(sizeof(struct Node));
    PTR->data=30;
    PTR->next=NULL;
    head->next=PTR;
    PTR=(struct Node *)malloc(sizeof(struct Node));
    PTR->data=40;
    PTR->next=NULL;
    head->next->next=PTR;
    int value=30;
    newNode=malloc(sizeof(struct Node));
    newNode->data=25;
    if(head->data==value)
    {
        newNode->next=head;
        head=newNode;
    }
    else{
        PTR=head;
        while(PTR->next->data!=value){
            PTR=PTR->next;

        }
        if(PTR->next!=NULL){
            newNode->next=PTR->next;
            PTR->next=newNode;
        }
    }
    PTR=head;
    while(PTR!=NULL){
        printf("%d ",PTR->data);
        PTR=PTR->next;
    }
    printf("NULL\n");
}
