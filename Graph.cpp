
//                        //🔴🔴🔴🔴 GRAPH

// Graph is a data structure that consists of the following two components: 

// A finite set of vertices also called nodes.
// A finite set of ordered pair of the form (u, v) called edge. The pair is ordered because (u, v) is not the same as (v, u) in the case of a directed graph(di-graph). The pair of the form (u, v) indicates that there is an edge from vertex u to vertex v. The edges may contain weight/value/cost.
// Following is an example of an undirected graph with 5 vertices.
     
//        [0]-----[1] 
//         |    /   | \  
//         |   /    |  [2]
//         |  /     | /
//        [4]------[3]
//

//🔸Graphs are used to represent many real-life applications:
// Graphs are used to represent networks. 
// The networks may include paths in a city or telephone network or circuit network.
// Graphs are also used in social networks like linkedIn, Facebook. 
// For example, in Facebook, each person is represented with a vertex(or node). 
// Each node is a structure and contains information like person id, name, gender, and locale. 

//🔸In computer science, a graph is a data structure that is used to represent connections or relationships between objects. 
// A graph consists of a set of vertices (also known as nodes) and a set of edges (also known as arcs) that connect the vertices.
// The vertices can represent anything from cities in a map to web pages in a network, 
// and the edges can represent the relationships between them, such as roads or links.

//🔸A graph can be visualized as a collection of points (vertices) connected by lines (edges), 
// where each vertex represents a point of interest and each edge represents a connection between two points.
// The edges can be directed or undirected, meaning they can either have a specific direction or be bidirectional. 
// For example, a map of a city may have directed edges that represent the direction of one-way streets, 
// while a social network may have undirected edges that represent friendships between individuals.

//🔸Representations of Graphs:
// The following two are the most commonly used representations of a graph.

// 🔸Adjacency Matrix
// 🔸Adjacency List

// There are other representations also like, Incidence Matrix and Incidence List. 
// The choice of graph representation is situation-specific.
// It totally depends on the type of operations to be performed and the ease of use.

//🔴Adjacency List:
// An adjacency list is a simple way to represent a graph as a list of vertices, 
// where each vertex has a list of its adjacent vertices. 
// Here's an example of an adjacency list for an undirected graph with 4 vertices:
// makefile
// Copy code
// 0: 1 3
// 1: 0 2
// 2: 1 3
// 3: 0 2
// In this example, vertex 0 is adjacent to vertices 1 and 3, vertex 1 is adjacent to vertices 0 and 2, and so on.

//🔴Adjacency Matrix:
// An adjacency matrix is a two-dimensional array that represents the graph by storing a 1 at position (i,j) 
// if there is an edge from vertex i to vertex j, and 0 otherwise. 
// Here's an example of an adjacency matrix for the same undirected graph:
// Copy code
//   0 1 2 3
// 0 0 1 0 1
// 1 1 0 1 0
// 2 0 1 0 1
// 3 1 0 1 0
// In this example, there is an edge from vertex 0 to vertex 1 (represented by a 1 in position (0,1)), 
// an edge from vertex 1 to vertex 0 (represented by a 1 in position (1,0)), and so on.

//🔴Incidence Matrix:
// An incidence matrix is a two-dimensional array that represents the graph by storing a 1 at position (i,j) 
// if vertex i is incident on edge j, and 0 otherwise.
// Here's an example of an incidence matrix for the same undirected graph:
// Copy code
//   0 1 2 3
// 0 1 1 0 1
// 1 1 0 1 0
// 2 0 1 1 0
// 3 1 0 0 1
// In this example, vertex 0 is incident on edges 0, 1, and 3 (represented by a 1 in positions (0,0), (0,1), and (0,3)), 
// vertex 1 is incident on edges 0, 2 (represented by a 1 in positions (1,0) and (1,2)), and so on.

// Each representation has its own advantages and disadvantages depending on the application, 
// and choosing the right representation can have a significant impact on the performance of graph algorithms.

//🔴Adjacency Matrix:
// Adjacency Matrix is a 2D array of size V x V where V is the number of vertices in a graph. 
// Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that there is an edge from vertex i to vertex j. 
// The adjacency matrix for an undirected graph is always symmetric.

