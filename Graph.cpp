
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






//🔴🔴🔴             //❓Question: Cycle detection in Undirected Graph

// You have been given an undirected graph with 'N' vertices and 'M' edges. The vertices are labelled from 1 to 'N'.
//  Your task is to find if the graph contains a cycle or not.
//  A path that starts from a given vertex and ends at the same vertex traversing the edges only once is called a cycle.
//  Example:
//    In the below graph, there exists a cycle between vertex 1, 2 and 3.
//           [1]\
//            |  \ 
//            |   [3]
//            |  /
///          [2]/

// Note:
//    1. There are no parallel edges between two vertices.
//    2. There are no self-loops(an edge connecting the vertex to itself) in the graph.
//    3. The graph can be disconnected.

// For Example:
//    Input: N = 3 J Edges = [[1, 2], [2, 3], [1, 3]]
//    Output: Yes
//    Explanation : There are a total of 3 vertices in the graph. There is an edge between vertex 1 and 2, vertex 2 and 3
//    and vertex 1 and 3. So, there exists a cycle in the graph.

// Constraints:
//    1 <= T <= 10
//    1 <= N <= 5000
//    0 <= M <= min(5000, (N (N - 1)) / 2)
//    1 <= edges[i][e] <= N
//    1 <= edges[i][1] <= N
//    Time Limit: 1 sec

// Sample Input 1:
// 1
// 3 2
// 1 2
// 2 3
// Sample Output 1:
// No
// Explanation Of Sample Output 1:
//  The above graph can be represented as 
//           [1]
//            |   
//            |   [3]
//            |  /
///          [2]/

// There are a total of 3 vertices in the graph.There is an edge between vertex 1 and 2 and vertex 2 and 3. So, there is no cycle present in the graph. 

// Sample Input 2:
// 2
// 4 0 
// 4 3
// 1 4
// 4 3
// 3 1
// Sample Output 2:
// No
// Yes

// //🔴🔴🔴Approach using BFS(Breadth First search) :
// // prefer video 96/149 for this solution
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// //cycle bfs detection function
// bool isCycleBFS(int srcNode, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
//     //first creating parent map, to keep track of parent nodes and there parent  
//     unordered_map<int, int> parent ;

//     parent[srcNode] = -1 ;               //the very first node will have no parent therfore marked as -1
//     visited[srcNode] = 1 ;              // Now mark the node as visited as true
//     queue<int> q;                      //creating queue to store all the related/neighbour nodes of given node
//     q.push(srcNode) ;

//     while( !q.empty()) {
//         int front = q.front() ;
//         q.pop() ;

//         for(auto neighbour:adj[front]){
//             if(visited[neighbour] == true && neighbour != parent[front]) {
//                 return true ;
//             }
//             else if( !visited[neighbour]){
//                 q.push(neighbour) ;
//                 visited[neighbour] = 1 ;
//                 parent[neighbour] = front ;
//             }
//         }
//     }
//   return false ;
// }

// //main function 
// string cycleDetection(vector<vector<int>> &edges, int n, int m) {
//     //create adjacency list
//     unordered_map<int , list<int>> adj ;

//     for(int i=0; i<m; i++){          // m = no. of edges  ,, n = no of vertices/nodes
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;
//         adj[v].push_back(u) ;
//     }

//     //to handle disconnected components 
//     unordered_map<int, bool> visited ;
//     for(int i=0; i<n; i++){
//         if( !visited[i]) {
//             bool ans = isCycleBFS(i, visited, adj) ;
//             if(ans == 1) {
//                 return "Yes" ;
//             }
//         }
//     }
//     return "No" ;
// }
//🔴Time complexity: O(v + E)        // linear
//🔴space complexity: O(v + E)       // linear


// //🔴🔴Approach using DFS(Depth First search) :
// //prefer video 96/149 for this solution
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// //cycle dfs detection function
// bool isCycleDFS(int srcNode, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){

//    visited[srcNode] = true;           //mark visited of node as true 1
   
//    for(auto neighbour:adj[srcNode]) {
//       if( !visited[neighbour]){
//         bool cycleDetected =  isCycleDFS(neighbour, srcNode, visited, adj) ;
//         if( cycleDetected){
//             return true ;
//         }
//       }
//         else if(neighbour != parent){
//             //cycle present
//             return true ;
//         }
//     }
//      return false ;
// }

// //main function 
// string cycleDetection(vector<vector<int>> &edges, int n, int m) {
//     //create adjacency list
//     unordered_map<int , list<int>> adj ;

//     for(int i=0; i<m; i++){          
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;
//         adj[v].push_back(u) ;
//     }

//     //to handle disconnected components 
//     unordered_map<int, bool> visited ;
//     for(int i=0; i<n; i++){
//         if( !visited[i]) {
//             bool ans = isCycleDFS(i, -1 , visited, adj) ;      // passing -1 as first node's parent
//             if(ans == 1) {
//                 return "Yes" ;
//             }
//         }
//     }
//     return "No" ;
// }
//🔴Time complexity: O(v + E)        // linear
//🔴space complexity: O(v + E)       // linear




//🔴🔴                     //❓Question: Detect Cycle in A Directed Graph (USing DFS)

// You are given a directed graph having 'N' nodes. A matrix 'EDGES' of size M x 2 is given which represents the 'M' edges such that there is
//  an edge directed from node EDGES[i][O] to node EDGES[i][1].
//  Find whether the graph contains a cycle or not, return true if a cycle is present in the given directed graph else return false.
//  For Example:
//     In the following directed graph has a cycle i.e. В->С->Е->D->8.

//
//                   [C]
//                 ↗️   ↘️ 
//         [A]➡️[B]       [E]
//                ^      v    ↘️  
//                   [D]        [F]
//

// Note:
//    1. The cycle must contain at least two nodes.
//    2. It is guaranteed that the given graph has no self-loops in the graph.
//    3. The graph may or may not be connected.
//    4. Nodes are numbered from 1 to N.
//    5. Your solution will run on multiple test cases. If you are using global variables make sure to clear them.

// Constraints :
//    1STS5
//    2 <= N <= 100
//    1 <= M <= min(100,N(N-1)/2)
//    1 <= EDGES[i][0], EDGES[i][1] <= N
//    Where 'T' is the number of test cases.
//    Time Limit: 1 sec


// Sample Input 1 :
// 1
// 5
// 6
// 1 2
// 4 1
// 2 4
// 3 4
// 5 2
// 1 3
// Sample Output 1 :
// true
// Explanation For Input 1 :
// The given graph contains cycle 1 -> 3 -> 4 -> 1 or the cycle 1 -> 2 -> 4 -> 1.

// Sample Input 2 :
// 2
// 5
// 4
// 1 2
// 2 3
// 3 4
// 4 5
// 2
// 1
// 1 2
// Sample Output 2 :
// false
// false
// Explanation For Input 2 :
// The given graphs don’t contain any cycle.

//🔴check 97/197 to understand better
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// using namespace std;

// //cycle detection function
// bool checkCycleDFS(int srcNode, unordered_map<int, bool> &visited, 
//   unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj){

//     visited[srcNode] = true ;
//     dfsVisited[srcNode] = true ;

//     for(auto neighbour:adj[srcNode]){
//         if( !visited[neighbour]){
//             bool cycleDetected = checkCycleDFS(neighbour, visited, dfsVisited, adj);
//             if(cycleDetected){
//                 return true ;
//             }
//         }
//         else if( dfsVisited[neighbour]){
//             return true ;
//         }
//     }

//     dfsVisited[srcNode] = false ;
//     return false ;
//   }

// //main function
// int detectCycleInDirectedGraph(int n, vector< pair<int, int>> & edges) {
//     //create adjacency list
//     unordered_map<int, list<int>> adj ;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;            // since edges are sent in pair<int, int> so instead of using edge[i][0] == we will use edge[i].first
//         int v = edges[i].second ;          // and here instead of dege[i][1] == we will use edge[i].second

//         adj[u].push_back(v) ;       //since it is a directed graph we will only push u to v
//     }

// //call dfs for all component
// unordered_map<int, bool> visited ;
// unordered_map<int, bool> dfsVisited ;

// for(int i=1; i<=n; i++) {            //because in question the format is from 1 to n therefore i=1 ; i<=n
//   if( !visited[i]) {
//     bool cycleFound = checkCycleDFS(i, visited, dfsVisited, adj) ;
//     if(cycleFound){
//         return true ;
//     }
//   }
// }
//  return false ; 
// }
//🔴Time complexity: O(v + E)        // linear
//🔴space complexity: O(v + E)       // linear




//🔴🔴🔴🔴🔴🔴🔴/ Topollogical Sort🔴🔴🔴🔴🔴 

