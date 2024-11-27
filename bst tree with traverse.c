#include<stdio.h>
struct node{
int data;
struct node* left;
struct node* right;
};
struct node* createNode(int data){
struct node* newNode = (struct node*) malloc(sizeof(struct node));
newNode-> data= data;
newNode -> left = NULL;
newNode -> right= NULL;
return newNode;
}
struct node* insertNode(struct node* root, int data)
{
    if( root == NULL){
        root = createNode(data); }
        else {
            if(data <  root-> data){
                root-> left = insertNode(root->left, data);
            } else {
                root-> right = insertNode(root->right, data); }
        }
        return root;
}
void inordertraversal(struct node* root){
if (root == NULL)
    return;
    inordertraversal(root->left);
    printf("%d ",root->data);
    inordertraversal(root-> right);

}

void preordertraversal(struct node* root){
if (root == NULL)
    return;
    printf("%d ",root->data);
    preordertraversal(root->left);
    preordertraversal(root-> right);

}

void postordertraversal(struct node* root){
if (root == NULL)
    return;
    postordertraversal(root->left);
    postordertraversal(root-> right);
    printf("%d ",root->data);

}


int main(){
struct node* root = NULL;
root= insertNode(root, 40);
insertNode (root, 60);
insertNode(root, 50);
insertNode(root, 33);
insertNode(root, 55);
insertNode(root, 11);

printf("inorder: ");
inordertraversal(root);
printf("\n");

printf("preorder: ");
preordertraversal(root);
printf("\n");

printf("postorder: ");
postordertraversal(root);
printf("\n");


}


