
//               //🔴🔴Binary Search Tree

// A Binary Search Tree is a special type of binary tree data structure which has the following properties:  

//1. The left subtree of a node contains only nodes with keys lesser than the node’s key.
//2. The right subtree of a node contains only nodes with keys greater than the node’s key.
//3. The left and right subtree each must also be a binary search tree.

// There must be no duplicate nodes.

//                         [8]
//                       /     \
//                     [3]     [10]
//                   /    \       \ 
//                 [1]   [6]       [14]
//                      /    \      /
//                     [4]   [7]  [13]

// The above properties of the Binary Search Tree provide an ordering among keys
// so that the operations like search, minimum and maximum can be done fast. 
// If there is no order, then we may have to compare every key to search for a given key.

//🔸How to search a key in a given Binary Tree?
// For searching a value, if we had a sorted array we could have performed a binary search.

// Search operations in binary search trees will be very similar to that. 
// Let’s say we want to search for the number X. 

//🔸We start at the root, and then we compare the value to be searched with the value of the root, 
//🔸If it’s equal we are done with the search if it’s smaller we know that we need to go to
//   the left subtree because in a binary search tree all the elements in the left subtree are smaller 
//   and all the elements in the right subtree are larger. 
//🔸Searching an element in the binary search tree is basically this traversal, 
//   at each step we go either left or right and at each step we discard one of the sub-trees. 

// If the tree is balanced,
// (we call a tree balanced if for all nodes the difference between the heights of left and right subtrees is not greater than one) 
// we start with a search space of ‘n’ nodes and as we discard one of the sub-trees, we discard ‘n/2’ nodes so our search space gets reduced to ‘n/2’. 
// In the next step, we reduce the search space to ‘n/4’ and we repeat until we find the element or our search space is reduced to only one node. 
// The search here is also a binary search hence the name; Binary Search Tree.


// Illustration of searching in BST:
// See the illustration below for a better understanding:

// Consider the graph shown below and the key = 6.

//                         [8]
//                       /     \
//                     [3]     [10]
//                   /    \       \ 
//                 [1]   [6]       [14]
//                      /    \      /
//                     [4]   [7]  [13]

//🔸Initially compare the key with the root i.e., 8. As 6 is less than 8, search in the left subtree of 8.
//🔸Now compare the key with 3. As key is greater than 3, search next in the right subtree of 3.
//🔸Now compare the key with 6. The value of the key is 6. So we have found the key. 


//🔴point :

//                      [root -> data]
//        left subtree /               \ right subtree
//                    /                 \
// [Node-> data  <  root -> data]    [Node->data  >  root -> data]


//                          //🔘Insertion in BST

//🔴🔴        //❓Question Create BST and Insertion in BST

// #include<iostream>
// #include<queue>
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
// } ;
// //🔸Inorder function: (LNR)
// void inorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left) ;
//     cout<< root-> data <<" " ;
//     inorder(root->right) ;
// }

// //🔸Pre-order function: (NLR)
// void preorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout<< root-> data <<" " ;
//     preorder(root->left) ;
//     preorder(root->right) ;
// }

// //🔸Post-order function: (LRN)
// void postorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left) ;
//     postorder(root->right) ;
//     cout<< root-> data <<" " ;
// }


// //🔸level order traversal function:
//  void levelOrderTraversal(Node* root) {

//     queue<Node* > q ;
//     q.push(root) ;
//     q.push(NULL) ;             //for separator (separator is used to give us output in level format)
    
//     while( !q.empty()) {

//        Node* temp = q.front() ;
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


// //🔸insert into BST function
// Node* insertIntoBST(Node* root, int d) {
//     //base case
//     if(root == NULL) {
//         root = new Node(d) ;
//         return root ;
//     }

//     if( d > root -> data) {
//         //right part me insert karna hai
//         root -> right = insertIntoBST(root -> right, d) ;
//     }
//     else {
//         //left part me insert karna hai
//         root -> left = insertIntoBST(root -> left, d) ;
//     }
// }


// //🔸taking input function
// void takeInput(Node* &root) {                //🔴 &root == Imp
//     int data ; 
//     cin >> data ;

//     while(data != -1) {
//         root = insertIntoBST(root, data) ;
//         cin >> data ;
//     }
// }

// //driver code
// int main () {
//     Node* root = NULL ;
    
//     cout<<"enter data to create a BST" <<endl ;
//     takeInput(root) ;
     
//     cout<< "Printing BST using Level order traversal" <<endl ;
//     levelOrderTraversal(root) ;

//     cout<< "Printing BST using  inorder" <<endl ;
//     inorder(root) ;

//     cout<< "Printing BST using  preorder" <<endl ;
//     preorder(root) ;

//     cout<< "Printing BST using  postorder" <<endl ;
//     postorder(root) ;

//    return 0;
// }

//🔴Time complexity: O(Log N) for BST insertion 

//🔴 Derivation of Time Complexity for Binary Search is O(log n)  : same applies for insertion in BST

//    [ | | | | | | | | ]  => arrray of size N  

//    [ | | | | |]        => First Iteration  N / 2    => also equal to N / 2^0

//    [ | | |]            => First Iteration  N / 4    => also equal to N / 2^1

//    [ | |]              => First Iteration  N / 8    => also equal to N / 2^2
//    . 
//    .
//    .
//    []                  => Nth iteration    N / 2^k


//  =>    N / 2^k  =  1
//  =>    N = 2^K 
//  =>    k = log N               // This is how Binary search Time complexity is O(log N)  worst case (upper bound)



//🔸Time complexity analysis:
//1. At each step of recursion or iteration, we are performing O(1) operation and
// moving one level downward in the tree (till we reach the NULL link). So total
// number of comparison is equal to the height of BST. Time complexity of
// insert operation = The height of BST * O(1) = h O(1) = O(h).

//2. When BST is balanced, both left and right subtree will be of same size (n/2)
// and height of BST will be O(logn). So time complexity of insertion in a
//  balanced BST = O(logn).

//3. When BST is completely unbalanced, it will be a linear chain of nodes (one
// node at each level) and the height of such BST is O(n). So time complexity of
// insertion in a unbalanced BST = O(n).


//🔸Space complexity analysis:
// We are using constant extra memory in iterative implementation, so space
// complexity of iterative insert operation in BST = O(1). In the recursive
// implementation, there will be one recursive call at each level of tree. So
// space complexity depends on the size of recursion call stack, which is equal
// to the height of the tree. So space complexity of recursive insert in BST = O(h)

//    For balanced BST, space complexity = O(logn).
//    For completely unbalanced BST, space complexity= O(n).


//                      //🔘Search / Traversal in BST

//                     //❓Question: Search in BST

