// N_Queen
#include <iostream>
using namespace std;

bool CanPlaceQueenHere(int board[][10],int i,int j,int n){

	for(int k=0;k<n;k++){
		if(board[i][k]||board[k][j]){
			return false;
		}
	}

	// Left diagnol
	int k=i;
	int l=j;
	while(k>=0 && l>=0){
		if(board[k][l]){
			return false;
		}
		k--;
		l--;
	}

	// Right Diagnol
	k=i;l=j;
	while(k>=0 && l<n){
		if(board[k][l]){
			return false;
		}
		k--;
		l++;
	}
	return true;
	
}


bool NQueen(int board[][10],int n,int i){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<board[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	for(int j=0;j<n;j++){
		if(CanPlaceQueenHere(board,i,j,n)){
			board[i][j]=1;
			bool KyaBaakiBaatBani=NQueen(board,n,i+1);
			if(KyaBaakiBaatBani){
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}



int main(){
	int board[10][10]={0};
	int n;
	cin>>n;

	NQueen(board,n,0);

	cout<<endl;



	return 0;
}