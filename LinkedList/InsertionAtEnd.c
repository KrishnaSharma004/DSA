#include <stdio.h>
#include <stdlib.h>

 
struct node{
    int data;
    struct node *next;
};
void Display(struct node *ptr){
    while(ptr != NULL){
        printf("The Data : %d\n",ptr->data);
        ptr = ptr->next ;
    }
}
struct node* InsertionAtEnd(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    struct node *p = head;
    while(p->next != NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    //Allocate memory for nodes in he linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //Link first and second nodes
    head -> data = 10;
    head -> next = second;

    //Link third and fourth nodes
    second -> data = 11;
    second -> next = third;

    //Link third and fourth nodes
    third -> data = 18;
    third -> next = fourth;

    //terminate the list at the third node 
    fourth -> data = 17;
    fourth -> next = NULL;

    Display(head);
    int newData;
    printf("Enter the Data you want to insert : ");
    scanf("%d",&newData);
    head = InsertionAtEnd(head,newData);
    Display(head);

    return 0;
} 