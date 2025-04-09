#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void CreationAndDisplay(){
    struct node *head,*newnode,*temp;
    head=0;
    int choice;
    static int count=0;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to Continue(0,1) ?? :");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp != 0){
        printf("The Data : %d\n",temp->data);
        temp = temp->next;
        count++;//how many nodes are created !!
    }
    printf("Number of nodes created : %d",count);
    getchar();
}

int main(){
    CreationAndDisplay();
    return 0;
}