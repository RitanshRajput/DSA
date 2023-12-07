

//                     //❓Question : Search a node in BST

// Given a Binary Search Tree and a node value X, find if the node with value X is present in the BST or not.

// Example 1:
// Input:         2
//                 \
//                  81 
//                /    \ 
//              42      87 
//               \       \ 
//                66      90 
//               / 
//             45
// X = 87
// Output: 1
// Explanation: As 87 is present in the
// given nodes , so the output will be 1.

// Example 2:
// Input:      6
//              \ 
//               8 
//              / \ 
//             7   9
// X = 11
// Output: 0
// Explanation: As 11 is not present in 
// the given nodes , so the output will be 0.

// Your Task:
// You don't need to read input or print anything. Complete the function search() which returns true if the node with value x is present in the BSTelse returns false.

// Expected Time Complexity: O(Height of the BST)
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= Number of nodes <= 105


//🔴approach 1: recursive solution 
// bool searchInBST(Node* root, int x) {
//     if(root == NULL){
//         return false;
//     }
//     if(root -> data == x) {
//         return true;
//     }

//     if(root -> data > x) {
//         return searchInBST(root->left, x) ;
//     }
//     else{
//         return searchInBST(root -> right , x) ;
//     }
// }
//🔸Time complexity: O(H)
//🔸space complexity: O(1)


// 🔴appraoch 2: iterative solution
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
//🔴time complexity: O(H)
//🔴space complexity: O(1) 



//                  //❓Question: Delete Node in a BST

// Given a root node reference of a BST and a key, delete the node with the given key in the BST.
// Return the root node reference (possibly updated) of the BST.
// Basically, the deletion can be divided into two stages:
// Search for a node to remove.
// If the node is found, delete the node.
 
// Example 1:
//       5                  5
//      / \               /   \
//      3  6     ==>     4      6
//     /\   \           /        \
//    2  4   7         2          7
// Input: root = [5,3,6,2,4,null,7], key = 3
// Output: [5,4,6,2,null,null,7]
// Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.
// One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
// Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.

// Example 2:
//          5
//         / \ 
//        2    6
//         \    \
//          4    7
// Input: root = [5,3,6,2,4,null,7], key = 0
// Output: [5,3,6,2,4,null,7]
// Explanation: The tree does not contain a node with value = 0.
// Example 3:

// Input: root = [], key = 0
// Output: []
 
// Constraints:
// The number of nodes in the tree is in the range [0, 104].
// -105 <= Node.val <= 105
// Each node has a unique value.
// root is a valid binary search tree.
// -105 <= key <= 105
 
//🔴Intuition: 
// When we delete a node from a Binary Search Tree(BST), the BST properties should remain the same.
// Hence, we have 3 cases for deleting a node from a BST :

// The node is a leaf node - In this cases, we can just delete the node and return the root, since deleting any elaf node doesn't affect the remainig tree.
// image

// The node has one child - In this case, replace the node with the child node and return the root.
// image

// The node has 2 children - In this case, in order to conserve the BST properties, we need to replace the node with it's inorder successor (The next node that comes in the inorder traversal) i.e; we need to replace it with either :
// 1. The greatest value node in it's left subtree (or)
// 2. The smallest value node in it's right subtree
// and return the root.
// image

// Time Complexity : O(h) - h = height of the tree.
// (Worst case Time Complexity : O(n) )

//🔴approach : 
// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root) 
//          if(key < root->val) root->left = deleteNode(root->left, key);     //We frecursively call the function until we find the target node
//          else if(key > root->val) root->right = deleteNode(root->right, key);       
//          else{
//              if(!root->left && !root->right) return NULL;          //No child condition
//              if (!root->left || !root->right)
//                  return root->left ? root->left : root->right;   // One child contion -> replace the node with it's child
//      			                                                // Two child condition   
//              TreeNode* temp = root->left;                        //(OR) TreeNode *temp = root->right;
//              while(temp->right != NULL) temp = temp->right;      //     while(temp->left != NULL) temp = temp->left;
//              root->val = temp->val;                              //     root->val = temp->val;
//              root->left = deleteNode(root->left, temp->val);     //     root->right = deleteNode(root->right, temp);		
//          }
//      return root;
//     }
// };
//🔴time complexity: O(H)
//🔴space complexity: O(1) 



//                  //❓Question: Minimum Node Element in BST

// Given a Binary Search Tree. The task is to find the minimum valued element in this given BST.

// Example 1:
// Input:
//            5
//          /    \
//         4      6
//        /        \
//       3          7
//      /
//     1
// Output: 1

// Example 2:
// Input:
//              9
//               \
//                10
//                 \
//                  11
// Output: 9

// Your Task:
// The task is to complete the function minValue() which takes root as the argument and returns the minimum element of BST. If the tree is empty, there is no minimum element, so return -1 in that case.