// Topological Sorting of DAG is a linear ordering of vertices such that for every directed edge from vertex 'u' to vertex 'v', 
// vertex 'u' comes before 'v' in the ordering.
// This sort is only applicable on directed asyclic graph(DAG) 
// why ? consider below example graph:
//        [1]
//       ^   \ 
//      /     v
//     [3]<--[2]
//
//adjacency list:
// for ( 1 2 3)
// 1 -> 2           // 1(u) comes before  2(v)  == true
// 2 -> 3           // 2(u) comes before 3(v) == true
// 3 -> 1           // 3(u) comes before 1(u) another (u) because cyclic graph == hence not valid topology sort




//               //❓Question: Topological Sort    (Using DFS)

// A Directed Acyclic Graph (DAG) is a directed graph that contains no cycles.
// Topological Sorting of DAG is a linear ordering of vertices such that for every directed edge from vertex 'u' to vertex 'v', vertex 'u' comes
//  before 'v' in the ordering. Topological Sorting for a graph is not possible if the graph is not a DAG.
//  Given a DAG consisting of 'V' vertices and 'E' edges, you need to find out any topological sorting of this DAG. Return an array of size 'V'
//  representing the topological sort of the vertices of the given DAG.
// For example, Consider the

//              [0]
//             /   \ 
//            v     v  
//           [1]   [3]
//             \   /
//              v v
//              [2]

// adjacency list:
//  for ( 0 1 3 2)
// 0 -> 1, 3           // 0(u) comes before 1(v) == true ,  o(u) comes before 3(v) == true
// 1 -> 2              // 1(u) comes before 2(v) == true 
// 2 ->               
// 3 -> 2              // 3(u) comes before 2(v) == true

// therefore ( 0 1 3 2 ) is a valid topological sort


// In this graph, there are directed edges from 0 to 1 and 0 to 3, so 0 should come before 1 and 3. Also, there are directed edges from 1 to 2
// and 3 to 2 so 1 and 3 should come before 2.
// So, The topological sorting of this DAG is {0 1 3 2}.
//  Note that there are multiple topological sortings possible for a DAG. 
//For the graph given above one another topological sorting is: {0, 3, 1, 2}

// Note:
// 1. It is guaranteed that the given graph is DAG.
// 2. There will be no multiple edges and self-loops in the given DAG.
// 3. There can be multiple correct solutions, you can find any one of them.
// 4. Don't print anything, just return an array representing the topological sort of the vertices of the given DAG.

// Constraints:
//    1 <= T <= 50
//    1 <= V <= 10^4
//    0 <= E <= 10^4
//    0 <= u, V V V
//    Where 'T' is the total number of test cases, 'V' is the number of vertices, 'E' is the number of edges, and 'u' and
//    'v' both represent the vertex of a given graph.
//    Time limit: 2 sec

// Sample Input 1:
// 2
// 2 1
// 1 0
// 3 2
// 0 1
// 0 2
// Sample Output 1:
// 1 0
// 0 2 1
// Explanation Of Sample Input 1:
// Test case 1:
// The number of vertices ‘V’ = 2 and number of edges ‘E’ = 1.
// The graph is shown in the picture: 
//
//       [1]--->[0]
//
// The topological sorting of this graph should be {1, 0}  as there is a directed edge from vertex 1 to vertex 0, thus 1 should come before 0 according to the given definition of topological sorting.

// Test case 2:
// The number of vertices ‘V’ = 3 and number of edges ‘E’ = 2.
// The graph is shown in the picture:
//
//         [0]
//        /   \ 
//       v     v
//      [1]    [2]
//
// As there are two directed edges starting from 0, so 0 should come before 1 and 2 in topological sorting. 
// Thus the topological sorting of this graph should be {0, 2, 1} or {0, 1, 2}


// Sample Input 2:
// 2
// 1 0
// 4 4
// 0 1
// 0 3
// 1 2
// 3 2
// Sample Output 2:
// 0
// 0 1 3 2
// Explanation Of Sample Input 2:
// Test case 1:   
// There is only a single vertex in the graph that is 0, so its topological sort will be {0}.

// Test case 2:
// See problem statement for its explanation

//🔴approach 1: solving using DFS
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<stack>
// using namespace std;

// //topological sort function
// void topoSort(int srcNode, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj) {
     
//     visited[srcNode] = 1; 

//     for(auto neighbour:adj[srcNode]) {
//         if( !visited[neighbour]){
//             topoSort(neighbour, visited, s, adj) ;
//         }
//     }
//     //important
//     s.push(srcNode) ;
// }

// //main functioon
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     
//     //create adjacency
//     unordered_map<int, list<int>> adj ;

//     for(int i=0; i<e; i++){
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;
//     }

//     //call dfs topological sort util function for all components
//     vector<bool> visited(v) ;        //size = (V)        //to prevent tle we used vector inplace of unordered_map
//     stack<int> s ;

//     for(int i=0; i<v; i++){
//        if( !visited[i]) {
//          topoSort(i, visited, s, adj) ;
//        }
//     }
//     vector<int> ans ; 
    
//     while( !s.empty()) {
//         ans.push_back(s.top())  ;
//         s.pop() ;
//     }

//     return ans;
// }
//🔴Time complexity: O(N+E)     // or  O(V+E) linear
//🔴Space complexity: o(N + E)



//🔴🔴🔴        //❓Question: Topological Sort using (🔸Kahn's algorithm) and BFS

// we are solving the same above question using BFS in (kahn's algorithm)
// to better understand question refer above questoin (topological sort using DFS)

//🔴appraoch: using (Kahn's algorihtm) BFS
//
// step1: find indegree of all nodes
//        indegree means how many nodes are connected to that particular node that comes before
//               [1]  indegree(0) bcoz no node is connected to 0 above or before
//              /   \ 
//             v     v
//    idg(1)  [2]    [3]  idg(1) only 1 is connected above
//              \   /
//                v
//               [5]    idg(2)  both 2 and 3 are connected above
//                |  
//                v 
//               [4]    idg(1)   only 5 is connected above
// indegree
//        [ 0 | 1 | 1 | 1 | 2 ]
//nodes:    1   2   3   4   5

//step2: create a queue and insert 0 degree nodes into that queue
//step3: perform BFS
//       while performing BFS as we store node into queue there we decrease there neighbour's indegree
//       suppose we insert (1) into ans then all the connected node to (1) will get there indegree decreased
//       in above ex:  insert(1) into ans, therefore indegree(2)-- and indegree(3)--
//       and then perform step2 simultaneously

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     //create adjacency list
//     unordered_map<int, list<int>> adj ;

//     for(int i=0; i<e; i++){
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;        //bcoz directed graph therefore only u.push_back(V)
//     }

//     //find all indegree
//     vector<int> indegree(v) ;
    
//     for(auto i:adj) {
//         for(auto j:i.second) {
//             indegree[j]++ ;
//         }
//     }

//     // push all 0 indegree nodes into queue
//     queue<int> q ;
//     for(int i=0; i<v; i++) {
//         if(indegree[i] == 0){
//             q.push(i) ;
//         }
//     }

//    // Perform BFS
//    vector<int> ans ;
//    while( !q.empty()) {
//     int front = q.front() ;
//     q.pop() ;

//     //store ans 
//     ans.push_back(front) ;
    
//     //update neighbour indegree
//     for(auto neighbour:adj[front]) {
//         indegree[neighbour]-- ;
//         if(indegree[neighbour] == 0){
//             q.push(neighbour) ;
//         }
//       } 
//    }
//    return ans;
// }
//🔴Time complexity: O(N+E)           // or O(V+ E) linear
//🔴space complexity: O(N+E)



//                      //🔴🔴  Kahn's ALgorithm


//🔴🔴                   //❓Question: Detect Cycle in A Directed Graph 

// You are given a directed graph having 'N' nodes. A matrix 'EDGES' of size M x 2 is given which represents the 'M' edges such that there is
//  an edge directed from node EDGES[i][O] to node EDGES[i][1].
//  Find whether the graph contains a cycle or not, return true if a cycle is present in the given directed graph else return false.
//  For Example:
//     In the following directed graph has a cycle i.e. В->С->Е->D->8.

//
//                   [C]
//                 ↗️   ↘️ 
//         [A]➡️[B]       [E]
//                ^      v    ↘️  
//                   [D]        [F]
//

// Note:
//    1. The cycle must contain at least two nodes.
//    2. It is guaranteed that the given graph has no self-loops in the graph.
//    3. The graph may or may not be connected.
//    4. Nodes are numbered from 1 to N.
//    5. Your solution will run on multiple test cases. If you are using global variables make sure to clear them.

// Constraints :
//    1STS5
//    2 <= N <= 100
//    1 <= M <= min(100,N(N-1)/2)
//    1 <= EDGES[i][0], EDGES[i][1] <= N
//    Where 'T' is the number of test cases.
//    Time Limit: 1 sec


// Sample Input 1 :
// 1
// 5
// 6
// 1 2
// 4 1
// 2 4
// 3 4
// 5 2
// 1 3
// Sample Output 1 :
// true
// Explanation For Input 1 :
// The given graph contains cycle 1 -> 3 -> 4 -> 1 or the cycle 1 -> 2 -> 4 -> 1.