// Adjacency Matrix is also used to represent weighted graphs. 
// If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w. 



//                     🔴Advantages of Adjacency Matrix:
// Representation is easier to implement and follow. 
// Removing an edge takes O(1) time. 
// Queries like whether there is an edge from vertex ‘u’ to vertex ‘v’ are efficient and can be done O(1).

//                      🔴Disadvantages of Adjacency Matrix:
// Consumes more space O(V2). Even if the graph is sparse(contains less number of edges), it consumes the same space.
// Adding a vertex takes O(V2) time. Computing all neighbors of a vertex takes O(V) time (Not efficient).


//                      🔴Advantages of Adjacency List:
// Saves space. Space taken is O(|V|+|E|). In the worst case, there can be C(V, 2) number of edges in a graph thus consuming O(V2) space.
// Adding a vertex is easier.
// Computing all neighbors of a vertex takes optimal time.

//                      🔴Disadvantages of Adjacency List:
// Queries like whether there is an edge from vertex u to vertex v are not efficient and can be done O(V).





//    🔴🔴Personal Notes :

//        [0]-----[1] 
//         |    /   | \  
//         |   /    |  [2]
//         |  /     | /
//        [4]------[3]
//
//   []  ==> Nodes
//  | , --  ==> edges

// graph is data structure which is combination of nodes and edges

// 🔸Type of graphs: 

//1🔸 Undirected Graph:
//        [0]-----[1] 
//         |    /   |   
//         |   /    |  
//         |  /     | 
//        [4]------[3]

//  0 -> 1   (edge is present from 0 to 1) in undirected graph
//  1 -> 0   (edge is present from 1 to 0) in undirected graph

//2🔸 Directed graph : 
//        [0] ➡️➡️➡️ [1] 
//         ⬇️     ↗️ ⬆️    
//         ⬇️   ↗️   ⬆️   
//         ⬇️ ↗️     ⬆️  
//        [4] ➡️➡️➡️ [3]

//  0 -> 1   ✅  (edge is present only from 0 to 1 not from 1 to 0 )in directed graph
//  1 -> 0   ❌ 


//🔸Nodes  => it is an entity to store data
//🔸edge   => connecting nodes
//🔸Degree => degree refers to how many edges are connected to particular node  (used both in undirected and directed graph)
//             this indicates total no.of edges connected
//🔸Indegree  =>  used in directed graph to represent how many edges are coming towards 
//                 for eg: in above directed graph Indegree(1) => 3 , Indegree(3) => 1
//🔸Outdegree =>  used in directed graph to represent how many edges are going outwards 
//                 for eg: in above directed graph Outdegree(1) => 0, Outdegree(4) => 2


//🔸Weighted Graph => so weighted graphs generally means the edges of graph has some value or element on them or(weight) on them
//                     if weights are not given by defualt then we assume 1 on every edge
//                     if weight is given then they are said to be (weighted directed graph) or (weight undirected graph)

//🔸Path   => It represent the actual path in a graph that can be formed.
//            no same node should be repeated in a single path
//          ex:   a -> b -> c ✅   ,    a -> b -> a ❌

//🔸weighted Undirected graph:
//             3
//        [a]------[b] 
//         |    /   |   
//       6 | 1 /    | 5
//         |  /     | 
//        [d]------[c]
//            2

//   a -> b ==> 3        (weight between a to b)
//   b -> c ==> 5        
//   c -> d ==> 2
//   d -> a ==> 6
//   d -> b ==> 1

//🔸weighted directed graph:
//               3
//        [0] ➡️➡️➡️ [1] 
//         ⬇️     ↗️ ⬆️    
//       4 ⬇️   ↗️   ⬆️ 6
//         ⬇️ ↗️     ⬆️  
//        [4] ➡️➡️➡️ [3]
//                9

// 🔸 if weight are not given then we assume 1 on every edge:
//             1
//        [a]------[b] 
//         |    /   |   
//       1 | 1 /    | 1
//         |  /     | 
//        [d]------[c]
//            1


//🔴 Path  :

// path in undirected graph:
//        [a]-----[b] 
//         |    /   | \  
//         |   /    |  [e]
//         |  /     | /
//        [d]------[c]

//   path = a - b - e 
//   path = e - c - b 
//   path = e - c - d 
//   path = a - d - c 
//   ....


