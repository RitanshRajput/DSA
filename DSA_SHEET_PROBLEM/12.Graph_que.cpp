
//                   🔴🔴🔴 GRAPH 🔴🔴🔴 


//                   //❓Question: Creating and Printing

// You are given an undirected graph of 'N' nodes and 'M' edges. Your task is to create the graph and print the adjacency list of the graph. It is
//  guaranteed that all the edges are unique, i.e., if there is an edge from 'X' to 'Y', then there is no edge present from 'Y' to 'X' and vice versa.
//  Also, there are no self-loops present in the graph.
//  In graph theory, an adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors
//  of a vertex in the graph.

// 🔴Creating and Printing Adjacency List :
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int v,e;
//     cout<<"Enter total number of vertex v and edges e"<<endl;
//     cin>>v>>e;
//     cout<<endl;

//     vector<int> vec[v+1];

//     cout<<"Enter all vertex and there connected edges"<<endl;
//     for(int i=0; i<e; i++){
//         int x, y;
//         cin>>x>>y;

//         vec[x].push_back(y);
//         vec[y].push_back(x);
//     }

//     cout<<"This is the undirected graph vertex and there connected edges"<<endl;
//     for(int i=1; i<=v; i++){
//         cout<<i<<" ----> ";
//         for(int j=0; j<vec[i].size(); j++){
//             cout<<vec[i][j]<<", ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//🔸Time Complexity : ⊝(v+e) average, O(v^2) worst case
//🔸Space Complexity: ⊝(v+e) average, O(v^2) worst case


// // 🔴Creating and Printing Adjacency Matrix :
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     int v, e;
//     cout<<"Enter total number of vertex v and edges e"<<endl;
//     cin>>v>>e;
//     cout<<endl;

//     int graph[v+1][v+1];

//     for(int i=1; i<=v; i++){
//         for(int j=1; j<=v; j++){
//             graph[i][j] = 0;
//         }
//     }

//     cout<<"Enter all vertex and there connected edges"<<endl;
//     for(int i=0; i<e; i++){
//         int x, y;
//         cin>>x>>y;
//         graph[x][y] = 1;
//         graph[y][x] = 1;
//     }

//     for(int i=1; i<=v; i++){
//         cout<<i<<" ----> ";
//         for(int j=1; j<=v; j++){
//             cout<<graph[i][j]<<", ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//🔸Time Complexity :  O(v^2) 
//🔸Space Complexity:  O(v^2) 



//                 ❓Question: BFS of GRAPH
//
// Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
// Note: One can move from node u to node v only if there's an edge from u to v. 
// Find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the input graph.
//  Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

// Example 1:
// Input:
// V = 5, E = 4
// adj = {{1,2,3},{},{4},{},{}}

// Output: 
// 0 1 2 3 4
// Explanation: 
// 0 is connected to 1 , 2 , 3.
// 2 is connected to 4.
// so starting from 0, it will go to 1 then 2
// then 3. After this 2 to 4, thus bfs will be
// 0 1 2 3 4.

// Example 2:
// Input:
// V = 3, E = 2
// adj = {{1,2},{},{}}

// Output: 
// 0 1 2
// Explanation:
// 0 is connected to 1 , 2.
// so starting from 0, it will go to 1 then 2,
// thus bfs will be 0 1 2. 

// Your task:
// You dont need to read input or print anything. Your task is to complete the function bfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns  a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.

// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)
// Constraints:
// 1 ≤ V, E ≤ 104


//🔴 approach: 
// class Solution {
//   public:
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//        vector<int> ans;
//        vector<int> vis(V, 0);
//        queue<int> q;
       
//        q.push(0);
//        vis[0] = 1;
       
//        while(!q.empty()){
//           int currElement = q.front();
//           q.pop();
//           ans.push_back(currElement);
          
//           for(auto &i: adj[currElement]){
//               if(!vis[i]){
//                   q.push(i);
//                   vis[i] = 1;
//               }
//           }
//        }
       
//       return ans;  
//     }
// };

//🔸Time Complexity :  O(V + E) 
//🔸Space Complexity:  O(V) 



//                  ❓Question:  DFS of Graph
//
// You are given a connected undirected graph. Perform a Depth First Traversal of the graph.
// Note: Use the recursive approach to find the DFS traversal of the graph starting from the 
// 0th vertex from left to right according to the graph.

// Example 1:
// Input: V = 5 , adj = [[2,3,1] , [0], [0,4], [0], [2]]

// Output: 0 2 4 3 1
// Explanation: 
// 0 is connected to 2, 3, 1.
// 1 is connected to 0.
// 2 is connected to 0 and 4.
// 3 is connected to 0.
// 4 is connected to 2.
// so starting from 0, it will go to 2 then 4,
// and then 3 and 1.
// Thus dfs will be 0 2 4 3 1.

// Example 2:
// Input: V = 4, adj = [[1,3], [2,0], [1], [0]]

// Output: 0 1 2 3
// Explanation:
// 0 is connected to 1 , 3.
// 1 is connected to 0, 2. 
// 2 is connected to 1.
// 3 is connected to 0. 
// so starting from 0, it will go to 1 then 2
// then back to 0 then 0 to 3
// thus dfs will be 0 1 2 3. 

// Your task:
// You don't need to read input or print anything. Your task is to complete the function dfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a list containing the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.
// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)
// Constraints:
// 1 ≤ V, E ≤ 104

//🔴 approach: 
// class Solution {
//   private: 
//    void solve(vector<int> adj[], vector<int>& ans, vector<int>& vis, int index){
//         if(vis[index]){
//             return;
//         }
        
