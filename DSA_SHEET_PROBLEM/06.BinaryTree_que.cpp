

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
//         int option3 = height(root -> left) + 1 + height(root -> right) ;     //+1 for root node
        
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
//         // if the current node exists, push it into the stack (defer it) and move to its left child
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



//                      //❓Question : Left View Of Binary tree


// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. 
// The task is to complete the function leftView(), which accepts root of the tree as argument.

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

// Output: 10 20 40
// Your Task:
// You just have to complete the function leftView() that returns an array containing the nodes that are in the left view. The newline is automatically appended by the driver code.
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 0 <= Number of nodes <= 100
// 1 <= Data of a node <= 1000


//🔴appraoch : Recursive 

// void solve(vector<int> &ans, Node* root, int level){
//     if(root==NULL){
//         return;
//     }
    
//     if(level == ans.size()) {
//         ans.push_back(root->data) ;
//     }
//     solve(ans, root->left, level+1) ;
//     solve(ans, root->right, level+1) ;
// }


// vector<int> leftView(Node *root)
// {
//     vector<int> ans; 
//     solve(ans, root, 0);
//     return ans;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(left height of tree)


//🔴appraoch : Iterative 

// vector<int> leftView(Node *root) {
    
//    vector<int>ans;
   
//    if(!root) return ans;
    
//     queue<Node*>q;
//     q.push(root);
    
//     while(!q.empty()) {
        
//         int n = q.size();
        
//         for(int i = 0; i<n; i++) {
//             Node* curr = q.front();
//             q.pop();
            
//             if(i == 0)  ans.push_back(curr->data);
            
//             if(curr->left ) q.push(curr->left);
//             if(curr->right) q.push(curr->right);
//         }
        
//     }
//     return ans;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(left height of tree)



//                          //❓Question: Right view of Tree

// Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

// Right view of following tree is 1 3 7 8.
//           1
//        /     \
//      2        3
//    /   \      /    \
//   4     5   6    7
//     \
//      8

// Example 1:
// Input:
//        1
//     /    \
//    3      2
// Output: 1 2

// Example 2:
// Input:
//      10
//     /   \
//   20     30
//  /   \
// 40  60 
// Output: 10 30 60

// Your Task:
// Just complete the function rightView() that takes node as parameter and returns the right view as a list. 

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 0 ≤ Data of a node ≤ 105

//🔴approach :  Recursive

//  void solve(vector<int> &ans, Node* root, int level) {
        
//         if(root == NULL)  return;
        
//         if(level == ans.size()) {
//             ans.push_back(root->data) ;
//         }
        
//         solve(ans, root->right, level+1) ;
//         solve(ans, root->left, level+1) ;
//     }
//     //Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//        vector<int> ans;
//        solve(ans, root, 0);
//        return ans;
//     }
//🔸time complexity: O(n)
//🔸space complexity: O(right height of tree)


//🔴appraoch : Iterative
// vector<int> rightView(Node *root)
// {
//     vector<int> ans;
//     if (!root)
//         return ans;

//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty()) {
//         int n = q.size();
//         for (int i = 0; i < n; i++) {
//             Node *curr = q.front();
//             q.pop();

//             if (i == 0) ans.push_back(curr->data);

//             if (curr->right) q.push(curr->right);
//             if (curr->left ) q.push(curr->left );
//         }
//     }
//     return ans;
// }
//🔸time complexity: O(N)
//🔸space complexiy: O(height of right tree)



//                  //❓Question: Top View of tree

// Given below is a binary tree. The task is to print the top view of binary tree. 
// Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. F
// or the given below tree

//        1
//     /     \
//    2       3
//   /  \    /   \
// 4    5  6       7

// Top view will be: 4 2 1 3 7
// Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the extreme ones only(i.e. leftmost and rightmost). 
// For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

// Example 1:
// Input:
//       1
//    /    \
//   2      3
// Output: 2 1 3

// Example 2:
// Input:
//        10
//     /      \
//   20        30
//  /   \    /    \
// 40   60  90    100
// Output: 40 20 10 30 100

// Your Task:
// Since this is a function problem. You don't have to take input. Just complete the function topView() that 
// takes root node as parameter and returns a list of nodes visible from the top view from left to right.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Node Data ≤ 105


//🔴Approach : 
// vector<int> topView(Node *root) {
//         //Your code here
//          vector<int> ans;
         
//         if(root == NULL) return ans;
        
//         map<int,int> topNode;
//         queue<pair<Node*,int>> q;
//         q.push(make_pair(root,0));
        
//         while(!q.empty()) {
//             pair<Node*, int> temp = q.front();
//             q.pop();
            
//             Node* frontNode = temp.first;
//             int hd = temp.second;
            
//             if(topNode.find(hd) == topNode.end()){
//                 topNode[hd] = frontNode->data;
//             }
            
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left,hd-1));
//             }
            
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right,hd+1));
//             }
//         }
        
//         for(auto i : topNode){
//             ans.push_back(i.second);
//         }
        
//         return ans;
//     }
//🔸time complexity : O(N)
//🔸space complexity : O(2N)



//                       //❓Question: Bottom View of Binary Tree

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
// If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal. For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

//                       20
//                     /    \
//                   8       22
//                 /   \     /   \
//               5      3  4     25
//                     /    \      
//                  10       14

// For the above tree the output should be 5 10 4 14 25.

// Note: The Input/Output format and Example given are used for the system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.

// Example 1:
// Input:
//        1
//      /   \
//     3     2
// Output: 3 1 2
// Explanation:
// First case represents a tree with 3 nodes
// and 2 edges where root is 1, left child of
// 1 is 3 and right child of 1 is 2.
// Thus nodes of the binary tree will be printed as such 3 1 2.

// Example 2:
// Input:
//          10
//        /    \
//       20    30
//      /  \
//     40   60
// Output: 40 20 60 30
// Your Task:
// This is a functional problem, you don't need to care about input, just complete the function bottomView() which takes the root node of the tree as input and returns an array containing the bottom view of the given tree.

// Expected Time Complexity: O(N*logN).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Data of a node <= 105


//🔴appraoch : 
//  vector <int> bottomView(Node *root) {
        
//         vector<int> ans;
         
//         if(root == NULL) return ans;
        
//         map<int,int> topNode;
//         queue<pair<Node*,int>> q;
//         q.push(make_pair(root,0));
        
        
//         while(!q.empty()) {
//             pair<Node*, int> temp = q.front();
//             q.pop();
            
//             Node* frontNode = temp.first;
//             int hd = temp.second;
            
//             topNode[hd] = frontNode->data;
            
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left,hd-1));
//             }
            
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right,hd+1));
//             }
//         }
        
//         for(auto i : topNode){
//             ans.push_back(i.second);
//         }
        
//         return ans;
//     }
//🔸Time complexity : O(N * logN)
//🔸space complexity : O(N)



