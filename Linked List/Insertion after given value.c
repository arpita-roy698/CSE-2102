#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head;
    struct Node *newNode;
    struct Node *PTR;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=NULL;
    PTR=(struct Node *)malloc(sizeof(struct Node));
    PTR->data=20;
    PTR->next=NULL;
    head->next=PTR;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=30;
    newNode->next=PTR->next;
    PTR->next=newNode;
    PTR=head;
    while(PTR!=NULL)
    {
        printf("%d ",PTR->data);
        PTR=PTR->next;
    }
    printf("NULL\n");
}
