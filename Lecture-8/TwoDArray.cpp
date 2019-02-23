// TwoDArray
#include <iostream>
using namespace std;

int main(){
	//Initialization
	int a[][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	// User Input
	int b[10][10];
	int r,c;
	cout<<"Enter Row and Cols : ";
	// cin>>r>>c;
	r=4;c=4;
	int count=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			b[i][j]=count;
			count++;
		}
	}
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<b[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	for(int col=0;col<c;col++){
		for(int row=0;row<r;row++){

			cout<<b[row][col]<<" ";
		}
		cout<<endl;
	}

	// Character 2-D Array
	char ch[][3]={
		{'A','B','C'},
		{'D','E'},
		{'G','H','I'}
	};

	cout<<ch[0]<<endl;
	cout<<ch[1]<<endl;
	cout<<ch[2]<<endl;

	char ch1[][10]={
		"Hello","World","Coding","Blocks"
	};
	// cout<<ch1[0]<<endl;
	// cout<<ch1[1]<<endl;
	// cout<<ch1[2]<<endl;
	// cout<<ch1[3]<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;ch1[i][j]!='\0';j++){
			cout<<ch1[i][j]<<" ";
		}
		cout<<endl;
	}

	


	return 0;
}