//                      //❓Question: ZigZag Traversal

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

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function zigZagTraversal() 
// which takes the root node of the Binary Tree as its input and returns a list containing the node values 
// as they appear in the Zig-Zag Level-Order Traversal of the Tree.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 104

//🔴appraoch : 
// int so(Node* &root ,vector<int> &v,vector<int> &ans)
//     {
//         queue<Node*> q;
//         q.push(root);
//         q.push(NULL);
//         int i=0;
//         while(!q.empty())
//         {
//             Node* t = q.front();
//             q.pop();
//             if(t==NULL) {
//                 if(i==0) {
//                      for(int i:v) {
//                         ans.push_back(i);
//                     }
//                     v.clear();
//                     i=1;
//                  }
//                  else {
//                     reverse(v.begin(),v.end());
//                     for(int i:v) {
//                         ans.push_back(i);
//                     }
//                     v.clear();
//                     i=0;
//                 }

//                 if(!q.empty()) {
//                     q.push(NULL);
//                 }
//            }
//             else
//             {
//                 v.push_back(t->data);
//                 if(t->left!=NULL) {
//                     q.push(t->left);
//                 }
//                 if(t->right!=NULL) {
//                     q.push(t->right);
//                 }
//             }
//         }
//         return 1;

//     }
//     vector<int> zigZagTraversal(Node* root) {
//         if(root==NULL)
//         {
//             return {};
//         }
//         vector<int> v;
//         vector<int> ans;
//         so(root,v,ans);
//         return ans;
//     }
//🔸time complexity : O(N)
//🔸space complexity: O(N)



//                    //❓Question: check for Balanced Tree or Not

// Given a binary tree, find if it is height balanced or not. 
// A tree is height balanced if difference between heights of 
// left and right subtrees is not more than one for all nodes of tree. 

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
// Your Task:
// You don't need to take input. Just complete the function isBalanced() that takes root node as parameter and returns true, if the tree is balanced else returns false.

// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Data of a node <= 109

// Expected time complexity: O(N)
// Expected auxiliary space: O(h) , where h = height of tree

//🔴approach :
//   int solve(Node* root,bool& ans)
//     {
//         if(root == NULL)
//         {
//             return 0;
//         }
        
//         int left = solve(root->left,ans);
//         int right = solve(root->right,ans);
        
//         int diff = left - right;
//         if(abs(diff)>1)
//         {
//             ans = false;
//         }
//         return 1+max(left,right);
//     }
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         bool ans = true;
//         solve(root,ans);
        
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(height of tree)



//                      //❓Question: Diagonal traversal of Binary treee

// Given a Binary Tree, print the diagonal traversal of the binary tree.
// Consider lines of slope -1 passing between nodes. Given a Binary Tree, 
// print all diagonal elements in a binary tree belonging to same line.
// If the diagonal element are present in two different subtress then left 
// subtree diagonal element should be taken first and then right subtree. 

// Example 1:
// Input :
//             8
//          /    \
//         3      10
//       /   \      \
//      1     6      14
//          /   \   /
//         4     7 13
// Output : 8 10 14 3 6 7 13 1 4
// Explanation:
// unnamed
// Diagonal Traversal of binary tree : 
//  8 10 14 3 6 7 13 1 4

// Your Task:
// You don't need to read input or print anything. The task is to complete the function diagonal() that takes the root node as input argumets and returns the diagonal traversal of the given tree.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
// Here N is number of nodes.

// Constraints:
// 1 <= Number of nodes<= 105
// 1 <= Data of a node<= 105

//🔴appraoch :
// vector<int> diagonal(Node *root)
// {
//     vector<int> result ;
//     queue<Node*> q;
//     Node* curr = root ;
    
//     while(curr) {
//         result.push_back(curr->data) ;
//         if(curr->left) {
//             q.push(curr->left) ;
//         }
         
//         curr = curr->right ;
//     }
    
//     while(!q.empty()) {
//         curr = q.front() ;
//         q.pop() ;
        
//         while(curr) {
//             result.push_back(curr->data) ;
//             if(curr->left) {
//                 q.push(curr->left) ;
//             }
            
//             curr = curr->right ;
//         }
//     }
    
//     return result ;
// }
//🔸time complexity  : O(N)                  // N = height of tree
//🔸space complexity : o(height of tree)



//                     //❓Question : Boundary Traversal of a Binary tree

// Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

// Left boundary nodes: defined as the path from the root to the left-most node ie- 
//      the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
// Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
// Reverse right boundary nodes: defined as the path from the right-most node to the root. 
//      The right-most node is the leaf node you could reach when you always travel preferring the right 
//      subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
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
// Explanation:

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
// Explanation:

// As you can see we have not taken the right subtree. 
// Your Task:
// This is a function problem. You don't have to take input. Just complete the function boundary() 
// sthat takes the root node as input and returns an array containing the boundary values in anti-clockwise.

// Expected Time Complexity: O(N). 
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 105

//🔴appoarch : 
//      //Left Side 
//     vector<int> left(Node* root, vector<int>& ans) {
//         if(root==NULL || (root->left==NULL && root->right ==NULL)){
//             return ans ;
//         }
        
//         ans.push_back(root->data) ;
        
//         if(root->left) {
//             left(root->left, ans) ;
//         }
//         else{
//             left(root->right, ans) ;
//         }
        
//         return ans ;
//     }

//     //Leaf Nodes
//     vector<int> leaf(Node* root, vector<int>& ans) {
//         if(root==NULL) return ans ;
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data) ;
//         }
        
//         leaf(root->left, ans) ;
//         leaf(root->right, ans) ;
        
//         return ans ;
//     }
    
//     // RIght side 
//     vector<int> right(Node* root, vector<int>& ans) {
//         if(root== NULL || (root->left==NULL && root->right== NULL))    {
//             return ans ;
//         }
        
//         if(root->right) {
//             right(root->right, ans);
//         }
//         else{
//             right(root->left, ans);
//         }
        
//         ans.push_back(root->data) ;
//         return ans ;
//     }
    
//     //Main Function 
//     vector <int> boundary(Node *root)
//     {   
//         if(root == NULL) return {} ;
//         if(root->left == NULL && root->right == NULL) {
//             return {root->data} ;
//         }
        
//         vector<int> ans ;  
//         ans.push_back(root->data) ;
        
//         if(root->left) left(root->left, ans) ;
//         leaf(root, ans) ;
//         if(root->right) right(root->right, ans) ;

//         return ans ;
//     }
//🔸time complexity  : O(height of tree)
//🔸space complexity : O(border of tree)



//                  //❓Question: Construct Binary Tree from String with bracket representation

// Construct a binary tree from a string consisting of parenthesis and integers. 
// The whole input represents a binary tree. It contains an integer followed by zero, 
// one or two pairs of parenthesis. The integer represents the roots value and a pair 
// of parenthesis contains a child binary tree with the same structure. 
// Always start to construct the left child node of the parent first if it exists. 
// The integer values will be less than or equal to 10^5.

