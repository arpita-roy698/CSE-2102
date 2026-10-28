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
    int value=25,LOC=2;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    if(LOC==1){
        newNode->next=head;
        head=newNode;
    }
    else{
        PTR=head;
        for(int i=1;i<LOC-1 && PTR!=NULL;i++){
            PTR=PTR->next;
        }
        if(PTR!=NULL)
        {
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

