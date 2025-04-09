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
struct node* InsertionInBetween(struct node* head, int data,int index){
    struct node *ptr = (struct node*)malloc(sizeof (struct node));
    struct node *p= head;
    int i = 0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p->next;
    p -> next = ptr;
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
    int index;// zero based indexing !!!!
    printf("Enter the Data you want to insert : ");
    scanf("%d",&newData);
    printf("Enter the index at which you want insertion : ");
    scanf("%d",&index);
    head = InsertionInBetween(head,newData,index);
    Display(head);

    return 0;
}