//         ans.push_back(index);
//         vis[index] = true;
        
//         for(auto i:adj[index]){
//             solve(adj, ans, vis, i);
//         }
//    }
   
//   public:
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         vector<int> ans;
//         vector<int> vis(V, false);
//         solve(adj, ans, vis, 0);
        
//         return ans;
//     }
// };

//🔸Time Complexity :  O(V+E) 
//🔸Space Complexity:  O(V) 



//                  ❓Question: Detect Cycle in Directed Graph
//
// Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.

// Example 1:
// Input:
// Output: 1
// Explanation: 3 -> 3 is a cycle

// Example 2:
// Input:
// Output: 0
// Explanation: no cycle in the graph

// Your task:
// You dont need to read input or print anything. Your task is to complete the function isCyclic() which takes the integer V denoting the number of vertices and adjacency list adj as input parameters and returns a boolean value denoting if the given directed graph contains a cycle or not.
// In the adjacency list adj, element adj[i][j] represents an edge from i to j.

// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)
// Constraints:
// 1 ≤ V, E ≤ 105

//🔴 approach:  DFS 
// class Solution {
//   public:
//     bool dfs(int src, vector<int>&visited,vector<int> adj[]){
//         visited[src] = 2;
//         for(auto it: adj[src]){
//             if(visited[it]==2){
//                 return true;
//             }else if(!visited[it]){
//                 if(dfs(it,visited,adj)){
//                     return true;
//                 }
//             }
//         }
//         visited[src]=1;
//         return false;
//     }
    
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int>visited(V,0);
//         for(int i=0; i<V; i++){
//             if(!visited[i] && dfs(i,visited,adj)){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

//🔸Time Complexity :  O(V+E) 
//🔸Space Complexity:  O(V+E) 


//🔴appraoch : BFS
// class Solution {
//   public:
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int> indegree(V,0);
//         queue<int> q;
        
//         for(int i=0; i<V; i++){
//             for(auto j:adj[i]){
//                 indegree[j]++;
//             }
//         }
        
//         int count = 0;
        
//         for(int i=0; i<V; i++){
//             if(!indegree[i]){
//                 q.push(i);
//             }
//         }
        
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             count++;
            
//             for(auto i: adj[node]){
//                 indegree[i]--;
//                 if(indegree[i] == 0){
//                     q.push(i);
//                 }
//             }
//         }
        
//         return (count < V) ? true : false;
//     }
// };

//🔸Time Complexity: O(V+E)
//🔸Space Complexity: O(V)


//                  ❓Question: Detect Cycle in Undirected Graph
//
// Given an undirected graph with V vertices labelled from 0 to V-1 and E edges, check whether it contains any cycle or not. 
// Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.
// Example 1:
// Input:  
// V = 5, E = 5
// adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}} 
// Output: 1
// Explanation: 
// 1->2->3->4->1 is a cycle.

// Example 2:
// Input: 
// V = 4, E = 2
// adj = {{}, {2}, {1, 3}, {2}}
// Output: 0
// Explanation: 
// No cycle in the graph. 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function isCycle() which takes V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting if the undirected graph contains any cycle or not, return 1 if a cycle is present else return 0.
// NOTE: The adjacency list denotes the edges of the graph where edges[i] stores all other vertices to which ith vertex is connected.

// Expected Time Complexity: O(V + E)
// Expected Space Complexity: O(V)
// Constraints:
// 1 ≤ V, E ≤ 105


//🔴 approach: DFS 
// class Solution {
//   public:
//     int count=0;
    
//     void dfs(int src, vector<int> adj[], int vis[], int parent){
//         vis[src]=1;
//         for(auto it : adj[src]){
//             if(!vis[it]){
//                 dfs(it, adj, vis, src);
//             }
//             else if(parent != it ){
//                 count++;
//                 break;
//             }
//         }
//     }
    
//     bool isCycle(int V, vector<int> adj[]) {
//         int vis[V+1] = {0};
        
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfs(i ,adj, vis, -1);
//             }
//         }
//         return (count > 0) ? 1 : 0;
//     }
// };

//🔸Time Complexity :  O(V+E) 
//🔸Space Complexity:  O(V) 


//🔴approach : BFS
// class Solution {
//   public:
//     bool check(int src, unordered_map<int, bool>& vis, vector<int> adj[]){
//         unordered_map<int, int> parent;
//         queue<int> q;
//         q.push(src);
        
//         vis[src] = true;
//         parent[src] = -1;
        
//         while(!q.empty()){
//             int temp = q.front();
//             q.pop();
            
//             for(auto neighbour: adj[temp]){
//                 if(!vis[neighbour]){
//                     vis[neighbour] = true;
//                     q.push(neighbour);
//                     parent[neighbour] = temp;
//                 }
//                 else if(visited[neighbour] && neighbour != parent[temp]){
//                     return true;
//                 }
//             }
//         }
        
//         return false;
//     }
    
//     bool isCycle(int V, vector<int> adj[]) {
//         bool ans = false;
//         unordered_map<int, bool> vis;
        
//         for(int i=0; i<V; i++){
//             if(!visited[i]){
//                 ans = check(i, vis, adj);
//                 if(ans == true){
//                     break;
//                 }
//             }
//         }
        
//         return ans;
//     }
// };

//🔸 Time Complexity  : O(V+E)
//🔸 Space Complexity : O(V)


//                  ❓Question: 



//🔴 approach: 

//🔸Time Complexity :  O() 
//🔸Space Complexity:  O() 




//                  ❓Question: 



//🔴 approach: 

//🔸Time Complexity :  O() 
//🔸Space Complexity:  O() 