// path in directed graph:

//        [a] ➡️➡️➡️ [b] 
//         ⬇️     ↗️ ⬆️    
//         ⬇️   ↗️   ⬆️   
//         ⬇️ ↗️     ⬆️  
//        [d] ➡️➡️➡️ [c]

//  path = a - b 
//  path = a - d - c - b
//  path = a - d - b
//  ...


//🔴cyclic graph :   when the path are in cyclic order then they are said to be cyclic graph

//  cyclic directed graph:
//        [a] ⬅️⬅️⬅️ [b] 
//         ⬇️         ⬆️    
//         ⬇️         ⬆️   
//         ⬇️         ⬆️  
//        [d] ➡️➡️➡️ [c]

//     a -> b -> c -> d -> a   (cyclic graph)

// weighted cyclic directed graph:   if a cyclic graph has some weight:
//               4
//        [a] ⬅️⬅️⬅️ [b] 
//         ⬇️         ⬆️    
//       7 ⬇️         ⬆️ 5  
//         ⬇️         ⬆️  
//        [d] ➡️➡️➡️ [c]
//               3

//🔴Acyclic graph :   when there is no cycle in graph
 
//   asyclic directed graph :
//        [a] ➡️➡️➡️ [b] 
//         ⬇️         ⬆️    
//         ⬇️         ⬆️   
//         ⬇️         ⬆️  
//        [d] ➡️➡️➡️ [c]

//     a -> b -> c -> b   (acyclic graph)


//   weighted asyclic directed graph :
//                3
//        [a] ➡️➡️➡️ [b] 
//         ⬇️         ⬆️    
//       9 ⬇️         ⬆️ 5
//         ⬇️         ⬆️  
//        [d] ➡️➡️➡️ [c]
//                4



//🔴Graph Representation:
//🔸 adjacency Matrix :
//🔸 adjacency list :

//      🔴 adjacency Matrix :

//   In adjacency matrix we create a 2d matrix and represent in the indexing format 
//   if no node is connected then add 0 and is connected then add 1 to represent connection

// directed graph:
//             [0] ➡️➡️➡️➡️ [1]
//             ⬆️            ⬇️ 
//             ⬆️            ⬇️             
//             ⬆️            ⬇️ 
//             [2] ⬅️⬅️⬅️⬅️⬅️ 

//      0  1  2 
//  0  |0 |1 |0 |      ( 0->0 not connected) (0->1 connected) (0->2 not connected)
//  1  |0 |0 |1 |      ( 1->0 not connected) (1->1 not connected) (1->2 connected)
//  2  |1 |0 |0 |      ( 2->0 connected) (2->1 not connected) (2->2 not connected)

//🔸space complexity: O(n^2)

//🔴Implementation: of adjacecny matrix :

// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     // n is the number of vertices
//     // m is the number of edges
//     int n, m;
//     cin >> n >> m;
//     int adjMat[n + 1][n + 1];
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adjMat[u][v] = 1;
//         adjMat[v][u] = 1;
//         // for a directed graph with an edge pointing from u
//         // to v,we just assign adjMat[u][v] as 1
//     }
 
//     return 0;
// }



//      🔴 adjacency List :

//    In adjacency list we list down all the nodes and then show which nodes are connected to them
 
// undirected graph:
//          [0] ----- [1]
//           |         |  \
//           |         |   [2]
//           |         |  / 
//          [4] ----- [3] 

//   0  =>  1, 4            (0 is connected with 1, 4)
//   1  =>  0, 2, 3         (1 is connected with 0, 2, 3)
//   2  =>  1, 3            (2 is connected with 1, 4)
//   3  =>  1, 2, 4         (3 is connected with 1, 2, 4)
//   4  =>  0, 3            (4 is connected with 0, 3)


//🔴🔴Implementation: of adjacency list

//🔸🔸 Without Template 
// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class graph {
//     public:
//     unordered_map< int, list<int>> adj ;

//     void addEdge(int u, int v, bool direction) {
//         // u => nodes 
//         // v => edges
//         //direction 0 => undirected graph
//         //direction 1 => directed graph 

//         //create an edge from u to v 
//         adj[u].push_back(v) ;

