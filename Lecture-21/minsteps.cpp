#include<iostream>
#include<climits>
using namespace std;

int minsteps(int number)
{
	if(number==1)
	{
		return 0;
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	op1=minsteps(number-1)+1;
	if(number%2==0)
	{
		op2=minsteps(number/2)+1;
	}
    
    if(number%3==0)
    {
    	op3=minsteps(number/3)+1;
    }

    int ans=min(op1,min(op2,op3));
    return ans;

}

int topdown(int number,int *dp)
{
   if(number==1)
   {
   	 dp[number]=0;
   	 return 0;
   }
   
   if(dp[number]!=-1)
   {
   	 return dp[number];
   }

   int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	op1=topdown(number-1,dp)+1;
	if(number%2==0)
	{
		op2=topdown(number/2,dp)+1;
	}
    
    if(number%3==0)
    {
    	op3=topdown(number/3,dp)+1;
    }

    int ans=min(op1,min(op2,op3));
    dp[number]=ans;
    return dp[number];
}

int bottomup(int n)
{
	int dp[1000]={0};
	dp[1]=0;
	for(int i=2;i<=n;i++)
	{
       int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
       op1=dp[i-1]+1;
       if(i%2==0)
       {
       	 op2=dp[i/2]+1;
       }
       if(i%3==0)
       {
       	 op3=dp[i/3]+1;
       }

       dp[i]=min(op1,min(op2,op3));
	}

	return dp[n];
}


int main()
{
	int n;
	cin>>n;
	int dp[1000];
	for(int i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	cout<<bottomup(n)<<endl;
	cout<<topdown(n,dp)<<endl;
	cout<<minsteps(n)<<endl;
	return 0;
}