// Example 1:
// Input: "1(2)(3)" 
// Output: 2 1 3
// Explanation:
//            1
//           / \
//          2   3
// Explanation: first pair of parenthesis contains 
// left subtree and second one contains the right 
// subtree. Inorder of above tree is "2 1 3".

// Example 2:
// Input: "4(2(3)(1))(6(5))"
// Output: 3 2 1 4 5 6
// Explanation:
//            4
//          /   \
//         2     6
//        / \   / 
//       3   1 5   
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function treeFromString()
// which takes a string str as input parameter and returns the root node of the tree.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= |str| <= 105


//🔴approach :
// class Solution{
//     Node* helper(string &s,int start,int end ) {
//         if(start>end){
//             return NULL;
//         }
//         int num = 0;
//         int i = start;
        
//         while(i<=end && s[i]>='0' && s[i]<='9'){
//             num=(10*num)+s[i]-'0';
//             i++;
//         }
        
//         Node* root= new Node(num);
//         if(i>=end){
//             return root;
//         }
        
//         int nextstartindex = i+1;
        
//         //we want the balanced part because it will serve as a subtree
//         stack<char>st;
//         st.push(s[i++]);
        
//         while(!st.empty()){
//             if(s[i]=='('){
//                 st.push('(');
//             }
//             else { 
//              if(s[i]==')'){
//                 if(st.top()=='('){
//                     st.pop();
//                 }
//               }
//             }
//             i++; 
//         }
//         //now we got the left and rigt subtrree
//         root->left=helper(s,nextstartindex,i-2);
//         root->right=helper(s,i+1,end-1);
//         return root; 
//     }
    
// public:
//     // function to construct tree from string
//     Node *treeFromString(string str){
//         return helper(str,0,str.size()-1);
//     }
// };
//🔸time complexity : O(str.length + stack.size + height of tree)
//🔸space complexitY: O(height of tree)


//🔴Appraoch : easy to understand
//  Node* solver(string s, int start, int end) {
//      if(start > end) return NULL;
     
//      int i = start;
//      while(i<=end && s[i]>='0' && s[i]<='9') {
//          i++;
//      }
     
//      string front = s.substr(start, i-start);
//      int num = stoi(front);
//      Node* curr = new Node(num);
//      if(i>=end) return curr;
     
//      int pos = i, o = 0, c = 0;
//      do{
//          if(s[pos]=='(') o++; // 1
//          if(s[pos]==')') c++; // 0
//          pos++;
//      } while(o!=c);
     
//      curr->left = solver(s, i+1, pos-2);
//      curr->right = solver(s, pos+1, end-1);
//      return curr;
//  }
//  Node *treeFromString(string str){
//      int n = str.length();
//      return solver(str, 0, n-1);
//  }
//🔸time complexity : O(str.length)
//🔸space complexity : O(N)



//                  //❓Question: Binary tree to Doubly Linked list

// Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. 
// The left and right pointers in nodes are to be used as previous and next pointers respectively
// in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. 
// The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.
// Note: H is the height of the tree and this space is used implicitly for the recursion stack.
 
// Example 1:
// Input:
//       1
//     /  \
//    3    2
// Output:
// 3 1 2 
// 2 1 3 
// Explanation: DLL would be 3<=>1<=>2

// Example 2:
// Input:
//        10
//       /   \
//      20   30
//    /   \
//   40   60
// Output:
// 40 20 60 10 30 
// 30 10 60 20 40
// Explanation:  DLL would be 
// 40<=>20<=>60<=>10<=>30.

// Your Task:
// You don't have to take input. Complete the function bToDLL() that takes root node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(H).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 0 ≤ Data of a node ≤ 105

//🔴appraoch :
// class Solution {
//  public :
//     void inorder(Node* root, vector<int>& arr){
//         if(root == NULL){
//             return ;
//         }
        
//         inorder(root->left, arr);
//         arr.push_back(root->data);
//         inorder(root->right, arr);
//     }
 
//     Node* bToDLL(Node *root) {
//       if(root == NULL) return root;
//       vector<int> arr; 
//       inorder(root, arr);
      
//       Node* head = new Node(arr[0]) ;
//       Node* curr = head;
      
//       for(int i=1; i<arr.size(); i++) {
//          Node* temp = new Node(arr[i]) ;
//          curr->right = temp;
//          temp->left = curr;
//          curr = curr->right;
//       }
      
//       return head;
//     }
// };
//🔸time complexity : O(N)
//🔸space complexity: O(length of DLL)



//                  //❓Question: Transform to sum tree

// Given a Binary Tree of size N , where each node can have positive or negative values. 
// Convert this to a tree where each node contains the sum of the left and right sub trees 
// of the original tree. The values of leaf nodes are changed to 0.

// Example 1:
// Input:
//              10
//           /      \
//         -2        6
//        /   \     /  \
//      8     -4   7    5

// Output:
//             20
//           /    \
//         4        12
//        /  \     /  \
//      0     0   0    0

// Explanation:

//            (4-2+12+6)
//           /           \
//       (8-4)          (7+5)
//        /   \         /  \
//       0     0       0    0
 
// Your Task:  
// You dont need to read input or print anything. Complete the function toSumTree() which takes root node as input parameter and modifies the given tree in-place.

// Note: If you click on Compile and Test the output will be the in-order traversal of the modified tree.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(height of tree)
 
// Constraints:
// 1 ≤ N ≤ 104

//🔴appraoch :
// class Solution {
//   public:
//     int solve(Node* root) {
//         if(root==NULL) return 0;
        
//         int left = solve(root->left);
//         int right = solve(root->right);
        
//         int nodeData = root->data;
//         root->data = left+right;
        
//         return nodeData + left + right;
//     }
    
//     void toSumTree(Node *node)
//     {
//        solve(node);
//        return;
//     }
// };
//🔸time complexity : O(N)
//🔸space complexity: O(H)



//                  //❓Question: Count Nodes Equal to Average of Subtree

// Given the root of a binary tree, return the number of nodes where the value of the node is equal 
// to the average of the values in its subtree.

// Note:
// The average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
// A subtree of root is a tree consisting of root and all of its descendants.
 
// Example 1:
// Input: root = [4,8,5,0,1,null,6]
// Output: 5
// Explanation: 
// For the node with value 4: The average of its subtree is (4 + 8 + 5 + 0 + 1 + 6) / 6 = 24 / 6 = 4.
// For the node with value 5: The average of its subtree is (5 + 6) / 2 = 11 / 2 = 5.
// For the node with value 0: The average of its subtree is 0 / 1 = 0.
// For the node with value 1: The average of its subtree is 1 / 1 = 1.
// For the node with value 6: The average of its subtree is 6 / 1 = 6.

// Example 2:
// Input: root = [1]
// Output: 1
// Explanation: For the node with value 1: The average of its subtree is 1 / 1 = 1.

