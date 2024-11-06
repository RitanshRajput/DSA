
//                        //🔴🔴🔴 BINARY TREE

// A binary tree is a tree data structure in which each node can have at most two children,
// which are referred to as the left child and the right child.

// The topmost node in a binary tree is called the root, and the bottom-most nodes are called leaves.
// A binary tree can be visualized as a hierarchical structure with the root at the top and the leaves at the bottom.

// Binary trees have many applications in computer science, including data storage and retrieval,
// expression evaluation, network routing, and game AI.
// They can also be used to implement various algorithms such as searching, sorting, and graph algorithms.

// 🔸Representation of Binary Tree:
// Each node in the tree contains the following:
// Data
// Pointer to the left child
// Pointer to the right child

//                         Binary Tree
//                              [1]
//                             /   \
//                          [2]     [3]
//                         /  \     /  \ 
//                       [4]  [5]  [6] [7]

// In C, we can represent a tree node using structures. In other languages, we can use classes as part of their OOP feature

// 🔸Basic Operations On Binary Tree:
// Inserting an element.
// Removing an element.
// Searching for an element.
// Deletion for an element.
// Traversing an element. There are four (mainly three) types of traversals in a binary tree which will be discussed ahead.

// 🔸Auxiliary Operations On Binary Tree:
// Finding the height of the tree
// Find the level of the tree
// Finding the size of the entire tree.

// 🔸Applications of Binary Tree:
// In compilers, Expression Trees are used which is an application of binary trees.
// Huffman coding trees are used in data compression algorithms.
// Priority Queue is another application of binary tree that is used for searching maximum or minimum in O(1) time complexity.
// Represent hierarchical data.
// Used in editing software like Microsoft Excel and spreadsheets.
// Useful for indexing segmented at the database is useful in storing cache in the system,
// Syntax trees are used for most famous compilers for programming like GCC, and AOCL to perform arithmetic operations.
// For implementing priority queues.
// Used to find elements in less time (binary search tree)
// Used to enable fast memory allocation in computers.
// Used to perform encoding and decoding operations.
// Binary trees can be used to organize and retrieve information from large datasets, such as in inverted index and k-d trees.
// Binary trees can be used to represent the decision-making process of computer-controlled characters in games, such as in decision trees.
//  Binary trees can be used to implement searching algorithms, such as in binary search trees which can be used to quickly find an element in a sorted list.
// Binary trees can be used to implement sorting algorithms, such as in heap sort which uses a binary heap to sort elements efficiently.

// 🔸Binary Tree Traversals:
// Tree Traversal algorithms can be classified broadly into two categories:
// 🔘Depth-First Search (DFS) Algorithms
// 🔘Breadth-First Search (BFS) Algorithms

// 🔸Tree Traversal using Depth-First Search (DFS) algorithm can be further classified into three categories:
// Inorder Traversal (left-current-right): Visit the current node after visiting all nodes inside the left subtree but before visiting any node within the right subtree. Here, the traversal is left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
// Preorder Traversal (current-left-right): Visit the current node before visiting any nodes inside the left or right subtrees. Here, the traversal is root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
// Postorder Traversal (left-right-current): Visit the current node after visiting all the nodes of the left and right subtrees.  Here, the traversal is left child – right child – root.  It means that the left child has traversed first then the right child and finally its root node.

// 🔸Tree Traversal using Breadth-First Search (BFS) algorithm can be further classified into one category:
// Level Order Traversal:  Visit nodes level-by-level and left-to-right fashion at the same level. Here, the traversal is level-wise.
// It means that the most left child has traversed first and then the other children of the same level from left to right have traversed.
// Let us traverse the following tree with all four traversal methods:

//                              [1]                => Root Node
//                             /   \
//                          [2]     [3]
//                         /  \     /  \ 
//                       [4]  [5]  [6] [7]   ======>  (4,5,6,7)  => Leaf Nodes
//                                                            _
// 🔸Pre-order Traversal of the above tree: 1-2-4-5-3-6-7     |
// 🔸In-order Traversal of the above tree: 4-2-5-1-6-3-7      | =>  Depth-First-Search
// 🔸Post-order Traversal of the above tree: 4-5-2-6-7-3-1   _|

// 🔸Level-order Traversal of the above tree: 1-2-3-4-5-6-7  ====>  Breadth-First-Search

// 🔴Like linkedlist is Linear(connected to only one node) data structure : [1]=>[2]=>[3]=>NULL
// 🔴Just like that Binary Tree is Non-linear(connected to multiple node) Data structure

// 🔴Basic Terms in Binary tree:
//                              [1]
//                             /   \
//                          [2]     [3]
//                         /  \     /  \ 
//                       [4]  [5]  [6] [7]

// 1. Node    (element of tree which consist data )
// 2. Root    (Top Node is called root where tree is starting from)
// 3. Children (are offspring of there above node from where there are coming from i.e parent)
// 4. Parent   (are the node which consist children node connected after them)
// 5. Siblings (are another children in the same parent)
// 6. Ancestor (take a node and look above there parent and there parent and there parent node this are all ancestors)
// 7. Descendent (take a node and look below there children and there children and there children node this are all descendent)
// 8. Leaf       (any node which do not have any child or children they are said to be leaf node)

// 🔸Node structure :  for binary tree 2 children are allowed

// Node{
//     int data ;                        [data of node]
//     node* left ;                       /         \ 
//     node* right ;           (pointer to left) (pointer to right)
// } ;

// 🔴For tree (multiple children are allow) :

// Node{                                 [  parent/root  ]
//     int data ;                       /  /  /   \   \  \
//     list<node*> child ;           [c] [c] [c]  [c] [c] [c]
// }

// 🔴Creation of Binary Tree  and level-order-traversal:

// #include<iostream>
// #include<queue>
// using namespace std;

// //creation of node class
// class node {
//     public:
//       int data;
//       node* left ;
//       node* right ;

//       //constructor:
//     node(int d) {
//         this -> data = d ;
//         this -> right = NULL ;
//         this -> left = NULL ;
//     }
// } ;

// //function to build a tree :
// node* buildTree(node* root) {

//     cout<< "Enter the data :" <<endl ;
//     int data ;
//     cin >> data ;
//     root = new node(data) ;

//     if(data == -1) {
//         return NULL ;
//     }

//     cout<<" Enter data for inserting in left node of "<< data <<" (enter -1 if not want to create a child in left)"<<endl ;
//     root -> left = buildTree(root->left) ;

//     cout<<" Enter data for inserting in right node of "<< data <<" (enter -1 if not want to create a child in right)" <<endl ;
//     root -> right = buildTree(root->right) ;

//     return root ;
// }

// //🔸Level-order Traversal :
// //                              [1]                //level 0 (print/traverse)
// //                             /   \
// //                          [2]     [3]            //level 1  (print/traverse)
// //                         /  \     /  \  
// //                       [4]  [5]  [6] [7]         //level 2  (print/traverse)
//
//

//  void levelOrderTraversal(node* root) {

//     queue<node* > q ;
//     q.push(root) ;
//     q.push(NULL) ;             //for separator (separator is used to give us output in level format)

//     while( !q.empty()) {
//        node* temp = q.front() ;
//        q.pop() ;

//     //if part is for adding a separator to give output in level format:
//        if(temp == NULL) {           //means old level completed its traversal
//           cout<< endl ;

//           if(!q.empty()) {         // queue still has some child nodes remaining
//             q.push(NULL) ;       // add another separator
//           }
//        }
//        else{
//     //else part is the main level order traversal part where it is traversing the binary tree:

//         cout<< temp -> data << " " ;   //print data is temp is not nULL
//         if(temp -> left) {           //if temp ->left NULL nahi hai toh q.push(temp->left) karo
//            q.push(temp -> left) ;
//         }

//         if(temp -> right) {          //if temp ->right NULL nahi hai toh q.push(temp->right) karo
//           q.push(temp -> right) ;
//         }
//       }
//     }
//  }

// int main() {

//     node* root = NULL ;

//     //creating a tree
//     root = buildTree(root) ;

//    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//    //level order
//    cout<<" printing the lever order traversal output : "<<endl ;
//    levelOrderTraversal(root) ;      //output: 1 3 5 7 11 17
// //                     [1]
// //                     /  \
// //                   [3]   [5]
// //                  /  \   /  \
// //               [7] [11] [17]  NULL
// // without using separator output format : 1 3 5 7 11 17
// // using separator output format :
// //                                        1
// //                                        3 5
// //                                        7 11 17

//     return 0;
// }

//                   ❓ Homework:  Reverse Level order traversal :

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// class node{
//    public:
//    int data ;
//    node* left ;
//    node* right ;

//    //constructor
//    node(int d) {
//      this -> data = d;
//      this -> left = NULL ;
//      this -> right = NULL ;
//    }
// };
// ///tree building function
// node* buildTree(node* root) {

//     cout<<" Enter data " <<endl ;
//     int data  ;
//     cin>> data ;
//     root = new node(data) ;

//     if(data == -1) {
//         return NULL ;
//     }

//     cout<<" enter data for left node "<< data << "(enter -1 if not want to create) " <<endl ;
//     root -> left = buildTree(root->left) ;

//     cout<<" enter data for right node" << data << " (enter -1 if not want to create)" <<endl ;
//     root -> right = buildTree(root ->right) ;

