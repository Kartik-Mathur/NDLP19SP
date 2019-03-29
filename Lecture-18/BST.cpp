#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
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

void LevelOrderBuild(node* &root){
	int data;
	cout<<"Enter the root node : ";
	cin>>data;
	root = new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<"Enter children of "<<temp->data<<" : ";
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}
	}
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

node* searchInBst(node* root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data==key){
		return root;
	}
	else if(root->data>key){
		return searchInBst(root->left,key);
	}
	else{
		return searchInBst(root->right,key);
	}
}

bool isBST(node* root,int k1=INT_MIN,int k2=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=k1 && root->data<=k2 && isBST(root->left,k1,root->data) && isBST(root->right,root->data,k2)){
		return true;
	}
	else{
		return false;
	}

}


node* buildTree(){
	node* root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=InsertInBst(root,data);
		cin>>data;
	}
	return root;
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair Balanced(node* root){
	Pair p;
	if(root==NULL){
		p.height=0;
		p.balanced=true;
		return p;
	}
	Pair left=Balanced(root->left);
	Pair right=Balanced(root->right);
	if(left.balanced && right.balanced && abs(left.height-right.height)<=1){
		p.balanced=true;
	}
	else{
		p.balanced=false;
	}
	p.height=max(left.height,right.height)+1;
	return p;
}

node* createTree(int *a,int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node* n=new node(a[mid]);
	n->left=createTree(a,s,mid-1);
	n->right=createTree(a,mid+1,e);
	return n;
}


int main(){
	node* root=NULL;
	// root=buildTree();
	int a[]={1,2,3,4,5,6,7,8};
	root=createTree(a,0,7);

	LevelOrder(root);
	// node* ans=searchInBst(root,16);
	// if(ans){
	// 	cout<<ans->data<<endl;
	// }
	// else{
	// 	cout<<"Does not exists"<<endl;
	// }
	Pair p=Balanced(root);
	if(p.balanced){
		cout<<"Balanced"<<endl;
	}
	else{
		cout<<"Not Balanced"<<endl;
	}
	cout<<"height : "<<p.height<<endl;


	return 0;
}