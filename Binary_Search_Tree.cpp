
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

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data ;
    Node* left ;
    Node* right ;

    Node(int d) {
        this -> data = d ;
        this -> left = NULL ;
        this -> right = NULL ;
    }
} ;

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

