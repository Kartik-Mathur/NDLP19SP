// ElephantWays
#include <iostream>
using namespace std;

int ways(int i,int j){
	if(i==0&&j==0){
		return 1;
	}

	int ans=0;
	for(int k=0;k<i;k++){
		ans+=ways(k,j);
	}
	for(int k=0;k<j;k++){
		ans+=ways(i,k);
	}
	return ans;

}

int main(){
	int i,j;
	cin>>i>>j;
	cout<<ways(i,j)<<endl;


	return 0;
}
