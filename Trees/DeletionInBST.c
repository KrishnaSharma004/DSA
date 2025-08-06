#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};
struct Node* create(){
    int x;
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter data(-1 for no node) :");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->key=x;
    printf("Enter left child of %d",x);
    newnode->left=create();
    printf("Enter right child of %d",x);
    newnode->right=create();

    return newnode;
}
struct Node* getSuccessor(struct Node* curr) {
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}
struct Node* delNode(struct Node* root, int x) {
    if (root == NULL)
        return root;

    // If key to be searched is in a subtree
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else {
        // If root matches with the given key

        // Cases when root has 0 children or 
        // only right child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }

        // When root has only left child
        if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // When both children are present
        struct Node* succ = getSuccessor(root);
        root->key = succ->key;
        root->right = delNode(root->right, succ->key);
    }
    return root;
}

void Inorder(struct Node* root) {
    if (root != NULL) {
        Inorder(root->left);
        printf("%d ", root->key);
        Inorder(root->right);
    }
}
int main() {
    struct Node* root ;
    root=0;
    root = create();
    printf("Inorder traversal before deletion is :");
    Inorder(root);
    int x;
    printf("\nEnter data to delete :");
    scanf("%d",&x);
    root = delNode(root,x);
    printf("Inorder traversal after deletion is :");
    Inorder(root);
    return 0;
}