// There is a Binary Search Tree (BST) consisting of 'N' nodes. Each node of this BST has some integer data.
// You are given a pointer to the root node of this BST, and an integer 'X'. 
// Print "True" if there is a node in BST having data equals to 'X',
// otherwise print "False".

// A binary search tree (BST) is a binary tree data structure that has the following properties.
//   1. The left subtree of a node contains only nodes with data less than the node's data.
//   2. The right subtree of a node contains only nodes with data greater than the node's data.
//   3. Both the left and right subtrees must also be binary search trees.

// Note:
// 1. It is guaranteed that all nodes have distinct data.

// Sample Input 1:
// 2
// 1 1
// 1 -1 -1
// 7 8
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// True
// False
// Explanation For Sample Input 1:
// In the first test case, there is only one node and it has data 1, thus we should print ‘True’. 
// In the second test case, there is no node having data 8. 
// See the problem statement for the picture of this BST.

// Sample Input 2:
// 2
// 4 1
// 3 1 5 -1 2 -1 -1 -1 -1
// 4 6
// 3 1 5 -1 2 -1 -1 -1 -1
// Sample Output 2:
// True
// False
// Explanation For Sample Input 1:
// In the first test case, there is left node and it has data 1, thus we should print ‘True’. 
// In the second test case, there is no node having data 6. thus we should print ‘False’. 


//🔴approach 1: recursive solution (right solution but TLE)
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
// } ;


// //main function
// bool searchInBST(Node* root, int x) {
//     //base case
//     if(root == NULL){
//         return false;
//     }
//     //if root is equal to data to be find then return true
//     if(root -> data == x) {
//         return true;
//     }

//     //if x is smaller than root data 
//     if(root -> data > x) {
//         //left part me search karo
//         return searchInBST(root->left, x) ;
//     }
//     else{
//         //else x is greater than root data
//         //right part me search karo
//         return searchInBST(root -> right , x) ;
//     }
// }
//🔸Time complexity: O(H) or O(LogN)  //height of tree 
//       worst case: O(N)
//🔸space complexity: O(1)


//🔴approach 2: iterative solution 
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
// } ;

// //main function
// bool searchInBST(Node* root, int x) {
//     Node* temp = root ;

//     while(temp != NULL){
//         if(temp -> data == x) {
//             return true ;
//         }
//         if(temp -> data > x) {
//             temp = temp -> left ;
//         }
//         else{
//             temp = temp ->right ;
//         }
//     }
//     return false;
// }
//🔴time complexity: O(H)   : worst case O(N)
//🔴space complexity: O(1) 


//                  //🔘Deletion in BST

//                //❓Question: Find max and min node in BST

// #include<iostream>
// #include<queue>
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
// } ;

//🔸insert into BST function
// Node* insertIntoBST(Node* root, int d) {
//     //base case
//     if(root == NULL) {
//         root = new Node(d) ;
//         return root ;
//     }

//     if( d > root -> data) {
//         //right part me insert karna hai
//         root -> right = insertIntoBST(root -> right, d) ;
//     }
//     else {
//         //left part me insert karna hai
//         root -> left = insertIntoBST(root -> left, d) ;
//     }
// }

// // 🔸Find minimum value in BST
// Node* minVal(Node* root) {
//     Node* temp = root;
//     while(temp -> left != NULL){
//         temp = temp -> left ;
//     }
//     return temp ;
// }

// // 🔸Find maximum value in BST
// Node* maxVal(Node* root) {
//     Node* temp = root;
//     while(temp -> right != NULL){
//         temp = temp -> right ;
//     }
//     return temp ;
// }

// //🔸taking input function
// void takeInput(Node* &root) {                //🔴 &root == Imp
//     int data ; 
//     cin >> data ;

//     while(data != -1) {
//         root = insertIntoBST(root, data) ;
//         cin >> data ;
//     }
// }

// //driver code
// int main () {
//     Node* root = NULL ;
    
//     cout<<"enter data to create a BST" <<endl ;
//     takeInput(root) ;

//     cout<< endl <<" Min value of BST is: "<< minVal(root) ->data << endl ;
//     cout<< " Max value of BST is: "<< maxVal(root) -> data<< endl ;

//    return 0;
// }


//                  //🔴Inorder PRedecessor and Successor

// Inorder predecessor and successor for a given key in BST

// There is BST given with root node with key part as integer only. 
// The structure of each node is as follows:
// struct Node
// {
//     int key;
//     struct Node *left, *right ;
// };

// You need to find the inorder successor and predecessor of a given key. 
//In case the given key is not found in BST, then return the two values within which this key will lie.

//🔴Following is the algorithm to reach the desired result. It is a recursive method: 

// Input: root node, key
// output: predecessor node, successor node

// 1. If root is NULL
//       then return
// 2. if key is found then
//     a. If its left subtree is not null
//         Then predecessor will be the right most 
//         child of left subtree or left child itself.
//     b. If its right subtree is not null
//         The successor will be the left most child 
//         of right subtree or right child itself.
//     return
// 3. If key is smaller than root node
//         set the successor as root
//         search recursively into left subtree
//     else
//         set the predecessor as root
//         search recursively into right subtree
// Following is the implementation of the above algorithm: 

//🔸Implementation:
// #include <iostream>
// using namespace std;
 
// // BST Node
// struct Node
// {
//     int key;
//     struct Node *left, *right;
// };
 
// // This function finds predecessor and successor of key in BST.
// // It sets pre and suc as predecessor and successor respectively
// void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
// {
//     // Base case
//     if (root == NULL)  return ;
 
//     // If key is present at root
//     if (root->key == key)
//     {
//         // the maximum value in left subtree is predecessor
//         if (root->left != NULL)
//         {
//             Node* tmp = root->left;
//             while (tmp->right)
//                 tmp = tmp->right;
//             pre = tmp ;
//         }
 
//         // the minimum value in right subtree is successor
//         if (root->right != NULL)
//         {
//             Node* tmp = root->right ;
//             while (tmp->left)
//                 tmp = tmp->left ;
//             suc = tmp ;
//         }
//         return ;
//     }
 
//     // If key is smaller than root's key, go to left subtree
//     if (root->key > key)
//     {
//         suc = root ;
//         findPreSuc(root->left, pre, suc, key) ;
//     }
//     else // go to right subtree
//     {
//         pre = root ;
//         findPreSuc(root->right, pre, suc, key) ;
//     }
// }
 
// // A utility function to create a new BST node
// Node *newNode(int item)
// {
//     Node *temp =  new Node;
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }
 
// /* A utility function to insert a new node with given key in BST */
// Node* insert(Node* node, int key)
// {
//     if (node == NULL) return newNode(key);
//     if (key < node->key)
//         node->left  = insert(node->left, key);
//     else
//         node->right = insert(node->right, key);
//     return node;
// }
 
// // Driver program to test above function
// int main()
// {
//     int key = 65;    //Key to be searched in BST
 