// Constraints:
// The number of nodes in the tree is in the range [1, 1000].
// 0 <= Node.val <= 1000


//🔴approach : 
// class Solution {
//     int result = 0;

// public:
//     int averageOfSubtree(TreeNode* root) {
//         postorder(root);
//         return result;
//     }

//     pair<int, int> postorder(TreeNode* node) {
//         if (!node) {
//             return {0, 0}; // sum, number of nodes
//         }

//         auto left = postorder(node->left);
//         auto right = postorder(node->right);

//         int totalSum = left.first + right.first + node->val;
//         int totalCount = 1 + left.second + right.second;
//         result += (node->val == totalSum / totalCount);

//         return {totalSum, totalCount};
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                    //❓ Construct Tree from Inorder & Preorder

// Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. 
// Construct a tree and print the Postorder traversal. 

// Example 1:
// Input:
// N = 4
// inorder[] = {1 6 8 7}
// preorder[] = {1 6 7 8}
// Output: 8 7 6 1

// Example 2:
// Input:
// N = 6
// inorder[] = {3 1 4 0 5 2}
// preorder[] = {0 1 3 4 2 5}
// Output: 3 4 1 5 2 0
// Explanation: The tree will look like
//        0
//     /     \
//    1       2
//  /   \    /
// 3    4   5

// Your Task:
// Your task is to complete the function buildTree() which takes 3 arguments(inorder traversal array, preorder traversal array, and size of tree n) and returns the root node to the tree constructed. You are not required to print anything and a new line is added automatically (The post order of the returned tree is printed by the driver's code.)

// Expected Time Complexity: O(N*N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1<=Number of Nodes<=1000


//🔴approach : 
//   int preorderIndex = 0;
    
//     Node* preTree(int inorder[], int preorder[], int inorderStart, int inorderEnd)
//     {
//         if(inorderStart > inorderEnd) {
//             return NULL;
//         }
        
//         Node* root = new Node(preorder[preorderIndex]);
//         preorderIndex++ ;
        
//         int inorderIndex;
//         for(int i=inorderStart; i<=inorderEnd; i++){
//             if(inorder[i] == root->data){
//                 inorderIndex =i;
//                 break;
//             }
//         }
        
//         root->left  = preTree(inorder, preorder, inorderStart, inorderIndex-1);
//         root->right = preTree(inorder, preorder, inorderIndex+1, inorderEnd) ;
        
//         return root;
//     }
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         return preTree(in, pre, 0, n-1);
//     }
//🔸Time complexity: O(N*N)
//🔸space complexity: O(n)




//                  //❓Question: Minimum swap required to convert binary tree to binary search tree

// Given an array A[] which represents a Complete Binary Tree i.e, if index i is the parent, 
// index 2*i + 1 is the left child and index 2*i + 2 is the right child.
// The task is to find the minimum number of swaps required to convert it into a Binary Search Tree. 

// Example 1:
// Input:
// A[] = { 5, 6, 7, 8, 9, 10, 11 }
// Output: 3
// Explanation: 
// Binary tree of the given array:
// Swap 1: Swap node 8 with node 5.
// Swap 2: Swap node 9 with node 10.
// Swap 3: Swap node 10 with node 7.
// So, minimum 3 swaps are required.

// Example 2:
// Input: 
// A[] = {1, 2, 3}
// Output: 1
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function minSwaps() which takes an array A[] and returns an integer as output.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105

//🔴approach :
//   vector <int> in;

//     void inorder(vector <int> &a,int i){
//         if(i >= a.size()) return;
//         inorder(a,2*i+1);
//         in.push_back(a[i]);
//         inorder(a,2*i+2);
//     }
    
//     int minSwaps(vector<int>&a, int n){
//         inorder(a,0);
//         vector <pair<int,int>> v;
        
//         for(int i = 0;i < n;i++) v.push_back({in[i],i});
        
//         sort(v.begin(),v.end());
//         int ans = 0;
        
//         for(int i = 0;i < n;i++){
//             if(i != v[i].second){
//                 swap(v[i],v[v[i].second]);
//                 i--; ans++;
//             }
//         }
//     return ans;
//    }
//🔸time complexity : O(N*logn)
//🔸space complexity: O(N + 2N)




//                      //❓Question: SUM treee

// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, 
// its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.
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

// Your Task: 
// You don't need to read input or print anything. Complete the function isSumTree() which takes root node as input parameter and returns true if the tree is a SumTree else it returns false.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(Height of the Tree)

// Constraints:
// 1 ≤ number of nodes ≤ 104


//🔴approach : 
// class Solution
// {
//     public:
//     int sum(Node* root){
//         if(root==NULL) return 0;
        
//         return root->data + sum(root->left) + sum(root->right);
//     }
    
//     bool isSumTree(Node* root) {
//        if(root == NULL) return true;
//        if(root->left==NULL && root->right== NULL) return true ;
       
//     return ( (root->data==sum(root->left)+sum(root->right)) 
//             && (isSumTree(root->left)) 
//             && (isSumTree(root->right)));
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity: O(height of tree)



//                      //❓Question: Leaf at same level

// Given a Binary Tree, check if all leaves are at same level or not.

// Example 1:
// Input: 
//             1
//           /   \
//          2     3

// Output: 1
// Explanation: Leaves 2 and 3 are at same level.

// Example 2:
// Input:
//             10
//           /    \
//         20      30
//        /  \        
//      10    15

// Output: 0
// Explanation: Leaves 10, 15 and 30 are not at same level.

// Your Task: 
// You dont need to read input or print anything. Complete the function check() which takes root node as input parameter and returns true/false depending on whether all the leaf nodes are at the same level or not.
 
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(height of tree)
 
// Constraints:
// 1 ≤ N ≤ 10^3

//🔴appraoch : 
// class Solution{
//   public:

//    int temp=-1;
   
//    void fun(Node* root, int h,int &val)
//    {
//       if(root==NULL) return;
       
//        if(root->left==NULL&&root->right==NULL){
//            if(temp==-1){
//                temp=h;
//            }else{
//                if(h!=temp){
//                    val=0;
//                }
//            }
//             return;
//        }
//        if(root->left)
//        fun(root->left,h+1,val);
//        if(root->right)
//        fun(root->right,h+1,val);
       
//    }
//     bool check(Node *root)
//     {
//         if(root==NULL) return 1;

//        int val=1;
//        fun(root,0,val);
//        return val;
//     }
// };
//🔸time complexity:  O(N)
//🔸space complexity: O(1)

//🔴appraoch : 
//   queue<Node*> q;
//          q.push(root);
         
//         int level = 0;
//         int leafLevel = -1;
        
//         while(!q.empty()){
//             int n = q.size();
//             level++;
            
//             for(int i=0; i<n; ++i){
            
//             Node* current = q.front();
//             q.pop();
            
//             if(!current->left && !current->right){
//                 if(leafLevel == -1){
//                     leafLevel = level;
//                 }else if(level != leafLevel){
//                      return false;
//                 }
//             }
            
