#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *createNode(int n)
{
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = n;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
};

struct node *addNode(int num, struct node *root)
{
    if (root == NULL)
    {
        root = createNode(num);
    }
    else
    {
        if (root->data > num)
        {
            root->left = addNode(num, root->left);
        }
        else
        {
            root->right = addNode(num, root->right);
        }
    }
    return root;
};

void inOrder(struct node *root){
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

void preOrder(struct node *root){
    if(root == NULL){
        return ;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root){
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

int main()
{
    int i = 0;
    root = addNode(50, root); // NULL
    addNode(100, root);       // 50
    addNode(35, root);
    addNode(25, root);
    addNode(40, root);
    addNode(150, root);
    addNode(250, root);
    printf("\n%d ", root->data);                      // 50
    printf("\n%d ", root->left->data);                // 35
    printf("\n%d ", root->left->left->data);          // 25
    printf("\n%d ", root->left->right->data);         // 40
    printf("\n%d ", root->right->data);               // 100
    printf("\n%d ", root->right->right->data);        // 150
    printf("\n%d ", root->right->right->right->data); // 250
    return 0;
}