//     return root ;
// }

// // reverse output : for level order traversal
//  void reverseLevelOrderTraversal(node* root) {

//     queue<node* > q ;
//     q.push(root) ;
//     q.push(NULL) ;             //for separator (separator is used to give us output in level format)

//     stack<node*> s ;

//     while( !q.empty()) {

//        node* temp = q.front() ;
//        s.push(temp) ;
//        q.pop() ;

//     //if part is for adding a separator to give output in level format:
//        if(temp == NULL) {           //means old level completed its traversal
//           cout<< endl ;

//           if(!q.empty()) {         // queue still has some child nodes remaining
//             q.push(NULL) ;         // add another separator
//           }
//        }
//        else{
//     //else part is the main level order traversal part where it is traversing the binary tree:

//         cout<< temp -> data << " " ;   // print data is temp is not NULL
//         if(temp -> left) {             // if temp ->left NULL nahi hai toh q.push(temp->left) karo
//            q.push(temp -> left) ;
//         }

//         if(temp -> right) {          //if temp ->right NULL nahi hai toh q.push(temp->right) karo
//           q.push(temp -> right) ;
//         }
//       }
//     }

//    cout<<endl << "reverse level order traversal" <<endl ;
//     while(!s.empty()) {
//         node* temp = s.top() ;
//         s.pop() ;
//         if(temp == NULL) {
//             cout<< endl ;
//         }
//         else{
//             cout<< temp ->data <<" " ;
//         }
//     }
//  }
// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// int main() {
//     node* root = NULL ;

//     //buildtree
//     root = buildTree(root) ;

//     cout<<" level order traversal output :" <<endl ;
//     reverseLevelOrderTraversal(root) ;

//     return 0;
// }

// 🔴 INORDER  |   PRE-ORDER   |  POST-ORDER
//    ( LNR )        ( NLR )       ( LRN )

// L = left node print  (check left node)
// N = Node print   (print node)
// R = right node print (check right node)

// 🔴 INORDER  (LNR)
//
//                             [1]            =  2(L) -> 4(L) -> NULL(L) => [4](N)
//                            /   \           = -> NULL(R)                      => [2](N)
//                         [2]     [3]        = -> 5(R) -> NULL(L)              => [5](N)
//                        /  \     /  \       = -> NULL(R) -> 2                 => [1](N)
//                      [4]  [5]  [6] [null]  = -> 3(R) -> 6(L) -> NULL(L)      => [6](N)
//                                            = -> NULL(R)                      => [3](N)
//                                            = -> NULL(R)
//  OUTPUT:  4 2 5 1 6 3

// 🔴 PRE-ORDER  (NLR)
//
//                             [1]            = [1](N) -> 2(L)
//                            /   \           = [2](N) -> 4(L)
//                         [2]     [3]        = [4](N) -> NULL(L) -> NULL(R) -> 2 -> 5(R)
//                        /  \     /  \       = [5](N) -> NULL(L) -> NULL(R) -> 2 -> 1 -> 3(R)
//                      [4]  [5]  [6] [null]  = [3](N) -> 6(L)
//                                            = [6](N) -> NULL(l) -> NULL(R) -> 3 -> NULL(R)
//
//  OUTPUT:  1 2 4 5 3 6

// 🔴 POST-ORDER   (LRN)
//
//                             [1]            = 2(L) -> 4(L) -> NULL(L) -> NULL(R)    = 4(N)
//                            /   \           = 5(R) -> NULL(L) -> NULL(R)            = 5(N)
//                         [2]     [3]        =                                       = 2(N)
//                        /  \     /  \       = 1 -> 3(R) -> 6(L)-> NULL(l)-> NULL(R) = 6(N)
//                      [4]  [5]  [6] [null]  = 3 -> NULL(R)                          = 3(N)
//                                            =                                       = 1(N)
//  OUTPUT:  4 5 2 6 3 1

// 🔸Implementation:

// #include<iostream>
// using namespace std;

// class node{
//     public:
//       int data ;
//       node* left ;
//       node* right ;

//     //constructor
//     node(int data) {
//         this -> data = data ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// // buildd tree function
// node* buildTree(node* root) {
//     cout<< " Enter data "<<endl ;
//     int data ;
//     cin >> data ;
//     root = new node(data);

//     if(data == -1) {
//         return NULL ;
//     }

//     cout<<" enter data for left node "<< data <<" (or enter -1 if not want to add)" <<endl ;
//     root -> left = buildTree(root->left) ;
//     cout<<" enter data for right node "<< data <<" (or enter -1 if not want to add)" <<endl ;
//     root -> right = buildTree(root->right) ;

//     return root;
// }

// //🔸Inorder function: (LNR)
// void inorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left) ;
//     cout<< root-> data <<" " ;
//     inorder(root->right) ;
// }

// //🔸Pre-order function: (NLR)
// void preorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout<< root-> data <<" " ;
//     preorder(root->left) ;
//     preorder(root->right) ;
// }

// //🔸Post-order function: (LRN)
// void postorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left) ;
//     postorder(root->right) ;
//     cout<< root-> data <<" " ;
// }

// int main() {

// node* root = NULL ;

// root = buildTree(root) ;

// cout<<endl << "inorder traversal output: " ;
// inorder(root) ;

// cout<<endl << "pre-order traversal output: " ;
// preorder(root) ;

// cout<< endl <<"post-order traversal output: " ;
// postorder(root) ;
// // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1

//     return 0;
// }

//                 //❓ Build tree from level order

// #include<iostream>
// #include<queue>
// using namespace std;

// class node{
//     public:
//       int data ;
//       node* left ;
//       node* right ;

//     //constructor
//     node(int data) {
//         this -> data = data ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

// //🔸Build tree from level order
// void buildFromLevelOrder(node* root) {
//     queue<node*> q ;

//     cout<<" enter data for root "<<endl ;
//     int data ;
//     cin >> data ;
//     root = new node(data) ;
//     q.push(root) ;

//     while( !q.empty()) {
//         node* temp = q.front() ;
//         q.pop() ;

//         cout<<" enter left node for: "<< temp -> data <<endl ;
//         int leftData ;
//         cin>> leftData ;

//         if(leftData != -1){
//             temp -> left = new node(leftData) ;
//             q.push(temp -> left) ;
//         }

//         cout<<" enter right node for: "<< temp -> data <<endl ;
//         int rightData ;
//         cin>> rightData ;

//         if(rightData != -1){
//             temp -> right = new node(rightData) ;
//             q.push(temp -> right) ;
//         }
//     }
// }

// int main() {
// node* root = NULL ;
// buildFromLevelOrder(root) ;

//     return 0;
// }

//                    //❓Question: Count leaf Nodes

// you are given a Binary tree you have to count and return the number of leaf nodes present in it
// A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child
// A node is a leaf node if both left and right child nodes of it are NULL.

// Input Format:
//    The first line of input contains an integer 'T' representing the number of the test case. Then the test case
//    follows.
//    The first line of each test case contains elements of the binary tree in the level order form. The input consists of
//    values of nodes separated by a single space in a single line. In case a node is null, we take 1- in its place.
//  for example the input for the tree deoicited in the bwlow image would be:

//                               [20]
//                              /    \ 
//                          [10]      [35]
//                         /    \    /    \ 
//                       [5]   [15] [30]  [42]
///                             /
//                            [13]

//  20
//  10 35
//  5 15 30 42
//  1- 13 -1-1-1-1-1
//  1- -1

// Explanation:
//    Level 1 :
//    The root node of the tree is 20

//    Level 2 :
//    Left child of 20 = 10
//    Right child of 20 = 35

//    Level 3 :
//    Left child of 10 - 5
//    Right child of 10 = 15
//    Left child of 35 = 30
//    Right child of 35 = 42

//    Level 4 :
//    Left child of 5 = null (-1)
//    Right child of 5 = null (-1)
//    Left child of 15 = 13
//    Right child of 15 = null (-1)
//    Left child of 30 = null (-1)
//    Right child of 30 = null (-1)
//    Left child of 42 = null (-1)
//    Right child of 42 = null (-1)

//    Level 5 :
//    Left child of 13 - null (-1)
//    Right child of 13 = null (-1)
//    The first not-null node (of the previous level) is treated as the parent of the first two nodes of the current
//    level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the
//    current level and so on.
//    The input ends when all nodes at the last level are null (-1).

//    Note: Here in this tree nodes 20, 10, 35, 15 are internal nodes as these Nodes have AT LEAST ONE CHILD NODE. While
//    nodes

// Sample Input 1:
// 3
// 1 -1 -1
// 1  2  3  -1 -1 -1 4 -1 -1
// 1  2 -1 -1 3 -1 4 -1 -1
// Sample Output 1:
// 1
// 2
// 1
// Explanation For Sample Input 1:
// (i) 1 is the only node present in the tree, and hence it is the only leaf node.
// (ii) 2 and 4 are two leaf nodes present in the tree; all other nodes have at least one child (1 has 2 and 3 and 3 has 4).
// (iii) 4 is the only leaf node present in the tree as all other nodes have at least one child node (1 has 2, 2 has 3 and 3 has 4)

