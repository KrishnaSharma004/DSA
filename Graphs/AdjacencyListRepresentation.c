#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* createnode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void addedge(struct node* adj[],int i,int j){
    struct node* newnode = createnode(j);
    newnode -> next = adj[i];
    adj[i] = newnode;
    newnode = createnode(i);
    newnode -> next = adj[j];
    adj[j] = newnode;
}
void displayAdjlist(struct node* adj[],int v){
    for(int i=0;i<v;++i){
        printf("%d ",i);
        struct node* temp = adj[i];
        while(temp != NULL){
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}
int main(){
    int v = 4;
    struct node* adj[v];
    for(int i=0;i<v;++i){
        adj[i]=NULL;
    }
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,3);
    displayAdjlist(adj,v);
    return 0;
}