//    /* Let us create following BST
//               50
//            /     \
//           30      70
//          /  \    /  \
//        20   40  60   80 */
//     Node *root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);
 
 
//     Node* pre = NULL, *suc = NULL;
 
//     findPreSuc(root, pre, suc, key);
//     if (pre != NULL)
//       cout << "Predecessor is " << pre->key << endl;
//     else
//       cout << "No Predecessor";
 
//     if (suc != NULL)
//       cout << "Successor is " << suc->key;
//     else
//       cout << "No Successor";
//     return 0;
// }

//🔸Output
// Predecessor is 60
// Successor is 70

// Complexity Analysis:
//🔸Time Complexity: O(h), where h is the height of the tree. In the worst case as explained above we travel the whole height of the tree.
//🔸Auxiliary Space: O(1),  since no extra space has been taken.


//🔴Another Approach: 
// We can also find the inorder successor and inorder predecessor using inorder traversal. 
//Check if the current node is smaller than the given key for the predecessor and for a successor,
// check if it is greater than the given key. 
//If it is greater than the given key then,
// check if it is smaller than the already stored value in the successor then, update it. 
//At last, get the predecessor and successor stored in q(successor) and p(predecessor). 


// CPP code for inorder successor and predecessor of tree
// #include<iostream>
// #include<stdlib.h>
 
// using namespace std;
 
// struct Node
// {
//     int data;
//     Node* left,*right;
// };
  
// // Function to return data
// Node* getnode(int info)
// {
//     Node* p = (Node*)malloc(sizeof(Node));
//     p->data = info;
//     p->right = NULL;
//     p->left = NULL;
//     return p;
// }
 
// /*
// since inorder traversal results in
// ascending order visit to node , we
// can store the values of the largest
// no which is smaller than a (predecessor)
// and smallest no which is large than
// a (successor) using inorder traversal
// */
// void find_p_s(Node* root,int a,
//               Node** p, Node** q)
// {
//     // If root is null return
//     if(!root)
//         return ;
         
//     // traverse the left subtree   
//     find_p_s(root->left, a, p, q);
     
//     // root data is greater than a
//     if(root&&root->data > a)
//     {
         
//         // q stores the node whose data is greater
//         // than a and is smaller than the previously
//         // stored data in *q which is successor
//         if((!*q) || (*q) && (*q)->data > root->data)
//                 *q = root;
//     }
     
//     // if the root data is smaller than
//     // store it in p which is predecessor
//     else if(root && root->data < a)
//     {
//         *p = root;
//     }
     
//     // traverse the right subtree
//     find_p_s(root->right, a, p, q);
// }
 
// // Driver code
// int main()
// {
//     Node* root1 = getnode(50);
//     root1->left = getnode(20);
//     root1->right = getnode(60);
//     root1->left->left = getnode(10);
//     root1->left->right = getnode(30);
//     root1->right->left = getnode(55);
//     root1->right->right = getnode(70);
//     Node* p = NULL, *q = NULL;
  
//     find_p_s(root1, 55, &p, &q);
     
//     if(p)
//         cout << p->data;
//     if(q)
//         cout << " " << q->data;
//     return 0;
// }

//🔸Output
// 50 60
// Complexity Analysis:

//🔴Time Complexity: O(n), where n is the total number of nodes in the tree. In the worst case as explained above we travel the whole tree.
//🔴Auxiliary Space: O(n).


//🔴Approach 3: Iterative method:

// Input: root node, key
// output: predecessor node, successor node
//1.set suc and pre as NULL initially.
//2.Create a Node temp1 and set it to root node, temp1 will give the successor while traversing
//3.In first while loop, if temp1->key>key, then temp1->key may be a successor of the key and go to the left of temp.
//4.else, go to the right.
//5.Create a Node temp2 and set it to root node, temp2 will give the predecessor while traversing
//6.In second while loop, if temp2->key<key, then temp1->key may be a predecessor of the key and go to the right of temp.
//7.else, go to the left.
// Following is the implementation of the above algorithm: 

//🔸Implemetnation
// #include <iostream>
// using namespace std;
 
// // BST Node
// struct Node {
//     int key;
//     struct Node *left, *right;
// };
 
// // This function finds predecessor and successor of key in
// // BST. It sets pre and suc as predecessor and successor
// // respectively
// void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
// {
//     // set pre and suc as NULL initially
//     pre = NULL;
//     suc = NULL;
 
//     // set temp node as root
//     Node* temp1 = root;
//     while (temp1) {
//         // the maximum value in left subtree is successor
//         if (temp1->key > key) {
//             suc = temp1;
//             temp1 = temp1->left;
//         }
//         else
//             temp1 = temp1->right;
//     }
//     Node* temp2 = root;
//     while (temp2) {
//         // the minimum value in right subtree is predecessor
//         if (temp2->key < key) {
//             pre = temp2;
//             temp2 = temp2->right;
//         }
//         else
//             temp2 = temp2->left;
//     }
//     return;
// }
 
// // A utility function to create a new BST node
// Node* newNode(int item)
// {
//     Node* temp = new Node;
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }
 
// /* A utility function to insert a new node with given key in
//  * BST */
// Node* insert(Node* node, int key)
// {
//     if (node == NULL)
//         return newNode(key);
//     if (key < node->key)
//         node->left = insert(node->left, key);
//     else
//         node->right = insert(node->right, key);
//     return node;
// }
 
// // Driver program to test above function
// int main()
// {
//     int key = 65; // Key to be searched in BST
 
//     /* Let us create following BST
//                             50
//                     /     \
//                     30     70
//                     / \ / \
//             20 40 60 80 */
//     Node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);
 
//     Node *pre = NULL, *suc = NULL;
 
//     findPreSuc(root, pre, suc, key);
//     if (pre != NULL)
//         cout << "Predecessor is " << pre->key << endl;
//     else
//         cout << "No Predecessor";
 
//     if (suc != NULL)
//         cout << "Successor is " << suc->key;
//     else
//         cout << "No Successor";
//     return 0;
// }
// //this code is contributed by Harsh Raghav
// Output
// Predecessor is 60
// Successor is 70
// Complexity Analysis:

// Time Complexity: O(n), where n is the total number of nodes in the tree. In the worst case as explained above we travel the whole tree.
// Auxiliary Space: O(1).



//                  //🔘Deletion in BST

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };


// //🔸Inorder function: (LNR)
// void inorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left) ;
//     cout<< root-> data <<" " ;
//     inorder(root->right) ;
// }

// //🔸Pre-order function: (NLR)
// void preorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout<< root-> data <<" " ;
//     preorder(root->left) ;
//     preorder(root->right) ;
// }

// //🔸Post-order function: (LRN)
// void postorder(Node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left) ;
//     postorder(root->right) ;
//     cout<< root-> data <<" " ;
// }