// Sample Input 2:
// 3
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
// 1 -1 2 -1 3 -1 -1
// 1 2 -1 3 4 5 6 7 8 -1 - 1 -1 -1 -1 -1 -1 -1
// Sample Output 2:
// 4
// 1
// 4
// Explanation For Sample Input 2:
// (i) 4, 5, 6 and 7 are 4 leaf nodes present in the tree, all other nodes have at least one child (1 has 2 and 3, 2 has 4 and 5 and 3 has 6 and 7).
// (ii) 3 is the only leaf node present in the tree as all other nodes have at least one child node (1 has 2 and 2 has 3)
// (iii) 5, 6, 7 and 8 are 4 leaf nodes present in the tree, all other nodes have at least one child (1 has 2, 2 has 3 and 4, 3 has 5 and 6 and 4 has 7 and 8).

// 🔴basically ese node count karne hai jinke koi child nahihhai

// #include<iostream>
// using namespace std;

// template <typename T>
// class BinaryTreeNode{
//     public:
//     BinaryTreeNode<T> *left;
//     BinaryTreeNode<T> *right;

//     BinaryTreeNode (T data) {
//         this -> data = data ;
//         left = NULL;
//         right = NULL ;
//     }
// };

// //inorder
// void inorder(BinaryTreeNode<int>* root, int &count ){
//     //base case
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left, count) ;

//        //leaf node
//        if(root -> left == NULL && root->right == NULL){
//         count++ ;
//        }

//     inorder(root->right, count) ;
// }

// int noOfLeafNodes(BinaryTreeNode<int> *root) {
//        int count = 0 ;
//       inorder(root, count) ;
//       return count;
// }

// 🔴time complexity: O(N)

//                    //❓Question: Height of Binary Tree

// Given a binary tree, find its height

// Example 1:

// Input:
//      1
//     /  \
//    2    3
// Output: 2

// Example 2:
// Input:
//   2
//    \
//     1
//    /
//  3
// Output: 3

// Example:
// Input:
//        []
//       /  \
//     []    []
//    / \    /\ 
///  [] []  [] []
//              \ 
//              []
// Outpu: 4

// 🔸Height == Longest path between Root node and a leaf node

// #include<iostream>
// using namespace std ;

// class Node {
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;

// int height(Node* node) {
//     //base case
//     if(node == NULL){
//         return 0 ;
//     }

//     int left = height(node -> left) ;
//     int right = height(node -> right) ;

//     int ans = max(left, right) +1 ;         //+1 is for root node

//     return ans ;
// }
// Binary tree: refer 69/149 Lecture 63: Binary Tree FAANG Interview Questions || Part-1

// 🔴Time complexity: O(n)       //traversing every node only ones
// 🔴Space complexity: o(height)  == O(n) for worst case(like only left or only right is given)

//                   //❓Question: Diameter of a Binary Tree

// The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes.
// The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded
// (note that there is more than one path in each tree of length nine, but no path longer than nine nodes)

// Example 1:
// Input:
//        1
//      /  \
//     2    3
// Output: 3

// Example 2:
// Input:
//          10
//         /   \
//       20    30
//     /   \ 
//    40   60
// Output: 4

// Your Task:
// You need to complete the function diameter() that takes root as parameter and returns the diameter.

// 🔸Approach:

//                         Diameter
//             /              |                  \ 
// ans =   (left subtree)  (right subtree)    (combination of left and right)

// option 1 : diameter(root -> left)
// option 2 : diameter(root -> right)
// option 1 : height(root -> left) + 1 + height(root-> right) ;       //+1 is root node

// max of above three option is our ans

// #include<iostream>
// using namespace std ;

// class Node {
//     public:
//       int data ;
//       Node* left ;
//       Node* right ;

//       Node(int x) {
//         this -> data = x ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//       }
// };
// //longest height
// int height(Node* root) {
//     //base case
//     if(root == NULL) {
//         return 0 ;
//     }

//     int left = height(root -> left) ;
//     int right = height(root -> right) ;

//     int ans = max(left, right) + 1;

//     return ans ;
// }

// int diameter(Node* root) {
//     //base case
//     if(root == NULL){
//         return 0 ;
//     }

//     int option1 = diameter(root -> left) ;
//     int option2 = diameter(root -> right) ;
//     int option3 = height(root -> left) + 1 + height(root -> right) ;

//     int ans = max(option1, max(option2, option3)) ;

//     return ans ;
// }
// 🔴Time complexity: O(n^2)     ==> int height = O(N) , int diameter = O(N) * O(N)
// 🔴space complexity: O(Height)  // O(n) if only left or only right
//

//                🔴 Optimised Diameter of binary tree:
//

// #include<iostream>
// using namespace std ;

// class Node {
//     public:
//       int data ;
//       Node* left ;
//       Node* right ;

//       Node(int x) {
//         this -> data = x ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//       }
// };

// pair<int,int> diameterFast(Node* root) {
//     //base case
//     if(root == NULL){
//         pair<int,int> p = make_pair(0,0) ;
//         return p ;
//     }

//     pair<int,int> left = diameterFast(root -> left) ;
//     pair<int,int> right = diameterFast(root -> right) ;

//     int option1 =  left.first ;       //first = diameter
//     int option2 =  right.first ;
//     int option3 =  left.second + right.second + 1 ;  //second = height

//     pair<int, int> ans ;
//     ans.first = max(option1, max(option2, option3)) ;
//     ans.second = max(left.second , right.second) + 1 ;

//     return ans ;
// }

// int diameter(Node* root) {
//     return diameterFast(root).first ;
// }
// 🔴Time complexity: O(N)
// 🔴space complexity: O(Height)   //O(N) for worst case if only left or only right

//                              🔸Pair in c++ :

// Pair is used to combine together two values that may be of different data types.
// Pair provides a way to store two heterogeneous objects as a single unit.
// It is basically used if we want to store tuples.
// The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

// The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
// Pair can be assigned, copied, and compared.
// The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which
// all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
// To access the elements, we use variable name followed by dot operator followed by the keyword first or second.

// Syntax:
// pair <data_type1, data_type2> Pair_name

// #include <iostream>
// #include <utility>
// using namespace std;

// int main()
// {
//     // defining a pair
//     pair<int, char> PAIR1;

//     // first part of the pair
//     PAIR1.first = 100;
//     // second part of the pair
//     PAIR1.second = 'G';

//     cout << PAIR1.first << " ";
//     cout << PAIR1.second << endl;

//     return 0;
// }
// Output
// 100 G

// 🔸If we want to use more varaible in single pair then
// simply create a class , and use it anywhere

// class ManyVariable {
//       int a ;
//       int b ;
//       char c ;
//       string d;
// }

//                    //❓Question : Check for balanced Tree

// Given a binary tree, find if it is height balanced or not.
// A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree.

// given: balance height = [Height(left) - height(right)] <= 1     (for all nodes)

// A height balanced tree
//         1
//      /     \
//    10      39
//   /
// 5

// An unbalanced tree
//         1
//      /
//    10
//   /
// 5

// Example 1:
// Input:
//       1
//     /
//    2
//     \
//      3
// Output: 0
// Explanation: The max difference in height
// of left subtree and right subtree is 2,
// which is greater than 1. Hence unbalanced

// Example 2:
// Input:
//        10
//      /   \
//     20   30
//   /   \
//  40   60
// Output: 1
// Explanation: The max difference in height
// of left subtree and right subtree is 1.
// Hence balanced.

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//      int data ;
//      Node* left ;
//      Node* right ;

//      Node(int x) {
//         this -> data = x ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//      }
// };

// //height function
// int height(Node* root) {
//     //base case
//     if(root == NULL){
//         return 0 ;
//     }

//     int left = height(root -> left) ;
//     int right = height(root -> right) ;

//     int ans = max(left, right) + 1 ;

//     return ans ;
// }

// bool isBalance(Node* root) {
//     //base case
//     if(root == NULL){
//         return true ;
//     }

//     bool left = isBalance(root -> left) ;
//     bool right = isBalance(root -> right) ;

//     // The abs() function in C++ returns the absolute value of an integer number.
//     bool diff = abs (height(root -> left) - height(root -> right)) <= 1 ;

//     if(left && right && diff) {
//         return 1 ;
//     }
//     else{
//         return false ;
//     }
// }
// 🔴Time complexity: O(n^2)        //bcoz also calling height function whose TC is also O(N)

//               🔴Optimised Check for balanced tree

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//      int data ;
//      Node* left ;
//      Node* right ;

//      Node(int x) {
//         this -> data = x ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//      }
// };

// pair<bool,int> isBalancedFast(Node* root) {
//     //base case
//     if(root == NULL){
//         pair<bool, int> p = make_pair(true,0) ;
//         return p ;
//     }

//     pair<int, int> left  = isBalancedFast(root -> left) ;
//     pair<int, int> right = isBalancedFast(root -> right) ;

//     bool leftAns = left.first ;        // first = isBalancedFast
//     bool rightAns = right.first ;

//     bool diff = abs (left.second - right.second) <= 1 ;   //second = height

//     pair<bool, int> ans ;
//     ans.second = max(left.second, right.second) + 1 ;

//     if(leftAns && rightAns && diff) {
//         ans.first =  true ;
//     }
//     else{
//         ans.first =  false ;
//     }
// }