// Sample Input 2 :
// 2
// 5
// 4
// 1 2
// 2 3
// 3 4
// 4 5
// 2
// 1
// 1 2
// Sample Output 2 :
// false
// false
// Explanation For Input 2 :
// The given graphs don’t contain any cycle.

//🔴appraoch : Using Kahn's Algorithm (BFS)
// which is basically used in Topological sort which is again used in (DAG) Directed Ascyclic graph
// we will use reverse Engineering 
// means in Kahn's Algorithm (BFS) it used to gives us valid output if the graph is asyclic 
// so we will use that for our benefit if the output is invalid which means
// graph is not asyclic means it is cyclic hence got the answer

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector> 
// #include<queue> 
// using namespace std;

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
//     //create adjacencylist
//     unordered_map<int, list<int>> adj ;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first - 1;  //because nodes are between 1 to n
//         int v = edges[i].second - 1;  //because nodes are between 1 to n

//         adj[u].push_back(v) ;
//     }

//     //find all indegree
//     vector<int> indegree(n)  ;
//     for(auto i:adj){
//         for(auto j:i.second) {
//             indegree[j]++ ;
//         }
//     }

//     // push all 0 indegree into queue
//     queue<int> q;
//     for(int i=0; i<n; i++){            
//         if(indegree[i]== 0){
//             q.push(i) ;
//         }
//     }

//     //perfrom bfs
//     int count = 0;
//     while(!q.empty()) {
//         int front = q.front() ;
//         q.pop() ;

//         //count increment
//         count++ ;

//         //update indegree
//          for(auto neighbour: adj[front]) {
//             indegree[neighbour]-- ;
//             if(indegree[neighbour]==0) {
//                 q.push(neighbour) ;
//             }
//          }
//     }
//        if( count == n) {        // means valid topological sort this happen only if it is a Directed asyclic graph
//           return false;        // so if asyclic graph then return false
//        }
//        else{
//         return true;           // if not valid topological sort means not DAG , then return true means cyclic graph
//        }
// }
//🔴Time complexity: O(N+ E)        // or  O(V+ E) linear
//🔴space complexity: O(N+ E)




//🔴🔴🔴                //❓Question: Shortest path in an unweighted graph( Undirected Graph)

// The city of Ninjaland is analogous to the unweighted graph. The city has 'N' houses numbered from 1 to 'N' respectively and are
// connected by M bidirectional roads. If a road is connecting two houses 'X' and 'Y' which means you can go from 'X' to 'Y' or 'Y' to 'X'. It is
// guaranteed that you can reach any house from any other house via some combination of roads. Two houses are directly connected by at
//  max one road.
// A path between house 'S' to house 'T' is defined as a sequence of vertices from 'S' to 'T'. Where starting house is 'S' and the ending house
// is 'T' and there is a road connecting two consecutive houses. Basically, the path looks like this: (S, h1, h2, h3 T). you have to find the
// shortest path from 'S' to 'T'.

// For Example
//    In the below map of Ninjaland let say you want to go from S=1 to Т=8, the shortest path is (1, 3, 8). You can also
// go from S=1 to T=8 via (1, 2, 5, 8) or (1, 4, 6, 7, 8) but these paths are not shortest.

//
//
//
//          [2] ------------ [5]
//         /                   \  
//        /                     \ 
//     [1] ----- [3] ---------- [8] 
//       \                      /
//        \                    /
//           [4]----[6]-----[7]
//
//Constraints :
//    1 <= T <= 100
//    2 <= N == 10 ٨ 3
//    1 <= M <= min( N *(N - 1) / 2 , 1000 )
//    1 <= S, T == N
//    Time Limit: 1 sec

// Sample Output 1 :
// ( 1 , 3 , 4 )
// Explanation Of Sample Input 1 :
// In the above graph there are two ways to go from 1 to 4 ,
// ( 1 , 2 , 3 , 4 ) and ( 1 , 3 , 4 ) but the second path is the shortest path.
//
//            [2]
//           /   |
//          /    |
//         /     |
//       [1]     |
//         \     |
//          \    | 
//           \   |
//            [3]----[4]
//
// Sample Input 2 :
// 1
// 8 9
// 1 8
// 1 2
// 1 3
// 1 4
// 2 5
// 5 8 
// 3 8
// 4 6
// 6 7
// 7 8
// Sample Output 2 :
// ( 1 , 3 , 8 )

//🔴Approach: using BFS 

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<algorithm>
// using namespace std;

// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
//     //create a adjacency list
//     unordered_map<int , list<int>> adj ;
//     for(int i=0; i<edges.size(); i++){
//       int u  = edges[i].first ;
//       int v = edges[i].second;
     
//      adj[u].push_back(v) ;
//      adj[v].push_back(u) ;
//     }

//     //do BFS
//     unordered_map<int, bool> visited ;
//     unordered_map<int, int> parent ;
//     queue<int> q ;
    
//     parent[s] = -1;      //initially no parent will be there for the first node assuming
//     q.push(s) ;         // given to find path between s to t , so s = firstnode
//     visited[s] = true ;

//     while(!q.empty()) {
//         int front = q.front() ;
//         q.pop() ;

//         for(auto i:adj[front]) {
//             if(!visited[i]) {
//                 visited[i] = true ;
//                 parent[i] = front;
//                 q.push(i) ;
//             }
//         }
//     }

//     //prepare shortest path
//     vector<int> ans ;
//     int currentNode = t ;      // given to find path between s to t ,so t = lastNode
//     ans.push_back(t) ;

//     while(currentNode != s) {
//         currentNode = parent[currentNode];
//         ans.push_back(currentNode) ;
//     }

//     reverse(ans.begin(), ans.end()) ;
  
//   return ans ;
// }
//🔴Time complexity: O(N+E)     // or linear O(V+E)
//🔴Space complexity: O(N+ E)



// 🔴🔴🔴🔴🔴    //❓Question: Shortest Path in (weighted) and Directed Acyclic Graph(DAG)


//🔴Approach: ALgo

//step1: first find adjacency list for the directed weighted graph
//        as it is weighted there will be some changes in the way we will store the list
//        unordered_map<int, list<pair<int, int>>> adj;
//        bcoz = instead of storing value like this  
//             o => 1, 2
//             1= => 4, 5
//        we will store them along with there weight given
//             nodes => [connectedNode, weight]
//             0 => [1, 5], [2, 7] 
//             1 => [3, 9]
//step2: Find Topological sort (this will helps us to get the order of nodes  ex:  a->b->c->d)
//step3: after using topo sort, the Linear Order we will get we will utilise it and then update the distance array


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<stack>
// #include<vector>
// #include<limits.h>
// using namespace std;

// class Graph{
//   public:
//   unordered_map<int, list<pair<int,int>>> adj ;

// //creation of graph using u=node, v=edgeNode, weight
//   void addEdge(int u, int v, int weight) {
//     pair<int, int> p =  make_pair(v, weight) ;
//     adj[u].push_back(p) ;
//   }

// //print function to print adjacency list of weight(DAG)
//   void printAdj() {
//     for(auto i:adj){
//         cout<< i.first << " -> ";
//         for(auto j:i.second) {
//             cout<<"[" << j.first << "," << j.second << "], "  ;
//         }
//       cout<<endl ;
//     }
//   }
   
// // DFS function to solve and get topological sort and store that into stack
//  void DFS(int node, unordered_map<int, bool> &visited, stack<int> &topo ) {

//     visited[node] = true ;

//     for(auto neighbour: adj[node]) {
//         if( !visited[neighbour.first]) {
//             DFS(neighbour.first, visited, topo) ;
//         }
//     }
//     //important
//     topo.push(node);
//  }


// // getShortest path function : where we actaully finding the answer
//  void getShortestPath(int srcNode, vector<int> &dist, stack<int> &topo) {
      
//     dist[srcNode] = 0 ;

//     while( !topo.empty()) {
//         int top =  topo.top() ;
//         topo.pop() ;

//         if(dist[top] != INT_MAX){
//             for(auto i:adj[top]) {
//                 if(dist[top] + i.second < dist[i.first]) {
//                     dist[i.first] = dist[top] + i.second ;
//                 }
//             }
//         }
//     }
//  }

// };

// int main() {

// //create a graph named g
//  Graph g ;

// //initialise node connected to edges and there weights
//  g.addEdge(0, 1, 5) ;         //( u, v, weight),   (node, edgeNode, weight)
//  g.addEdge(0, 2, 3) ;
//  g.addEdge(1, 2, 2) ;
//  g.addEdge(1, 3, 6) ;
//  g.addEdge(2, 3, 7) ;
//  g.addEdge(2, 4, 4) ;
//  g.addEdge(2, 5, 2) ;
//  g.addEdge(3, 4, -1) ;
//  g.addEdge(4, 5, -2) ;