// //🔸level order traversal function:
//  void levelOrderTraversal(Node* root) {

//     queue<Node* > q ;
//     q.push(root) ;
//     q.push(NULL) ;             //for separator (separator is used to give us output in level format)
    
//     while( !q.empty()) {

//        Node* temp = q.front() ;
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


// // 🔸insert into BST function
// Node* insertIntoBST(Node* root, int d) {
//     //base case
//     if(root == NULL) {
//         root = new Node(d) ;
//         return root ;
//     }

//     if( d > root -> data) {
//         //right part me insert karna hai
//         root -> right = insertIntoBST(root -> right, d) ;
//     }
//     else {
//         //left part me insert karna hai
//         root -> left = insertIntoBST(root -> left, d) ;
//     }
// }


// // 🔸Find minimum value in BST
// Node* minVal(Node* root) {
//     Node* temp = root;
//     while(temp -> left != NULL){
//         temp = temp -> left ;
//     }
//     return temp ;
// }

// // 🔸Find maximum value in BST
// Node* maxVal(Node* root) {
//     Node* temp = root;
//     while(temp -> right != NULL){
//         temp = temp -> right ;
//     }
//     return temp ;
// }

// //🔸taking input function
// void takeInput(Node* &root) {                //🔴 &root == Imp
//     int data ; 
//     cin >> data ;

//     while(data != -1) {
//         root = insertIntoBST(root, data) ;
//         cin >> data ;
//     }
// }


// //🔴delete from BST main code 
// Node* deleteFromBST(Node* root, int val) {
//     // base case
//     if(root == NULL){
//         return root ;
//     }

//     if(root -> data == val) {
//         // 0 child
//         if(root -> left == NULL && root -> right == NULL) {
//             delete root ;
//             return NULL ;
//         }

//         // 1 child
//         // 1 child me left child hai sirf
//         if(root -> left != NULL && root-> right == NULL){
//             Node* temp = root -> left ;
//             delete root ;
//             return temp ;
//         }
//         // 1 child me right child hai sirf
//         if(root -> left == NULL && root -> right != NULL){
//             Node* temp = root -> right ;
//             delete root ;
//             return temp ;
//         }


//         // 2 child
//         if(root -> left != NULL && root -> right != NULL){
//             int mini = minVal(root -> right) -> data ;   // find minimmum node using minVal function
//             root -> data = mini ;                       // replace node we want to delete with the mini value node
//             root -> right = deleteFromBST(root -> right, mini) ; // and delete the node we want to delete
//         }

//     }

//     else if ( root -> data > val) {
//         // left part me search karo agar value chota hai 
//         root -> left = deleteFromBST(root -> left, val) ;
//         return root ;
//     }

//     else{
//         // right part me search karo agar value bada hai
//         root -> right = deleteFromBST(root -> right, val) ;
//         return root;
//     }

// }


// //driver code
// int main () {
//     Node* root = NULL ;
    
//     cout<<"enter data to create a BST" <<endl ;
//     takeInput(root) ;

//     cout<<"printing lOT in BST" <<endl ;
//     levelOrderTraversal(root) ;

//     cout<<endl <<" INORDER traversal" << endl ;
//     inorder(root);
//     cout<<" PREORDER traversal" << endl ;
//     preorder(root) ;
//     cout<<" POSTORDERtraversal" << endl ;
//     postorder(root) ;



//     deleteFromBST(root, 20) ;


//     cout<<"printing lOT in BST" <<endl ;
//     levelOrderTraversal(root) ;

//     cout<<endl <<" INORDER traversal" << endl ;
//     inorder(root);
//     cout<<" PREORDER traversal" << endl ;
//     preorder(root) ;
//     cout<<" POSTORDERtraversal" << endl ;
//     postorder(root) ;

   

//    return 0;
// }
//🔴Time complexity: O(H)   :  worst case O(N)
//🔴space complexity: O(1)




//                //❓Question: Validate  BST

// Given a binary tree with N number of nodes, check if that input tree is Partial BST (Binary Search Tree) or not. If yes, return true, return false otherwise.
// A binary search tree (BST) is said to be a Partial BST if it follows the following properties.
//       The left subtree of a node contains only nodes with data less than and equal to the node's data.
//       The right subtree of a node contains only nodes with data greater than and equal to the node's data.
//       Both the left and right subtrees must also be partial binary search trees.

// ex:              
//              [4]
//             /   \
//           [2]    [3]
//          /   \ 
//         [1]   [3]

// Answer:
//    Level 1:
//    All the nodes in the left subtree of 4 (2, 1, 3) are smaller
//    than 4, all the nodes in the right subtree of the 4 (5) are larger than 4.

//    Level 2 :
//    For node 2:
//    All the nodes in the left subtree of 2 (1) are smaller than
//    2, all the nodes in the right subtree of the 2 (3) are larger than 2.
//    For node 5:
//    The left and right subtree for node 5 is empty.

//    Level 3:
//    For node 1:
//    The left and right subtree for node 1 are empty.
//    For node 3:
//    The


// Sample Input 1:
// 2
// 3 1 5 -1 2 -1 -1 -1 -1
// 3 2 5 1 4 -1 -1 -1 -1 -1 -1
// Sample Output 1:
//  true
//  false
// Explanation Of The Sample Input1:
// Here we have 2 test cases, hence there are 2 binary trees

// Test Case 1: 


// #include<iostream>
// #include<limits.h>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* right ;
//     Node* left;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;

// bool isBST(Node* root, int min, int max) {
//     //base case
//     if(root == NULL){
//         return true ;
//     }

//     if(root -> data >= min && root -> data <= max) {
//         bool left = isBST(root -> left, min, root -> data) ;
//         bool right = isBST(root -> right, root -> data, max ) ;
//         return left && right ;
//     }
//     else{
//       return false;
//     }
// }

// //main func
// bool validateBst(Node* root) {
//     return isBST(root, INT_MIN, INT_MAX ) ;
// }
//🔴Time complexity: O(N)    
//🔴space complexity: O(H)     : worst case O(N)


//                     //❓Question: Find K-th smallest Element in BST

// Given a binary search tree and an integer "K" Your task is to find the "K-th"
// smallest element in the given BST( binary search tree).
// BST (binary search tree) -
// If all the smallest nodes on the left side and all the greater nodes on the right side of the node current node.

// Order of elements in increasing order in the given BST Tis - (2.3,4.5.6.7.8.10)
// Suppose given 'K=3' then 3rd smallest element is '4'.
// Suppose given 'K = 8' then 8th smallest element is '10'.

// Sample Input 1:
// 2
// 3
// 3 1 4 -1 -1 -1 5 -1 -1
// 4
// 5 2 -1 -1 4 3 -1 -1 -1
// Sample Output 1:
// 4   
// 5
// Explanation Of Sample Input 1:
// Test case 1:

