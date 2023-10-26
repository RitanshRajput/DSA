

//                  //❓Question: Level Order traversal

// Given a binary tree, find its level order traversal.
// Level order traversal of a tree is breadth-first traversal for the tree.

// Example 1:
// Input:
//     1
//   /   \ 
//  3     2
// Output:1 3 2

// Example 2:
// Input:
//         10
//      /      \
//     20       30
//   /   \
//  40   60
// Output:10 20 30 40 60

// Your Task:
// You don't have to take any input. Complete the function levelOrder() that takes the root node as input parameter and returns a list of integers containing the level order traversal of the given Binary Tree.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 105


//🔴 Approach ; 
// vector<int> levelOrder(Node* node)
//     {
//         queue<Node* > que;
//         que.push(node);
//         vector<int> ans ;
        
//         while(!que.empty()) {
//             Node* temp = que.front() ;
//             que.pop() ;
//             ans.push_back(temp->data);
            
//             if(temp->left) {                       // First left and then right for LOT
//                 que.push(temp->left) ;
//             }
//             if(temp->right) {
//                 que.push(temp->right) ;
//             }
//         }
        
//         return ans ;
//     }
//🔸time complexitY: O(N)
//🔸space complexity: O(N)



//                      //❓Question: Reverse Level Order traversal

// Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

// Example 1:
// Input :
//         1
//       /   \ 
//      3     2

// Output: 3 2 1
// Explanation:
// Traversing level 1 : 3 2
// Traversing level 0 : 1

// Example 2:
// Input :
//        10
//       /  \ 
//      20   30
//     / \ 
//    40  60

// Output: 40 60 20 30 10
// Explanation:
// Traversing level 2 : 40 60
// Traversing level 1 : 20 30
// Traversing level 0 : 10

// Your Task: 
// You dont need to read input or print anything. Complete the function reverseLevelOrder() which takes the root of the tree as input parameter and returns a list containing the reverse level order traversal of the given tree.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 ≤ N ≤ 10^4


//🔴appraoch : 
// vector<int> reverseLevelOrder(Node *root)
// {
//         queue<Node* > que;
//         que.push(root);
//         vector<int> ans ;
        
//         while(!que.empty()) {
//             Node* temp = que.front() ;
//             que.pop() ;
//             ans.push_back(temp->data) ;
            
//             if(temp->right) {                     // First Right then Left for (reverse LOT)
//                 que.push(temp->right) ;
//             }
            
//             if(temp->left) {
//                 que.push(temp->left) ;
//             }
//         }
        
//        reverse(ans.begin(), ans.end());
        
//         return ans ;
// }
//🔸time complexity: O(2N)
//🔸space complexity: O(N)



//                      //❓ Question: Height Of Binary Tree

// Given a binary tree, find its height.

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
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0. 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Data of a node <= 109

//🔴appraoch : 
//  int inorder(struct Node* node) {
//         if(node == NULL){
//             return 0;
//         }
        
//         int left = 1 + inorder(node->left) ;
//         int right = 1 + inorder(node->right) ;
        
//         return max(left, right) ;
//     }
//     //Function to find the height of a binary tree.
//     int height(struct Node* node){
//         return inorder(node) ;
//     }  

//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                      //❓Question: Diameter of Tree

// The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes.
// The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded
// (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 



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

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 <= Number of nodes <= 10000
// 1 <= Data of a node <= 1000

//🔴approach : (TLE )
// class Solution {
//  private :
//    int height(Node* root) {
//        //base case
//        if(root == NULL){
//            return 0;
//        }
       
//        int left = height(root -> left) ;
//        int right = height(root -> right) ;
       
//        int ans = max(left, right) + 1 ;  //+1 for root node
//        return ans ;
//    }
//   public:
//     // Function to return the diameter of a Binary Tree.
//     int diameter(Node* root) {
//         //base case
//         if(root == NULL){
//             return 0;
//         }
        
//         int option1 = diameter(root -> left) ;
//         int option2 = diameter(root -> right) ;
//         int option3 = height(root -> left) + 1 + height(root -> right) ; //+1 for root node
        
//         int ans = max(option1, max(option2, option3)) ;
//         return ans ;
//     }
// };
//🔸time complexitY: O(right + left + right+1+left)
//🔸space complexity: O(N)


//🔴appraoch : Optimised 
// class Solution {
// public: 
//     pair<int,int> diameterFast(Node* root) {
//         //base case 
//         if(root == NULL){
//              pair<int,int> p = make_pair(0,0) ;
//              return p ;
//         }
         
        
//         pair<int, int> left = diameterFast(root -> left) ;
//         pair<int, int> right = diameterFast(root -> right) ;
        
//         int op1 = left.first ;
//         int op2 = right.first ;
//         int op3 = left.second + right.second + 1 ;
        
//         pair<int,int> ans ;
        
//         ans.first = max(op1, max(op2,op3)) ;
//         ans.second = max(left.second, right.second) +1 ;
        
//         return ans ;
//     }
    
//     int diameter(Node* root) {
//         return diameterFast(root).first ;
//     }
// };
//🔸time complexity:  O(right + left)
//🔸space complexitY: O(N)