// //print to see if they are created correctly
//  g.printAdj() ;
// //  output:
// // 4 -> [5,-2], 
// // 0 -> [1,5], [2,3], 
// // 1 -> [2,2], [3,6], 
// // 2 -> [3,7], [4,4], [5,2], 
// // 3 -> [4,-1],

// //shortest distance in weighted (DAG) solution call
// // step1:topological sort 
// int n = 6 ;          // n = no. of nodes  (0,1,2,3,4,5)
// unordered_map<int, bool> visited ;
// stack<int> s ;

// //step2:perform DFS
// for(int i=0; i<n; i++) {
//     if( !visited[i]) {
//         g.DFS(i, visited, s) ;
//     }
// }

// int srcNode = 1 ;
// vector<int> dist(n) ;

// //step3: create a distance array and mark all the nodes distance as infinity/INT_MAX (as max value)
// //       so later we will compare them to there actual weight and whichever is less we will update that weight in this array
// for(int i=0; i<n; i++){
//     dist[i] = INT_MAX ;
// }


// //step4: call shortest path function
// g.getShortestPath(srcNode, dist, s) ;

// //print final answer
// cout<< "answer is : " <<endl ;
// for(int i=0; i<dist.size(); i++) {
//    cout<< dist[i] <<" ";   
// }
// cout<<endl ;

// //output:   
// // sourceNode = 1 
// // 1 -> o  ==> Infinity    (No way to reach 0 from 1) 
// // 1 -> 1  ==> 0
// // 1 -> 2  ==> 2
// // 1 -> 3  ==> 6
// // 1 -> 4  ==> 5
// // 1 -> 5  ==> 3

// // shortestPath = [ infinity/INT_MAX  | 0 | 2 | 6 | 5 | 3 ]  // expected

// // 2147483647 0 2 6 5 3         // original (correct output)

//     return 0;
// }
// //🔴Time complexity:  O(N + E)    // linear O( v+ E)
// //🔴space complexity: O(N + E)



//🔴🔴🔴🔴🔴🔴 DIJKSTRA's Algorithm (for shortest path) 🔴🔴🔴🔴🔴



//                        //❓Question: Dijkstra's Shortest path

// You have been given an undirected graph of 'V' vertices (labeled 0,1,..., V-1) and 'E' edges. Each edge connecting two nodes ('X','''' will
//  have a weight denoting the distance between node 'X' and node 'Y'.
//  Your task is to find the shortest path distance from the source node, which is the node labeled as 0, to all vertices given in the graph.
//  Example:
//    Input:
//    4 5
//    0 1 5
//    0 2 8
//    1 2 9
//    1 3 2
//    2 3 6

//                  5
//          [1]----------[0]          // 0 = source node
//           | \       /
//        2  |  \ 9   /  8
//           |    \  /
//          [3]----[2]
//              6
//
// In the given input, the number of vertices is 4, and the number of edges is 5.
// In the input, following the number of vertices and edges, three numbers are given. The first number denotes node
//  'X', the second number denotes node 'Y' and the third number denotes the distance between node 'X' and 'Y'
// As per the input, there is an edge between node 0 and node 1 and the distance between them is 5.
// The vertices 0 and 2 have an edge between them and the distance between them is 8.
// The vertices 1 and 2 have an edge between them and the distance between them is 9.
// The vertices 1 and 3 have an edge between them and the distance between them is 2.
// The vertices 2 and 3 have an edge between them and the distance between them is 6.

// Note:
//    1. There are no self-loops(an edge connecting the vertex to itself) in the given graph.
//    2. There can be parallel edges i.e. two vertices can be directly connected by more than 1 edge.

// Sample input 1
// 2
// 5 7
// 0 1 7
// 0 2 1
// 0 3 2
// 1 2 3
// 1 3 5 
// 1 4 1
// 3 4 7
// 4 5
// 0 1 5
// 0 2 8
// 1 2 9
// 1 3 2
// 2 3 6
// Sample output 1
// 0 4 1 2 5
// 0 5 8 7
// Explanation For Sample Output 1
// Test case 1:
//                          [4] 5
//                       1 /  |
//                    4 [1]   | 7
//                   3 / | \5 |
//               1  [2] 7|  [3] 2
//                   1 \ |  /2
//                      [0] 
//                       0
 
// The source node is node 0.
// The shortest distance from node 0 to node 0 is 0.
// The shortest distance from node 0 to node 1 is 4. In the above figure, the green path represents this distance. The path goes from node 0->2->1, giving distance = 1+3=4.
// The shortest distance from node 0 to node 2 is 1. In the above figure, the red path represents this distance. The path goes from node 0->2, giving distance = 1
// The shortest distance from node 0 to node 3 is 2. In the above figure, the pink path represents this distance. The path goes from node 0->3, giving distance = 2.
// The shortest distance from node 0 to node 4 is 5. In the above figure, the yellow path represents this distance. The path goes from node 0->2->1->4, giving distance = 1+3+1=5.
// Test case 2:

// The source node is node 0.
// The shortest distance from node 0 to node 0 is 0.
// The shortest distance from node 0 to node 1 is 5. In the above figure, the green path represents this distance. The path goes from node 0->1, giving distance = 5.
// The shortest distance from node 0 to node 2 is 8. In the above figure, the pink path represents this distance. The path goes from node 0->2, giving distance = 8.
// The shortest distance from node 0 to node 3 is 7. In the above figure, the yellow path represents this distance. The path goes from node 0->1->3, giving distance = 7.

// Sample input 2:
// 2
// 9 14
// 0 1 4
// 0 7 8
// 1 2 8
// 1 7 11
// 2 3 7
// 2 5 4
// 2 8 2 
// 3 4 9
// 3 5 14
// 4 5 10
// 5 6 2
// 6 7 1
// 6 8 6 
// 7  8 7
// 5 7
// 0 1 7
// 0 2 3
// 1 2 1
// 1 3 2
// 1 4 6
// 2 3 4
// 3 4 4 
// Sample output 2:
// 0 4 12 19 21 11 9 8 14
// 0 4 3 6 10

//🔴 Dijkstra's Algorithm for undirected weighted graph:

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<limits.h>
// #include<set>
// using namespace std;

// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
      
//     //🔸step1: create adjacency list 
//     unordered_map<int, list<pair<int, int>>> adj ;

//     for(int i=0; i<edges; i++) {
//         int u = vec[i][0] ;        // u = nodes
//         int v = vec[i][1] ;        // v = edges
//         int w = vec[i][2] ;        // w = weights

//         adj[u].push_back(make_pair(v, w)) ; 
//         adj[v].push_back(make_pair(u, w))  ;
      
//     // example format:  srcNode ==>  [node, weight]
//     // input: 
//     // 0 1 7        // node, edge, weight
//     // 0 2 1
//     // 0 3 2
//     // 1 2 3
//     // 1 3 5 
//     // 1 4 1

//     // 0 ==> [1,7] [2, 1] [3, 2] 
//     // 1 ==> [2, 3] [3, 5] [4, 1]

//     }
   
//    //🔸step2: create a distance array which stores all the distance for given nodes
//    // ex:    distance :[ Inf | Inf | Inf | Inf | Inf ]        
//    //        nodes    :  0      1      2    3     4

//    // initialise all distance will be INT_MAX , and we will update the distance in the process 
//    // where we will find shortest distance and compare it with the previous distance
//    // and update shortest distance into the distance array
//    vector<int> dist(vertices);          // distance vector of size vertices/no. of nodes
  
//    for(int i=0; i<vertices; i++) {
//      dist[i] = INT_MAX ;
//    }

//    //🔸step3: create a set<pair<int,int>>  which will check all the neighbour nodes 
//    //  distance connected to all nodes one by one 
//    // why set?  A set is a data structure that stores unique elements of the same type in a sorted order
//    // and we will use is as set<pair<distanceBetweenNode ,Node>>
//     set<pair<int, int>> st ;

//     // we will initialise first nodes distance as 0, bcoz it is the source node
//     dist[source] = 0 ;

//    // then we will add source node and its distance into set as a pair set<0,0> /  set<distance, node>
//    st.insert(make_pair(0, source)) ;   

//    //🔸step4: now run a loop till set is not empty and perform task like
//    // 1. fetch top record/data  (In this variable we will store the top pair of the set)
//    // 2. now create 2 different var, and assign distance and node respectively 
//    //     and after assigning pop/remove/erase  the top set<pair>
//    // 3. and traverse all the neighbour nodes, of that particular node from adjacency list
//    // 4. check condition if (distanceOfCurrentNode + NeighbourNodeDistance <  dist[neighbour.first](means the distance in the distance array)
//    // 5. if true then get the record store in distance array of the particular neighbourNode and erase it from set
//    // 6. then update the new shortest distance in the distance array
//    // 7. and push that new record in set
//    while( !st.empty()) {

//     //fetch top record from set
//     auto top = *(st.begin()) ;
     
//     int nodeDistance = top.first ;
//     int topNode = top.second ;

//     //remove top record from set, as we have store them into variables
//     st.erase(st.begin()) ;

