#include<stdio.h>

struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* createNode(int data){
struct Node* newNode = (struct Node*) malloc (sizeof (struct Node));
newNode -> data = data;
newNode -> left = NULL;
newNode -> right = NULL;
return newNode;
}
//inorder
void inordertraversal(struct Node* root){
if (root == NULL)
    return ;
inordertraversal (root -> left);
printf("%d",root -> data);
inordertraversal(root -> right);
}
//preorder
void preordertraversal(struct Node* root){
if (root == NULL)
    return ;
printf("%d",root -> data);
preordertraversal (root -> left);
preordertraversal(root -> right);
}
//postorder
void postordertraversal(struct Node* root){
if (root == NULL)
    return ;
postordertraversal (root -> left);
postordertraversal(root -> right);
printf("%d",root -> data);
}
int main()
{
    struct Node* root = createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left-> left=createNode(4);
    root->left-> right=createNode(5);

    printf("inorder");
    inordertraversal(root);
    printf("\n");
    printf("preorder");
    preordertraversal(root);
    printf("\n");
    printf("postorder");
    postordertraversal(root);
    printf("\n");
    return 0;

}
