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
struct node* DeleteFirstNode(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr);
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
    printf("Linked list Before Deletion :\n");
    Display(head);
    
    head = DeleteFirstNode(head);
    printf("Linked list after Deleting the First node :\n");
    Display(head);

    return 0;
} 