//         if(direction == 0){
//             adj[v].push_back(u) ;
//         }
//     }

//     void printAdjList(){
//         for(auto i:adj){
//             cout<< i.first << " ==> ";
//             for(auto j:i.second){
//                 cout<< j << ", " ;
//             }
//             cout<< endl ;
//         }
//     }
// } ;

// int main(){

//   graph g ;               //graph creation

//    int n ;
//    cout<< "enter the number of nodes" << endl ;
//    cin >> n ;              // taking u  (ex: input 5)

//    int m ;
//    cout<< "enter the number of edges" <<endl ;
//    cin>> m;               // taking v    (ex: input 6)


//    for(int i=0; i<m; i++) {     //taking all the adges  
//     int u, v ;
//     cin>> u >> v ; 
//     //creating an undirected graph 
//     g.addEdge(u, v, 0) ;
//    }
// // (ex: input 
// // 0 1
// // 1 2
// // 2 3
// // 3 1
// // 3 4
// // 0 4 )

// // undirected graph:
// //          [0] ----- [1]
// //           |         |  \
// //           |         |   [2]
// //           |         |  / 
// //          [4] ----- [3] 


//    //printing graph
//    g.printAdjList() ;

// //result output: 
// // 4 ==> 3, 0,
// // 0 ==> 1, 4,
// // 1 ==> 0, 2, 3, 
// // 2 ==> 1, 3,
// // 3 ==> 2, 1, 4,

//     return 0;
// }

//🔴🔴Implementation: of adjacency list

//🔸🔸 using Template 
//  when we use template then we dont have to assign a variable name again and again we can 
//  change variable by changing it in single place and it will be applied throughout the code wherever template is used
// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// template <typename T> 

// class graph {
//     public:
//     unordered_map< T, list<T>> adj ;

//     void addEdge(T u, T v, bool direction) {
//         // u => nodes 
//         // v => edges
//         //direction 0 => undirected graph
//         //direction 1 => directed graph 

//         //create an edge from u to v 
//         adj[u].push_back(v) ;

//         if(direction == 0){
//             adj[v].push_back(u) ;
//         }
//     }

//     void printAdjList(){
//         for(auto i:adj){
//             cout<< i.first << " ==> ";
//             for(auto j:i.second){
//                 cout<< j << ", " ;
//             }
//             cout<< endl ;
//         }
//     }
// } ;

// int main(){

//   graph<int> g ;               //graph creation

//    int n ;
//    cout<< "enter the number of nodes" << endl ;
//    cin >> n ;              // taking u  (ex: input 5)

//    int m ;
//    cout<< "enter the number of edges" <<endl ;
//    cin>> m;               // taking v    (ex: input 6)


//    for(int i=0; i<m; i++) {     //taking all the adges  
//     int u, v ;
//     cin>> u >> v ; 
//     //creating an undirected graph 
//     g.addEdge(u, v, 0) ;
//    }
// // (ex: input 
// // 0 1
// // 1 2
// // 2 3
// // 3 1
// // 3 4
// // 0 4 )

// // undirected graph:
// //          [0] ----- [1]
// //           |         |  \
// //           |         |   [2]
// //           |         |  / 
// //          [4] ----- [3] 


//    //printing graph
//    g.printAdjList() ;

// //result output: 
// // 4 ==> 3, 0,
// // 0 ==> 1, 4,
// // 1 ==> 0, 2, 3, 
// // 2 ==> 1, 3,
// // 3 ==> 2, 1, 4,

//     return 0;
// }
// For AdjList:-
// Add Edge 
//🔸Time complexity: : O(m) 
// 🔸space complexity:  O(n+m)

// Print Edge 
//🔸 time complexxity: O(n*m) 
//🔸 space complexity: : O(1)


//🔴🔴🔴                  //❓Question: Creating and Printing

// You are given an undirected graph of 'N' nodes and 'M' edges. Your task is to create the graph and print the adjacency list of the graph. It is
//  guaranteed that all the edges are unique, i.e., if there is an edge from 'X' to 'Y', then there is no edge present from 'Y' to 'X' and vice versa.
//  Also, there are no self-loops present in the graph.
//  In graph theory, an adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors
//  of a vertex in the graph.

