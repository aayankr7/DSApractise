#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
    char x;
    struct node* y;
};
struct hashNode
{
    int x;
    struct node* y;
};

struct hashNode* haAsh(char *x, int n)
{
    struct hashNode* h = (struct hashNode*)malloc(10*sizeof(struct hashNode));
    for(int i=0; i<10; i++)
    {
        h[i].x = 0;
        h[i].y = NULL;
    }
    for(int i=0;i<n;i++)
    {
        if(h[(*(x+i))%10].x == 0)
        {
           h[(*(x+i))%10].y = (struct node*)malloc(sizeof(struct node));
           h[(*(x+i))%10].y->x = *(x+i);
           h[(*(x+i))%10].y->y = NULL;
           h[(*(x+i))%10].x = 1;
        }else if(h[(*(x+i))%10].x == 1)
        {
            struct node* p;
            for(p=h[(*(x+i))%10].y;p->y!=NULL;p=p->y){}
            p->y = (struct node*)malloc(sizeof(struct node));
            p->y->y=NULL;
            p->y->x=*(x+i);
        }
    }

    return h;
}

int main()
{
    cout<<"Enter the number of characters you want to include : ";
    int n;
    cin>>n;
    cout<<"Enter the characters : ";
    char x[n];
    for(int i = 0; i<n; i++)
    {
        cin>>x[i];
    }

    struct hashNode* p = haAsh(&x[0], n);
    struct node* q;
    int j;

    for(int i = 0; i<n ;i++)
    {
        j=1;
        q = (*(p+((*(&x[0]+i))%10))).y;
        while(q->x == x[i] && q->y != NULL)
        {
            j++;
            q = q->y;
        }
        cout<<"The character "<<x[i]<<" was entered "<<j<<" times"<<endl;
    }


}