//     //traverse on neighbour
//     for(auto neighbour: adj[topNode]) {
//         if(nodeDistance + neighbour.second < dist[neighbour.first]) {
//            auto record = st.find(make_pair(dist[neighbour.first], neighbour.first)) ;
//           //if record found, then erase it
//            if(record != st.end()) {
//               st.erase(record) ;
//            }

//            //distance update
//            dist[neighbour.first] = nodeDistance + neighbour.second ;

//            //record push in set 
//             st.insert(make_pair(dist[neighbour.first], neighbour.first)) ;
//         }
//      }
//    }
//      return dist;
// }
//🔴Time complexity:  O( E log v)            // set : perform operation in O(log) therefor E: no.of edges, V:no. of vertices
//🔴space complexity: O(N + E)              //linear O(V+E) vertices+edges




//                //🔴🔴🔴 PRIMS's ALgorithm   ( to find Minimum Spanning Tree)

// 🔸spanning tree : 
// When we convert a graph into a tree such that it contains N nodes, and N-1 edges
// Every nodes is recheable by every other nodes

//🔸Minimum Spanning tree :
// Minimum means Minimum cost of weight


//                     //❓Question: Prim's MST

// You are given an undirected connected weighted graph having 'N' nodes numbered from 1 to 'N'. A matrix 'E' of size M x 2 is given which
//  represents the 'M' edges such that there is an edge directed from node E(i]o) to node E([[]]. You are supposed to return the minimum
//  spanning tree where you need to return weight for each edge in the MST.
//  For Example:
//                [1]
//             5 / | \ 15
//              /  |  \ 
//           [0]   |10 [3]
//              \  |  /
//             8 \ | / 20
//                [2]

// The MST (Minimum Spanning Tree) for the above graph is
//                [1]
//             5 /   \ 15
//              /     \ 
//           [0]      [3]
//              \  
//             8 \ 
//                [2]

// Constraints:
//    1STS5
//    2 <= N <= 100
//    1 <= M <= min(1000, N(N - 1) / 2)
//    1 <= E[i][0], E[i][1] <= N
//    Time Limit: 1 sec

// Sample Input 1 :
// 1
// 5 14
// 1 2 2
// 1 4 6
// 2 1 2
// 2 3 3
// 2 4 8
// 2 5 5
// 3 2 3
// 3 5 7
// 4 1 6
// 4 2 8
// 4 5 9
// 5 2 5
// 5 3 7
// 5 4 9
// Sample Output 1 :
// 1 2 2
// 1 4 6
// 2 3 3
// 2 5 5
// Explanation Of Input 1 :
// The Minimum spanning tree for the given graph will contain the edges: (1,2) with weight 2, (1,4) with weight 6, (2,3) with weight 3 and (2,5) with weight 5.

// Sample Input 2 :
// 1
// 5 15
// 1 2 21
// 1 4 16
// 2 1 12
// 2 3 13
// 2 4 18
// 2 5 15
// 3 2 13
// 3 5 17
// 4 1 16
// 4 2 18
// 4 5 19
// 5 1 18
// 5 2 15
// 5 3 17
// 5 4 19
// Sample Output 2 :
// 1 2 12
// 1 4 16
// 2 3 13
// 2 5 15
// Explanation Of Input 2 :
// The Minimum spanning tree for the given graph will contain the edges: (1,2) with weight 12, (1,4) with weight 16, (2,3) with weight 13 and (2,5) with weight 15.

//🔸approach : Prims algo 
// It requires 3 data structure (1. key array) (2. MST array) (3. parent array)
// step1: make all nodes key as infinity(INT_MAx) except for source node which will be 0  
// key  :  [ 0 | IM | IM | IM | IM ]
// nodes:    0    1    2    3    4
// step2: make all Nodes in MST as False 
// step3: make all nodes in Parent as -1
// 
//  step1: find minimum weight from Node
//  step2: mark that node in MST arrray as TRUE
//  step3: search that nodes adjacence node, and update value in key array of that adjacence node from source node
//  step4: now mark 0 for those adjacence nodes in parent array
//  
//  repeat above step with a condition of (  MST[i] = false && key[i] < mini )


// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<limits.h>
// using namespace std;

// // here vector<pair<pair<int, int>, int>> === u, v, w
// // n = no of nodes
// // m = no of edges
// // vector<pair<pair<int, int>, int>> &g == u, v, w
// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // create adjacency list
//     unordered_map<int, list<pair<int,int>>> adj ;
    
//     for(int i=0; i<g.size(); i++) {
//         int u = g[i].first.first ;
//         int v = g[i].first.second ;
//         int w = g[i].second ;

//         adj[u].push_back(make_pair(v, w)) ;
//         adj[v].push_back(make_pair(u, w)) ;
//     }

//     //create 3 datastructure : initially key(mark all INT_MAX), MST(mark all false), parent(mark all -1)
//     vector<int> key(n+1)  ;                // (n+1) size ,means nodes will we shown node respective to the indes, like index 1 = node 1
//     vector<bool> mst(n+1) ;
//     vector<int> parent(n+1) ;

//     for(int i=0; i<=n; i++) {           // for loop for all the edges
//         key[i] = INT_MAX ;
//         mst[i] = false;
//         parent[i] = -1 ;
//     }

//     // perform Prims algo
//     key[1] = 0 ;               // mark source node as 0
//     parent[1] = -1 ;           // source node has no parent therfore -1
   
//     for(int i=1; i<n; i++){          //input nodes given from 1
       
//        int mini = INT_MAX ;
//        int u ;
       
//        //find minimum node
//        for(int v=1; v<=n; v++) {
//          if(mst[v] == false && key[v] < mini) {
//             u = v ;
//             mini = key[v] ;
//          }
//        }

//        //mark mini node as true
//        mst[u] = true ;

//        //check its adjacence nodes
//        for(auto it:adj[u]) {
//          int v = it.first ;
//          int w = it.second ;

//          if(mst[v] == false && w < key[v]) { 
//             parent[v] = u ;
//             key[v] = w ;
//          }
//        }
//     }

//     vector<pair<pair<int, int>, int>> result ;
//     for(int i=2; i<=n; i++ )  {           // i=0 : not taken bcoz mapping starts from 1, i=1: cant start from1 bcoz parent of 1 is -1
//       result.push_back({{parent[i], i}, key[i]}) ;        // it is working as (make_pair{(int,int), int}) , but this format is giving error 
//     }

//     return result ;
// }
//🔴time complexity: O(N^2)      // if used priority queue(Min heap) then can be implemented in O(nlog)


//🔴Optimising using Min-heap
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// #include<limits.h>
// #include<queue>
// using namespace std;

// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // create adjacency list
//     unordered_map<int, list<pair<int,int>>> adj ;
    
//     for(int i=0; i<g.size(); i++) {
//         int u = g[i].first.first ;
//         int v = g[i].first.second ;
//         int w = g[i].second ;

//         adj[u].push_back(make_pair(v, w)) ;
//         adj[v].push_back(make_pair(u, w)) ;
//     }
    
//     //create min heap to get node with minimum weight
//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ;
//     //let source as 1  ,and initially distance of source is 0 
//     // {weigth, node}
//     pq.push({0,1}) ;

//     vector<int> key(n+1, INT_MAX)  ;   // another way to initialise all value with  INT_MAX 
//     vector<bool> mst(n+1, false) ;     // another way to initialise all value with   false
//     vector<int> parent(n+1, -1) ;      // another way to initialise all value with     -1


//     // perform Prims algo
//     key[1] = 0 ;             
//     parent[1] = -1 ;          
   
//     while( pq.size()) {
//         int w = pq.top().first ;
//         int node = pq.top().second ;
//         mst[node] = 1 ;
//         pq.pop() ;

//         //find node with minimum weight and to its neighbour
//          for(auto neighbour: adj[node]) {
//             int toGo = neighbour.first ;
//             int toGoWeight = neighbour.second ;
//           // if to react node N from key[N] ,update weight(key[N]) with distance from node to N
//           if( mst[toGo] == false && toGoWeight < key[toGo]) {
//             key[toGo] = toGoWeight ;
//             parent[toGo] = node ;
//             pq.push({toGoWeight, toGo}) ;
//          }
//         }
//     }
//     vector<pair<pair<int, int>, int>> result ;
//     for(int i=2; i<=n; i++ )  {        
//       result.push_back({{parent[i], i}, key[i]}) ;        
//     }

//     return result ;
// }
//🔴Time complexity: O(nlogn)        //using minHeap




//             //🔴 Kruskal's Algorithm

// 🔴 Disjoint Set:
// disjoint set is a type of data structure using to implement Kruskal's algorithm
// disjoint set can be used to detect cycle in a graph
// disjoint set can be used to find, 
//  if there are different component present in a graph
//  and we have some nodes given, so we have to find whether those nodes belong to same component or different component

//🔴 There are  2 major / important operation performed in Disjoint set :
// 1. findParent() or findSet()
// 2. Union or UnionSet()

