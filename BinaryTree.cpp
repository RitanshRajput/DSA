
//                    //🔴🔴🔴 BINARY TREE

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

// Depth-First Search (DFS) Algorithms
// Breadth-First Search (BFS) Algorithms

// 🔸Tree Traversal using Depth-First Search (DFS) algorithm can be further classified into three categories:
// Preorder Traversal (current-left-right): Visit the current node before visiting any nodes inside the left or right subtrees. Here, the traversal is root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
// Inorder Traversal (left-current-right): Visit the current node after visiting all nodes inside the left subtree but before visiting any node within the right subtree. Here, the traversal is left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
// Postorder Traversal (left-right-current): Visit the current node after visiting all the nodes of the left and right subtrees.  Here, the traversal is left child – right child – root.  It means that the left child has traversed first then the right child and finally its root node.

// 🔸Tree Traversal using Breadth-First Search (BFS) algorithm can be further classified into one category:
// Level Order Traversal:  Visit nodes level-by-level and left-to-right fashion at the same level. Here, the traversal is level-wise. It means that the most left child has traversed first and then the other children of the same level from left to right have traversed. 
// Let us traverse the following tree with all four traversal methods:

//                              [1]                => Root Node
//                             /   \
//                          [2]     [3]
//                         /  \     /  \ 
//                       [4]  [5]  [6] [7]   ======>  (4,5,6,7)  => Leaf Nodes       

// Pre-order Traversal of the above tree: 1-2-4-5-3-6-7
// In-order Traversal of the above tree: 4-2-5-1-6-3-7
// Post-order Traversal of the above tree: 4-5-2-6-7-3-1
// Level-order Traversal of the above tree: 1-2-3-4-5-6-7


//🔴Like linkedlist is Linear(connected to only one node) data structure : [1]=>[2]=>[3]=>NULL
//🔴Just like that Binary Tree is Non-linear(connected to multiple node) Data structure

//🔴Basic Terms in Binary tree:

//                              [1]               
//                             /   \
//                          [2]     [3]
//                         /  \     /  \ 
//                       [4]  [5]  [6] [7]  

//1. Node    (element of tree which consist data )
//2. Root    (Top Node is called root where tree is starting from)
//3. Children (are offspring of there above node from where there are coming from i.e parent)
//4. Parent   (are the node which consist children node connected after them)
//5. Siblings (are another children in the same parent)
//6. Ancestor (take a node and look above there parent and there parent and there parent node this are all ancestors)
//7. Descendent (take a node and look below there children and there children and there children node this are all descendent)
//8. Leaf       (any node which do not have any child or children they are said to be leaf node)


//🔸Node structure :  for binary tree 2 children are allowed

// Node{  
//     int data ;                        [data of node]
//     node* left ;                       /         \ 
//     node* right ;           (pointer to left) (pointer to right)
// } ;


//🔴For tree (multiple children are allow) :

// Node{                                 [parent/root]
//     int data ;                       /  /  /   \   \  \
//     list<node*> child ;           [c] [c] [c]  [c] [c] [c]
// }


//🔴Creation of Binary Tree  and level -order - traversal:

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


//                   ❓ Homework Reverse Level order traversal :

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


//🔴 INORDER  |   PRE-ORDER   |  POST-ORDER
//   ( LNR )        ( NLR )       ( LRN )

//L = left node print  (check left node)
//N = Node print   (print node)
//R = right node print (check right node)


//🔴 INORDER  (LNR)
//                                            
//                            [1]            =  2(L) -> 4(L) -> NULL(L) => [4](N) 
//                           /   \           = -> NULL(R)                      => [2](N)
//                        [2]     [3]        = -> 5(R) -> NULL(L)              => [5](N)
//                       /  \     /  \       = -> NULL(R) -> 2                 => [1](N)
//                     [4]  [5]  [6] [null]  = -> 3(R) -> 6(L) -> NULL(L)      => [6](N)
//                                           = -> NULL(R)                      => [3](N)
//                                           = -> NULL(R)
// OUTPUT:  4 2 5 1 6 3 


//🔴 PRE-ORDER  (NLR)
//                                            
//                            [1]            = [1](N) -> 2(L)
//                           /   \           = [2](N) -> 4(L)
//                        [2]     [3]        = [4](N) -> NULL(L) -> NULL(R) -> 2 -> 5(R)
//                       /  \     /  \       = [5](N) -> NULL(L) -> NULL(R) -> 2 -> 1 -> 3(R)
//                     [4]  [5]  [6] [null]  = [3](N) -> 6(L) 
//                                           = [6](N) -> NULL(l) -> NULL(R) -> 3 -> NULL(R)
//                                           
// OUTPUT:  1 2 4 5 3 6

//🔴 POST-ORDER   (LRN)
//                                            
//                            [1]            = 2(L) -> 4(L) -> NULL(L) -> NULL(R)    = 4(N)
//                           /   \           = 5(R) -> NULL(L) -> NULL(R)            = 5(N)
//                        [2]     [3]        =                                       = 2(N)
//                       /  \     /  \       = 1 -> 3(R) -> 6(L)-> NULL(l)-> NULL(R) = 6(N)                                             
//                     [4]  [5]  [6] [null]  = 3 -> NULL(R)                          = 3(N)
//                                           =                                       = 1(N)
// OUTPUT:  4 5 2 6 3 1

//🔸Implementation:

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

// 20
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

//🔴basically ese node count karne hai jinke koi child nahihhai

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

//🔴time complexity: O(N)


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
//Input: 
//        []
//       /  \
//     []    []
//    / \    /\ 
///  [] []  [] []
//              \ 
//              []
//Outpu: 4

//🔸Height == Longest path between Root node and a leaf node

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
//Binary tree: refer 69/149 Lecture 63: Binary Tree FAANG Interview Questions || Part-1

//🔴Time complexity: O(n)       //traversing every node only ones
//🔴Space complexity: o(height)  == O(n) for worst case(like only left or only right is given)



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

//🔸Approach:
        
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
//🔴Time complexity: O(n^2)     ==> int height = O(N) , int diameter = O(N) * O(N)
//🔴space complexity: O(Height)  // O(n) if only left or only right


//                🔴Optimised Diameter of binary tree:

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
//🔴Time complexity: O(N)
//🔴space complexity: O(Height)   //O(N) for worst case if only left or only right


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

//given: balance height = [Height(left) - height(right)] <= 1     (for all nodes)

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
//🔴Time complexity: O(n^2)        //bcoz also calling height function whose TC is also O(N)


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
//🔴Time complexity: O(N)          //bcoz we are traversing every node only onces
//🔴Space complexity: O(height, height)   // O(N,N)  if only left or only right


//                  //❓Question: Determine if Two Trees are Identical

//Given two binary tree ,the task is to fiind if both of them are identical or not

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
//🔴Time complexity: O(N)          // left = O(N)+right = O(N) ==> O(N)+O(N) ==> 2O(N) ==> O(N)
//🔴space complexity: O(H)         // left = O(H) + right =  O(H) ==> O(H)+O(H) => 2O(H) ==> O(H)


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
//🔴Time complexity: O(N)
//🔴space complexity: O(Height)

//  70 /149