//             if(current->left){
//                 q.push(current->left);
//             }
//             if(current->right){
//                 q.push(current->right);
//             }
            
//             }
//         }
//          return true;
//🔸time complexity:  O(N)
//🔸space complexity: O(N)


//                  //❓ Question: Duplicate subtree in Binary Tree

// Given a binary tree, find out whether it contains a duplicate sub-tree of size two or more, or not.
// Note: Two same leaf nodes are not considered as subtree as size of a leaf node is one. 

// Example 1 :
// Input : 
//                1
//              /   \ 
//            2       3
//          /   \       \    
//         4     5       2     
//                      /  \    
//                     4    5
// Output : 1
// Explanation : 
//     2     
//   /   \    
//  4     5
// is the duplicate sub-tree.


// Example 2 :
// Input : 
//                1
//              /   \ 
//            2       3
// Output: 0
// Explanation: There is no duplicate sub-tree 
// in the given binary tree.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function dupSub() which takes root of the tree as the only argument and returns 1 if the binary tree contains a duplicate sub-tree of size two or more, else 0.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)

// Constraints:
// 0 ≤ Data of nodes ≤ 9
// 1 ≤ Number of nodes ≤ 105 

//🔴approach : 
// unordered_map<string, int>mp;
   
//  string solve(Node* root, Node *parent){
//         if(!root) return "$";
//         string s="";
//         if(!root->right and !root->left){
//             if(root == parent->right && parent->left) s += '/'; 
//             s+=to_string(root->data);
//             return s;
//         }
//         s+=to_string(root->data);
//         s+='/';
//         s+=solve(root->left, root);
//         s+=solve(root->right, root);
//         //cout << s << " ";
//         mp[s]++;
//         return s;
//     }
//     int dupSub(Node *root) {
//          solve(root,NULL);
//         for(auto it:mp)
//         if(it.second>=2) return true;
//         return false;
//     }

//🔸time complexity:  O(height of tree)
//🔸space complexity: O(N)


//                      //❓QUestion: Check Mirror in N-Ary Tree

// Given two n-ary trees. Check if they are mirror images of each other or not. 
// You are also given e denoting the number of edges in both trees, and two arrays, A[] and B[].
// Each array has 2*e space separated values u,v denoting an edge from u to v for the both trees.

// Example 1:
// Input:
// n = 3, e = 2
// A[] = {1, 2, 1, 3}
// B[] = {1, 3, 1, 2}
// Output:
// 1
// Explanation:
//    1          1
//  / \        /  \
// 2   3      3    2 
// As we can clearly see, the second tree
// is mirror image of the first.

// Example 2:
// Input:
// n = 3, e = 2
// A[] = {1, 2, 1, 3}
// B[] = {1, 2, 1, 3}
// Output:
// 0
// Explanation:
//    1          1
//  / \        /  \
// 2   3      2    3 
// As we can clearly see, the second tree
// isn't mirror image of the first.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function checkMirrorTree() which takes 2 Integers n, and e;  and two arrays A[] and B[] of size 2*e as input and returns 1 if the trees are mirror images of each other and 0 if not.

// Expected Time Complexity: O(e)
// Expected Auxiliary Space: O(e)

// Constraints:
// 1 <= n,e <= 105

//🔴approach : 
//  int checkMirrorTree(int n, int e, int A[], int B[]) {
//    // Create an unordered map to store edges for each node in tree A
//      unordered_map<int,stack<int>> mp;
   
//    // Store edges for tree A in the unordered map
//      for(int i=0; i<2*e; i += 2){
//          mp[A[i]].push(A[i+1]);
//      }
   
//    // Check if the representations are mirrors
//      for(int i=0; i<2*e; i += 2) {
//            // If the top element of stack for B[i] is not equal to B[i+1], they are not mirrors
//          if(mp[B[i]].top() != B[i+1]) {
//              return 0;
//          }
//          // Remove the top element from the stack for B[i]
//          mp[B[i]].pop() ;
//      }
//       return 1; // The representations are mirrors
//  }
//🔸time complexity:  O(2*e + 2*e)
//🔸space complexity: O(N*M)


//                  //❓Question : Sum of nodes on the longest path from root to leaf node

// Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(), 
// that find the sum of all nodes on the longest path from root to leaf node.
// If two or more paths compete for the longest path,
// then the path having maximum sum of nodes is being considered.

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

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sumOfLongRootToLeafPath() which takes root node of the tree as input parameter and returns an integer denoting the sum of the longest root to leaf path of the tree. If the tree is empty, return 0.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= Number of nodes <= 104
// 1 <= Data of a node <= 104

//🔴approach : 
// int traverse(Node* root, int& longestPath) {
//         if(root == NULL) {
//             longestPath = 0;
//             return 0;
//         }
        
//         int left;
//         int right;
        
//         int ls = traverse(root->left, left);
//         int rs = traverse(root->right, right);
        
//         if(left > right) {
//             longestPath = left + 1;
//             return ls + root->data;
//         }
//         else if(right > left) {
//             longestPath = right + 1;
//             return rs + root->data ;
//          }
//         else{
//             longestPath = left + 1;
//             return max(rs, ls) + root->data;
//         }
        
//     }

//     int sumOfLongRootToLeafPath(Node *root) {
//         int longestPath = 0 ;
//         int sum = traverse(root, longestPath);
//         return sum;
//     }
//🔸time complexity :  O(height of tree)
//🔸space complexity : O(sum of longest path)


//🔴approach :
// / void solve(Node* root, int sum, int &maxSum, int length, int &maxLeng) {
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
//🔴time complexity: O(N)
//🔴space complexity: O(N)    // N == Height of Tree



//                  //❓Question: Check if a given graph is tree or not

// Write a function that returns true if a given undirected graph is a tree and false otherwise. 
// For example, the following graph is a tree.

//         [0]-----[1]-----[3]
//              /     \ 
//         [2]          [4]

// But the following graph is not a tree. 
//         [0]-----[1]-----[3]
//          |    /     \ 
//         [2]          [4] 


//🔴🔴 Approach 1:
// An undirected graph is a tree if it has the following properties. 
// There is no cycle. 
// The graph is connected.
// For an undirected graph, we can either use BFS or DFS to detect the above two properties.

// How to detect cycles in an undirected graph? 
// We can either use BFS or DFS. For every visited vertex ‘v’, if there is an adjacent ‘u’ such that u is already 
// visited and u is not the parent of v, then there is a cycle in the graph. 
// If we don’t find such an adjacent for any vertex, we say that there is no cycle 

// How to check for connectivity? 
// Since the graph is undirected, we can start BFS or DFS from any vertex and check if all vertices are 
// reachable or not. If all vertices are reachable, then the graph is connected, otherwise not.
// Implementation: 

//🔸Implementation :
// #include<iostream>
// #include <list>
// #include <limits.h>
// using namespace std;
 
