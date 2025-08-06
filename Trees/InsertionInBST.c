#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
struct node* newNode(int item){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp-> data = item;
    temp->left = temp->right=NULL;
    return temp;
}
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
struct node* Insert(struct node* node,int key){
    if(node==0) return newNode(key);

    if(node->data==key) return node;

    if(node->data > key) node->right=Insert(node->right,key);
    if(node->data < key) node->left=Insert(node->left,key);

    return node;
}
void Inorder(struct node* root){
    if(root==0) return ;

    Inorder(root->left);
    printf("%d ",root->data);
    Inorder(root->right);
}
int main(){
    struct node* root;
    root=create();
    printf("Inroder traversal before insertion is :");
    Inorder(root);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,30);
    root = Insert(root,40);
    printf("\nInorder traveral after insertion is :");
    Inorder(root);
    return 0;
}