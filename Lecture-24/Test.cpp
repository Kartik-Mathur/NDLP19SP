#include <iostream>
#include <map>
#include <list>
#include<climits>
#include <set>
using namespace std;

template<typename T>
class Graph{
	map<T,list<pair<T,int> > > adjList;
public:
	void addEdge(T u,T v,int d,bool bidir=true){
		// pair<T,int> p(v,d);
		adjList[u].push_back(make_pair(v,d));
		if(bidir){
			adjList[v].push_back(make_pair(u,d));
		}
	}

	void Print(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto children:node.second){
				cout<<"("<<children.first<<","<<children.second<<")";
			}
			cout<<endl;
		}
	}

	int SSSP(T src,T des){
		set<pair<int,T> > s;
		map<T,int > dist;

		for(auto node:adjList){
			dist[node.first]=INT_MAX;
		}

		dist[src]=0;
		s.insert(make_pair(0,src));

		while(!s.empty()){
			auto f=*(s.begin());
			s.erase(s.begin());
			int parentDist = f.first;
			T parentNode = f.second;

			for(auto children:adjList[parentNode]){
				if(dist[children.first]>parentDist+children.second){
					auto p = s.find(make_pair(dist[children.first],children.first));
					if(p!=s.end()){
						s.erase(p);
					}
					dist[children.first]=parentDist+children.second;
					s.insert(make_pair(dist[children.first],children.first));
				}
			}	
		}

		for(auto node:dist){
			cout<<"Distance of "<<node.first<<" from "<<src<<" : "<<node.second<<endl;
		}

		return dist[des];
	}

};


int main(){
	// auto i= 10;
	// cout<<i<<endl;
	Graph<string> g; 
		g.addEdge("Amritsar","Agra",1);
		g.addEdge("Amritsar","Jaipur",4); 
		g.addEdge("Delhi","Jaipur",2); 
		g.addEdge("Delhi","Agra",1); 
		g.addEdge("Bhopal","Agra",2); 
		g.addEdge("Bhopal","Mumbai",3); 
		g.addEdge("Mumbai","Jaipur",8);

	g.Print();
	cout<<g.SSSP("Amritsar","Mumbai")<<endl;;


	return 0;
}