// bool isBalance(Node* root) {
//     return isBalancedFast(root).first ;
// }
// 🔴Time complexity: O(N)          //bcoz we are traversing every node only onces
// 🔴Space complexity: O(height, height)   // O(N,N)  if only left or only right

//                  //❓Question: Determine if Two Trees are Identical

// Given two binary tree ,the task is to fiind if both of them are identical or not

// Example 2:
// Input:
//      1          1
//    /   \      /   \
//   2     3    2     3
// Output: Yes
// Explanation: There are two trees both
// having 3 nodes and 2 edges, both trees
// are identical having the root as 1,
// left child of 1 is 2 and right child
// of 1 is 3.

// Example 2:
// Input:
//     1       1
//   /  \     /  \
//  2    3   3    2
// Output: No
// Explanation: There are two trees both
// having 3 nodes and 2 edges, but both
// trees are not identical.

// #include<iostream>
// using namespace std;

// class Node{
//    public :
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int x) {
//     this -> data = x ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// } ;

// bool isIdentical(Node* r1, Node* r2) {
//     //base case
//     if(r1 == NULL && r2 == NULL){
//         return true ;
//     }

//     if(r1 == NULL && r2 != NULL) {
//         return false ;
//     }

//     if(r1 != NULL && r2 == NULL) {
//         return false ;
//     }

//     bool left = isIdentical(r1 -> left , r2 -> left) ;
//     bool right = isIdentical(r1 -> right , r2 -> left) ;

//     bool value = r1 -> data == r2 -> data ;

//     if(left && right && value) {
//         return true ;
//     }
//     else{
//         return false ;
//     }
// }
// 🔴Time complexity: O(N)          // left = O(N)+right = O(N) ==> O(N)+O(N) ==> 2O(N) ==> O(N)
// 🔴space complexity: O(H)         // left = O(H) + right =  O(H) ==> O(H)+O(H) => 2O(H) ==> O(H)

//                   //❓Question: Sum TREE

// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves,
// its value is equal to the sum of its left subtree's value and its right subtree's value.
// Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0.
// A leaf node is also considered a Sum Tree.

// Example 1:
// Input:
//     3
//   /   \    
//  1     2

// Output: 1
// Explanation:
// The sum of left subtree and right subtree is
// 1 + 2 = 3, which is the value of the root node.
// Therefore,the given binary tree is a sum tree.

// Example 2:
// Input:

//           10
//         /    \
//       20      30
//     /   \ 
//    10    10

// Output: 0
// Explanation:
// The given tree is not a sum tree.
// For the root node, sum of elements
// in left subtree is 40 and sum of elements
// in right subtree is 30. Root element = 10
// which is not equal to 30+40.

// #include<iostream>
// using namespace std ;

// class Node{
//     public:
//      int data ;
//      Node* left ;
//      Node* right ;

//      Node(int x) {
//        this -> data = x ;
//        this -> left = NULL ;
//        this -> right = NULL ;
//     }
// } ;

// pair<bool,int> isSumTreeFast(Node* root) {
//     //base case
//     if(root == NULL){
//         pair<bool, int> p = make_pair(true, 0) ;
//         return p ;
//     }
//     //another base case
//     if(root -> left == NULL && root -> right == NULL){
//         pair<bool, int> p = make_pair(true, root -> data) ;
//         return p ;
//     }

//     pair<bool, int> leftAns = isSumTreeFast(root -> left) ;
//     pair<bool, int> rightAns = isSumTreeFast(root -> right) ;

//     bool left = leftAns.first ;
//     bool right = rightAns.first ;

//     bool condition = root -> data == leftAns.second + rightAns.second ;

//     pair<bool, int> ans ;

//     if(left && right && condition) {
//         ans.first = true;
//         ans.second = 2 * root -> data;     // root->data + leftAns.second + rightAns.second ==>  2* root-> data
//     }
//     else{
//         ans.first = false ;
//     }

//     return ans ;
// }

// bool isSumTree(Node* root) {
//     return isSumTreeFast(root).first ;
// }
// 🔴Time complexity: O(N)
// 🔴space complexity: O(Height)

//                    //❓Question: ZigXag Traversal

// Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.

// Example 1:
// Input:
//         1
//       /   \
//      2     3
//     / \   /  \
//    4   5 6    7
// Output:
// 1 3 2 4 5 6 7

// Example 2:
// Input:
//            7
//         /     \
//        9       7
//      /  \     /
//     8    8   6
//    /  \
//   10   9
// Output:
// 7 7 9 8 8 6 9 10

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std ;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this-> data = d;
//     this ->left = NULL;
//     this ->right =  NULL;
//    }
// };

// vector<int> zigZagTraversal(Node* root) {

//     vector<int> result ;
//     if(root == NULL){
//         return result ;
//     }

//     queue<Node*> q ;
//     q.push(root) ;

//     bool leftToRight = true ;

//     while(!q.empty()) {

//         int size = q.size() ;
//         vector<int> ans(size) ;

//         //process every level
//         for(int i=0; i<size; i++) {
//             Node* frontNode = q.front() ;
//             q.pop() ;

//             //normal insert or reverse insert
//             int index = leftToRight ? i : size - i - 1 ;
//             ans[index] = frontNode -> data ;

//             if(frontNode -> left){
//                 q.push(frontNode -> left) ;
//             }

//             if(frontNode -> right){
//                 q.push(frontNode -> right) ;
//             }
//         }
//         //direction change
//         leftToRight = !leftToRight;

//         for(auto i:ans) {
//             result.push_back(i) ;
//         }
//     }
//    return result ;
// }
// 🔴time complexity: O(N)
// 🔴space complexity: O(N)

//                       //❓Question: Boundary Traversal of Binary Tree

// Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order:
// Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach
// when you always travel preferring the left subtree over the right subtree.
// Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
// Reverse right boundary nodes: defined as the path from the right-most node to the root.
// The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree.
// Exclude the root from this as it was already included in the traversal of left boundary nodes.

// Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary.

// Example 1:
// Input:
//         1
//       /   \
//      2     3
//     / \   / \ 
//    4   5 6   7
//       / \
//      8   9

// Output: 1 2 4 8 9 6 7 3

// Example 2:
// Input:
//             1
//            /
//           2
//         /  \
//        4    9
//      /  \    \
//     6    5    3
//              /  \
//             7     8

// Output: 1 2 4 6 5 7 8

// 🔸algo approach:
//  print left part  (exclusive leaf node)
//  print all leaf node  (front left to right)
//  print right part (that in reverse order) (exclusive leaf node)

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left;
//    Node* right;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };
//     //left node traversal
//     void traverseLeft(Node *root, vector<int> &ans)
//     {
//         if((root == NULL) || (root->left == NULL && root->right == NULL))
//             return;

//         ans.push_back(root->data);

//         if(root->left)
//             traverseLeft(root->left, ans);
//         else
//             traverseLeft(root->right, ans);
//  }

//    //leaf node traversal
//     void traverseLeaf(Node *root, vector<int> &ans)
//     {
//         if(root == NULL)
//             return;

//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data);
//             return;
//         }

//         traverseLeaf(root->left, ans);
//         traverseLeaf(root->right, ans);
//     }

//     //right node traversal
//     void traverseRight(Node *root,  vector<int> &ans)
//     {
//         if((root == NULL) || (root->left == NULL && root->right == NULL))
//             return;

//         if(root->right)
//             traverseRight(root->right, ans);
//         else
//             traverseRight(root->left,ans);

//         ans.push_back(root->data);
//     }

// //main function
// vector <int> boundary(Node *root)
//     {
//         vector<int> ans;

//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data);
//             return ans;
//         }

//         ans.push_back(root->data);
//         //step1: left nodes (excluding root noode)
//         traverseLeft(root->left, ans);

//         //step2: leaf nodes
//         traverseLeaf(root->left, ans);
//         traverseLeaf(root->right, ans);

//         //step3: right node (excluding rootnode, and in reverse order(bottom to up))
//         traverseRight(root->right, ans);

//         return ans;
//     }
// 🔴time complexity: O(N)      (N = (size/height) of node)
// 🔴space complexity: O(N)     (N = height of tree)

//                       //❓Question: Vertical Traversal of Binary Tree

// Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
// If there are multiple nodes passing through a vertical line,
// then they should be printed as they appear in level order traversal of the tree.

// Example 1:
// Input:
//            1
//          /   \
//        2       3
//      /   \   /   \
//    4      5 6      7
//               \      \
//                8      9
// Output:
// 4 2 1 5 6 3 8 7 9

// Example 2:
// Input:
//        1
//     /     \
//    2        3
//  /    \       \
// 4      5        6
// Output: 4 2 1 5 3 6

// approach:
// create a horizontal mapping for distance node  level wise

//-2  -1   0   1  2
// |   |   |   |  |
// |   |   1   |  |
// |   | / | \ |  |
// |   2   |   3  |
// | /    \|     \|
// 4       5      6

// 2 = 6
// 1 = 3
// 0 = 1, 5
// -1 = 2
// -2 = 4

// 4 2 1 5 3 6
// Output: 4 2 1 5 3 6

// create a data structure for mapping of horizontal distance = > levelwise nodes

// map<int, map<int, vector<int>>> nodes ;
//      |       |         |
// horizontal  level     list of nodes
// distance

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int data) {
//     this -> data = data ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// vector<int> verticalOrder(Node* root) {

//     map<int, map<int, vector<int>> >  nodes ;
//     queue<pair< Node* , pair<int, int>> > q ;
//     vector<int> ans ;

//     if(root == NULL){
//         return ans ;
//     }

//     q.push(make_pair(root, make_pair(0,0))) ;

//     while( !q.empty()) {
//         pair<Node*, pair<int, int>> temp = q.front() ;
//         q.pop() ;
//         Node* frontNode = temp.first;
//         int hd = temp.second.first ;            //hd = horizontal distance
//         int lvl = temp.second.second ;         //lvl = level

//         nodes[hd][lvl].push_back(frontNode -> data) ;

//         if(frontNode -> left)
//          q.push(make_pair(frontNode-> left, make_pair(hd-1, lvl+1) )) ;

//         if(frontNode -> right)
//             q.push(make_pair(frontNode -> right, make_pair(hd+1, lvl+1) ));
//     }

//     for(auto i: nodes) {
//         // i = <int, map<int, vector<int>> >
//         //      |    |
//         // i.first  i.second

//         for(auto j: i.second) {
//             // j = <int, vector<int>>
//             //      |      |
//             // j.first   j.second

//             for(auto k:j.second) {
//                 ans.push_back(k) ;
//             }
//         }
//     }

//     return ans ;
// }

//                         //❓Question: Top View of Binary Tree

// Given below is a binary tree. The task is to print the top view of binary tree.
// Top view of a binary tree is the set of nodes visible when the tree is viewed from the top.
// For the given below tree

//        1
//     /     \
//    2       3
//   /  \    /   \
//  4    5  6     7

// Top view will be: 4 2 1 3 7
// Note: Return nodes from leftmost node to rightmost node.
// Also if 2 nodes are outside the shadow of the tree and are at same position
// then consider the extreme ones only(i.e. leftmost and rightmost).

// For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N   will give 8 2 1 3 as answer.
// Here 8 and 9 are on the same position but 9 will get shadowed.

// Example 1:

// Input:
//       1
//    /    \
//   2      3
// Output: 2 1 3
// Example 2:

// Input:
//         10
//      /      \
//    20        30
//   /   \    /    \
// 40    60  90    100
// Output: 40 20 10 30 100

// #include<iostream>
// #include<vector>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// vector<int> topView(Node* root) {

//     vector<int> ans;
//     if(root == NULL){
//         return ans ;
//     }

//     map<int, int> topNode ;
//     queue<pair<Node* , int> > q ;

//    q.push(make_pair(root, 0)) ;

//    while( !q.empty()){
//     pair<Node*, int> temp = q.front() ;
//     q.pop();

//     Node* frontNode = temp.first;
//     int hd = temp.second ;

//     //if one value is present for hd then do nothing
//     if( topNode.find(hd) == topNode.end())
//         topNode[hd]  = frontNode -> data ;

//     if(frontNode ->left)
//         q.push(make_pair(frontNode ->left, hd-1)) ;

//     if(frontNode ->right)
//         q.push(make_pair(frontNode ->right, hd+1)) ;
//    }

//    for(auto i:topNode){
//     // i = <int, int>
//     //       |    |
//     //      HD   topNode
//     ans.push_back(i.second) ;
//    }

//    return ans ;
// }

//                  //❓Question: bottom View Of Binary Tree

// Given a binary tree, print the bottom view from left to right.
// A node is included in bottom view if it can be seen when we look at the tree from bottom.

//                       20
//                     /    \
//                   8       22
//                 /   \        \
//               5      3       25
//                     /   \      
//                   10    14

// For the above tree, the bottom view is 5 10 3 14 25.
// If there are multiple bottom-most nodes for a horizontal distance from root,
// then print the later one in level traversal. For example,
// in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

//                       20
//                     /    \
//                   8       22
//                 /   \     /   \
//               5      3   4     25
//                     /     \      
//                  10        14

// For the above tree the output should be 5 10 4 14 25.

// Note: The Input/Output format and Example given are used for the systems internal purpose,
// and should be used by a user for Expected Output only. As it is a function problem,
// hence a user should not read any input from the stdin/console.
// The task is to complete the function specified, and not to write the full code.

// Example 1:
// Input:
//        1
//      /   \
//     3     2
// Output: 3 1 2

// Example 2:
// Input:
//          10
//        /    \
//       20    30
//      /  \
//     40   60
// Output: 40 20 60 30

// 🔸approach:
// same approach as top view question (written above)
//  only remove the condition  if( topNode.find(hd) == topNode.end())

// #include<iostream>
// #include<vector>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// vector<int> bottomView(Node* root) {

//     vector<int> ans;
//     if(root == NULL){
//         return ans ;
//     }

//     map<int, int> topNode ;
//     queue<pair<Node* , int> > q ;

//    q.push(make_pair(root, 0)) ;

//    while( !q.empty()){
//     pair<Node*, int> temp = q.front() ;
//     q.pop();

//     Node* frontNode = temp.first;
//     int hd = temp.second ;

//     topNode[hd]  = frontNode -> data ;

//     if(frontNode ->left)
//         q.push(make_pair(frontNode ->left, hd-1)) ;

//     if(frontNode ->right)
//         q.push(make_pair(frontNode ->right, hd+1)) ;
//    }

//    for(auto i:topNode){
//     // i = <int, int>
//     //       |    |
//     //      HD   topNode
//     ans.push_back(i.second) ;
//    }

//    return ans ;
// }

//                  //❓Question: Left View of Binary Tree

// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible
// when tree is visited from Left side. The task is to complete the function leftView(),
// which accepts root of the tree as argument.

// Left view of following tree is 1 2 4 8.
//           1
//        /     \
//      2        3
//    /     \    /    \
//   4     5   6    7
//    \
//      8

// Example 1:
// Input:
//    1
//  /  \
// 3    2
// Output: 1 3

// Example 2:
// Input:
//      1
//    /  \
//   3    2
//  / \
// 4   6
// Output: 1 3 4

// Example 3:
// Input:
//           1
//         /  \
//        3    2
//       / \    \
//     4    5    6
//           \    \    
//            7    8
//                  \ 
//                   9
// Output: 1 3 4 7 9

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// //solve function
// void solve(Node* root, vector<int> &ans , int level) {
//     //base case
//     if(root == NULL){
//         return;
//     }

// // we entered into a new level
//     if( level == ans.size()) {
//         ans.push_back(root -> data) ;
//     }

//     solve(root -> left, ans, level+1) ;
//     solve(root -> right, ans, level+1) ;
// }

// //main function
// vector<int> leftView(Node* root){
//     vector<int> ans ;
//     solve(root, ans, 0 ) ;
//     return ans;
// }

//                  //❓Question: Right View of Binary Tree

// Given a Binary Tree, return Right view of it. Right view of a Binary Tree is set of nodes visible
// when tree is visited from right side.
// The task is to complete the function rightView(),
// which accepts root of the tree as argument.

// Left view of following tree is 1 3 7 8.
//           1
//        /     \
//       2        3
//    /     \    /   \
//   4     5     6    7
//    \
//      8

// Example 1:
// Input:
//    1
//  /  \
// 3    2
// Output: 1 2

// Example 2:
// Input:
//      1
//    /  \
//   3    2
//  / \
// 4   6
// Output: 1 2 6

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// //solve function
// void solve(Node* root, vector<int> &ans , int level) {
//     //base case
//     if(root == NULL){
//         return;
//     }

// // we entered into a new level
//     if( level == ans.size()) {
//         ans.push_back(root -> data) ;
//     }

//     solve(root -> right, ans, level+1) ;       //This is only change made in rightView question from leftView question
//     solve(root -> left, ans, level+1) ;
// }

// //main function
// vector<int> rightView(Node* root){
//     vector<int> ans ;
//     solve(root, ans, 0 ) ;
//     return ans;
// }

//                    //❓Question: Diagonal Traversal of Binary tree

// Given a Binary Tree, print the diagonal traversal of the binary tree.

// Consider lines of slope -1 passing between nodes. Given a Binary Tree,
// print all diagonal elements in a binary tree belonging to same line.
// If the diagonal element are present in two different subtress then left subtree
// diagonal element should be taken first and then right subtree.

// Example 1:

// Input :
//             8
//          /     \
//         3      10
//       /   \      \
//      1     6     14
//          /   \   /
//         4     7 13
// Output : 8 10 14 3 6 7 13 1 4
// Explanation:

// Diagonal Traversal of binary tree :
//  8 10 14 3 6 7 13 1 4

// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// //diagonal element function
// void diagonalelement(Node* root,int level,map<int,vector<int>> &value){
//     if(root==NULL)
//         return;

//     value[level].push_back(root->data);

//     diagonalelement(root->left,level+1,value);
//     diagonalelement(root->right,level, value);         //here only level+1
// }

// //main function
// vector<int> diagonal(Node *root)
// {
//    vector<int> ans;
//    if(root==NULL)
//         return ans;

//     map<int,vector<int>> value;
//     diagonalelement(root,0,value);

//     for(auto i: value)
//         for(auto j: i.second)
//             ans.push_back(j);

//     return ans;
// }

//                🔴  why use Map and How it effect the time COmplexity:
// Map is use for reduce the time complexity.
// When we have to compare thing and for that
// we use looping which have more complexity  (O(NXM))
// so we replace it using map by which their complexity educe to O(N) .

//                     //❓Question: Sun of the longest Bloodline of a tree(Sum of nodes on the longest path from root to leaf node)

// Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(),
// that find the sum of all nodes on the longest path from root to leaf node.
// If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered

// Example 1:
// Input:
//         4
//        / \       
//       2   5
//      / \ / \     
//     7  1 2  3
//       /
//      6
// Output: 13
// Explanation:
//         4
//        / \       
//       2   5
//      / \ / \     
//     7  1 2  3
//       /
//      6

// The highlighted nodes (4, 2, 1, 6) above are
// part of the longest root to leaf path having
// sum = (4 + 2 + 1 + 6) = 13

// Example 2:
// Input:
//           1
//         /   \
//        2     3
//       / \   / \
//      4   5 6   7
// Output: 11

// #include<iostream>
// #include<limits.h>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* left;
//    Node* right;

//    Node(int d) {
//     this -> data = d ;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// };

// void solve(Node* root, int sum, int &maxSum, int length, int &maxLeng) {
//     //base case
//     if(root == NULL){
//         if(length > maxLeng) {       //is current length is greater than maxLength
//             maxLeng = length;
//             maxSum = sum ;
//         }
//         else if(length == maxLeng) {    //if current length is equal to maxLength then store maximum of (sum, maxSum)
//            maxSum = max(sum, maxSum) ;
//         }
//         return ;
//     }

//     sum = sum + root -> data ;          //adding node data for that particular bloodline(part)

//     solve(root -> left, sum, maxSum, length + 1, maxLeng) ;
//     solve(root -> right, sum, maxSum, length + 1, maxLeng) ;
// }

// //main function:
// int sumOfLongRootToLeafPath(Node* root){
//     int length = 0 ;
//     int maxLeng = 0 ;
//     int sum = 0 ;
//     int maxSum = INT_MIN ;

//     solve(root, sum, maxSum, length, maxLeng) ;

//     return maxSum ;
// }
// 🔴time complexity: O(N)
// 🔴space complexity: O(N)    // N == Height of Tree

//            //❓Question: Lowest common Ancestor in a Binary Tree

// Given a Binary Tree with all unique values and two nodes value, n1 and n2.
// The task is to find the lowest common ancestor of the given two nodes.
// We may assume that either both n1 and n2 are present in the tree or none of them are present.

// LCA: It is the first common ancestor of both the nodes n1 and n2 from bottom of tree.

// Example 1:
// Input:
// n1 = 2 , n2 = 3
//        1
//       / \ 
//      2   3
// Output: 1
// Explanation:
// LCA of 2 and 3 is 1.

// Example 2:
// Input:
// n1 = 3 , n2 = 4
//            5
//           /
//          2
//         / \  
//        3   4
// Output: 2
// Explanation:
// LCA of 3 and 4 is 2.

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //main function
// Node* lca(Node* root, int n1, int n2) {
//     //base case
//     if(root == NULL){
//         return NULL ;
//     }

//     if(root -> data == n1 || root -> data == n2) {
//         return root;
//     }
//     Node* leftAns = lca(root -> left, n1 , n2);
//     Node* rightAns = lca(root -> right, n1 , n2);

//     if(leftAns != NULL && rightAns != NULL) {
//         return root ;
//     }
//     else if(leftAns != NULL && rightAns == NULL) {
//         return leftAns ;
//     }
//     else if(leftAns == NULL && rightAns != NULL){
//         return rightAns ;
//     }
//     else{
//         return NULL ;
//     }
// }
// 🔴Time complexity: O(N)
// 🔴space complexity: O(H)   //  height of tree

//                  //❓Question: K Sum Paths

// Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
// A path may start from any node and end at any node in the downward direction.

// Example 1:
// Input:
// Tree =
//           1
//         /   \                          
//        2     3
// K = 3
// Output: 2
// Explanation:
// Path 1 : 1 + 2 = 3
// Path 2 : only leaf node 3

// Example 2:
// Input:
// Tree =
//            1
//         /     \
//       3        -1
//     /   \     /   \
//    2     1   4     5
//         /   / \     \                    
//        1   1   2     6
// K = 5
// Output: 8
// Explanation:
// The following paths sum to K.
// 3 2
// 3 1 1
// 1 3 1
// 4 1
// 1 -1 4 1
// -1 4 2
// 5
// 1 -1 5

// 🔸giving TLE
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //solve function:
// void solve(Node* root, int k, int &count, vector<int> path) {
//     //base case
//     if(root == NULL){
//         return;
//     }

//     path.push_back(root -> data) ;

//    //left call
//     solve(root -> left, k, count, path) ;
//     //right call
//     solve(root -> right, k, count, path) ;

//     //check for K sum
//     int size = path.size() ;
//     int sum = 0;
//     for(int i= size-1; i>=0; i--){
//        sum += path[i] ;
//        if(sum == k) {
//         count++ ;
//       }
//       path.pop_back() ;             //here pop_back() is not needed because we are not passing path by reference (like &path) so it will automaticlly be removed
//     }
// }

// //main function
//  int sumK(Node *root,int k){
//     vector<int> path ;
//     int count = 0 ;
//     solve(root, k , count, path) ;
//     return count ;
// }

// a🔴pproach 2:

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// void check(Node *root, int k, int &count, int sum, unordered_map<int, int> &mp) {
//         if(root == NULL)
//             return;

//         sum += root->data;

//         count += mp[sum-k];
//         if(sum == k)
//             count++;

//         mp[sum]++;

//         check(root->left, k, count, sum, mp);
//         check(root->right, k, count, sum, mp);

//         mp[sum]--;
//     }

//     int sumK(Node *root,int k)
//     {
//         // code here
//         int count = 0;
//         unordered_map<int, int> mp;
//         check(root, k, count, 0, mp);
//         return count;
//     }

//                    //❓Question: kth Ancestor in a Tree

// Given a binary tree of size  N, a node, and a positive integer k.,
// Your task is to complete the function kthAncestor(),
// the function should return the kth ancestor of the given node in the binary tree.
// If there does not exist any such ancestor then return -1.
// Note: It is guaranteed that the node exists in the tree.

// Example 1:
//        1
//       / \ 
//      2   3
//    /  \ 
//   4    5
// Input:
//      K = 2
//      Node = 4
// Output: 1
// Explanation:
// Since, K is 2 and node is 4, so we
// first need to locate the node and
// look k times its ancestors.
// Here in this Case node 4 has 1 as his
// 2nd Ancestor aka the Root of the tree.

// Example 2:
// Input:
// k=1
// node=3
//       1
//     /   \
//     2     3

// Output:
// 1
// Explanation:
// K=1 and node=3 ,Kth ancestor of node 3 is 1.

// 🔴approach 1:
//  traversing and checking

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //solve function
// int solve(Node* root, int k, int node, vector<int> &path) {
//     //base case
//     if(root == NULL){
//         return 0;
//     }

//     path.push_back(root -> data) ;

//     solve(root -> left, k, node, path) ;
//     solve(root -> right, k, node, path) ;

//     int size = path.size() ;
//     for(int i=size-1; i>=0; i--) {
//         if(path[i] == node){
//             int index = i-k;

//         if(index<0){
//             return -1 ;
//         }
//         else{
//           return path[i-k] ;
//         }
//       }
//     }
//     path.pop_back() ;
// }

// //main function
// int kthAncestor(Node *root, int k, int node){
//      vector<int> path ;
//      return solve(root, k, node, path) ;
// }

// 🔴approach 2:

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //solve function
// Node* solve(Node* root, int &k, int node){
//     //base case
//     if(root == NULL)
//       return NULL ;

//     if(root -> data == node) {
//         return root ;
//     }

//     Node* leftAns = solve(root -> left, k , node) ;
//     Node* rightAns = solve(root -> right, k , node) ;

//     //returing back
//     if(leftAns != NULL && rightAns == NULL){
//         k-- ;
//         if(k<=0){
//             k = INT_MIN;
//             return root ;
//         }
//         return leftAns ;
//     }

//     if(leftAns == NULL && rightAns != NULL){
//         k-- ;
//         if(k<=0){
//             k = INT_MIN;
//             return root ;
//         }
//         return rightAns ;
//     }
//     return NULL ;
// }

// int kthAncestor(Node *root, int k, int node){
//     Node* ans = solve(root, k, node) ;
//     if(ans == NULL || ans->data == node){
//         return -1;
//     }
//     else{
//         return ans-> data;
//     }
// }
// 🔴Time complexity: O(N)
// 🔴space complexity: O(H)

//                  //❓Question; Maximum sum of Non-adjacent nodes

// Given a binary tree with a value associated with each node,
// we need to choose a subset of these nodes such that sum of chosen nodes is maximum
// under a constraint that no two chosen node in subset should be directly connected that is,
// if we have taken a node in our sum then we can’t take its any children or parents in c
// onsideration and vice versa.

//            1                       1
//           / \                     / \                                                            
//          2   3                 [2]   3
//         /   / \                 /   / \                                                          
//        1   4   5               1  [4]  [5]
//    Input Binary Tree        chosen nodes with maximum sum

// Example 1:
// Input:
//      11
//     /  \
//    1    2
// Output: 11
// Explanation: The maximum sum is sum of
// node 11.

// Example 2:
// Input:
//         1
//       /   \
//      2     3
//     /     /  \
//    4     5    6
// Output: 16
// Explanation: The maximum sum is sum of
// nodes 1 4 5 6 , i.e 16. These nodes are
// non adjacent.

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };
// //solve function
// pair<int, int> solve(Node* root){
//     //base case
//     if(root == NULL){
//         pair<int, int> p = make_pair(0,0) ;
//         return p ;
//     }

