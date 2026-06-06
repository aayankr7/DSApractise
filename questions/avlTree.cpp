#include <iostream>
#include <cstdlib>
using namespace std;

struct treeNode
{
    int val;
    int balance_factor;
    struct treeNode* left = NULL;
    struct treeNode* right =  NULL;
};

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    if(y>x)
    {
        return y;
    }else
    {
        return x;
    }
}

void insert (struct treeNode* root, int x)
{
    if(x>=root->val  && root->right ==NULL)
    {
        root->right = (struct treeNode*)malloc(sizeof(struct treeNode));
        root->right->left = NULL;
        root->right->right = NULL;
        root->right->val = x;
    }else if(x>=root->val  && root->right !=NULL)
    {
        insert(root->right, x);
    }else if(x<root->val  && root->left ==NULL)
    {
        root->left = (struct treeNode*)malloc(sizeof(struct treeNode));
        root->left->left = NULL;
        root->left->right = NULL;
        root->left->val = x;
    }else if(x<root->val  && root->left !=NULL)
    {
        insert(root->left, x);
    }
}

struct treeNode* plantTree(int *x, int n)
{
    struct treeNode* root = (struct treeNode*)malloc(sizeof(treeNode));
    root->left = NULL;
    root->right = NULL;
    root->val = *x;
    
    for(int i = 1; i<n; i++)
    {
        insert(root, *(x+i));
    }

    return root;
}

int maxHeight (struct treeNode* x)
{
    if(x->left == NULL && x->right == NULL)
    {
        return 1;
    }
    if(x==NULL)
    {
        return 0;
    }
    return 1 + max(maxHeight(x->left), maxHeight(x->right));
}


int main() 
{
    int arr1[] = {1,2,3,4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    struct treeNode* root1 = plantTree(arr1, n1);
    
    cout << "Test 1 (Balanced Tree) Max Height: " << maxHeight(root1) << "\n";  
}

