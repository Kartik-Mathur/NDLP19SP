// Trie
#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	bool isTerimal;
	char data;
	unordered_map<char,node*> h;

	node(char d){
		data = d;
		isTerimal=false;
	}
};

class Trie{
	node* root;
public:
	Trie(){
		root= new node('\0');
	}

	void addWord(char *word){
		node* temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];
			if(temp->h.count(ch)==0){
				temp->h[ch]=new node(ch);
				temp=temp->h[ch];
			}
			else{
				temp=temp->h[ch];
			}

		}
		temp->isTerimal = true;
	}

	bool searchWord(char* word){
		node* temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];
			if(temp->h.count(ch)==0){
				return false;
			}
			else{
				temp=temp->h[ch];
			}
		}
		return temp->isTerimal;
	}

};



int main(){

	Trie t;
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Hello");
	t.addWord("Hell");
	while(1){
		char ch[100];
		cin>>ch;
		if(t.searchWord(ch)==true){
			cout<<"Exists"<<endl;
		}
		else{
			cout<<"Not Exists"<<endl;
		}
	}


	return 0;
}