
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


//                   //🔴🔴Breadth first search in Graph

// The breadth-first search (BFS) algorithm is used to search a tree or graph data structure for a node that meets a set of criteria. 
// It starts at the tree’s root or graph and searches/visits all nodes at the current depth level before moving on to the nodes at 
// the next depth level. Breadth-first search can be used to solve many problems in graph theory.

//🔴Algorithm of Breadth-First Search:

// Step 1: Consider the graph you want to navigate.
// Step 2: Select any vertex in your graph (say v1), from which you want to traverse the graph.
// Step 3: Utilize the following two data structures for traversing the graph.
//         Visited array(size of the graph) Queue data structure
// Step 4: Add the starting vertex to the visited array, and afterward, you add v1’s adjacent vertices to the queue data structure.
// Step 5: Now using the FIFO concept, remove the first element from the queue, put it into the visited array, 
//         and then add the adjacent vertices of the removed element to the queue.
// Step 6: Repeat step 5 until the queue is not empty and no vertex is left to be visited.

//ex: 
//         [0]
//            \ 
//             \ 
//              [1]
//                 \ 
//                  \ 
//        [4]-------[2]
//          \     /
//           \   /
//            [3]

// output: print ==>  0, 1, 2, 3, 4

//ex2:  
//             [3]--------[1]
//            /             |
//         [0]              |
//            \             |
//             [2]--------[4]

//output: print ==>  0, 2, 3, 4, 1


//🔸Disconnected graph:
//
//             [0]
//           /    \         [2]
//         [1]----[2]       component of graph
//          component of graph       
//
//.. this is said to be disconnected graph :

//algo :
//step1: first we will create a visited map to make sure which node/vertices we have visited already
//step2: then we will create a queue to store the top node/vertices of graph and 
//       assign that to a variable frontNode = top , after assigning we will pop that node from queue
//step3: then we will mark it as visited
//step4: and we will store that node in ans variable
//step5: put other connected node/vertices to that answer node into queue from adjacent list

// source code : 
// for(int i=0; i<n; i++){           //for loop is for disconnected graph to make sure we have traverse all the node/vertices of that graph
//     if(!visited[node]) {
//         bfs() ;
//     }
// }




//🔴🔴🔴               //❓Question: BFS in GRaph

// You are given an undirected and disconnected graph G(V, E) having V vertices numbered from 0 to V-1 and E edges. Your task is to print its
// BFS traversal starting from the 0th vertex.
// BFS or Breadth-First Traversal of a graph is an algorithm used to visit all of the nodes of a given graph. In this traversal algorithm, one
// node is selected, and then all of the adjacent nodes are visited one by one.
// An undirected graph is a graph where all the edges are bidirectional, i.e., they point from source to destination and destination to source.
// A graph is disconnected if at least two vertices of the graph are not connected by a path.

//  Note:
//    1. Here, you need to consider that you need to print the BFS path starting from vertex 0 only.
//    2. V is the number of vertices present in graph G, and all vertices are numbered from 0 to V-1.
//    3. E is the number of edges present in graph G.
//    4. Graph input is provided as the number of vertices and a list of edges.
//    5. Handle for Disconnected Graphs as well.

//
//             [0]
//            /  |
//           /   |    [3]
//        [1]    |   / 
//           \   |  /
//            \  | /
//             [2]
//

// Here, starting from 0, it is connected to 1 and 2 so, BFS traversal from here will be [0, 1, 2 ]. Now, 3 is also
//  connected to 2. So, BFS traversal becomes [0, 1, 2, 3].

// Note:
//  For each node, the correct order of printing the connected nodes will be sorted order, i.e., if {3,6,9,4} are
//  connected to 1, then the correct order of their printing is {1,3,4,6,9}.

// Sample Input 1:
// 4 4
// 0 1
// 0 3
// 1 2
// 2 3
// Sample Output 1:
// 0 1 3 2
// Explanation For Sample Input 1:
//             [0]
//            /  \  
//           /    \ 
//        [1]------------[2]
//                  \    /
//                   \  /
//                   [3] 


// Starting from 0, it is connected to 1 and 3, which will be printed. 
// Then comes 2, which was connected to 1. 

// Sample Input 2:
// 4 3
// 0 1
// 0 3
// 1 3
// Sample Output 2:
// 0 1 3 2
// Explanation For Sample Input 2:
//              [0]
//             /  |
//            /   |
//         [1]    |       [2]
//            \   |
//             \  |
//              [3]
//
// Starting from 0, it is connected to 1 and 3, which will be printed. 
// The remaining node is 2, which will be printed at the end.


// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<queue>
// #include<set>
// using namespace std;

// //function to create adjacent list of given graph
// // here we are using  set<int> instead of list<int> in adjList   ( because some platform accept only sorted answer therefore we use set to store value in sorted order)
// //🔸A set is a data structure that stores unique elements of the same type in a sorted order
// void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges) {
//     for(int i=0; i<edges.size(); i++) {
//       int u = edges[i].first ;             //u ==> node/vertex
//       int v = edges[i].second ;            // v ==> edge

//       adjList[u].insert(v) ;
//       adjList[v].insert(u) ;
//     }
// }

// // bfs solution function
// void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node) {
        
