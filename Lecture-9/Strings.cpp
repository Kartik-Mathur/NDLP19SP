// Strings
#include <iostream>
using namespace std;

int main(){
	string s[10]={
		"Hello World",
		"COding Blocks"
	};

	for(int i=0;i<2;i++){
		for(int j=0;s[i][j]!='\0';j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}

	// cin>>s[0];
	// cin>>s[1];

	// cout<<s[0]<<endl;
	// cout<<s[1]<<endl;




	// string s("Hello World!");

	// char a[]="Big bang theory";
	// string s1(a);

	// string s3="Hello COding Blocks";

	// // cin>>s3;
	// getline(cin,s3);

	// for(int i=0;s[i]!='\0';i++){
	// 	cout<<s[i]<<" ";
	// }
	// cout<<endl;


	// cout<<s<<endl<<s1<<endl<<s3<<endl;

	
	return 0;
}