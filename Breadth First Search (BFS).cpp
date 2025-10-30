/*Application: Web crawlers use DFS to explore web pages systematically, following
links and indexing content for search engines. Write a simple program to index web
pages using Depth First Search (DFS). The program should simulate a web graph where
pages are represented as nodes and hyperlinks as edges.*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void BFS(int p,int n,vector<bool> &visited,vector<vector<int>> &adj){
    queue<int> q;
    visited[p]=true;
    q.push(p);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<"Current Page is:"<<curr+1<<endl;
        for(int i=0;i<n;i++){
            if(adj[curr][i]==1 && !visited[i]){
                visited[i]=true;
                q.push(i);
            };
        };
    };

};
int main(){
        int n;
    cout<<"Enter Number of Web pages:";
    cin>>n;
    vector<bool> visited(n,false);
    vector<vector<int>>adj(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int ch=0;
            cout<<"If There is Hyperlink from Webpage "<<i+1<<" to "<<j+1<<"\nEnter 1 Else 0:";
            cin>>ch;
            if(ch==1){
                adj[i][j]=ch;
                adj[j][i]=ch;
            }
        };
        cout<<endl;
    };
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        };
        cout<<endl;
    };
    BFS(0,n,visited,adj);
    return 0;
}