//🔸 FindParent() or FindSet() :

// ex: we have some nodes and they are pointing to themselves, which means they are there own parents
//      __     __      __      __     __ 
//     |  |   |  |    |  |    |  |   |  |
//     |  v   |  v    |  v    |  v   |  v 
//      [1]    [2]     [3]     [4]    [5]

// findParent(1) --> 1 
// findParent(2) --> 2 
// findParent(3) --> 3 
// findParent(4) --> 4 
// findParent(5) --> 5 


//🔸 Union() or UnionSet() :

//ex:  taking above example, where node pointing to themselves means they are there own parent
//      __     __      __      __     __ 
//     |  |   |  |    |  |    |  |   |  |
//     |  v   |  v    |  v    |  v   |  v 
//      [1]    [2]     [3]     [4]    [5]


// Union(1, 2)  ==> 1 becomes parent of this component(1, 2)
// Union(4, 5)  ==> 4 becomes parent of this component(4, 5)

// Union(3, 5)  ==> here 5 belongs to other component(ie: 4,5)  therefore 
//                  4 is parent of this component (4, 5, 3)    (we didn't consider 3 as parent because 3 was only to parent itself and no other component)
 
// Union(1, 3)  ==> here 3 belongs to other component (ie: 4, 5, 3) therefore
//                  1 is parent of this component (1, 2, 3, 4, 5)    (we consider 1 as parent because it was previously parent to one component(1, 2) hence it becomes the parent of (1,3))


//🔴 Union by Ranks and path compression:

//ex: we will understand it by following example:
//      __     __      __      __     __     __    __ 
//     |  |   |  |    |  |    |  |   |  |   |  |  |  |
//     |  v   |  v    |  v    |  v   |  v   |  v  |  v
//      [1]    [2]     [3]     [4]    [5]    [6]   [7]

//🔸step1: find parent of each nodes:
// findParent(1) ==> 1
// findParent(2) ==> 2
// findParent(3) ==> 3
// findParent(4) ==> 4
// findParent(5) ==> 5
// findParent(6) ==> 6
// findParent(7) ==> 7

//🔸step2: create a rank array :
// and initially rank of every node will be 0
// and consider starting node will be parent to itself 
// rank  : [ x | 0 | 0 | 0 | 0 | 0 | 0 | 0 ]
// nodes :   0   1   2   3   4   5   6   7

//🔸step3: start with first nodes:

//🔸for Union(1, 2)
// 1. find there parents :  as we have already found in FindParent()
//    parent(1)  -->  1 
//    parent(2)  -->  2

// 2. Now find there rank : from the rank array
//   1 --> 1   , parent rank of 1 is 0
//   2 --> 2   , parent rank of 2 is 0
// if both the ranks are same then we can attach them with whomever we want to
// so we made parent(2) ==> 1
//  [1]
//    ⬆️  
//    [2]

// and increment rank of 1 :
// rank  : [ x | 1 | 0 | 0 | 0 | 0 | 0 | 0 ]
// nodes :   0   1   2   3   4   5   6   7

//🔸for Union(2, 3) :
// 1. findParent(2) --> 1
// 2. findParent(3) --> 3

//  2 --> 1 , rank of 1 is 1
//  3 --> 3 , rank of 3 is 0
// here we have different ranks for both nodes, therefore
//  rank[3] < rank[1]           , higher rank node will become
//  parent[3] == 1              ,  parent of lower node

//    [1]
//  ⬆️  ⬆️  
// [3]   [2]

//🔸for Union(4, 5) :
// 1. findparent(4) --> 4 
// 2. findparent(5) --> 5 

// 4 --> 4 , rank of 4 is 0
// 5 --> 5 , rank of 5 is 0
// as both there ranks are same we can add on any node with anyother node
//    [1]           [4]
//  ⬆️  ⬆️          ⬆️ 
// [3]   [2]         [5]

// Now also increase rank of 4 as it became parent
// rank  : [ x | 1 | 0 | 0 | 1 | 0 | 0 | 0 ]
// nodes :   0   1   2   3   4   5   6   7

//🔸for Union(6, 7) :
// 1. findParent(6) --> 6 
// 2. findParent(7) --> 7

// 6 --> 6 ,rank of 6 is 0
// 7 --> 7 ,rank of 7 is 0
// as both the nodes have same ranks we can addOn any node with anyOther nodes
//    [1]           [4]      [6]
//  ⬆️  ⬆️          ⬆️       ⬆️ 
// [3]   [2]         [5]       [7]

// Also increase the rank of 6 as it became parent
// rank  : [ x | 1 | 0 | 0 | 1 | 0 | 1 | 0 ]
// nodes :   0   1   2   3   4   5   6   7

//🔸for Union(5, 6) : 
// 1. findParent(5) --> 4
// 2. findParent(6) --> 6

// 5 --> 4 ,rank of 4 is 1
// 6 --> 6 ,rank of 6 is 1
// as both the nodes have same ranks we can addOn any node with anyOther nodes
//    [1]           [4]     
//  ⬆️  ⬆️        ⬆️ ⬆️       
// [3]   [2]      [6]  [5]     
//                ⬆️ 
//                [7]  

// // Also increase the rank of 4 as it became parent
// rank  : [ x | 1 | 0 | 0 | 2 | 0 | 1 | 0 ]
// nodes :   0   1   2   3   4   5   6   7

//🔸for Union(3, 7) :
// 1. findParent(3) --> 1
// 2. findParent(7) --> 6 --> 4     , 4 is parent of 6 and 6 is parent of 7 so 4 becomes parent of 7

// 3 --> 1 ,rank of 1 is 1
// 7 --> 4 ,rank of 4 is 2
// Incase of non equal rank we check condition
// and higher rank node became parent of lower rank node
// rank[1] < rank[4]          (ie.: 1 < 2)
// parent[1] = 4

//                 [4]     
//              ↗️  ⬆️⬆️       
//            [1]  [6] [5]     
//           ⬆️⬆️   ⬆️ 
//          [3] [2]  [7]   

//🔴  Path compression :
// No suppose there was another node below [7] <--[8] 
// and to find parent[8] we have to traverse upto the parent which [4]
// ie:   parent[8] --> parent[7] --> parent[6] --> 4
//       parent[8] --> 4

// this process increase our time complexity : therfore we remove [7]
// from below [6] <-- [7]      and put it next to parent Node which is [4]

//                 [4] ⬅️ [7] 
//              ↗️  ⬆️⬆️       
//            [1]  [6] [5]     
//           ⬆️⬆️   
//          [3] [2]   
// In this way we can find parent of any node easily without consuming many time


//🔴🔴Kruskal's Algorithm :

//                      5 
//                [4] ----- [3]
//          9  /   |  \      |  \  8
//            /    |   \     |   \
//          [5]  1 |  3 \  3 |    [6]
//            \    |     \   |    /
//           4 \   |      \  |   / 7
//                [1] ----- [2] 
//                      2

// No adjacency list is Needed :
// Use of linear data structure is done here:

//🔸step1: find weight ,node and edges 
//    wt   u   v 
//----------------
//    1    1   4
//    2    1   2
//    3    2   3
//    3    2   4
//    4    1   5
//    5    3   4
//    7    2   6 
//    8    3   6
//    9    4   5


//🔸initially every node will be pointing to themselve, means they will be there own parent

//🔸step2: after finding u and v, 
//        check whether there parent are same or different
//        In case of different parent, we will perform merge/union 
//        In case of same parent, we will ignore them

//   u -> same parent   // merge/union
//   v -> same parent   // merge/union

//   u -> diff parent   // ignore
//   v -> diff parent   // ignore

//final graph will look like :

//                [4]       [3]
//                 |         | 
//                 |         |   
//          [5]  1 |       3 |    [6]
//            \    |         |    /
//           4 \   |         |   / 7
//                [1] ----- [2] 
//                      2
//🔸Minimum spanning tree achieved: (MST)





//🔴🔴🔴                //❓Question: Minimum Spanning Tree

// You are given an undirected, connected and weighted graph G(V, E), consisting of V number of vertices (numbered from 0 to V-1) and E
//  number of edges.
//  Find and print the total weight of the Minimum Spanning Tree (MST) using Kruskal's algorithm.
//  By definition, a minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all
//  the vertices together, without any cycles and with the minimum possible total edge weight.

// Constraints :
//    2 <= V <= 10^5
//    1 <= E <= 3 e 10^5
//    0 <=X<N
//    0 <=Y<N
//    1 <= W <= 10^4
//    where V and E represent the number of vertices and edges respectively
//    x and Y represent the vertices between which there is an edge.
//    W is the weight of the edge.
//    Time limit: 1sec

// Sample Input 1 :
// 4 4
// 0 1 3
// 0 3 5
// 1 2 1
// 2 3 8
// Sample Output 1 :
// 9
// Explanation For Sample Input 1:
// The edge (2,3) having weight 8 will be excluded from the MST. The total weight of the MST then will be 1 + 3 + 5 = 9.

