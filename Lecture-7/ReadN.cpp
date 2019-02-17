// ReadN
#include <iostream>
using namespace std;

int main(){

	char a[100]="Hello WOrld";

	// a="World";
	int n;

	cin>>n;
	// cin.ignore();
	cin.get();
	cin.getline(a,100);

	cout<<n<<endl;
	cout<<a<<endl;

	return 0;
}