//     [3]
//   /     \
// [1]     [4] 
//           \ 
//            [5]

// Order of elements in the increasing order in the given BST is - { 1, 3, 4, 5 }.
// ‘K = 3’, so the 3’rd smallest element is ‘4’, return ‘4’.

// Test case 2:

//   [5]
//   /
// [2]
//   \ 
//    [4]
//    /
//   [3]

// Order of elements in increasing order in the given BST is - { 2, 3, 4, 5 }.
// ‘K=4’, so the 4’rd smallest element is ‘5’, return ‘5’.

// Sample Input 2:
// 2
// 1
// 3 2 -1 1 -1 -1 -1
// 4
// 3 1 4 -1 -1 -1 -1
// Sample Output 2:
// 1
// -1


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* right ;
//     Node* left;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;

// int solve(Node* root, int &i, int k) {
//     //base case
//     if(root == NULL){
//         return -1;
//     }
     
//     // L
//     int left = solve(root -> left , i, k) ;

//     if(left != -1) {
//         return left;
//     }

//     //N
//     i++ ;
//     if(i==k){
//         return root -> data;
//     }

//     //R
//     return solve(root -> right, i, k) ;
// }

// //main functiom
// int kthSmallest(Node* root, int k){
//     int i=0;
//     int ans = solve(root, i , k) ;
//     return ans ;
// }

//🔴Time complexity: O(N)
//🔴Space complexity: O(H)  : worst case o(N)


//🔴🔴Homework:  solve above question using morris traversal


//                 //❓Question: Predecessor and Successor in BST

// You have been given a binary search tree of integers with 'N' nodes. You are also given 'KEY' which represents data of a node of this tree.
//  Your task is to find the predecessor and successor of the given node in the BST.
//  Note:
//    1. The predecessor of a node in BST is that node that will be visited just before the given node in the inorder
//    traversal of the tree. If the given node is visited first in the inorder traversal, then its predecessor is NULL.
//    2. The successor of a node in BST is that node that will be visited immediately after the given node in the inorder
//      traversal of the tree. If the given node is visited last in the inorder traversal, then its successor is NULL.
//    3. The node for which predecessor and successor are to be found will always be present in the given tree.
//    4. A binary search tree (BST) is a binary tree data structure which has the following properties.
//        The left subtree of  a node containsonly nodes with  data less than the node's data.
//        The right subtree of a node contains only nodes with data greater than the node's data.
//        Both the left and right subtrees must also be binary search trees.


// Sample Input 1:
// 1
// 15 10 20 8 12 16 25 -1 -1 -1 -1 -1 -1 -1 -1
// 10
// Sample Output 1:
// 8 12

// ex:    
    //          [15]
    //         /   \
    //     [10]     [20]
    //    /    \    /   \
    //  [8]   [12] [16]  [25]

//     The inorder traversal of this tree will be 8 10 12 15 16 20 25.
// Since the node with data 8 is on the immediate left of the node with data 10 in the inorder traversal, the node with data 8 is the predecessor.
// Since the node with data 12 is on the immediate right of the node with data 10 in the inorder traversal, the node with data 12 is the successor.

// Sample Input 2:
// 2 
// 10 5 -1 -1 -1 -1
// 5
// 20 -1 -1
// 20
// Sample Output 2:
// -1 10
// -1 -1

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* right ;
//     Node* left;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;


// pair<int,int> predecessororSuccessor(Node* root, int key) {

//     Node* temp = root;

//     int predecessor = -1 ;
//     int succcessor = -1 ;

// // find Node == key
//     while(temp-> data != key) {
//         if(temp -> data > key){
//             succcessor = temp -> data ;
//             temp = temp -> left ;
//         }
//         else{
//             predecessor = temp -> data ;
//             temp = temp -> right;
//         }
//     }

//     //predecessor and successor

//     //predecessor
//     Node* leftSubTree = temp -> left ;
//     while(leftSubTree != NULL) {
//         predecessor = leftSubTree -> data ;
//         leftSubTree = leftSubTree -> right ;
//     }

//     //successor
//     Node* rightSubTree = temp -> right;
//     while(rightSubTree != NULL){
//         succcessor = rightSubTree -> data;
//         rightSubTree = rightSubTree-> left ;
//     }

//    //2 ways to pass the answer

//    //way 1:
//     // pair<int,int> ans = make_pair(predecessor, succcessor) ;
//     // return ans ;

//     //way 2:
//     return {predecessor, succcessor} ;
// }

//🔴Time complexity: O(N)
//🔴space complexity: O(1)



//                   //❓Question: LCA(lowest common ancestor) of TWO Nodes in a BST

//You are given a binary search tree of integers with N nodes. You are also given references to two nodes P and Q from this BST.
// Your task is to find the lowest common ancestor(LCA) of these two given nodes.
// The lowest common ancestor for two nodes P and Q is defined as the lowest node that has both P and Q as descendants (where we
// allow a node to be a descendant of itself)

// A binary search tree (BST) is a binary tree data structure which has the following properties.
//  The left subtree of a node contains only nodes with data less than the node's data.
//  The right subtree of a node contains only nodes with data greater than the node's data.
//  Both the left and right subtrees must also be binary search trees.

// Sample Input 1 :
// 2
// 3 5
// 2 1 3 -1 -1 -1 5 -1 -1
// 1 3
// 2 1 4 -1 -1 3 -1 -1 -1
// Sample Output 1:
// 3
// 2
// Explanation for Sample 1:
// The BST corresponding to the first test case will be-

//                  [2]
//               /       \ 
//             [1]        [3]
//                          \ 
//                          [5]

// Here, we can clearly see that LCA of node 3 and node 5 is 3.
// The BST corresponding to the second test case will be- 

//                  [2]
//                 /   \
//               [1]    [4]
//                      /
//                    [3]

//Here, we can clearly see that LCA of node 1 and node 3 is 2.

// Sample Input 2 :
// 1
// 1 1
// 3 2 -1 1 -1 -1 -1
// Sample Output 2:
// 1

//🔴Approach 1: recursion
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* right ;
//     Node* left;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;


// Node*  LCAinBST(Node* root, Node* p, Node* q) {
//     //base case
//     if(root == NULL){
//         return NULL; 
//     }

//     if( (root->data < p->data) && (root->data < q->data)) {
//         return LCAinBST(root->right, p, q) ;
//     }

//     if((root->data > p->data) && (root->data > q->data )) {
//         return LCAinBST(root->left, p, q) ;
//     }

//     return root;
// }
//🔴Time complexity: O(N)
//🔴Space complexity: O(H)


//🔴Approach 2: Iterative
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* right ;
//     Node* left;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// } ;


// Node*  LCAinBST(Node* root, Node* p, Node* q) {

