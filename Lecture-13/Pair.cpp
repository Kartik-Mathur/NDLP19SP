// Pair
#include <iostream>
using namespace std;
class Pair{
public:
	int x;
	int y;
	Pair(int a,int b):x(a),y(b){	
	}

	bool operator>(const Pair &X){
		if(x>X.x && y>X.y){
			return true;
		}
		else{
			return false;
		}
	}

	~Pair(){
		cout<<"In Destructor"<<endl;
	}

};


int main(){
	Pair p1(2,4);
	Pair p2(3,2);

	if(p1>p2){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}


	return 0;
}