// Sample Input 2:
// 4 4
// 1 2 6
// 2 3 2
// 1 3 2
// 1 0 2
// Sample Output 2:
// 6

//🔴appraoch: using kruskal's algorithm
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // cmp function: to sort the given node in weight order
// bool cmp(vector<int> &a, vector<int> &b) {
//     return a[2] < b[2] ;              // 2 is weight index in the given edges vector
// }

// //Make set function:
// void initialisePandR(vector<int> &parent, vector<int> &rank, int n) {
//     //initiallise every parent with its ownSelf, and rank with 0
//     for(int i=0; i<n; i++) {
//         parent[i] = i ;
//         rank[i] = 0 ;
//     }
// }

// // find parent function:
// int findParent(vector<int> &parent, int node) {
//     // if parent of node like for ex: parent[8] --> parent[7] --> parent[6] --> 4 
//     // here parent[4] --> 4 itself so return 4
//     if(parent[node] == node) {
//         return node ;
//     }
//     //recursion call
//     // path compression: parent[Node] = recursionCall
//     return parent[node] = findParent(parent, parent[node]) ;
// }

// // unionset function:
//  void unionSet( int u, int v, vector<int> &parent, vector<int> &rank) {
//     //find parent 
//     u = findParent(parent, u) ;
//     v = findParent(parent, v) ;

//     //find rank and update accordingly
//     if(rank[u] < rank[v]) {
//         parent[u] = v ;
//     }
//     else if(rank[v] < rank[u]) {
//         parent[v] = u ;
//     }
//     else{
//         //if rank is same
//         parent[v] = u ;
//         rank[u]++ ;
//     }
//  }

// // main funtion:
// int minimumSpanningTree(vector<vector<int>>& edges, int n)
// {   
//     // sort the given edge weight wise
//     //    wt   u   v 
//     //----------------
//     //    1    1   4
//     //    2    1   2
//     //    3    2   3
//     //    3    2   4
//     //    4    1   5
//     //    5    3   4
//     //    7    2   6 
//     //    8    3   6
//     //    9    4   5
//     // The third parameter of the array sort function in c++ is used to determine the order in which the components should be sorted    
//     sort(edges.begin(), edges.end(), cmp) ;

//     // create parent and rank array:
//     vector<int> parent(n) ;
//     vector<int> rank(n)  ;

//     // call initialisePandR function, where we set parent and rank initial value
//     initialisePandR(parent, rank, n) ;
    
//     //iterate through the sorted nodes and perform kruskals algo
//     int minWeight = 0 ;

//     for(int i=0; i<edges.size(); i++) {
//         int u = findParent(parent, edges[i][0]) ;       // edges[i][0] first col
//         int v = findParent(parent, edges[i][1]) ;       // edges[i][1] second col
//         int w = edges[i][2] ;                          // edges[i][2] third col

//         if( u != v ) {
//             minWeight += w ;
//             unionSet(u, v, parent, rank) ;
//         }
//     }
  
//   return minWeight ;
// }
// sort(stl) ==> time complexity : (m Log n)
// findParent() / unionSet ==> time complexity:  O(1)  <-- O(4) <-- O(4 alpha)      // according to research and studies
//🔴time complexity:  O(mLogN)
//🔴space complexity: O(N)           //linear space




// 🔴🔴🔴               //❓Question: Bridges in a Graph

// Given an undirected graph of V vertices and E edges. Your task is to find all the bridges in the given undirected graph. A bridge in any
// graph is defined as an edge which, when removed, makes the graph disconnected (or more precisely, increases the number of
// connected components in the graph).
//  For Example:
//    If the given graph is : :

//     [2]                [5]
//      | \             /  |
//      |   [0]-----[4]    |
//      | /             \  |
//     [1]                [3]

// Then the edge between 0 and 4 is the bridge because if the edge between 0 and 4 is removed, then there will be no
// path left to reach from 0 to 4.and makes the graph disconnected, and increases the number of connected components.
// Note:
// There are no self-loops( (an edge connecting the vertex to itself) in the given graph.
// There are no parallel edges i.e no two vertices are directly connected by more than 1 edge.

// Constraints :
//    1 <= T <= 50
//    1 <= V <= 10 1 3
//    V-1 <= E <= 3 10^3
//    0 <= a, b < V
//    Time Limit: 1 sec

// Sample Input 1 :
// 2
// 5 4
// 0 1
// 3 1
// 1 2
// 3 4
// 3 3
// 0 1
// 1 2
// 2 0
// Sample Output 1 :
// 4
// 0 1
// 1 2    
// 1 3
// 3 4
// 0
// Explanation For Sample Input 1 :
// For the first test case, the graph will be represented as 
//  [2]
//   |
//   |
//  [1]---[3]---[4]
//   |
//   |
//  [0]
// There are four bridges((0-1),(1-2),(1-3),(3-4)) in the above-given graph denoted by red lines.
// For the second test case, there is no bridge present in the given graph.

// Sample Input 2 :
// 1
// 6 7
// 1 2
// 1 0
// 0 2
// 0 4
// 5 4
// 5 3
// 3 4
// Sample Output 2 :
// 1
// 0 4
// Explanation For Sample Input 2 :
// For the first test case, the graph will be represented as 
//     [2]                [5]
//      | \             /  |
//      |   [0]-----[4]    |
//      | /             \  |
//     [1]                [3]
// There is only one bridge((0-4)) in the above-given graph denoted by red lines.

//🔴approach:
//🔸so basically bridge is type of edge , when we remove it then no of component will increase

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
// using namespace std; 

// //dfs function
// void dfs(int node, int parent, int &timer, vector<int> &discovery,  vector<int> &low, 
//          vector<vector<int>> &result, unordered_map<int,list<int>> &adj, unordered_map<int, bool> &visited) {
 
//     visited[node] = true ;
//     discovery[node] = low[node] =  timer++ ;

//     for(auto neighbour: adj[node]) {
//         if(neighbour == parent) {         // ignore if neighbour is parent
//             continue ;
//         }

//         if( !visited[neighbour]) {
//             dfs(neighbour, node, timer, discovery, low, result, adj, visited) ;
//             //after coming back from recursion
//             low[node] = min(low[node], low[neighbour]) ;
//             //check that particular edge is bridge or not
//             if(low[neighbour] > discovery[node]) {
//                 vector<int> ans ;
//                 ans.push_back(node) ;
//                 ans.push_back(neighbour) ;
//                 result.push_back(ans) ;
//             }
//         }
//         else{
//             //(if already visited and not equal to parent)
//             // back edge  (means another route to get to that node) 
//             low[node] = min(low[node], discovery[neighbour]) ;
//         }
//     }

// }

// //main funstion
// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//    //create adjacency list
//    unordered_map<int, list<int>> adj ;

//    for(int i=0; i<edges.size(); i++){
//        int u = edges[i][0] ;
//        int v = edges[i][1] ;

//        adj[u].push_back(v) ;
//        adj[v].push_back(u) ;
//    }

//    int timer = 0 ;
//    vector<int> discovery(v) ;
//    vector<int> low(v) ;
//    int parent = -1 ;
//    unordered_map<int, bool> visited ;

//    for(int i=0; i<v; i++) {
//      discovery[i] = -1 ;
//      low[i] = -1 ;
//    }
    
//     vector<vector<int>> result ;
//    // dfs 
//    for(int i=0; i<v; i++) {
//          if( !visited[i]) {
//             dfs( i, parent, timer, discovery, low, result, adj, visited) ;
//          }
//    }

//    return result ;
// }
//🔴time complexity: O(N+E)   // linear complexity
//🔴space complexity: O(N+E)  // linear complexity



//🔴🔴           //🔴Articulation Point in Graph

// If removing a vertex and its related edges causes the graph to become disconnected, the vertex is considered to be an articulation point in the graph.
//  Therefore, the number of related components in a graph grows as articulation points are removed. 
//  A connected component, or simply component, is a subgraph where every pair of nodes is connected to every other node by a path.
// Sometimes articulation points are referred to as cut vertices.
// Finding all of a graph's articulation points is the primary goal here which can be done by Tarjan’s Algorithm.

//🔸so basically articulation point is a node, when removed from a graph, creates more component

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
// using namespace std;

// //min function
// int min(int a, int b) {
//     if(a < b) {
//        return a ;
//     }
//     else{
//        return b ;
//     }
    
// }

// //dfs
// void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis, 
//                      unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer) {
 
//      vis[node] = true ;
//      disc[node] = low[node] = timer++ ;
//      int child = 0;

//      for(auto nbg: adj[node]){
           
//         if(nbg == parent) {
//             continue ;
//         }

//         if( !vis[nbg])  {
//             dfs(nbg, node, disc, low, vis, adj, ap, timer) ;
//             low[node] = min( low[node], low[nbg]) ;
//             //check articulation point or not
//             if(low[nbg] >= disc[node] && parent != -1) {
//                 ap[node] = 1 ;           // true == 1
//             }
//             child++ ;
//         }
//         else{
//             low[node] = min(low[node], disc[nbg]) ;
//         }
//      }