//     while(root != NULL) {

//        if( (root->data < p->data) && (root->data < q->data)) {
//         root = root->right ;
//       }

//        if((root->data > p->data) && (root->data > q->data )) {
//         root = root->left ;
//       }
//       else{
//         return root;
//       }
//     }

// }
//🔴Time complexity: O(N)
//🔴Space complexity: O(1)



//                //❓Question: Two Sum in BST

// You have been given a Binary Search Tree and a target value. You need to find out whether there exists a pair of node values in the BST,
//  such that their sum is equal to the target value.
//  A binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a value
//  greater than all the values keys in the node's left subtree and less than those in its right subtree.

//  Follow Up:
//  Can you solve this in O(N) time, and O(H) space complexity?

// Sample Input 1:
// 1
// 10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
// 14
// Sample Output 1:
// True
// Explanation For Sample 1:
// For the first test case, the sum of the nodes with values 2 and 12 equals the target value.

//       [10]
//      /    \
//   [6]     [12]
//  /   \    /   \
// [2]  [8] [11]  [15]
                

// Sample Input 2:
// 1
// 5 3 7 -1 -1 6 8 -1 -1 -1 -1
// 20
// Sample Output 2:
// False
// Explanation For Sample 2:
// For the first test case, there is no such pair of nodes, the sum of which equals the target value.

//       [5]
//      /    \
//   [3]     [7]
//          /   \
//         [6]  [8]


// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right ;

//     Node(int data){
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// void inorder(Node* root, vector<int> &in){   
//     if(root == NULL){
//         return ;
//     }

//     inorder(root -> left, in) ;
//     in.push_back(root -> data) ;
//     inorder(root -> right, in) ;
// }

// //main function
// bool twoSumInBST(Node* root, int target){

//     vector<int> inorderValue ;
//     //store inorder => sorted value in a vector
//     inorder(root, inorderValue) ;

//     //use 2 pointer approach to check if pair exist
//     int i=0;
//     int j = inorderValue.size()-1 ;

//     while(i < j) {
//         int sum = inorderValue[i] + inorderValue[j] ;
//         if(sum == target) {
//             return true ;
//         }
//         else if(sum > target){
//             j-- ;
//         }
//         else{
//             i++;
//         }
//     }
//     return false;
// }
//🔴Time complexity: O(N)
//🔴space complexity: O(N)


//               //❓Question: Flatten a BST to a sorted list

// You have been given a Binary Search Tree (BST). Your task is to flatten the given BST to a sorted list. More formally, you have to make a
// right-skewed BST from the given BST, i.e., the left child of all the nodes must be NULL, and the value at the right child must be greater
// han the current node.
// A binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a value
// greater than all the values in the node's left subtree and less than those in its right subtree

// Follow Up:
//    Can you solve this in O(N) time and O(H) space complexity?


// Sample Input 1
// 2
// 10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
// 5 -5 8 -1 -1 -1 -1
// Sample Output 1
// 2 -1 6 -1 8 -1 10 -1 11 -1 12 -1 15 -1 -1
// -5 -1 5 -1 8 -1 -1
// Explanation For Sample Input 1
// For the first test case, the given BST is depicted below.

//       [10]
//      /    \
//   [6]     [12]
//  /   \    /   \
// [2]  [8] [11]  [15]

//so after flattening the BST is transposed as the below figure.

// [2]
//   \
//    [6] 
//      \
//       [8] 
//         \ 
//          [10]
//            \
//             [11] 
//               \ 
//                [12] 
//                  \ 
//                   [15]

// For the second test case, the given BST is depicted below.

//       [5]
//      /    \
//   [-5]     [8]

// So, after flattening, the BST is transposed as the below figure.
// [-5]
//   \
//    [5] 
//      \
//       [8] 

// Sample Input 2
// 2
// 5 3 7 -1 -1 6 8 -1 -1 -1 -1
// 2 1 -1 -1 -1
// Sample Output 2
// 3 -1 5 -1 6 -1 7 -1 8 -1 -1
// 1 -1 2 -1 -1

// #include<iostream>
// #include<vector>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right ;

//     Node(int data){
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// // inorder function
// void inorder(Node* root, vector<int> &in) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root -> left, in) ;
//     in.push_back(root ->data) ;
//     inorder(root -> right, in) ;
// }

// //main function
// Node* flatten(Node* root) {
//    //step 1
//     vector<int> inorderValue;          // create a vector to store inorder data (sorted data)
//     inorder(root, inorderValue) ;      // call inorder function

//     int n = inorderValue.size() ;      

//     Node* newRoot = new Node(inorderValue[0]) ;     //create a new node(for flattening means for linkedlist initialise) and add first data of inorder 
//     Node* current =  newRoot ; 

//    //step 2:
//     for(int i=1; i<n; i++) {           //because we already added [0] index data into linkedlist we start from [1] index
//         Node* temp = new Node(inorderValue[i]) ;   //create linkedlist nodes

//         current -> left = NULL ;           // after creating a new node make previous nodes left pointing to null
//         current -> right = temp ;          // and right pointing to new node  (because in singly linked list only node-> right points to something )
//         current =  temp ;                  // and then make new node as current node
//     }
  
//   //step 3:
//     current -> left = NULL ;
//     current -> right = NULL ;

//     return newRoot ;
// }
//🔴Time complexity:  O(N)
//🔴space complexity: O(N)



//                   //❓Question: Normal BST to balanced BST

// You have been given a binary search tree of integers with 'N' nodes. Your task is to convert it into a balanced BST with the minimum
//  height possible.
//  A binary search tree (BST) is a binary tree data structure that has the following properties.
//       The left subtree of a node contains only nodes with data less than the node's data.
//       The right subtree of a node contains only nodes with data greater than the node's data.
//       Both the left and right subtrees must also be binary search trees.

// A Balanced BST is defined as a BST, in which the height of two subtrees of every node differs no more than 1.
//  For Example:
//    For the given BST:

//        [10]
//       /    \ 
//      [8]   [12]
//     /         \ 
//    [4]        [16]
//   /              \ 
//  [2]              [20]

// The modified BST will be:/

//       [10]
//      /    \
//   [4]     [16]
//  /   \    /   \
// [2]  [8] [12]  [20]


// Sample Input 1:
// 1
// 10 6 -1 4 -1 -1 -1
// Sample Output 1:
// 4 6 10
// Explanation Of Sample Output 1:
// The tree can be represented as follows:

//        [10]
//       /     
//      [6]   
//     /  
//   [4]

// After converting this tree to balanced BST. It will look like this:   

//       [6]
//      /    \
//   [4]     [10]

// Sample Input 2:
// 2 
// 10 5 -1 -1 -1
// 20 -1 -1
// Sample Output 2:
// 5 10 
// 20 


