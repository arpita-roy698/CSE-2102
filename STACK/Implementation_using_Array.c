#include<stdio.h>
int STACK[5];
int Top=-1;
int MAXSTK=5;
void push(int value){
    if(Top==MAXSTK-1){
        printf("STACK OVERFLOW\n");
        return;
    }
    Top=Top+1;
    STACK[Top]=value;
    printf("pushed value=%d\n",value);
}
int pop(){
    int item;
    if(Top==-1){
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    item=STACK[Top];
    Top=Top-1;
    return item;
}
void display(){
    if(Top==-1){
        printf("stack empty\n");
    }
    else{
        printf("\nstack elements:\n");
        for(int i=Top;i>=0;i--){
                printf("%d\n",STACK[i]);

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
}


