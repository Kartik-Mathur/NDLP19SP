#include<iostream>
using namespace std;

int nstairs(int n,int k=3)
{
	if(n==0)
	{
		return 1;
	}

	if(n<0)
	{
		return 0;
	}
    
    int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=nstairs(n-i,k);
	}

	return ans;
}

int topdown(int n,int *dp,int k=3)
{
	if(n==0)
	{
		dp[n]=1;
		return dp[n];
	}
	if(n<0)
	{
		return 0;
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}

	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=topdown(n-i,dp,k);
	}
	dp[n]=ans;
	return dp[n];
}


int bottomup(int n,int k=3)
{
   int dp[1000]={0};
   dp[0]=1;
   for(int steps=1;steps<=n;steps++)
   {
   	  for(int i=1;i<=k;i++)
   	  {
   	  	 if(steps-i>=0)
   	  	 {
            dp[steps]+=dp[steps-i];
   	  	 }
   	  }
   }
   return dp[n];
}

int timesteps(int n,int k=3)
{
	int dp[1000]={0};
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(i-k-1>=0)
		{
			dp[i]=2*dp[i-1]-dp[i-k-1];
		}
		else
		{
			dp[i]=2*dp[i-1];
		}
	}

	for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[n];
}


int main()
{   int n;
	cin>>n;
	int dp[1000];
	for(int i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	cout<<timesteps(n)<<endl;
	cout<<bottomup(n)<<endl;
	cout<<topdown(n,dp)<<endl;
	cout<<nstairs(n)<<endl;
	return 0;
}