// A Balanced BST is defined as a BST, in which the height of two subtrees of every node differs no more than 1.
// means :  absoluteValue[H(left) - H(right)] <= 1


//🔴approach : recursion 
// #include<iostream>
// #include<vector>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right ;

//     Node(int data){
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// //inorder function
// void inorder(Node* root, vector<int> &in) {
//     //base case
//     if(root == NULL){
//         return;
//     }

//     inorder(root -> left, in) ;
//     in.push_back(root -> data) ;
//     inorder(root-> right , in) ;
// }

// // inorder to bst creation function
// Node* inorderToBST(int start, int end, vector<int> &inorderValue) {
//     //base case
//     if(start > end) {
//         return NULL ;
//     }

//     int mid = (start + end) / 2;
//     Node* root = new Node(inorderValue[mid]) ;

//     root -> left = inorderToBST(start, mid-1, inorderValue) ;
//     root -> right = inorderToBST(mid+1, end, inorderValue) ;

//     return root ;
// }

// //main function
// Node* balancedBST(Node* root) {
    
//     vector<int> inorderValue ;
//     inorder(root, inorderValue );
    
//     int start = 0;
//     int end = inorderValue.size()-1 ;
//     return inorderToBST( start, end, inorderValue) ;
// }
//🔴Time complexity: O(N)
//🔴space complexity: O(N)



//                 //❓Question: Preorder Traversal of a BST  (BST from preorder)

// You have been given an array/list 'PREORDER' representing the preorder traversal of a BST with 'N' nodes. All the elements in the given
//  array have distinct values.
//  Your task is to construct a binary search tree that matches the given preorder traversal.
//  A binary search tree (BST) is a binary tree data structure that has the following properties:
//       The left subtree of a node contains only nodes with data less than the node's data.
//       The right subtree of a node contains only nodes with data greater than the node's data.
//       Both the left and right subtrees must also be binary

// Note:
//    It is guaranteed that a BST can be always constructed from the given preorder traversal. Hence, the answer will
//    always exist.

// Example:
//    From PREORDER = [20, 10, 5, 15, 13, 35, 30, 42] و the following BST can be constructed:

//                [20]
//               /    \
//           [10]      [35]
//          /   \      /   \
//       [5]   [15]   [30]  [42]
//              /
//           [13]  

// Sample Input 1:
// 1
// 6
// 10 4 3 7 40 55 
// Sample Output 1:
// 3 5 7 10 40 50
// Explanation For Sample Output1:
// From the given preorder traversal, the following BST can be constructed:

//           [10]
//          /     \ 
//       [4]       [40]
//      /   \        \
//    [1]   [7]       [55]
// The inorder traversal of the given BST is [1, 4, 7, 10, 40, 55].

// Sample Input 2:
// 2
// 7
// 15 10 7 13 21 20 25 
// 3
// 1 2 4
// Sample Output 2:
// 7 10 13 15 20 21 25
// 1 2 4


// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right ;

//     Node(int data){
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// };

// Node* solve(vector<int> &preorder, int mini, int maxi, int &i) {
//     //base case
//     if( i >= preorder.size()) {
//         return NULL ;
//     }
//     //base case
//     if(preorder[i] < mini || preorder[i] > maxi) {
//         return NULL ;
//     }

//     Node* root = new Node(preorder[i++]) ;
//     root -> left = solve(preorder, mini, root -> data, i) ;
//     root -> right = solve(preorder, root -> data, maxi, i) ;
    
//     return root;
// }

// //main function
// Node* preorderToBST(vector<int> &preorder) {
    
//     int mini = INT_MIN ;
//     int maxi = INT_MAX ;
//     int i = 0;
//     return solve(preorder, mini, maxi, i) ;
// }
//🔴Time complexity: O(N)       => O(3N)== O(N)
//🔴space complexity: O(H)




//                   //❓Question:  Merge Two BST

//You are given two balanced binary search trees of integers having 'N' and 'M' nodes. You have to merge the two BSTs into a balanced
//  binary search tree and return the root node to that balanced BST.
//  A binary search tree (BST) is a binary tree data structure with the following properties.
//   The left subtree of a node contains only nodes with data less than the node's data.
//   The right subtree of a node contains only nodes with data greater than the node's data.
//   Both the left and right subtrees must also be binary search trees.

// Sample Input 1:
// 1
// 2 1 3 -1 -1 -1 -1
// 4 -1 -1
// Sample Output 1:
// 1 2 3 4 
// Explanation For Sample Output 1:
//  The given BST are:-

//        [2]
//       /   \
//      [1]  [3]  [4]

// we can see that after merging tree1 and tree2, it will look like the following:
//        [2]
//       /   \
//      [1]  [3]  
//             \ 
//             [4]
// Hence the output will be 1 2 3 4

// Sample Input 2:
// 1
// 4 2 7 -1 3 -1 -1 -1 -1  
// 5 1 7 -1 -1 -1 -1
// Sample Output 2:
// 1 2 3 4 5 7 7 


