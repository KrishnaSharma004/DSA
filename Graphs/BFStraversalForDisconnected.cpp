#include <iostream>
#include <vector>
using namespace std;

void bfs(vector<vector<int>> &adj,int s,vector<bool> &visited,vector<int>&res){
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        for(int x:adj[curr]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
vector<int> bfsdisconnected(vector<vector<int>> &adj){
    int v = adj.size();
    vector<int> res;
    vector<bool> visited(v,false);
    for(int i=0;i<adj.size();++i){
        if(!visited[i]){
            bfs(adj,i,visited,res);
        }
    }
    return res;
}
int main(){
    vector<vector<int>> adj = {{1,2},{0},{0},{4},{3,5},{4}};
    vector<int> ans = bfsdisconnected(adj);
    for(auto i:ans){
        cout << i << " ";
    }
    return 0;
}