// // Class for an undirected graph
// class Graph
// {
//     int V;    // No. of vertices
//     list<int> *adj; // Pointer to an array for adjacency lists
//     bool isCyclicUtil(int v, bool visited[], int parent);
// public:
//     Graph(int V);   // Constructor
//     void addEdge(int v, int w);   // to add an edge to graph
//     bool isTree();   // returns true if graph is tree
// };
 
// Graph::Graph(int V)
// {
//     this->V = V;
//     adj = new list<int>[V];
// }
 
// void Graph::addEdge(int v, int w)
// {
//     adj[v].push_back(w); // Add w to v’s list.
//     adj[w].push_back(v); // Add v to w’s list.
// }
 
// // A recursive function that uses visited[] and parent to
// // detect cycle in subgraph reachable from vertex v.
// bool Graph::isCyclicUtil(int v, bool visited[], int parent)
// {
//     // Mark the current node as visited
//     visited[v] = true;
 
//     // Recur for all the vertices adjacent to this vertex
//     list<int>::iterator i;
//     for (i = adj[v].begin(); i != adj[v].end(); ++i)
//     {
//         // If an adjacent is not visited, then recur for 
//         // that adjacent
//         if (!visited[*i])
//         {
//            if (isCyclicUtil(*i, visited, v))
//               return true;
//         }
 
//         // If an adjacent is visited and not parent of current
//         // vertex, then there is a cycle.
//         else if (*i != parent)
//            return true;
//     }
//     return false;
// }
 
// // Returns true if the graph is a tree, else false.
// bool Graph::isTree()
// {
//     // Mark all the vertices as not visited and not part of 
//     // recursion stack
//     bool *visited = new bool[V];
//     for (int i = 0; i < V; i++)
//         visited[i] = false;
 
//     // The call to isCyclicUtil serves multiple purposes.
//     // It returns true if graph reachable from vertex 0 
//     // is cyclic. It also marks all vertices reachable 
//     // from 0.
//     if (isCyclicUtil(0, visited, -1))
//              return false;
 
//     // If we find a vertex which is not reachable from 0 
//     // (not marked by isCyclicUtil(), then we return false
//     for (int u = 0; u < V; u++)
//         if (!visited[u])
//            return false;
 
//     return true;
// }
 
// // Driver program to test above functions
// int main()
// {
//     Graph g1(5);
//     g1.addEdge(1, 0);
//     g1.addEdge(0, 2);
//     g1.addEdge(0, 3);
//     g1.addEdge(3, 4);
//     g1.isTree()? cout << "Graph is Tree\n":
//                  cout << "Graph is not Tree\n";
 
//     Graph g2(5);
//     g2.addEdge(1, 0);
//     g2.addEdge(0, 2);
//     g2.addEdge(2, 1);
//     g2.addEdge(0, 3);
//     g2.addEdge(3, 4);
//     g2.isTree()? cout << "Graph is Tree\n":
//                  cout << "Graph is not Tree\n";
 
//     return 0;
// }
// Output
// Graph is Tree
// Graph is not Tree
//🔸Time Complexity: O(V + E) 
//🔸Auxiliary Space: O(V) as we are using the visited array.

//🔴Approach 2:
// However if we observe carefully the definition of tree and its structure we will deduce that 
// if a graph is connected and has n – 1 edges exactly then the graph is a tree.
// Proof: 
// Since we have assumed our graph of n nodes to be connected, it must have at least n – 1 edges inside it. 
// Now if we try to add one more edge than the n – 1 edges already the graph will end up forming a 
// cycle and thus will not satisfy the definition of tree. Therefore, it is necessary for 
// a connected graph to have exactly n – 1 edges to avoid forming cycle. 

//🔸Implementation: 
// #include<iostream>
// #include <list>
// #include <limits.h>
// using namespace std;
 
// // Class for an undirected graph
// class Graph
// {
//     int V;    // No. of vertices
//       int E;    // No. of edges
//     list<int> *adj; // Pointer to an array for adjacency lists
//     void dfsTraversal(int v, bool visited[], int parent);
// public:
//     Graph(int V);   // Constructor
//     void addEdge(int v, int w);   // to add an edge to graph
//     bool isConnected();   // returns true if graph is connected
//     bool isTree();     // returns true of the graph is tree
// };
 
// Graph::Graph(int V)
// {
//     E = 0;
//     this->V = V;
//     adj = new list<int>[V];
// }
 
// void Graph::addEdge(int v, int w)
// {
//     E++;                 // increase the number of edges
//     adj[v].push_back(w); // Add w to v’s list.
//     adj[w].push_back(v); // Add v to w’s list.
// }
 
// // A recursive dfs function that uses visited[] and parent to
// // traverse the graph and mark visited[v] to true for visited nodes
// void Graph::dfsTraversal(int v, bool visited[], int parent)
// {
//     // Mark the current node as visited
//     visited[v] = true;
 
//     // Recur for all the vertices adjacent to this vertex
//     list<int>::iterator i;
//     for (i = adj[v].begin(); i != adj[v].end(); ++i)
//     {
//         // If an adjacent is not visited, then recur for 
//         // that adjacent
//         if (!visited[*i])
//         {
//            dfsTraversal(*i, visited, v);
//         }
//     }
// }
 
// // Returns true if the graph is connected, else false.
// bool Graph::isConnected()
// {
//     // Mark all the vertices as not visited and not part of 
//     // recursion stack
//     bool *visited = new bool[V];
//     for (int i = 0; i < V; i++)
//         visited[i] = false;
 
//     // Performing DFS traversal of the graph and marking
//     // reachable vertices from 0 to true
//     dfsTraversal(0, visited, -1);
 
//     // If we find a vertex which is not reachable from 0 
//     // (not marked by dfsTraversal(), then we return false
//     // since graph is not connected
//     for (int u = 0; u < V; u++)
//         if (!visited[u])
//            return false;
 
//     // since all nodes were reachable so we returned true and
//     // and hence graph is connected
//     return true;
// }
 
// bool Graph::isTree()
// {
//     // as we proved earlier if a graph is connected and has
//     // V - 1 edges then it is a tree i.e. E = V - 1
//     return isConnected() and E == V - 1;
// }
// // Driver program to test above functions
// int main()
// {
//     Graph g1(5);
//     g1.addEdge(1, 0);
//     g1.addEdge(0, 2);
//     g1.addEdge(0, 3);
//     g1.addEdge(3, 4);
//     g1.isTree()? cout << "Graph is Tree\n":
//                  cout << "Graph is not Tree\n";
 
//     Graph g2(5);
//     g2.addEdge(1, 0);
//     g2.addEdge(0, 2);
//     g2.addEdge(2, 1);
//     g2.addEdge(0, 3);
//     g2.addEdge(3, 4);
//     g2.isTree()? cout << "Graph is Tree\n":
//                  cout << "Graph is not Tree\n";
 
