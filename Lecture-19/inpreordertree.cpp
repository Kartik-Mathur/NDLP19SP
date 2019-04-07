#include<iostream>
#include<queue>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;


	node(int d)
	{
		data=d;
		left=right=NULL;
	}
};


void levelOrder(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
       node* temp=q.front();
       q.pop();
       if(temp==NULL)
       {
           cout<<endl;
           if(!q.empty())
           {
               q.push(NULL);
           }
       }
       else
       {
           cout<<temp->data<<" ";
           if(temp->left)
           {
               q.push(temp->left);
           }
           if(temp->right)
           {
               q.push(temp->right);
           }
       }
    }

}


int index1=0;
node* inpretree(int *pre,int *in,int s,int e)
{
  if(s>e)
  {
    return NULL;
  }

   int data=pre[index1];
   index1++;

   node* root=new node(data);

   int k=-1;

   for(int i=s;i<=e;i++)
   {
     if(data==in[i])
     {
       k=i;
       break;
     }
   }


   root->left=inpretree(pre,in,s,k-1);
   root->right=inpretree(pre,in,k+1,e);

   return root;




}


int main()
{
   int pre[]={8,10,1,6,4,7,3,14,13};
   int in[]={1,10,4,6,7,8,3,13,14};
   int n=sizeof(pre)/sizeof(int);


   node *root= inpretree(pre,in,0,n-1);

   levelOrder(root);

   return 0;
}