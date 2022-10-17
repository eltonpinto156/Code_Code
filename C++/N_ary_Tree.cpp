/*
N-ary tree implementation.
> Insertion
> BFS + DFS Traversal
> Get value(s) by level

         1        is stored in the form    1
      /  |  \                              |
    2    3   4                             2 -> 3 -> 4
*/


#include<iostream>
#include<queue>
#include<stack>

using namespace std;
class Node
{
    int data = 0;
    Node *sibling, *child;

    public:
        Node(int val=0, Node *sib=NULL, Node *ch=NULL): data(val), sibling(sib), child(ch){}        
        Node* insert();
        void DFS(Node*);
        void BFS(Node*);
        //Returns all values at certain level
        void LOT(Node*, int);
};
int main()
{
    Node obj, *root = NULL;
    cout<<"Enter root's ";
    root = obj.insert();    
    obj.DFS(root);    
    obj.BFS(root);
    int lvl = 0;
    do
    {
        cout<<"Enter level: ";cin>>lvl;
        obj.LOT(root, lvl);
        cout<<endl;
    }while(lvl >= 0);

    return 0;
}
void Node::LOT(Node *root, int level)
{
    if(!level && root)
    {
        cout<<root->data<<" "; 
        return;
    }
    if(root->child)
    {
        root = root->child;
        level -= 1;
        Node * temp = root;
        while(temp)
        {
            LOT(temp, level);
            temp = temp->sibling; 
        }                
    }     
}
Node* Node::insert()
{
    int val = 0;
    cout<<"node value: "; 
    cin>>val;
    Node *temp = new Node(val);
    int sib = 0, ch = 0;
    cout<<"Does node "<<val<<" have sibling[0/1]: "; 
    cin>>sib;
    cout<<"Does node "<<val<<" have child[0/1]: "; 
    cin>>ch;

    if(ch)
    {
        cout<<"Enter "<<val<<"'s child ";
        temp->child = insert();
    }
    
    if(sib)  
    {
        cout<<"Enter "<<val<<"'s sibling ";
        temp->sibling = insert();
    }
    return temp;
}
void Node::BFS(Node *root)
{
    cout<<"BFS Traversal: ";
    queue <Node*> forChild;
    queue <Node*> forSib;

    forSib.push(root);

    while(!forChild.empty() || !forSib.empty())
    {
        Node *temp = NULL;
        if(!forSib.empty())
        {
            temp = forSib.front();
            forSib.pop();
        }
        else if(!forChild.empty())
        {
            temp = forChild.front();
            forChild.pop();            
        }
        if(temp->sibling)
        forSib.push(temp->sibling);
        if(temp->child)
        forChild.push(temp->child);

        cout<<temp->data<<" ";
    }
    cout<<endl;
}
void Node::DFS(Node *root)
{
    cout<<"DFS Travsersal: ";
    stack <Node*> forChild;
    stack <Node*> forSib;

    forSib.push(root);

    while(!forChild.empty() || !forSib.empty())
    {
        Node *temp = NULL;
        if(!forChild.empty())
        {
            temp = forChild.top();
            forChild.pop();            
        }
        else if(!forSib.empty())
        {
            temp = forSib.top();
            forSib.pop();
        }
        
        if(temp->sibling)
        forSib.push(temp->sibling);
        if(temp->child)
        forChild.push(temp->child);

        cout<<temp->data<<" ";
    }
    cout<<endl;
}
