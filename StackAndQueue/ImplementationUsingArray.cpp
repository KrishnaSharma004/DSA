#include <stdio.h>

#define N 5
int Stack[N];
int Top=-1;

void Push(){
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(Top==N-1){
        printf("Overflow Condition!!\n");
    }else{
        Top++;
        Stack[Top]=x;
    }
}

void Pop(){
    int item ;
    if(Top==-1){
        printf("Underflow Condition !!\n");
    }else{
        item = Stack[Top];
        Top--;
        printf("Deleted Element is :");
        printf("%d\n",item);
    }
}

void Peek(){
    if(Top==-1){
        printf("Stack is Empty!!");
    }else{
        printf("%d\n",Stack[Top]);
    }
}
void Display(){
    printf("Element Of Stack are : \n");
    for(int i=Top;i>=0;i--){
        printf("%d  ",Stack[i]);
    }
    printf("\n");
}

int main(){
    int ch;
    do{
        printf("Enter choice : \n 1-Push\n2-Pop\n3-Peek\n4-Display\n0-Exit\n");
        printf("Your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3: 
                Peek();
                break;
            case 4:
                Display();
                break;
            case 0: printf("Exit!!!");
                    break;
            default : printf("Invalid Choice\n");
        }
    }
    while(ch!=0);
    getchar();
    return 0;
}