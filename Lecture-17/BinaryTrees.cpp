// BinaryTrees
#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d):data(d),left(NULL),right(NULL){
	}
};

node* buildTree(){
	int data;
	cin>>data;

	if(data==-1){
		return NULL;
	}
	else{
		node* n=new node(data);
		n->left=buildTree();
		n->right=buildTree();
		return n;
	}
}

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

int countNodes(node* root){
	// base case
	if(root==NULL){
		return 0;
	}
	// Recursive case
	return 1+countNodes(root->left)+countNodes(root->right);
}

int height(node* root){
	if(root==NULL){
		return 0;
	}

	int left=height(root->left);
	int right=height(root->right);
	return 1+max(left,right);
}

void LevelOrder(node* root){
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();

		if(temp==NULL){
			cout<<endl;
			// If queue is not empty then push the NULL again in queue
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
	cout<<endl;

}

void mirror(node* root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

int diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	return max(op1,max(op2,op3));
}

class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.height=1+max(left.height,right.height);

	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));
	return p;
}



int main(){
	node* root=NULL;
	root=buildTree();

	Preorder(root);
	cout<<endl;
	Inorder(root);
	cout<<endl;
	Postorder(root);
	cout<<endl;
	LevelOrder(root);
	mirror(root);
	LevelOrder(root);
	cout<<"No of Nodes : "<<countNodes(root)<<endl;
	cout<<"Height : "<<height(root)<<endl;
	cout<<"Diameter : "<<diameter(root)<<endl;
	Pair p=fastDiameter(root);
	cout<<"Fast height : "<<p.height<<endl;
	cout<<"Fast dia : "<<p.diameter<<endl;


	return 0;
}