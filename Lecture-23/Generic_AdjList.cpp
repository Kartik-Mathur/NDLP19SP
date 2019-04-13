// Generic_AdjList
#include <iostream>
#include <list>
#include <climits>
#include <queue>
#include <map>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > adjList;
public:
	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void print(){
		for(auto node:adjList){
			cout<<node.first<<"->";
			for(auto neighbours:node.second){
				cout<<neighbours<<",";
			}
			cout<<endl;
		}
	}

	void BFS(T src){
		queue<T> q;
		map<T,bool> visited;

		q.push(src);
		visited[src]=true;
		while(!q.empty()){
			T node=q.front();
			q.pop();
			cout<<node<<",";

			for(auto neighbours:adjList[node]){
				if(!visited[neighbours]){
					q.push(neighbours);
					visited[neighbours]=true;
				}
			}
		}
		cout<<endl;

	}

	int SSSP(T src,T des){
		T temp=des;
		cout<<"Des : "<<des<<endl;
		queue<T> q;
		map<T,int> dist;
		map<T,T> parent;

		for(auto node:adjList){
			dist[node.first]=INT_MAX;
		}

		q.push(src);
		dist[src]=0;
		parent[src]=src;

		while(!q.empty()){
			T node = q.front();
			q.pop();
			for(auto neighbours:adjList[node]){
				if(dist[neighbours]==INT_MAX){
					dist[neighbours]=dist[node]+1;
					parent[neighbours]=node;
					q.push(neighbours);
				}
			}
		}
		// for(auto i:dist){
		// 	cout<<"Distance of "<<i.first<<" from "<<src<<" : "<<i.second<<endl;
		// }
		// cout<<endl;

		// for(auto i:parent){
		// 	cout<<i.first<<"-->"<<i.second<<endl;
		// }

		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src<<endl;


		return dist[des];
	}

	void DFSHelper(T src,map<T,bool> &visited){
		cout<<src<<",";
		visited[src]=true;

		for(auto children:adjList[src]){
			if(!visited[children]){
				DFSHelper(children,visited);
				
			}
		}
	}

	void DFS(T src){
		int component=1;

		map<T,bool> visited;
		DFSHelper(src,visited);

		for(auto node:adjList){
			if(!visited[node.first]){
				DFSHelper(node.first,visited);
				component++;
			}
		}
		cout<<endl<<"component : "<<component<<endl;
	}

};


int main(){
	Graph<int> g;
	
	// int board[50] = {0};
	// board[2] = 13;
	// board[5] = 2;
	// board[9] = 18;
	// board[18] = 11;
	// board[17]=-13;
	// board[20] = -14;
	// board[24] = -8;
	// board[25] = -10;
	// board[32] = -2;
	// board[34] = -22;

	// for(int u=0;u<=36;u++){
	// 	for(int dice=1;dice<=6;dice++){
	// 		int v= u+dice+board[u+dice];
	// 		g.addEdge(u,v,false);
	// 	}
	// }












	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(4,3);
	g.addEdge(5,3);
	g.addEdge(0,4);
	g.addEdge(10,14);
	g.addEdge(20,24);
	g.DFS(20);
	cout<<endl;
	// g.BFS(0);
	










	// g.addEdge("Modi","Trump");
	// g.addEdge("Modi","Yogi");
	// g.addEdge("Yogi","Prabhu",false);
	// g.addEdge("Prabhu","Modi",false);
	// g.addEdge("Putin","Modi",false);
	// g.addEdge("Putin","Trump",false);
	// g.addEdge("Putin","Pope",false);

	// g.print();











	return 0;
}