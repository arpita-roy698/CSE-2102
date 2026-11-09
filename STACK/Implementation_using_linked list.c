#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *Top=NULL;
void push(int value){
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
    printf("STACK OVERFLOW\n");
    return ;
    }
    newNode->data=value;
    newNode->next=Top;
    Top=newNode;
    printf("Pushed value=%d\n",value);
}
int pop(){
    int item;
    struct Node *temp;
    if(Top==NULL){
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    temp=Top;
    item=Top->data;
    Top=Top->next;
    free(temp);
    return item;
}
void display(){
    struct Node *ptr;
    if(Top==NULL){
        printf("Stack empty\n");
    }
    else{
        ptr=Top;
        printf("\nstack elements:\n");
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
      }
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    int item=pop();
    if(item!=-1){
        printf("popped=%d\n",item);
    }
    display();
    return 0;
}