//     return 0;
// }

// Output
// Graph is Tree
// Graph is not Tree
//🔸Time Complexity: O(V + E) For performing the DFS traversal
//🔸Auxiliary Space: O(V) For storing the visited array



//              //❓Question: Find Largest Subtree Sum in a tree

// Given a binary tree. The task is to find subtree with maximum sum in the tree and return its sum.

// Example 1:
// Input:
//               1
//             /   \
//            2      3
//           / \    / \
//          4   5  6   7
// Output: 28
// Explanation: 
// As all the tree elements are positive,
// the largest subtree sum is equal to
// sum of all tree elements.

// Example 2:
// Input:
//                1
//             /    \
//           -2      3
//           / \    /  \
//          4   5  -6   2
// Output: 7
// Explanation: 
// Subtree with largest sum is : 
//   -2
//  /  \ 
// 4    5
// Also, entire tree sum is also 7.
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function findLargestSubtreeSum() which takes the root of a binary tree and returns an integer.
 
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 10^5
// -10^3 <= tree.val <= 10^3


//🔴Appraoch : 
// class Solution {
//   public:
//    int build(Node* root){
//        if(root == NULL){
//            return 0;
//        }
//        else{
//            root->data += build(root->left) + build(root->right);
//            return root->data;
//        }
//    }
   
//    int getMax(Node* root){
//        if(root == NULL){
//            return INT_MIN;
//        }
//        else{
//            return max(root->data, max(getMax(root->left), getMax(root->right)));
//        }
//    }
   
//     // Function to find largest subtree sum.
//     int findLargestSubtreeSum(Node* root) {
//         build(root);
//         return getMax(root);
//     }
// };
//🔸Time complexity: O(N)
//🔸space complexity: O(1)



//              //❓Question: Maximum sum of Non-adjacent nodes

// Given a binary tree with a value associated with each node, 
// we need to choose a subset of these nodes such that sum of chosen nodes is maximum under 
// a constraint that no two chosen node in subset should be directly connected that is, 
// if we have taken a node in our sum then we can’t take its any children or 
// parents in consideration and vice versa.

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

// Your Task:
// You don't need to read input or print anything. You just have to complete function getMaxSum() which accepts root node of the tree as parameter and returns the maximum sum as described.

// Expected Time Complexity: O(Number of nodes in the tree).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 ≤ Number of nodes in the tree ≤ 10000
// 1 ≤ Value of each node ≤ 100000

//🔴approach : 
// class Solution{
//   private:
//   pair<int,int> solve(Node* root){
//         if(!root) return {0,0};
      
//         pair<int,int>leftAns = solve(root->left);
//         pair<int,int>rightAns = solve(root->right);
        
//         pair<int,int>res;
        
//         res.first = root->data + leftAns.second + rightAns.second;
//         res.second = max(leftAns.first, leftAns.second) + max(rightAns.first, rightAns.second);
       
//         return res;
//     }
  
//   public:
//     int getMaxSum(Node *root) {
//         pair<int,int>ans = solve(root);
//         return max(ans.first, ans.second);
//     }
// };
//🔸 time complexity: O(N)
//🔸space complexity: O(N)



//                  //❓Question: K sum paths

// Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
// A path may start from any node and end at any node in the downward direction.
// Since the answer may be very large, compute it modulo 109+7.

// Example 1:
// Input:      
// Tree = 
//           1                               
//         /   \                          
//        2     3
// K = 3
// Output: 
// 2
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
// Output: 
// 8
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

// Your Task:  
// You don't need to read input or print anything. Complete the function sumK() which takes root node and integer K as input parameters and returns the number of paths that have sum K. 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(Height of Tree)

// Constraints:
// 1 ≤ N ≤ 2*104
// -105 ≤ Node Value ≤ 105
// -109 ≤ K ≤ 109

//🔴appraoch : 
// class Solution{
//   public:
//     int count=0;
//     void preorder(Node *root, int k, unordered_map<int,int>&mp,int prev)
//     {
//         if(root)
//         {
//             int curr=prev+root->data ;
//             if(mp.find(curr-k)!=mp.end()){
//                 count+=mp[curr-k];
//             }
      
//             if(curr==k){
//                   count++;
//             }
      
//              mp[curr]++;
            
//             preorder(root->left,k,mp,curr);
//             preorder(root->right,k,mp,curr);
            
//               mp[curr]--;
//         }
//     }
//     int sumK(Node *root,int k)
//     {
//         unordered_map<int,int>mp;
//         preorder(root,k,mp,0);
        
//         return count ;
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                  //❓Question: Lowest Common Ancestor in a Binary Tree

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

// Your Task:
// You don't have to read, input, or print anything. Your task is to complete the function lca() that takes nodes, n1, and n2 as parameters and returns the LCA node as output. 

// Expected Time Complexity:O(N).
// Expected Auxiliary Space:O(Height of Tree).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 105

//🔴approach : 
// class Solution
// {
//     public:
//     //Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root ,int n1 ,int n2 )
//     {
//        if(root==NULL){
//             return root;
//         }
        
//         if(root->data==n1 || root->data==n2){
//             return root;
//         }
        
//         Node* LEFTSIDE  =lca(root->left,n1,n2);
//         Node* RIGHTSIDE =lca(root->right,n1,n2);
        
//         if(LEFTSIDE!=NULL && RIGHTSIDE!=NULL){
//             return root;
//         }
//         else if(LEFTSIDE!=NULL){
//             return LEFTSIDE;
//         }
//         else{
//             return RIGHTSIDE;
//         }
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//                  //❓question: Min distance between two given nodes of a Binary Tree

// Given a binary tree and two node values your task is to find the minimum distance between them.
// The given two nodes are guaranteed to be in the binary tree and nodes are numbered from 1 to N.
// Please Note that a and b are not always leaf node.

// Example 1:
// Input:
//         1
//       /  \
//      2    3
// a = 2, b = 3
// Output: 2
// Explanation: The tree formed is:
//        1
//      /   \ 
//     2     3

// We need the distance between 2 and 3.
// Being at node 2, we need to take two
// steps ahead in order to reach node 3.
// The path followed will be:
// 2 -> 1 -> 3. Hence, the result is 2. 

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findDist() which takes the root node of the Tree and the two node values a and b as input parameters and returns the minimum distance between the nodes represented by the two given node values.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 <= Number of nodes <= 104
// 1 <= Data of a node <= 105

//🔴approach :
// class Solution{
//     public:
//     Node* solve(Node* root, int a, int b){
//         if(root == NULL){
//             return NULL;
//         }
//         if(root->data == a || root->data == b){
//             return root;
//         }
        
//         Node* leftAns = solve(root->left, a, b);
//         Node* rightAns = solve(root->right, a, b);
        
