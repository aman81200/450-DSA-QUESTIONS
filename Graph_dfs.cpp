#include <iostream>
#include<queue>
#include<list>
#include<map>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Graph
{
    map<T,list<T>> l;

public:
    void addEdge(T x,T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void DfsHelper(T src, map<T,bool> &visited)
    {
        visited[src]=true;
        cout<<src<<"->";
        
        for(auto nbr:l[src])
        {
            if(!visited[nbr])
            {
                DfsHelper(nbr,visited);
            }
        }
    }
    
    void Dfs(T src)
    {
       map<T,bool> visited;
       DfsHelper(src,visited);
    }


};
int main() {
      Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,0);

    g.Dfs(0);
    
}