// Expected Time Complexity: O(Height of the BST)
// Expected Auxiliary Space: O(1).

// Constraints:
// 0 <= N <= 104


//🔴Approach :

// int minValue(struct Node *root) {
//        if(root == NULL) return -1;
//        if(root->left == NULL) return root->data;
//        minValue(root->left);
// }
//🔸Time complexity: O(height of BST))
//🔸space complexity: O(1)



//                  //❓Question: Predecessor and Successor 

// There is BST given with the root node with the key part as an integer only. 
// You need to find the in-order successor and predecessor of a given key. 
// If either predecessor or successor is not found, then set it to NULL.

// Note:- In an inorder traversal the number just smaller than the 
// target is the predecessor and the number just greater than the target is the successor. 

// Example 1:
// Input:
//         10
//       /   \
//      2    11
//    /  \ 
//   1    5
//       /  \
//      3    6
//       \
//        4
// key = 8
// Output: 
// 6 10
// Explanation: 
// In the given BST the inorder predecessor of 8 is 6 and inorder successor of 8 is 10.

// Example 2:
// Input:
//       8
//     /   \
//    1     9
//     \     \
//      4    10
//     /
//    3
// key = 11
// Output: 
// 10 -1
// Explanation: 
// In given BST, the inorder predecessor of 11 is 10 whereas it does not have any inorder successor.
// Your Task: You don't need to print anything. You need to update pre with the predecessor of 
// the key or NULL if the predecessor doesn't exist and succ to the successor of the key or
// NULL if the successor doesn't exist. pre and succ are passed as an argument to the function findPreSuc(). 

// Expected Time Complexity: O(Height of the BST).
// Expected Auxiliary Space: O(Height of the BST).

// Constraints: 
// 1 <= Number of nodes <= 104
// 1 <= key of node <= 107
// 1 <= key <= 107