//     pair<int, int> left = solve(root -> left) ;
//     pair<int, int> right = solve(root -> right) ;

//     pair<int,int> result ;
//     //when including root node, then neglecting its direct child but taking its descendents value
//     result.first = root-> data + left.second + right.second ;
//     //when excluding root node, then comparing among the nodes
//     result.second = max(left.first , left.second) + max(right.first , right.second) ;

//     return result ;
// }

// //main function
// int getMaxSum(Node *root) {
//     pair<int, int> ans = solve(root);
//     return max(ans.first, ans.second) ;
// }
// 🔴Time complexity: O(N)
// 🔴space complexity: O(H)

// 🔴🔴🔴              //❓Question: Construct a Tree ffrom INorder ans PREorder

// Given 2 Arrays of Inorder and preorder traversal.
//  The tree can contain duplicate elements.
//  Construct a tree and print the Postorder traversal.

// Example 1:
// Input:
// N = 4
// inorder[] = {1 6 8 7}
// preorder[] = {1 6 7 8}
// Output: 8 7 6 1
//                                                     l    N   R
//   preorder{1}            [1]           =  inorder { NULL, 1 , 6, 8, 7}
//                         /    \                        l    N  R
//   preorder{6}        NULL   [6]        =   inorder { NULL, 6, 8, 7}
//                            /   \                      l   N   R
//   preorder{7}           NULL  [7]      =   inorder { 8, 7, NULL}
//                               / \                     l   N   R
//   preorder{8}              [8]   NULL  =  inorder { NULL, 8 , NULL}

