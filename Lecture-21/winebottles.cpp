#include<iostream>
using namespace std;

int wine(int *bottles,int n,int day,int i,int j)
{
   if(i>j)
   {
   	 return 0;
   }

   int op1=bottles[i]*day+wine(bottles,n,day+1,i+1,j);
   int op2=bottles[j]*day+wine(bottles,n,day+1,i,j-1);

   int ans=max(op1,op2);
   return ans;

}

int topdown(int *bottles,int n,int day,int i,int j,int dp[][1000])
{
	if(i>j)
	{
		return 0;
	}

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}

	int op1=bottles[i]*day+topdown(bottles,n,day+1,i+1,j,dp);
    int op2=bottles[j]*day+topdown(bottles,n,day+1,i,j-1,dp);

    int ans=max(op1,op2);
    dp[i][j]=ans;
    return dp[i][j];

}

int bottomup(int *bottles,int n)
{
	int dp[1000][1000]={0};
	int day=n;
	for(int i=0;i<n;i++)
	{
		dp[i][i]=bottles[i]*day;
	}
	day--;
	for(int len=2;len<=n;len++)
	{
		int i=0;
		int maxi=n-len;
		while(i<=maxi)
		{
			int j=i+len-1;
			int op1=bottles[i]*day+dp[i+1][j];
			int op2=bottles[j]*day+dp[i][j-1];
			dp[i][j]=max(op1,op2);
			i++;
		}
		day--;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[0][n-1];
}

int main()
{
	int bottles[]={2,3,5,1,4};
	int n=sizeof(bottles)/sizeof(int);
	int day=1;
	int dp[1000][1000];
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			dp[i][j]=-1;
		}
	}
	cout<<bottomup(bottles,n)<<endl;
	cout<<topdown(bottles,n,day,0,n-1,dp)<<endl;
	cout<<wine(bottles,n,day,0,n-1)<<endl;
	return 0;
}