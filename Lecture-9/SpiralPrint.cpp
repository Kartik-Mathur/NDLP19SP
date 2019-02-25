#include <iostream>
using namespace std;

void SpiralPrint(int a[][10],int r,int c){
	int sr=0;
	int sc=0,er=r-1,ec=c-1;

	while(sr<=er &&  sc<=ec){
		// Print sr
		for(int j=sc;j<=ec;j++){
			cout<<a[sr][j]<<" ";
		}
		sr++;

		// Print ec
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;

		if(sr<er){
			// Print er
			for(int j=ec;j>=sc;j--){
				cout<<a[er][j]<<" ";
			}
			er--;
		}

		if(sc<ec){
			// Print sc
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			sc++;
		}
	}

	cout<<endl;

}


int main(){
	int a[][10]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int r,c;
	cin>>r>>c;

	SpiralPrint(a,r,c);

	
	return 0;
}