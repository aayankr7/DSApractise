#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int val;
    struct node* next;
};

struct node* y = (struct node*)malloc(sizeof(struct node));

struct treeNode
{
    int val;
    struct treeNode* left = NULL;
    struct treeNode* right =  NULL;
};

struct node* linkedList(int* x, int n)
{   
    struct node* p;

    for(int i=0; i<n; i++)
    {   
        if(i==0)
        {
            y->next = NULL;
            p = y;
            p->val = *x;
        }else
        {
            p->next = (struct node*)malloc(sizeof(struct node));
            p = p->next;
            p->val = *(x+i);
            p->next = NULL;
        }

    }

    return y;
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

struct treeNode* plantTree(struct node* l)
{
    struct treeNode* root = (struct treeNode*)malloc(sizeof(treeNode));
    struct node* p;
    p = l;
    root->left = NULL;
    root->right = NULL;
    root->val = p->val;
    p=p->next;
    
    while(p!= NULL)
    {
        insert(root, p->val);
        p=p->next;
        if(p->next == NULL)
        {
            insert(root, p->val);
        }
    }

    return root;
}

// For testing
void inorder(struct treeNode* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    int arr[] = {10};
    int n = sizeof(arr)/sizeof(arr[0]);

    node* head = linkedList(arr, n);

    treeNode* root = plantTree(head);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}