//🔴approach 1: 
// step1: store inorder of both root1 root2 into a vector ( time : o(m) O(N), space : O(M) O(N))
// step2: merge both sorted inorder into a array (time: O(m+n), space: o(m+n))
// stpe3: using inorderToBST that we done in previous questions create a new merge BST tree

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int data) {
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// } ;
// //inorder function
// void inorder(Node* root, vector<int> &in) {
//     //base case
//     if(root == NULL){
//         return ;
//     }

//     inorder(root -> left, in) ;
//     in.push_back(root -> data);
//     inorder(root -> right, in) ;
// }

// //merge array function
// vector<int> mergeArray(vector<int> &bst1, vector<int> &bst2) {

//     vector<int> ans(bst1.size() + bst2.size()) ;

//     int i = 0, j = 0 , k = 0;
//     while(i < bst1.size() && j < bst2.size()) {
//         if( bst1[i] < bst2[j] ) {
//             ans[k++] = bst1[i] ;
//             i++ ;
//         }
//         else{
//             ans[k++] =  bst2[j] ;
//             j++ ;
//         }
//     }

//     while( i < bst1.size() ) {
//         ans[k++] = bst1[i] ;
//         i++ ;
//     }

//     while( j < bst2.size()) {
//         ans[k++] = bst2[j] ;
//         j++ ;
//     }
//    return ans ;
// }

// // inorderToBST function
// Node* inorderToBST(int start, int end, vector<int> &in) {
//     //base case
//     if( start > end) {
//         return NULL ;
//     }

//     int mid = (start+end) / 2;
//     Node* root = new Node(in[mid]) ;
//     root -> left = inorderToBST(start, mid-1, in) ;
//     root -> right = inorderToBST(mid+1, end, in) ;

//     return root ;
// }

// //main function
// Node* mergeBST(Node* root1, Node* root2) {
//     //step1: store inorder(sorted bst)
//     vector<int> bst1, bst2 ;
//     inorder(root1, bst1) ;
//     inorder(root2, bst2) ;

//    //step2: store ans sort merge array
//     vector<int> mergeArrays = mergeArray(bst1, bst2) ;

//     //step3: create a new merge tree using inorderToBST
//     int start = 0;
//     int end = mergeArrays.size() - 1;

//     return inorderToBST(start, end, mergeArrays) ;
// }
//🔴Time complexity: O(m+n)
//🔴space complexity: O(m+n) 


//🔴approach 2: 
// step1: convert root1 and root2 into sorted linkedlist (Time: O(M) O(N), space: O(h1) O(h2))
// step2: merge both sorted linkedlist (Time: O(m+n), space : O(1))
// stpe3: convert linkedlist into BST (time : O(m+n), space: o(h1+h2))

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int data) {
//         this -> data = data;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// } ;

// // convert into doubly linkelist
// void convertIntoSortedDLL(Node* root, Node* &head) {
//     //base case
//     if(root == NULL){
//      return ;
//     }

//     convertIntoSortedDLL(root -> right, head) ;

//     root -> right = head ;
//     if(head != NULL){
//     head -> left = root;
//     }
//     head = root ;

//     convertIntoSortedDLL(root -> left, head) ;
// }

// //merge linkedlist
// Node* mergeLL(Node* head1, Node* head2) {

//     Node* head = NULL ;
//     Node* tail = NULL ;

//     while(head1 != NULL && head2 != NULL){

//         if(head1 -> data < head2 -> data) {
//             if(head == NULL){            //insert at head
//                 head = head1 ;
//                 tail = head1 ;
//                 head1 = head1 -> right ;
//             }
//             else{                     //insert at tail
//                 tail-> right = head1 ;
//                 head1 -> left = tail ;
//                 tail = head1 ;
//                 head1 = head1-> right ;
//             }
//         }
//         else{
//             if(head == NULL){         //insert at head
//                 head = head2 ;
//                 tail = head2 ;
//                 head2 = head2 -> right ;
//             }
//             else{                     //insert at tail
//                 tail-> right = head2 ;
//                 head2  -> left = tail ;
//                 tail = head2 ;
//                 head2 = head2-> right ;
//             }
//         }
//     }


//     while(head1 != NULL){
//         tail-> right = head1 ;
//         head1 -> left = tail ;
//         tail = head1 ;
//         head1 = head1-> right ;
//     }

//      while(head2 != NULL){
//         tail-> right = head2 ;
//         head2  -> left = tail ;
//         tail = head2 ;
//         head2 = head2-> right ;
//     }

//     return head ;
// }

// // create a new bst using sorted linkedlist
// // counting function which counts no. of nodess in linkedlist
// int countNodes(Node* head) {
//     int cnt = 0 ;
//     Node* temp = head;
//     while(temp != NULL) {
//         cnt++ ;
//         temp = temp -> right ;
//     }
//     return cnt ;
// }

// Node* sortedLLToBST(Node* &head, int n) {
//     //base case
//     if( n <= 0 || head == NULL){
//         return NULL ;
//     }
     
//     Node* left = sortedLLToBST(head, n/2) ;
//     Node* root = head ;
//     root -> left = left ;
//     head = head -> right ;

//     root -> right = sortedLLToBST(head, n-n/2-1) ;
//     return root ;
// }

// //main function
// Node* mergeBST(Node* root1, Node* root2) {
    
//     //step1: convert bst into sorted DLL
//     Node* head1 = NULL ;
//     convertIntoSortedDLL(root1, head1) ;
//     head1 -> left = NULL ;

//     Node* head2 = NULL ;
//     convertIntoSortedDLL(root2, head1) ;
//     head2 -> left = NULL ;

//     //step2: merge sorted linkedlist
//     Node* head = mergeLL(head1, head2) ;
  
//    //step3: convert sortedLL into bst
//    return sortedLLToBST(head, countNodes(head)) ;

// }
//🔴Time complexity: O(m+n)
//🔴space complexity: O(h1 + h2) 



//🔴🔴🔴           //❓Question: Largest BST in a Binary Tree

//You are given a binary tree with 'N' nodes. Your task is to return the size of the largest subtree of the binary tree which is also a BST.
//  A binary search tree (BST) is a binary tree data structure which has the following properties.

//  The left subtree of a node contains only nodes with data less than the node's data.
//  The right subtree of a node contains only nodes with data greater than the node's data.
//  Both the left and right subtrees must also be binary search trees.


// Sample Input 1 :
// 2
// 5 2 4 1 3 -1 -1 -1 -1 -1 -1 
// 2 1 3 -1 -1 -1 -1
// Sample Output 1:
// 3
// 3
// Explanation for Sample 1:
// The BST corresponding to the first test case is-

//              [5]
//            /     \ 
//           [2]     [4]
//         /    \ 
//        [1]   [3]

// The subtree rooted at 2 is a BST and its size is 3.

// The BST corresponding to the second test case is -

//               [2]
//              /   \
//            [1]   [3]
//The subtree rooted at 2 is a BST and its size is 3.

// Sample Input 2 :
// 1
// 50 -1 20 -1 30 -1 40 -1 50 -1 -1
// Sample Output 2:
// 4



//🔴approach:
// #include<iostream>
// #include<limits.h>
// using namespace std ;

// class Node{
//    public:
//    int data ;
//    Node* left ;
//    Node* right ;

//    Node(int data) {
//     this -> data = data;
//     this -> left = NULL ;
//     this -> right = NULL ;
//    }
// } ;

// // Information class 
// class info{
//    public:
//    int maxi ;
//    int mini ;
//    bool isBST ;
//    int size ;
// } ;

// //solve function
// info solve(Node* root, int &ans) {
//     //base case
//     if(root == NULL) {
//         return {INT_MIN, INT_MAX, true, 0} ;
//     }

//     info left = solve(root -> left, ans) ;
//     info right = solve(root -> right, ans) ;

//     info currentNode  ;

//     currentNode.size = left.size + right.size + 1 ;
//     currentNode.maxi = max(root -> data, right.maxi) ;
//     currentNode.mini = min(root -> data, left.mini) ;

//     if(left.isBST && right.isBST && (root -> data > left.maxi && root -> data < right.mini)) {
//         currentNode.isBST = true ;
//     }
//    else{
//         currentNode.isBST = false ;
//    }

//    //answer update
//    if(currentNode.isBST) {
//       ans = max(ans, currentNode.size) ;
//    }

//    return currentNode ;
// }

// //main function
// int largestBST(Node* root) {

//     int maxSize = 0 ;
//     info temp = solve(root, maxSize) ;
//     return maxSize;
// }

//🔴Time complexity: O(N)
// 🔴space complexity: O(H)