//  postOrder: LRN ( 8, 7 , 6, 1)

// Example 2:
// Input:
// N = 6
// inorder[] = {3 1 4 0 5 2}
// preorder[] = {0 1 3 4 2 5}  (NLR) first element is always root
// Output: 3 4 1 5 2 0
// Explanation: The tree will look like
//                                                      L      N      R
// preorder{0}                [0]         = inorder{ [3 1 4] , 0 ,  [5 2] }
//                           /   \                   L  N  R
// preorder{1}             [1]   {5,2}    = inorder { 3  1  4}
//                        /  \                        L   N  R        L   N  R
// preorder{3}          [3]  [4]          = inorder {NULL 3 NULL }  {NULL 4 NULL}
//                     / \  /  \ 
//                     Null  NULL
//
//                            [0]
//                          /     \                 L  N   R
// preorder{2}            [1]      [2]        = inorder { 5  2  NULL}
//                       /  \      /  \                    L   N  R
// preorder{5}        [3]  [4]   [5] NULL     = inorder { NULL 5 NULL}
//                   / \  /  \   /\
//                  Null  NULL  NULL
//
// POSTorder: (LRN)  : 3 4 1 5 2 0
//

// 🔴Approach:
// step1: take index element as root
// step2: find root elemnt's position in INORDER
// step3: root -> left (INorder start -> position-1)
//          start    p-1  root  p+1     end
//          { 1   2   3   [4]    5   6   7 }
// step4: root -> right (position+1 -> INorder End)

