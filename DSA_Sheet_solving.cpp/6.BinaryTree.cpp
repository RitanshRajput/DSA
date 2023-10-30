

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
// 4    5  6   7

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
//             Node* t=q.front();
//             q.pop();
//             if(t==NULL)
//             {
//                 if(i==0)
//                 {
//                      for(int i:v)
//                     {
//                         ans.push_back(i);
//                     }
//                     v.clear();
//                      i=1;
//                 }
//                 else
//                 {
//                     reverse(v.begin(),v.end());
//                     for(int i:v)
//                     {
//                         ans.push_back(i);
//                     }
//                     v.clear();
//                     i=0;

//                 }
//                 if(!q.empty())
//                 {
//                     q.push(NULL);
//                 }
//             }
//             else
//             {
//                 v.push_back(t->data);
//                 if(t->left!=NULL)
//                 {
//                     q.push(t->left);
//                 }
//                 if(t->right!=NULL)
//                 {
//                     q.push(t->right);
//                 }

//             }
//         }
//         return 1;

//     }
//     vector <int> zigZagTraversal(Node* root)
//     {
//          if(root==NULL)
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



//                          //❓Question: check for Balanced Tree or Not

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