#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
struct node* create(){
    int x;
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node) :");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d",x);
    newnode->left=create();
    printf("Enter right child of %d",x);
    newnode->right=create();

    return newnode;
}
void Postorder(struct node* root){
    if(root==0) return ;

    Postorder(root->left);
    Postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    struct node* root;
    root=0;
    root=create();
    printf("Postorder Traversl is :");
    Postorder(root);
    return 0;
}