//         queue<int> q ;           // creating queue to put every node into it and checking all the connected nodes and store in ans
//         q.push(node) ;
//         visited[node] = 1 ;      // mark visited as true, if we have added it into queue

//         while( !q.empty()) {
//             int frontNode = q.front() ;         //assign top node from queue to frontNode variable 
//             q.pop() ;                       // and after assigning pop it 

//             //store frontnode into ans ;
//             ans.push_back(frontNode) ;

//             //traverse all neighbour of frontNode(means all connected node)
//             for(auto i:adjList[frontNode]) {
//                 if( !visited[i]){
//                     q.push(i);
//                     visited[i] = 1 ;
//                 }
//             }
//         }
// }

// //main function
// vector<int> BFS(int vertex, vector<pair<int, int>> edges) {

//     unordered_map<int, set<int>> adjList ;  // adjacent list to store all the connected nodes/vertices (into list) to a single node (int)
//     vector<int> ans ;                        //to store final answer
//     unordered_map<int, bool> visited ;       // visited map to keep track of nodes that are already taken care of

//     prepareAdjList(adjList, edges) ;         //function to create adjacent list of the given graph

//     //traverse all component of a graph
//     for(int i=0; i<vertex; i++){          //for loop to make sure we include node/vertex of disconnected graph too
//         if(!visited[i]) {
//             bfs(adjList, visited, ans, i) ;   //function to record answer (means to traverse all the node/vertex of the graph)
//         }
//     }
//     return ans ;
// }
//🔴Time complexity: O(N+E)              // N = node , E = edges
//🔴space complexity: O(N+E)             



//                   //🔴🔴Depth first search in Graph


// Depth First Traversal (or DFS) for a graph is similar to Depth First Traversal of a tree.
// The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice).
// To avoid processing a node more than once, use a boolean visited array.
// A graph can have more than one DFS traversal.

// Depth-first search is an algorithm for traversing or searching tree or graph data structures. 
// The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) 
// and explores as far as possible along each branch before backtracking. 

// So the basic idea is to start from the root or any arbitrary node and mark the node 
// and move to the adjacent unmarked node and continue this loop until there is no unmarked adjacent node. 
// Then backtrack and check for other unmarked nodes and traverse them. Finally, print the nodes in the path.

// 🔸Following below method to implement DFS traversal.

// Step 1: Create a set or array to keep track of visited nodes.
// Step 2: Choose a starting node.
// Step 3: Create an empty stack and push the starting node onto the stack.
// Step 4: Mark the starting node as visited.
// Step 5: While the stack is not empty, do the following:
//         Pop a node from the stack.
//         Process or perform any necessary operations on the popped node.
//         Get all the adjacent neighbors of the popped node.
//         For each adjacent neighbor, if it has not been visited, do the following:
//         Mark the neighbor as visited.
//         Push the neighbor onto the stack.
// Step 6: Repeat step 5 until the stack is empty.



//🔴🔴🔴                  //❓Question: DFS Traversal

// Given an undirected and disconnected graph G(V, E), containing 'V' vertices and 'E' edges, the information about edges is given using
//  'GRAPH' matrix, where i-th edge is between GRAPH[[O] and GRAPH[1]. print its DFS traversal.
//    V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
//    E is the number of edges present in graph G.

// Note:
//    The Graph may not be connected i.e there may exist multiple components in a graph.

// Constraints :
//    2 <= V <= 10^3
//    1 <= E <= (5 * (10^3))
//    Time Limit: 1sec

// Sample Input 1:
// 5 4
// 0 2
// 0 1
// 1 2
// 3 4
// Sample Output 1:
// 2
// 0 1 2
// 3 4
// Explanation For Sample Input 1:
// If we do a DFS traversal from vertex 0 we will get a component with vertices [0, 2, 1]. If we do a DFS traversal from 3 we will get another component with vertices [3, 4]

// Hence,  we have two disconnected components so on the first line, print 2. Now, print each component in increasing order. On the first line print 0 1 2 and on the second line, print 3 4.

// [0 1 2] comes before [3 4] as the first vertex 0 from the first component is smaller than the first vertex 3 from the second component.
// Sample Input 2:
// 9 7
// 0 1
// 0 2
// 0 5
// 3 6
// 7 4
// 4 8
// 7 8
// Sample Output 2:
// 3
// 0 1 2 5
// 3 6
// 4 7 8

// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_map>
// using namespace std;


// void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component) {

//    //first store ans into components
//     component.push_back(node) ;
//    // mark visited
//     visited[node] = true ;

//     // recursive call for every connnected node
//     for(auto i:adj[node]) {
//         if(!visited[i]) {
//             dfs( i, visited, adj, component) ;
//         }
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//    //step 1: prepare/create adjList
//    unordered_map<int, list<int>> adj ;
//    for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;
//         adj[v].push_back(u) ;
//    }

//    vector<vector<int>> ans ;                     //to store main answer
//    unordered_map<int, bool> visited ;

//    // for all node call dfs if not visited
//    for(int i=0; i<V; i++){
//        if( !visited[i]) {
//         vector<int> component ;
//         dfs(i, visited, adj, component) ;
//         ans.push_back(component) ;
//        }
//    }
//    return ans;
// }
//🔴Time compplexity:  O(V+ E)
//🔴space compplexity: O(V+ E)

//  96/149