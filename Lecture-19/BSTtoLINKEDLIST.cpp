#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;
	node(int d):data(d),left(NULL),right(NULL){
	}
};

void Preorder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node* root){
	if(root==NULL){
		return;
	}

	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void Postorder(node* root){
	if(root==NULL){
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}



node* InsertInBst(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	if(data<root->data){
		root->left=InsertInBst(root->left,data);
	}
	else{
		root->right=InsertInBst(root->right,data);
	}
	return root;
}



node* buildTree()
{
	node* root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=InsertInBst(root,data);
		cin>>data;
	}
	return root;
}





class LinkedList
{
public:

	node* head;
    node* tail;
};



LinkedList BSTtoLL(node *root)
{
	LinkedList l;
	if(root==NULL)
	{
		l.head=NULL;
		l.tail=NULL;
		return l;
	}
	if(root->left!=NULL && root->right==NULL)
	{
		LinkedList left=BSTtoLL(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
    else if(root->right!=NULL && root->left==NULL)
	{
       LinkedList right=BSTtoLL(root->right);
       root->right=right.head;
       l.head=root;
       l.tail=right.tail;
       return l;
	}

	else if(root->right==NULL && root->left==NULL)
	{
		l.head=root;
		l.tail=root;
		return l;
	}

	else
	{
		LinkedList left=BSTtoLL(root->left);
		LinkedList right=BSTtoLL(root->right);

		left.tail->right=root;
		root->right=right.head;
        
        l.head=left.head;
        l.tail=right.tail;
        return l;

	}



}


void print(node *head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->right;
	}
}


int main()
{
	
    node *root=buildTree();
    LinkedList l=BSTtoLL(root);
    print(l.head);

    return 0;
}



























