#include <stdio.h>
#include <stdlib.h>
#define floop(i,a,b) for(int i=a;i<b;++i)
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
struct node* DeletionAtIndex(struct node* head,int index){
    struct node* p= head;
    struct node* q= head->next;
    floop(i,0,index-1){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
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
    int index;
    printf("Enter the index which you want to delete : ");
    scanf("%d",&index);
    head = DeletionAtIndex(head,index);
    printf("Linked list after Deleting At the index %d:\n",index);
    Display(head);

    return 0;
} 