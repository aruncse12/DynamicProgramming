#include <iostream>
#include <vector>
#include <set>
#include <queue>
#define MAX 10
using namespace std;

vector<int> tree[MAX];
queue<int> q;
set<int> nodes;
set<int>::iterator ii;
int num, m, n, visited[MAX], i, root = 0;

void dfs(int node)
{
    cout<<node<<endl;
    for(int i=0;i<tree[node].size();i++)
    {
        dfs(tree[node][i]);
    }
}

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data)
{
    struct node *n1 = new node;
    n1->data = data;
    n1->left = NULL;
    n1->right = NULL;
    return n1;
}
void leftView(struct node *root, int *maxlevel, int level)
{
    if(root == NULL)
        return;
    if(*maxlevel < level)
    {
        cout<<root->data<<endl;
        *maxlevel = level;
    }
    leftView(root->left, maxlevel, level+1);
    leftView(root->right, maxlevel, level+1);
}
void rightView(struct node *root, int *maxlevel, int level)
{
    if(root == NULL)
        return;
    if(*maxlevel < level)
    {
        cout<<root->data<<endl;
        *maxlevel = level;
    }
    rightView(root->right, maxlevel, level+1);
    rightView(root->left, maxlevel, level+1);
}
int main()
{
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>m>>n;
        if(root == 0)
            root = m;
        tree[m].push_back(n);
        nodes.insert(m);
        nodes.insert(n);
    }
    for(ii=nodes.begin();ii!=nodes.end();ii++)
    {
        cout<<*ii;
        for(i=0;i<tree[*ii].size();i++)
        {
            cout<<"-->"<<tree[*ii][i];
        }
        cout<<endl;
    }
    cout<<"BFS"<<endl;
    q.push(*nodes.begin());
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        cout<<t<<endl;
        for(i=0;i<tree[t].size();i++)
        {
            q.push(tree[t][i]);
        }
    }
    cout<<"DFS"<<endl;
    dfs(*nodes.begin());
    
    struct node *root = newnode(8);
    root->left = newnode(1);
    root->right = newnode(2);
    root->left->left = newnode(3);
    root->left->right = newnode(4);
    root->right->left = newnode(5);
    root->right->right = newnode(6);
    root->right->right->left = newnode(7);
    struct node *curr = root;
    cout<<"LeftView"<<endl;
    int maxlevel = 0;
    leftView(root,&maxlevel,1);
    cout<<"RightView"<<endl;
    maxlevel = 0;
    rightView(root,&maxlevel,1);
}