//         if(leftAns != NULL && rightAns != NULL){
//             return root;
//         }
//         else if(leftAns != NULL && rightAns == NULL){
//             return leftAns;
//         }
//         else if(leftAns ==NULL && rightAns != NULL){
//             return rightAns;
//         }
//         else{
//             return NULL;
//         }
//     }
    
//     int distance(Node* root, int node){
//         if(root == NULL){
//             return -1;
//         }
//         if(root->data == node){
//             return 0;
//         }
        
//         int left = distance(root->left, node);
//         int right = distance(root->right, node);
        
//         if(left != -1){
//             return left+1;
//         }
//         else if(right != -1){
//             return right+1;
//         }
//     }
//     int findDist(Node* root, int a, int b) {
//         Node* ans = solve(root,a,b);
//         int distance1 = distance(ans, a);
//         int distance2 = distance(ans, b);
        
//         return distance1+distance2;
//     }
// };
//🔸time complexity : O(N)
//🔸space complexity: O(height of tree)


//                  //❓Question: Kth ancestor of a node in binary tree


// Given a binary tree of size  N, a node, and a positive integer k., 
// Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. 
// If there does not exist any such ancestor then return -1.
// Note:
// 1. It is guaranteed that the node exists in the tree.
// 2. All the nodes of the tree have distinct values.

// Example 1:
// Input:
// K = 2 Node = 4
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
// Your Task:
// You are asked to complete the function kthAncestor() which accepts root of the tree, k and node as input parameters, and returns the kth ancestor of Node which contains node as its value.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1<=N<=105
// 1<= K <= 100
// 1 <= Node.data <= N

//🔴appraoch : 
// void solve(Node* root,int &node,bool &found,vector<int>&values){
//     if(root==NULL) return;
    
//     if(root->data==node){
//         found=1;
//         return;
//     }
//     solve(root->left,node,found,values);
    
//     if(found){
//         values.push_back(root->data);
//         return;
//     }
   
//     solve(root->right,node,found,values);
    
//     if(found){
//         values.push_back(root->data);
//     }

// }
// int kthAncestor(Node *root, int k, int node)
// {
//     bool found=0;
//     vector<int>values;
//     solve(root,node,found,values);
    
//     return values.size()<k?-1:values[k-1];

// }
//🔸time compplexity: O(N)
//🔸space complexity: O(N)

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
//🔸time compplexity: O(N)
//🔸space complexity: O(N)




//              //❓Question: Duplicate Subtree

// Given a binary tree of size N, your task is to that find all duplicate subtrees from the given binary tree.
// Note: Here's the Output of every Node printed in the Pre-Order tree traversal format. Arrange nodes in the answer array based on the lexicographically increasing order of their preorder traversal of subtree.
// For Example: if we have 3 preorder traversal as {1,2,3},{1},{11,2,3} then your lexicographically increasing order is {1},{1,2,3},{11,2,3}, you are supposed to output the head of all these subtrees in the same order.

// Example:
// Input : 
// Output : 2 4
//          4
// Explanation: Above Trees are two 
// duplicate subtrees.i.e  and 
// Therefore,you need to return above trees 
// root in the form of a list.
// Your Task:
// You don't need to take input. Just complete the function printAllDups() that takes the root node as a parameter and returns an array of Node*, which contains all the duplicate subtree.

// Constraints:
// 1<=T<=100
// 1<=N<=100

//🔴approach :
// string preorder(Node *root, vector<Node*> &ans,unordered_map<string,int>&subTree){
//     if(root==NULL) return "N";
    
//     string curr=to_string(root->data);
//     string l=preorder(root->left,ans,subTree);
//     string r=preorder(root->right,ans,subTree);
//     string s=curr+","+l+","+r;
//     if(subTree.find(s)!=subTree.end()){
//         if(subTree[s]==1){
//             ans.push_back(root);
//         }
        
//          subTree[s]++;
//     }
//     else{
//             subTree[s]=1;
//         }
//     return s;
    
// }
// vector<Node*> printAllDups(Node* root)
// {
//     vector<Node*> ans;
//     unordered_map<string,int>subTree;
//     preorder(root,ans,subTree);
//     sort(ans.begin(),ans.end());
//     return ans;
// }
//🔸time complexity : O(N * Log N)
//🔸space complexitY: O(2N)



//              //❓Question: Check if Tree is Isomorphic

// Given two Binary Trees. Check whether they are Isomorphic or not.
// Note: 
// Two trees are called isomorphic if one can be obtained from another by a series of flips, 
// i.e. by swapping left and right children of several nodes. Any number of nodes at any level can have their children swapped. 
// Two empty trees are isomorphic.
// For example, the following two trees are isomorphic with the following sub-trees flipped:
// 2 and 3, NULL and 6, 7 and 8.
// ISomorphicTrees

// Example 1:
// Input:
//  T1    1     T2:   1
//      /   \        /  \
//     2     3      3    2
//    /            /
//   4            4
// Output: No

// Example 2:
// Input:
// T1    1     T2:    1
//     /  \         /   \
//    2    3       3     2
//   /                    \
//   4                     4
// Output: Yes
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isomorphic() that takes the root nodes of both the Binary Trees as its input and returns True if the two trees are isomorphic. Else, it returns False. (The driver code will print Yes if the returned values are true, otherwise false.)

// Expected Time Complexity: O(min(M, N)) where M and N are the sizes of the two trees.
// Expected Auxiliary Space: O(min(H1, H2)) where H1 and H2 are the heights of the two trees.

// Constraints:
// 1<=Number of nodes<=105

//🔴approach :  TLE
// class Solution{
//   public:
//     // Return True if the given trees are isomotphic. Else return False.
//     bool isIsomorphic(Node *root1,Node *root2)
//     {
//      if(root1== NULL && root2 != NULL) return false;
//      if(root2== NULL && root1 != NULL) return false;
//      if(root1== NULL && root2 == NULL) return true ;
//      if(root1->data !=  root2->data) return false;
     
//      bool left1 = isIsomorphic(root1->left, root2->right) ;
//      bool right1 = isIsomorphic(root1->right, root2->left);
//      bool left = isIsomorphic(root1->left, root2->right) ;
//      bool right = isIsomorphic(root1->right, root2->left);
     
//      return (left && right) || (left1 && right1);
//     }
// };
//🔸time complexity : O(2* N+M)
//🔸space complexitY: O(N+M)


//🔴approach : optimised
// class Solution{
//   public:
//     // Return True if the given trees are isomotphic. Else return False.
//     bool isIsomorphic(Node *root1,Node *root2)
//     {
//         // code here.
//          if(root1==NULL&&root2==NULL){
//              return true;
//          }
         
//          if(root1==NULL || root2==NULL){
//              return false;
//          }
         
//          if(root1->data!=root2->data)
//          return false;
         
//          return (isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))
//                 || (isIsomorphic(root1->left,root2->right)&& isIsomorphic(root1->right,root2->left));
//     }
// };
//🔸time complexity : O(2* N+M)
//🔸space complexitY: O(N + M)