//                  //❓Question: Mirror Tree

// Given a Binary Tree, convert it into its mirror.            

// Example 1:
// Input:
//       1
//     /  \
//    2    3
// Output: 3 1 2
// Explanation: The tree is
//    1    (mirror)  1
//  /  \    =>      /  \
// 2    3          3    2
// The inorder of mirror is 3 1 2
// Example 2:

// Input:
//       10
//      /  \
//     20   30
//    /  \
//   40  60
// Output: 30 10 60 20 40
// Explanation: The tree is
//       10               10
//     /    \  (mirror) /    \
//    20    30    =>   30    20
//   /  \                   /   \
//  40  60                 60   40
// The inroder traversal of mirror is
// 30 10 60 20 40.
// Your Task:
// Just complete the function mirror() that takes node as paramter  and convert it into its mirror. The printing is done by the driver code only.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 105


//🔴appraoch : 
// class Solution {
//   public:
    
//     void mirror(Node* node) {
//         if(node == NULL){
//             return;
//         }
        
//         Node* temp = node->left;
//         node->left = node->right;
//         node->right = temp;
        
//         mirror(node->left);
//         mirror(node->right);
//     }
// };
//🔸Time complexity: O(N)
//🔸space complexity: O(height of tree)



//              //❓Question: Inorder traversal both Recursive and iterative


//🔴Recursion approach : 
// #include <iostream>
// using namespace std;

// void inorder(Node* root)
// {
//     // return if the current node is empty
//     if (root == nullptr) {
//         return;
//     }
 
//     // Traverse the left subtree
//     inorder(root->left);
 
//     // Display the data part of the root (or current node)
//     cout << root->data << " ";
 
//     // Traverse the right subtree
//     inorder(root->right);
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)



//🔴Iterative appraoch : 
// void inorderIterative(Node* root)
// {
//     // create an empty stack
//     stack<Node*> stack;
 
//     // start from the root node (set current node to the root node)
//     Node* curr = root;
 
//     // if the current node is null and the stack is also empty, we are done
//     while (!stack.empty() || curr != nullptr)
//     {
//         // if the current node exists, push it into the stack (defer it)
//         // and move to its left child
//         if (curr != nullptr)
//         {
//             stack.push(curr);
//             curr = curr->left;
//         }
//         else {
//             // otherwise, if the current node is null, pop an element from the stack,
//             // print it, and finally set the current node to its right child
//             curr = stack.top();
//             stack.pop();
//             cout << curr->data << " ";
 
//             curr = curr->right;
//         }
//     }
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)



//                  //❓Question: Preorder Traversal Recursion and iterative


//🔴Recursive appraoch :
// void preorder(Node* root)
// {
//     // if the current node is empty
//     if (root == nullptr) {
//         return;
//     }
 
//     // Display the data part of the root (or current node)
//     cout << root->data << " ";
 
//     // Traverse the left subtree
//     preorder(root->left);
 
//     // Traverse the right subtree
//     preorder(root->right);
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)



//🔴Iterative appraoch : 
// void preorderIterative(Node* root)
// {
//     // return if the tree is empty
//     if (root == nullptr)
//     return;
 
//     // create an empty stack and push the root node
//     stack<Node*> stack;
//     stack.push(root);
 
//     // loop till stack is empty
//     while (!stack.empty())
//     {
//         // pop a node from the stack and print it
//         Node* curr = stack.top();
//         stack.pop();
 
//         cout << curr->data << " ";
 
//         // push the right child of the popped node into the stack
//         if (curr->right) {
//             stack.push(curr->right);
//         }
 
//         // push the left child of the popped node into the stack
//         if (curr->left) {
//             stack.push(curr->left);
//         }
 
//         // the right child must be pushed first so that the left child
//         // is processed first (LIFO order)
//     }
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)



//                  //❓Question: Postorder Traversal Recursive and Iterative

//🔴Recursive approach : 
// void postorder(Node* root)
// {
//     // if the current node is empty
//     if (root == nullptr) {
//         return;
//     }
 
//     // Traverse the left subtree
//     postorder(root->left);
 
//     // Traverse the right subtree
//     postorder(root->right);
 
//     // Display the data part of the root (or current node)
//     cout << root->data << " ";
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)


//🔴 Iterative appraoch : 
// void postorderIterative(Node* root)
// {
//     // return if the tree is empty
//     if (root == nullptr) {
//         return;
//     }
 
//     // create an empty stack and push the root node
//     stack<Node*> s;
//     s.push(root);
 
//     // create another stack to store postorder traversal
//     stack<int> out;
 
//     // loop till stack is empty
//     while (!s.empty())
//     {
//         // pop a node from the stack and push the data into the output stack
//         Node* curr = s.top();
//         s.pop();
 
//         out.push(curr->data);
 
//         // push the left and right child of the popped node into the stack
//         if (curr->left) {
//             s.push(curr->left);
//         }
 
//         if (curr->right) {
//             s.push(curr->right);
//         }
//     }
 
//     // print postorder traversal
//     while (!out.empty())
//     {
//         cout << out.top() << " ";
//         out.pop();
//     }
// }
//🔸 time compelxitY: O(N)
//🔸space complexitY: O(N)

