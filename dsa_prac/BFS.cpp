#include<bits/stdc++.h>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int v;
    vector<int>* edges;
    public:
        Graph(int v);
        void add_edge(int i, int j);
        void BFS(int s);
};

Graph::Graph(int v){
    this->v = v;
    edges = new vector<int>[v];
}

void Graph::add_edge(int i, int j){
    edges[i].push_back(j);
}

void Graph::BFS(int s){
    bool visited[v];
    for(int i = 0; i < v; i++) visited[i] = false;

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    vector<int>::iterator i;
    while(!queue.empty()){
        s = queue.front();
        cout << s << ' ';
        for(i = edges[s].begin(); i != edges[s].end(); i++){
            if(!visited[*i]){
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
        queue.pop_front();
    }
}

int main(){
    Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    
    g.BFS(2);
}