//       // edge case
//       // if there is only one parent node and more than one nodes are connected to that single parent
//       // which means removing that single parent , will create many component
//      if(parent == -1 && child > 1) {
//         ap[node] = 1 ;
//      }

// }

// int main() {

//     int n = 5 ;
//     int e = 5 ;
//     vector<pair<int,int>> edges ;

//     edges.push_back(make_pair(0,3)) ;
//     edges.push_back(make_pair(3,4)) ;
//     edges.push_back(make_pair(0,4)) ;
//     edges.push_back(make_pair(0,1)) ;
//     edges.push_back(make_pair(1,2)) ;

//     //adj list
//     unordered_map<int, list<int>> adj ;

//     for(int i=0; i<edges.size(); i++) {
//         int u = edges[i].first ;
//         int v = edges[i].second ;

//         adj[u].push_back(v) ;
//         adj[v].push_back(u) ;
//     }
  
//    int timer = 0 ;
//    vector<int> disc(n) ;
//    vector<int> low(n) ;
//    unordered_map<int, bool> vis ;
//    vector<int> artiPoint(n,0) ;

//    for(int i=0; i<n; i++) {
//     disc[i] = -1;
//     low[i] = -1;
//    }

//    //dfs call
//    for(int i=0; i<n; i++) {
//     if(!vis[i]){
//         dfs(i, -1, disc, low, vis, adj, artiPoint,  timer) ;
//     }
//    }

//    //print articulation point 
//    cout<< " articulation point are as follows: "<<endl ;
//    for(int i=0; i<n; i++){
//         if(artiPoint[i] != 0) {
//             cout<< i << " " ;
//         }
//    }
//     cout<<endl ;
// 🔸output: 0 1

//     return 0 ;
// }
//🔴time complexity: O(N+E)
//🔴space complexity: O(N+E)



//🔴🔴🔴          //❓Question: Count strongly connected components( kosaraju's algorithm) HARD

// You are given an unweighted directed graph having 'V' vertices and 'E' edges. Your task is to count the number of strongly connected
//  components (SCCs) present in the graph.
//  A directed graph is said to be strongly connected if every vertex is reachable from every other vertex. The strongly connected
//  components of a graph are the subgraphs which are themselves strongly connected.
//  Note:
//    Use zero-based indexing for the vertices.
//    The given graph doesn't contain any self-loops.

// Constraints :
//    1 <= T <= 10
//    1 <= V <= 10^4
//    0 <= E <= 10^4
//    0 <= a, b < V
//    Time Limit: 1 sec

// Sample Input 1 :
// 1
// 5 6
// 0 1
// 1 2
// 1 4
// 2 3
// 3 2
// 4 0
// Sample Output 1 :
// 2
// Explanation Of Sample Input 1 :
// For the first test case, the graph is shown below. There are two SCCs in the graph, 
// which are enclosed in the boxes as shown in the image below.

// Sample Input 2 :
// 2
// 1 0
// 4 4
// 0 1
// 1 2
// 2 3
// 3 1
// Sample Output 2 :
// 1
// 2

//🔸 strongly connected component means agar uss component ke kisi bhi node se start kare to 
//  uss component ke sare nodes ko traverse kar sakte hai

//              [1]
//             ↗️ \ 
//            /    ↘️ 
//          [0]⬅️--[2] -----> [3]
//                              |
//                             ⬇️ 
//                             [4]

// here 0, 1, 2 are strongly connected component, bcoz no matter where we start traversing from we can traverse all three nodes
// 3 itself is a strongly connected component
// 4 itself is a strongly connected component
//output:
// 1 2 0  == ssc 1
// 3      == ssc 2
// 4      == ssc 3

//🔴approach :

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
// #include<stack>
// using namespace std;

// //dfs function
// void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj) {

//     vis[node] = true ;

//     for(auto nbg: adj[node]) {
//         if( !vis[nbg]) {
//             dfs(nbg, vis, st,  adj) ;
//         }
//     }
//     //topo sort
//     st.push(node) ;
// }

// //reverse order dfs function
// void reverseDfs( int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj) {
       
//     vis[node] = true ;

//     for(auto nbg: adj[node]) {
//         if( !vis[nbg]) {
//             reverseDfs(nbg, vis, adj) ;
//         }
//     }
// }

// //main func
// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {
//     //create adj list
//     unordered_map<int, list<int>> adj ;

//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0] ;
//         int v = edges[i][1] ;

//         adj[u].push_back(v) ;
//     }

//     //topological sort 
//     stack<int> st ;
//     unordered_map<int, bool> vis ;

//     for(int i=0; i<v; i++) {
//         if( !vis[i]) {
//             dfs(i, vis, st, adj) ;
//         }
//     }

//     // transpose the components edges ( means direction change kardo)
//     // kyuki stack me FILo hota hai
//     unordered_map<int, list<int>> transpose ;
    
//     for(int i=0; i<v; i++) {
//         vis[i] = 0 ;
//         for(auto nbg: adj[i]){
//             transpose[nbg].push_back(i) ;
//         }
//     }

//     // dfs call using above ordering
//     int count = 0 ;
//      while( !st.empty()) {
//         int top = st.top() ;
//         st.pop() ;
//         if( !vis[top]) {
//            count++ ;
//            reverseDfs(top, vis, transpose) ;
//         }
//      }
//      return count ;
// }
//🔴time complexity: O(N+E)
//🔴space complexity: O(N+E)



//               //❓Question: Bellman Ford

// You have been given a directed weighted graph of 'N' vertices labeled from 1 to 'N' and 'M' edges. Each edge connecting two nodes 'u'
//  and 'v' has a weight 'w' denoting the distance between them.
//  Your task is to find the length of the shortest path between the 'src' and 'dest' vertex given to you in the graph. The graph may contain
//  negatively weighted edges.

//                [2]
//             2 ↗️ \  -1
//              / 2  ↘️ 
//            [1]---➡️[3]
//
//  3 3 1 3
//  1 2 2
//  1 3 2
//  2 3 1-
//  In the above graph, the length of the shortest path between vertex 1 and vertex 3 is 1->2->3 with a cost of 2 - 1
// = 1.

// Note:
//    It's guaranteed that the graph doesn't contain self-loops and multiple edges. Also the graph does not contain
//    negative weight cycles.

// Sample Input 1 :
// 1    
// 4 4 1 4
// 1 2 4
// 1 3 3
// 2 4 7 
// 3 4 -2
// Sample Output 1 :
// 1

// explanation for sample output 1:
//              [2]
//          4 ↗️  \  7
//          /       ↘️ 
///      [1]         [4]
//        3 \       ↗️  -2
//           ↘️    /
//             [3]

// The optimal path from source vertex 1 to destination vertex 4 is 1->3->4 with a cost of 3 - 2 = 1.
// Sample Input 2 :
// 1
// 2 1 1 2
// 2 1 3
// Sample Output 2 :
// 1000000000

//🔸 as dijkstra's algorithm not work on negative weight to find shortest distance
//🔸 bellman ford can be use to find negative cycle 
//🔸 bellman ford can work on negative weight to find shortest distance
//🔸 bellman ford can be applied to directed graph with negative weight, but not negative cycle
//🔸 for undirected graph, first convert it into directed graph and then apply bellman ford

//🔴approach: using bellman ford
//step1:  it says apply below formula 
// if(distance[u] + weight < distance[v]) 
//     distance[v] = distance[u] + weight

// to  (n-1 times)

//step2: apply same above formula one more time 
//        if any value gets updated that means negative cycle is present therefore shortest path cannot be found

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<list>
// using namespace std;

// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {

//     vector<int> dist(n+1, 1e9) ;             // 1e9 = distance ,  the notation 1e9 represents a floating-point number in scientific notation. It stands for 1 × 10^9, which is equivalent to the number 1,000,000,000 (one billion).
//     dist[src] = 0 ;

// // n-1 times updates 
//     for(int i=1; i<=n; i++) {
//         //traverse on edge list 
//         for(int j=0; j<m; j++) {
//             int u = edges[j][0] ;
//             int v = edges[j][1] ;
//             int wt = edges[j][2] ;

//             if(dist[u] != 1e9 &&  ((dist[u] + wt) < dist[v])) {
//                 dist[v] = dist[u] + wt ;
//             }
//         }
//     }

//     //check for negative cycle
//     bool flag = 0 ;
//     for(int j=0; j<m; j++) {
//         int u = edges[j][0] ;
//         int v = edges[j][1] ;
//         int wt = edges[j][2] ;

//         if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])) {
//             flag = 1 ;
//         }
//     }

//     if(flag == 0) {
//         return dist[dest] ;
//     }
//     return -1; 
// }
//🔴time complexity: O(N * M)       // (n-1) * E