// 🔴Approach :
/* struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively 

//  Public: 
//  bool flag = true;
//     void inorder(Node* root, Node*& pre, Node*& suc, int key){
//         if(!root) return;
//         inorder(root->left, pre, suc, key);
//         if(root->key < key){
//             pre = root;
//         }
//         if(root->key > key && flag){
//             suc = root;
//             flag = false;
//             return;
//         }
//         inorder(root->right, pre, suc, key);
//     }
//     void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
//     {
//         // Your code goes here
//         inorder(root, pre, suc, key);
//     }
//🔸time complexity:  O(H)
//🔸space complexity: O(1)


//🔴appraoch 2: using mini maxi
//    void solve(Node* root, Node*& pre, Node*& suc, int key,int &mx,int &mn){
//     if(root==NULL) return;
//
//     solve(root->left,pre,suc,key,mx,mn);
//
//     if(root->key>key&&root->key<mn){
//         mn=root->key;
//         suc=root;
//     }
//     if(root->key<key&&root->key>mx){
//         mx=root->key;
//         pre=root;
//     }
//
//     solve(root->right,pre,suc,key,mx,mn);
//    }
//
//    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
//    {
//        int mx=INT_MIN;
//        int mn=INT_MAX;
//        solve(root,pre,suc,key,mx,mn);
//    }
//🔸time complexity:  O(H)
//🔸space complexity: O(1)


//						//❓Question: Check For a BST

// Given the root of a binary tree. Check whether it is a BST or not.
// Note: We are considering that BSTs can not contain duplicate Nodes.
// A BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 
// Example 1:
// Input:
//    2
//  /    \
// 1      3
// Output: 1 
// Explanation: 
// The left subtree of root node contains node
// with key lesser than the root nodes key and 
// the right subtree of root node contains node 
// with key greater than the root nodes key.
// Hence, the tree is a BST.

// Example 2:
// Input:
//   2
//    \
//     7
//      \
//       6
//        \
//         5
//          \
//           9
//            \
//             2
//              \
//               6
// Output: 0 
// Explanation: 
// Since the node with value 7 has right subtree 
// nodes with keys less than 7, this is not a BST.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isBST() which takes the root of the tree as a parameter and returns true if the given binary tree is BST, else returns false. 

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 0 <= Number of edges <= 100000


//🔴appraoch :
// class Solution
// {
//     public:
//     bool solve(Node* root, int mini, int maxi){
//         if(root==NULL) return true;
//         if(root->data <= mini || root->data >= maxi){
//             return false;
//         }
        
//         return solve(root->left, mini, root->data) && solve(root->right, root->data, maxi);
//     }
//     //Function to check whether a Binary Tree is BST or not.
//     bool isBST(Node* root) 
//     {
//         return solve(root, INT_MIN, INT_MAX);
//     }
// };
//🔸time complexity: O(H)
//🔸space complexity: O(H)


//					//❓Question: Populate inorder successor of all node

// Given a Binary Tree, write a function to populate next pointer for all nodes. 
// The next pointer for every node should be set to point to inorder successor.

// Example 1:
// Input:
//        10
//        /  \
//       8    12
//      /
//     3
  

// Output: 3->8 8->10 10->12 12->-1
// Explanation: The inorder of the above tree is :
// 3 8 10 12. So the next pointer of node 3 is 
// pointing to 8 , next pointer of 8 is pointing
// to 10 and so on.And next pointer of 12 is
// pointing to -1 as there is no inorder successor 
// of 12.

// Example 2:
// Input:
//        1
//       /   \
//      2     3
// Output: 2->1 1->3 3->-1 
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function populateNext() that takes the root node of the binary tree as input parameter.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
// Constraints:
// 1<=n<=10^5
// 1<=data of the node<=10^5

//🔴approach :
// class Solution
// {
// public:
//     void solve(Node* root, vector<Node*>& temp){
//         if(root==NULL) return;
//         solve(root->left, temp);
//         temp.push_back(root);
//         solve(root->right, temp);
//     }
//
//     void populateNext(Node *root)
//     {
//         if(root==NULL) return;
//         vector<Node*> temp; 
//         solve(root, temp);
        
//         if(temp.size() < 2) {
//             temp[0]->next = NULL;
//         }
//         else{
//             int i=0; 
//             while(i <= temp.size()-2){
//                 temp[i]->next = temp[i+1];
//                 i++;
//             }
//         }
//     }
// };
//🔸time complexity:O(N)
//🔸space complexity: O(N)



//          //❓Question: Lowest Common Ancestors(LCA)

// Given a Binary Search Tree (with all values unique) and 
// two node values n1 and n2 (n1!=n2). Find the Lowest Common Ancestors of the two nodes in the BST.

// Example 1:

// Input:
//               5
//             /   \
//           4      6
//          /        \
//         3          7
//                     \
//                      8
// n1 = 7, n2 = 8
// Output: 7
// Example 2:

// Input:
//      2
//    /   \
//   1     3
// n1 = 1, n2 = 3
// Output: 2
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function LCA() which takes the root Node of the BST and two integer values n1 and n2 as inputs and returns the Lowest Common Ancestor of the Nodes with values n1 and n2 in the given BST. 

// Expected Time Complexity: O(Height of the BST).
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 1 <= N <= 104

//🔴appraoch 1 :
// class Solution{
//     public:
//      int ancestor(Node* root,int n,vector<Node*>&ans) {
//         if(root==NULL) return 0;
//
//         if(root->data==n) {
//             ans.push_back(root);
//             return root->data;
//         }
//        
//         int left=-1,right=-1;
//         if(root->data > n)
//         left = ancestor(root->left,n,ans);
//
//         if(root->data<n)
//         right = ancestor(root->right,n,ans);
//       
//         if(left==n || right==n) {
//             ans.push_back(root);
//             return n;
//         }
//     }
//
//         Node* LCA(Node *root, int n1, int n2) {
//             vector<Node*>an1;
//             vector<Node*>an2;   
//
//             int ans1 = ancestor(root,n1,an1);
//             int ans2 = ancestor(root,n2,an2);
//          
//             for(int i=0;i<an1.size();i++)  {
//                 for(int j = 0;j<an2.size();j++) {
//                     if(an1[i]->data == an2[j]->data) {
//                         return an1[i];
//                     }
//                 }
//             }
//         }
// };
//🔸time complexity: O(Heighht of BST)
//🔸space complexity: O(height of BST) + (2Vector)

//🔴appraoch 2:
// class Solution{
//     public:
//         Node* ancestor(Node* root, int n1, int n2){
//             if(root == NULL) {
//                 return root;
//             }
            
//             if(root->data > n1 && root->data > n2) {
//                 return ancestor(root->left, n1, n2);
//             }
            
//             if(root->data < n1 && root->data < n2){
//                 return ancestor(root->right, n1, n2);
//             }
            
//             return root;
//         }
//         Node* LCA(Node *root, int n1, int n2){
//             return ancestor(root, n1, n2);
//         }
// };
//🔸time complexity: O(Heighht of BST)
//🔸space complexity: O(height of BST)



//					//❓Question: Construct BST from Preorder Traversal

// Given the preorder traversal of a binary search tree, construct the BST.

// Examples:

//  Input: {10, 5, 1, 7, 40, 50}
// Output:   10
//                /   \
//             5     40
//           /  \       \
//        1    7       50

//🔴approach 1: 

// Node* insertIntoBST(Node* root, int d){
// 	if(root == NULL){
// 		root = new Node(d);
// 		return root;
// 	}

// 	if(root->data < d){
// 		root->right = insertIntoBST(root->right, d);
// 	}
// 	else{
// 		root->left = insertIntoBST(root->left, d);
// 	}
// 	return root;
// }

//🔸Time complexity: O(N^2)
//🔸space complexity: O(1)



//🔴approach 2: 
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
