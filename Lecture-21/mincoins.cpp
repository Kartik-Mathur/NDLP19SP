#include<iostream>
#include<climits>
using namespace std;

int mincoins(int *coins,int n,int amount)
{
   if(amount==0)
   {
   	  return 0;
   }
   
   int ans=INT_MAX;
   int smallans;
   for(int i=0;i<n;i++)
   {
   	  if(amount-coins[i]>=0)
   	  {
         smallans=mincoins(coins,n,amount-coins[i])+1;
   	  }
   	  if(smallans!=INT_MAX)
   	  {
   	  	 ans=min(ans,smallans);
   	  }
   }

   return ans;
}


int bottomup(int *coins,int n,int amount)
{
	int dp[1000];
	dp[0]=0;
	for(int i=1;i<=amount;i++)
	{
       dp[i]=INT_MAX;
	}
    
    for(int Amount=1;Amount<=amount;Amount++)
    {
    	for(int i=0;i<n;i++)
    	{
    		if(Amount-coins[i]>=0)
    		{
    			dp[Amount]=min(dp[Amount],1+dp[Amount-coins[i]]);
    		}
    	}
    }

    for(int Amount=0;Amount<=amount;Amount++)
    {
      cout<<dp[Amount]<<" ";	
    }
    cout<<endl;

    return dp[amount];
}

int main()
{
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	cout<<bottomup(coins,n,amount)<<endl;
	cout<<mincoins(coins,n,amount)<<endl;
	return 0;
}