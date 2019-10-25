#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;
node* newnode(int ele)
{
    node *temp= new node;
    temp->data=ele;
    temp->left=temp->right= NULL;
    return temp;
};
int height(node* root)
{
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}
int diameter(node* root)
{
    if(root== NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);

    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(lh+rh+1,max(ld,rd));
}
int main()
{
    int n,m;
    cin>>n>>m;
    node *start = newnode(m);
    node* ptr;
    string str;
    while(n--)
    {
        cin>>str>>m;
        ptr=start;
        int i=0;
        while(str[i] && ptr)
        {
            if(str[i]=='L')
            {
                if(ptr->left==NULL)
                    ptr->left=newnode(0);
                ptr=ptr->left;
            }
            else
            {
                if(ptr->right==NULL)
                    ptr->right=newnode(0);
                ptr=ptr->right;
            }
            i++;
        }
        ptr->data=m;
    }
    cout<<diameter(start)<<endl;
    return 0;
}