//  For Example :
// If 'N' = 3 and edges = {{2,1}, {2,0}}.

//           [2]
//          /   \ 
//         [1]  [0]

// So, the adjacency list of the graph is stated below.
//  0 -> 2
//  1 -> 2
//  2 -> 0 -> 1

// Constraints:
//    1 <= T <= 100
//    1 <= N <= 5000
//    1 <= M <= min(5000, (N * (N - 1)) / 2)
//    0 <= edges[i][], edges[i][1] <= N-1
//    Time limit: 1 sec


// Sample Input 1:
// 2
// 4 3
// 1 2
// 0 3
// 2 3
// 3 3
// 0 1
// 1 2
// 2 0
// Sample Output 1:
// 0 3
// 1 2
// 2 1 3
// 3 0 2
// 0 1 2
// 1 0 2
// 2 0 1
// Explanation For Sample Input 1:
// For the first test case, the graph is shown in the below figure.
//        [1]        [0]
//       /          /
//     [2]--------[3]

// So, the neighbour of node 0 is 3. So, in the first line, the first integer is 0 followed by its neighbour 3.
// Similarly in the second line, 1 is followed by its neighbour 2. 
// In the third line, 2 is followed by its neighbours 1 and 3. 
// And in the fourth line, 3 is followed by its neighbours 0 and 2.

// For the second test case, the graph is shown in the below figure.
//         [0]
//        /   \
//      [1]---[2]


// So, the neighbour of node 0 is 1 and 2. 
// So, in the first line, the first integer is 0 followed by its neighbour 1 and 2. 
// Similarly in the second line, 1 is followed by its neighbour 2 and 0. 
// In the third line, 2 is followed by its neighbours 1 and 0. 

// Sample Input 2:
// 2
// 2 1
// 0 1
// 4 6
// 0 1
// 0 2
// 0 3
// 1 2
// 1 3
// 2 3
// Sample Output 2:
// 0 1
// 1 0
// 0 1 2 3
// 1 0 2 3
// 2 0 1 3
// 3 0 1 2
// Explanation For Sample Input 2:
// For the first test case, the neighbour of node 0 is 1. 
// Similarly in the second line, 1 is followed by its neighbour 0. 

// For the second test case, all the nodes are connected to each other.

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges){

//     vector<int> ans[n] ;

//   //answer array willl store all adjacent nodes corresponding on indexes
//     for(int i=0; i<m; i++){         // m = no of edges
//        int u = edges[i][0] ;
//        int v = edges[i][1] ;

//        ans[u].push_back(v) ;
//        ans[v].push_back(u) ;          // because we have been given an undirected graph therefore the edges will be connected to both side  [a]---[b]
//     }

// //edges vector visualisation for above implementation
// //      edges
// //        0  1
// //    0 | u| v|   u = edges[0][0]
// //    1 |  |  |   v = edges[0][1]
// //    2 | a|  |   a = edges[2][0]
// //    3 |  |  |
   
//   vector<vector<int>> adj(n) ;

//   for(int i=0; i<n; i++){             // n = no of nodes
//       adj[i].push_back(i) ;

//       //entering neighbours 
//       for(int j=0; j<ans[i].size(); j++) {
//          adj[i].push_back(ans[i][j]) ;
//       }
//   }
  
//   return adj ;
// }
//🔴time complexity: O(n*m)
//🔴space complexity: O(n*m)


//🔸Notes:
//❓For all those who are wondering how vector<int>v[n] became a 2D vector this comment is for you !!!

// It creates a static array of N vectors of the first type i.e. v[0] 
// is now a whole new and different vector than v[1] which is totally different than  
// v[2] and so on. If you want to push a value into the 1st vector that is  v[0] ,
//  you will do it by  v[0].push _ back(val) . 
// To access that element you will call it by  v[0][0] (kind of a 2d matrix, isn't it?!).
//  So, basically it is an array of initially empty vectors to which you can add elements.
//  These are very useful while you want to implement graphs where each node has it's own vector 
// and the nodes to which it is joined are pushed into that particular node's vector.


// ❓difference between vector<int>ans[ n ] ;and vector<int> ans( n );
//🔸vector<int>(n) is size of vector
// but vector<int>[n] is array of n vectors


// 94/149