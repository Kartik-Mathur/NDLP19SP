// Oops
#include <iostream>
#include <vector>
using namespace std;

// ------------ BLUEPRINT -----------
class Car{
private:
	int price;
public:
	const int tyres;
	static int count;
	char *name;	
	int model;
	int mileage;

	Car():tyres(4){
		name=NULL;
		cout<<"In Default Constructor"<<endl;
		count++;
	}

	// Parameterized Constructor
	Car(char *n,int p,int m,int mil):tyres(4),price(p){
		cout<<"In Parameterized Constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		// price=p;
		mileage=mil;
		model=m;
		count++;
	}

	Car(Car &X):tyres(4){ 
		cout<<"In Copy Constructor"<<endl;
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		model=X.model;
		mileage=X.mileage;
		count++;
	}

	void print()const{
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

	void SetPrice(int p){
		if(p>100&&p<200){
			price=p;
		}
		else{
			price=150;
		}
	}

	int GetPrice(){
		return price;
	}

	// Copy Assignment Operator
	void operator=(Car X){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		model=X.model;
		mileage=X.mileage;
	}

	void operator+=(Car X){
		char *oldName=name;
		name=new char[strlen(oldName)+strlen(X.name)+1];
		strcpy(name,oldName);
		int i=strlen(oldName);
		int l=strlen(X.name);
		for(int j=0;j<=l;j++){
			name[i]=X.name[j];
			i++;
		}
		price+=X.price;
		model+=X.model;
		mileage+=X.mileage;
		delete []oldName;
	}




	~Car(){
		cout<<"Deleting Car : "<<name<<endl;
		count--;
	}

};

int Car::count=0;




int main(){
	Car A;
	// A.price=100;
	A.SetPrice(140);
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
	// Car D(C);

	// D.name[0]='T';
	// Car E;
	// E=A;
	// E.name[0]='Z';
	// cout<<A.price<<endl;
	// Car*D=new Car("Ford",300,2020,20);

	// cout<<A.GetPrice()<<endl;
	C+=B;
	A.print();
	B.print();
	C.print();
	// (*D).print();
	// cout<<A.count<<endl;
	// delete D;
	// cout<<A.count<<endl;

	// D.print();
	// E.print();


	


	return 0;
}