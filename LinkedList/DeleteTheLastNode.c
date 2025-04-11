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
struct node* DeleteTheLastNode(struct node* head){
    struct node* p= head;
    struct node* q= head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next =NULL;
    free(q);
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
    head = DeleteTheLastNode(head);
    printf("Linked list After Deletion : \n");
    Display(head);

    return 0;
} 