// 🔴code1:
//  #include<iostream>
//  using namespace std;

// class Node{
//    public:
//    int data;
//    Node* left ;
//    Node* right;

//    Node(int data){
//     this -> data = data;
//     this -> left = NULL;
//     this -> right = NULL ;
//    }
// };

// //find position ,
// int findPosition(int in[], int Element, int inorderStart, int inorderEnd) {
//     for(int i=inorderStart; i<=inorderEnd; i++) {
//         if( in[i] == Element){
//             return i;
//         }
//     }
//     return -1;
// }

// //solve function:
// Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int size) {
//     //base case
//     if(index >= size || inorderStart > inorderEnd) {
//         return NULL ;
//     }

//     int Element = pre[index++] ;
//     Node* root = new Node(Element) ;       //create a new node
//     int position = findPosition(in, Element, int inorderStart, int inorderEnd) ;

//     //recursive call
//     root -> left = solve(in, pre, index, inorderStart, position - 1, size) ;
//     root -> right = solve(in, pre, index, position+1, inorderEnd, size) ;

//    return root;
// }

// //main function
// Node* buildTree(int in[], int pre[], int n){
//     int preOrderIndex = 0 ;
//     Node* ans = solve(in , pre, preOrderIndex, 0, n-1, n) ;         //0 =  inorder starting index , n-1 =  inorder last index
//     return ans ;
// }

// 🔴code2: using mapping

// #include<iostream>
// #include<map>
// using namespace std;

// class Node{
//    public:
//    int data;
//    Node* left ;
//    Node* right;

//    Node(int data){
//     this -> data = data;
//     this -> left = NULL;
//     this -> right = NULL ;
//    }
// };

// //find position using mapping
// void createMapping(int in[], map<int,int> nodeToIndex, int n) {
//     for(int i=0; i<n; i++) {
//         nodeToIndex[in[i]] = i ;
//     }
// }

// //solve function:
// Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int size, map<int,int> &nodeToIndex) {
//     //base case
//     if(index >= size || inorderStart > inorderEnd) {
//         return NULL ;
//     }

//     int Element = pre[index++] ;
//     Node* root = new Node(Element) ;       //create a new node
//     int position = nodeToIndex[Element] ;

//     //recursive call
//     root -> left = solve(in, pre, index, inorderStart, position - 1, size, nodeToIndex) ;
//     root -> right = solve(in, pre, index, position+1, inorderEnd, size, nodeToIndex) ;

//    return root;
// }

// //main function
// Node* buildTree(int in[], int pre[], int n){
//     int preOrderIndex = 0 ;
//     map<int,int> nodeToIndex ;
//     //create node to index map
//     createMapping(in, nodeToIndex, n) ;
//     Node* ans = solve(in , pre, preOrderIndex, 0, n-1, n, nodeToIndex) ;         //0 =  inorder starting index , n-1 =  inorder last index
//     return ans ;
// }

// 🔴🔴🔴                  //❓Question: Tree from POSTorder and Inorder

// Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively.
// The task is to construct the binary tree from these traversals.

// Example 1:
// Input:
// N = 8
// in[] = 4 8 2 5 1 6 3 7
// post[] =8 4 5 2 6 7 3 1
// Output: 1 2 4 8 5 3 6 7
// Explanation: For the given postorder and
// inorder traversal of tree the  resultant
// binary tree will be
//                                                   l       N    R
// postOrder{1}                [1]      = inorder{ [4 8 2 5] 1 [ 6 3 7]}
//                            /   \ 
//                    {4 8 2 5}  {6 3 7}
//
//
//
//                             [1]
//                            /   \                  l  N  R
// postorder{3}       {4 8 2 5}   [3]    = inorder { 6  3  7}
//                                 / \ 
//                               [6]  [7] = inorder {NUll 6 NUll}  {NULLL 7 NULL}
//                               /\    /\ 
//                               NULL   NULLL
//
//                              [1]
//                            /     \                    l  N   R
// preorder{8 4 5 2}        [2]      [3]       =inorder { 8  2  5}
//                        /     \    /   \             
// preorder{4}           [4]   [5]  [6]  [7]    =inorder{ NULL 4 8}
//                      /  \    /\    /\    /\ 
//                    NULL [8]  NULL NULL   NULLL

// Example 2:
// Input:
// N = 5
// in[] = 9 5 2 3 4
// post[] = 5 9 3 4 2
// Output: 2 9 5 4 3
// Explanation:
// the  resultant binary tree will be
//            2
//         /     \
//        9       4
//         \     /
//          5   3

// #include<iostream>
// #include<map>
// using namespace std;

// class Node{
//    public:
//    int data;
//    Node* left ;
//    Node* right;

//    Node(int data){
//     this -> data = data;
//     this -> left = NULL;
//     this -> right = NULL ;
//    }
// };

// //find position
// int findPosition(int in[], int Element, int inorderStart, int inorderEnd) {
//     for(int i=inorderStart; i<=inorderEnd; i++) {
//         if( in[i] == Element){
//             return i;
//         }
//     }
//     return -1;
// }

// //solve function:
// Node* solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int size) {
//     //base case
//     if(index < 0 || inorderStart > inorderEnd) {
//         return NULL ;
//     }

//     int Element = post[index--] ;
//     Node* root = new Node(Element) ;       //create a new node
//     int position = findPosition(in, Element,  inorderStart,  inorderEnd) ;

//     //recursive call(in case of postorder we first build right subtree and then left subtree)
//     root -> right = solve(in, post, index, position+1, inorderEnd, size) ;
//     root -> left = solve(in, post, index, inorderStart, position - 1, size) ;

//    return root;
// }

// //main function
// Node* buildTree(int in[], int post[], int n){
//     int postOrderIndex = n-1 ;   //last index for postorder
//     Node* ans = solve(in , post, postOrderIndex, 0, n-1, n) ;         //0 =  inorder starting index , n-1 =  inorder last index
//     return ans ;
// }

