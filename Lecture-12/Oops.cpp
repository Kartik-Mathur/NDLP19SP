// Oops
#include <iostream>
#include <vector>
using namespace std;

// ------------ BLUEPRINT -----------
class Car{

public:
	char *name;	
	int model;
	int price;
	int mileage;

	Car(){
		name=NULL;
		cout<<"In Default Constructor"<<endl;
	}

	// Parameterized Constructor
	Car(char *n,int p,int m,int mil){
		cout<<"In Parameterized Constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		mileage=mil;
		model=m;
	}

	// Car(Car &X){ 
	// 	cout<<"In Copy Constructor"<<endl;
	// 	name=new char[strlen(X.name)+1];
	// 	strcpy(name,X.name);
	// 	price=X.price;
	// 	model=X.model;
	// 	mileage=X.mileage;
	// }

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : $"<<price<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Mileage : "<<mileage<<endl<<endl;
	}

	void SetName(char *n){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

};

int main(){
	Car A;
	A.price=100;
	A.model=1111;
	// cout<<A.price<<" and "<<A.model<<endl;
	// strcpy(A.name,"BMW");
	A.SetName("BMW");
	A.mileage=10;
	// cout<<A.name<<endl;

	Car B("AUDI",400,2222,12);
	// strcpy(B.name,"AUDI");
	// B.price=400;
	// B.model=2222;
	// B.mileage=12;
	Car C(A);
	Car D(C);

	D.name[0]='T';
	
	A.print();
	B.print();
	C.print();
	D.print();

	


	return 0;
}