// 🔴Time complexity: O(N^2)
// 🔴space complexity: O(H)

// 🔴🔴🔴                  //❓Question: Burning Tree

// Given a binary tree and a node data called target.
//  Find the minimum time required to burn the complete binary tree if the target is set on fire.
//  It is known that in 1 second all nodes connected to a given node get burned.
/// That is its left child, right child, and parent.
// Note: The tree contains unique values.

// Example 1:
// Input:
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      6
//        / \      \
//       7   8      9
//                    \
//                    10
// Target Node = 8
// Output: 7
// Explanation: If leaf with the value
// 8 is set on fire.
// After 1 sec: 5 is set on fire.
// After 2 sec: 2, 7 are set to fire.
// After 3 sec: 4, 1 are set to fire.
// After 4 sec: 3 is set to fire.
// After 5 sec: 6 is set to fire.
// After 6 sec: 9 is set to fire.
// After 7 sec: 10 is set to fire.
// It takes 7s to burn the complete tree.

// Example 2:
// Input:
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      7
//   /    /
//  8    10
// Target Node = 10
// Output: 5

// 🔴Approach:
// step1:
// nodeToParent mapping (to find the parent of current node)
//  Map<Node*, Node*> nodeToParent mapping
//  level order traversal

// step2:
//  find target node (from which we want to start burning)
//  time complexity: o(H)

// step 3:
//  start burning
//  take 2 data structure:
//  dataStructure 1: using map<Node, bool> and queue check if node visited or not
//  dataStructure 2:  traverse target node
//  check if there are any left, right child and parent present or not to burn them

// if visited node then ignore else mark visited and add in queue
// check if there was any added node in queue or not ( if true then === time++) (if false then == ignore)

// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left;
//     Node* right;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //create parent mapping function
// //which also returns the parent node
// Node* createParentMapping(Node* root, int target, map<Node*, Node*> &nodeToParent) {

//     Node* result = NULL ;

//     queue<Node*> q ;
//     q.push(root) ;
//     nodeToParent[root] = NULL ;          //root doesnot have a parent so we consider NULL as its parents

// // level order traversal
//     while(!q.empty()) {
//         Node* front = q.front() ;
//         q.pop() ;

//         if(front -> data == target) {
//             result = front;
//         }

//         if(front -> left){
//             nodeToParent[front -> left] = front ;
//             q.push(front -> left) ;
//         }
//         if(front -> right){
//             nodeToParent[front -> right] = front;
//             q.push(front -> right) ;
//         }
//     }

//     return result ;
// }

// //burn Time function
// int burnTree(Node* targetNode , map<Node*, Node*> & nodeToParent) {

//     map<Node*, bool> visited ;
//     queue<Node*> q ;

//     q.push(targetNode);
//     visited[targetNode] = true ;

//     int ans = 0 ;

//     while( !q.empty()) {

//         bool flag = 0 ;
//         int size = q.size() ;

//         for(int i=0; i<size; i++){
//             //process neighbouring nodes
//             Node* front = q.front() ;
//             q.pop() ;

//             if(front -> left && !visited[front -> left]) {
//                 flag = 1 ;                          // 1 == true
//                 q.push(front -> left) ;
//                 visited[front -> left] = 1;         // 1 == true
//             }

//             if(front -> right && !visited[front -> right]) {
//                 flag = 1 ;                          // 1 == true
//                 q.push(front -> right) ;
//                 visited[front -> right] = 1;        // 1 == true
//             }

//             if(nodeToParent[front] && !visited[nodeToParent[front]]) {
//                 flag = 1 ;                          // 1 == true
//                 q.push(nodeToParent[front]);
//                 visited[nodeToParent[front]] = 1;   // 1 == true
//             }
//         }

//         if(flag == 1) {
//             ans++ ;
//         }
//     }

//    return ans ;
// }

// //main function
// int minTime(Node* root ,int target) {
//     //step1: create nodeToParent mapping
//     //step2: find target node
//     //step3: burn the tree in min time

//     map<Node*, Node*> nodeToParent ;
//     Node* targetNode = createParentMapping(root, target, nodeToParent) ;

//     int ans = burnTree(targetNode, nodeToParent) ;

//     return ans ;
// }
// 🔴Time complexity: O(N)      //O(N)LOT + O(N)burntree         //lot level order traversal
// 🔴space complexity: O(N)

//                        🔴🔴🔴  Morris Traversal :

// Inorder Tree Traversal without recursion and without stack!

// Using Morris Traversal, we can traverse the tree without using stack and recursion.
// The idea of Morris Traversal is based on Threaded Binary Tree.
// In this traversal, we first create links to Inorder successor and print the data using these links,
// and finally revert the changes to restore original tree.

// 🔸 Psuedo code:
// 1. Initialize current as root
// 2. While current is not NULL
//    If the current does not have left child
//       a) Print current’s data
//       b) Go to the right, i.e., current = current->right
//    Else
//       a) Find rightmost node in current left subtree OR
//               node whose right child == current.
//          If we found right child == current
//              a) Update the right child as NULL of that node whose right child is current
//              b) Print current’s data
//              c) Go to the right, i.e. current = current->right
//          Else
//              a) Make current as the right child of that rightmost
//                 node we found; and
//              b) Go to this left child, i.e., current = current->left

// Although the tree is modified through the traversal,
// it is reverted back to its original shape after the completion.
// Unlike Stack based traversal, no extra space is required for this traversal.

// 🔴Time complexity: O(N)
// 🔴space complexity: O(1)       //auxilliary space

// 🔴Algo :

// 1. current = root
// 2. while(root != NULL &&)

// 3.    if (left not exist)
//        visit(current)
//        current = current -> right

// 4.    else
//        predecessor = find(current)
//                                          __
//       if(predecessor -> right == NULL)     |
//          predecessor -> right = current    |  temporary link creation
//          current = current -> left       __|
//
//        else                              __
//         predecessor -> right = NULL        |
//         visit(current)                     |  temporary link removal
//         current = current -> right       __|

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//       int data ;
//       Node* left ;
//       Node* right ;

//     Node(int data){
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };
// /* Function to traverse the binary tree without recursion and without stack */
// //main function
// void MorrisTraversal(Node* root) {
//     Node* current ;
//     Node* predecessor;

//     if(root == NULL){
//         return ;
//     }

//     current = root ;

//     while(current != NULL) {

//         if(current -> left == NULL) {
//             cout<< current -> data << " " ;           //if current-> left is null then print current -> data
//             current = current -> right ;
//         }
//         else{
//             /* Find the inorder predecessor of current */
//             predecessor = current -> left ;
//             while( predecessor -> right != NULL && predecessor -> right != current){
//                 predecessor = predecessor -> right ;
//             }
//             /* Make current as the right child of its inorder predecessor */
//             if(predecessor -> right == NULL){
//                 predecessor -> right = current;
//                 current = current -> left ;
//             }
//             else{
//             /* Revert the changes made in the 'if' part to restore the original tree i.e., fix the right child of predecessor */
//                 predecessor ->right = NULL ;
//                 cout<< current -> data << " " ;
//                 current = current -> right ;
//             }

//         }
//     }
// }

// 🔴🔴🔴                //❓Question: Flatten Binary tree to linked list

// Given the root of a binary tree, flatten the tree into a "linked list":
// The "linked list" should use the same Node class where the right child pointer points to the next
// node in the list and the left child pointer is always null.
// The "linked list" should be in the same order as a pre-order traversal of the binary tree.

// Example 1:
// Input :
//           1
//         /   \
//        2     5
//       / \     \
//      3   4     6
// Output :
// 1 2 3 4 5 6
// Explanation:
// After flattening, the tree looks
// like this
//     1
//      \
//       2
//        \
//         3
//          \
//           4
//            \
//             5
//              \
//               6
// Here, left of each node points
// to NULL and right contains the
// next node in preorder.The inorder
// traversal of this flattened tree
// is 1 2 3 4 5 6.

// Example 2:
// Input :
//         1
//        / \
//       3   4
//          /
//         2
//          \
//           5
// Output :
// 1 3 4 2 5
// Explanation :
// After flattening, the tree looks
// like this
//      1
//       \
//        3
//         \
//          4
//           \
//            2
//             \ 
//              5
// Here, left of each node points
// to NULL and right contains the
// next node in preorder.The inorder
// traversal of this flattened tree
// is 1 3 4 2 5.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// inorder,preorder,postorder :
//  time complexity: O(N)
//  space complexity: O(N)

// morris traversal
//  time complexity: O(N)
//  space complexity: O(1)          //valid

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//      int data ;
//      Node* left ;
//      Node* right;

//     Node(int data) {
//         this -> data = data ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //main function Using Morris traversal
// void flatten(Node* root) {

//     Node* current = root;

//     while(current != NULL) {

//         if(current -> left) {
//             Node* predecessor = current -> left ;
//             while(predecessor -> right){
//                 predecessor = predecessor -> right ;
//             }

//             predecessor -> right = current -> right ;
//             current -> right = current -> left ;
//             current -> left = NULL ;                  // also keep making left part == NULL
//         }

//         current = current -> right ;
//     }
// }
// 🔴 time complexity: O(N)
// 🔴 space complexity: O(1)     // auxilliary space
