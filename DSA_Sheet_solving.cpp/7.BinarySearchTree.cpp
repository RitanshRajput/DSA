

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

// 🔴approach 1: recursive solution
//  bool searchInBST(Node* root, int x) {
//      if(root == NULL){
//          return false;
//      }
//      if(root -> data == x) {
//          return true;
//      }

//     if(root -> data > x) {
//         return searchInBST(root->left, x) ;
//     }
//     else{
//         return searchInBST(root -> right , x) ;
//     }
// }
// 🔸Time complexity: O(H)
// 🔸space complexity: O(1)

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
// 🔴time complexity: O(H)
// 🔴space complexity: O(1)

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

// 🔴Intuition:
//  When we delete a node from a Binary Search Tree(BST), the BST properties should remain the same.
//  Hence, we have 3 cases for deleting a node from a BST :

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

// 🔴approach :
//  class Solution {
//  public:
//      TreeNode* deleteNode(TreeNode* root, int key) {
//          if(root)
//           if(key < root->val) root->left = deleteNode(root->left, key);     //We frecursively call the function until we find the target node
//           else if(key > root->val) root->right = deleteNode(root->right, key);
//           else{
//               if(!root->left && !root->right) return NULL;          //No child condition
//               if (!root->left || !root->right)
//                   return root->left ? root->left : root->right;   // One child contion -> replace the node with it's child
//       			                                                // Two child condition
//               TreeNode* temp = root->left;                        //(OR) TreeNode *temp = root->right;
//               while(temp->right != NULL) temp = temp->right;      //     while(temp->left != NULL) temp = temp->left;
//               root->val = temp->val;                              //     root->val = temp->val;
//               root->left = deleteNode(root->left, temp->val);     //     root->right = deleteNode(root->right, temp);
//           }
//       return root;
//      }
//  };
// 🔴time complexity: O(H)
// 🔴space complexity: O(1)

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

// 🔴Approach :

// int minValue(struct Node *root) {
//        if(root == NULL) return -1;
//        if(root->left == NULL) return root->data;
//        minValue(root->left);
// }
// 🔸Time complexity: O(height of BST))
// 🔸space complexity: O(1)

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
// 🔸time complexity:  O(H)
// 🔸space complexity: O(1)

// 🔴appraoch 2: using mini maxi
//     void solve(Node* root, Node*& pre, Node*& suc, int key,int &mx,int &mn){
//      if(root==NULL) return;
//
//      solve(root->left,pre,suc,key,mx,mn);
//
//      if(root->key>key&&root->key<mn){
//          mn=root->key;
//          suc=root;
//      }
//      if(root->key<key&&root->key>mx){
//          mx=root->key;
//          pre=root;
//      }
//
//      solve(root->right,pre,suc,key,mx,mn);
//     }
//
//     void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
//     {
//         int mx=INT_MIN;
//         int mn=INT_MAX;
//         solve(root,pre,suc,key,mx,mn);
//     }
// 🔸time complexity:  O(H)
// 🔸space complexity: O(1)

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

// 🔴appraoch :
//  class Solution
//  {
//      public:
//      bool solve(Node* root, int mini, int maxi){
//          if(root==NULL) return true;
//          if(root->data <= mini || root->data >= maxi){
//              return false;
//          }

//         return solve(root->left, mini, root->data) && solve(root->right, root->data, maxi);
//     }
//     //Function to check whether a Binary Tree is BST or not.
//     bool isBST(Node* root)
//     {
//         return solve(root, INT_MIN, INT_MAX);
//     }
// };
// 🔸time complexity: O(H)
// 🔸space complexity: O(H)

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

// 🔴approach :
//  class Solution
//  {
//  public:
//      void solve(Node* root, vector<Node*>& temp){
//          if(root==NULL) return;
//          solve(root->left, temp);
//          temp.push_back(root);
//          solve(root->right, temp);
//      }
//
//      void populateNext(Node *root)
//      {
//          if(root==NULL) return;
//          vector<Node*> temp;
//          solve(root, temp);

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
// 🔸time complexity:O(N)
// 🔸space complexity: O(N)

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

// 🔴appraoch 1 :
//  class Solution{
//      public:
//       int ancestor(Node* root,int n,vector<Node*>&ans) {
//          if(root==NULL) return 0;
//
//          if(root->data==n) {
//              ans.push_back(root);
//              return root->data;
//          }
//
//          int left=-1,right=-1;
//          if(root->data > n)
//          left = ancestor(root->left,n,ans);
//
//          if(root->data<n)
//          right = ancestor(root->right,n,ans);
//
//          if(left==n || right==n) {
//              ans.push_back(root);
//              return n;
//          }
//      }
//
//          Node* LCA(Node *root, int n1, int n2) {
//              vector<Node*>an1;
//              vector<Node*>an2;
//
//              int ans1 = ancestor(root,n1,an1);
//              int ans2 = ancestor(root,n2,an2);
//
//              for(int i=0;i<an1.size();i++)  {
//                  for(int j = 0;j<an2.size();j++) {
//                      if(an1[i]->data == an2[j]->data) {
//                          return an1[i];
//                      }
//                  }
//              }
//          }
//  };
// 🔸time complexity: O(Heighht of BST)
// 🔸space complexity: O(height of BST) + (2Vector)

// 🔴appraoch 2:
//  class Solution{
//      public:
//          Node* ancestor(Node* root, int n1, int n2){
//              if(root == NULL) {
//                  return root;
//              }

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
// 🔸time complexity: O(Heighht of BST)
// 🔸space complexity: O(height of BST)

//					//❓Question: Construct BST from Preorder Traversal

// Given the preorder traversal of a binary search tree, construct the BST.

// Examples:

//  Input: {10, 5, 1, 7, 40, 50}
// Output:         10
//                /   \
//               5     40
//             /  \       \
//            1    7       50

// 🔴approach 1:
// Node* insertIntoBST(Node* root, int d){
// 	if(root == NULL){
// 		root = new Node(d);
// 		return root;
// 	}
//
// 	if(root->data < d){
// 		root->right = insertIntoBST(root->right, d);
// 	}
// 	else{
// 		root->left = insertIntoBST(root->left, d);
// 	}
// 	return root;
// }

// 🔸Time complexity: O(N^2)
// 🔸space complexity: O(1)

// 🔴approach 2:
//  Node* solve(vector<int> &preorder, int mini, int maxi, int &i) {
//      //base case
//      if( i >= preorder.size()) {
//          return NULL ;
//      }
//      //base case
//      if(preorder[i] < mini || preorder[i] > maxi) {
//          return NULL ;
//      }

//     Node* root = new Node(preorder[i]) ;
//	   i++;
//     root -> left = solve(preorder, mini, root->data, i) ;
//     root -> right = solve(preorder, root->data, maxi, i) ;

//     return root;
// }

// //main function
// Node* preorderToBST(vector<int> &preorder) {

//     int mini = INT_MIN ;
//     int maxi = INT_MAX ;
//     int i = 0;
//     return solve(preorder, mini, maxi, i) ;
// }
// 🔴Time complexity: O(N)       => O(3N)== O(N)
// 🔴space complexity: O(H)

//				//❓ Question : Binary Tree to BST

// Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact.
//  Example 1:

// Input:
//       1
//     /   \
//    2     3
// Output:
// 1 2 3
// Explanation:
// The converted BST will be
//       2
//     /   \
//    1     3

// Example 2:

// Input:
//           1
//        /    \
//      2       3
//    /
//  4
// Output:
// 1 2 3 4
// Explanation:
// The converted BST will be

//         3
//       /   \
//     2     4
//   /
//  1
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function binaryTreeToBST() which takes the root of the Binary tree as input and returns the root of the BST. The driver code will print inorder traversal of the converted BST.

// Expected Time Complexity: O(NLogN).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= Number of nodes <= 105

// 🔴approach :
//  class Solution{
//    public:
//     void inorder(Node* &root, vector<int>&q){
//          if(root==NULL)return ;

//         inorder(root->left,q);
//         q.push_back(root->data);
//         inorder(root->right,q);
//     }
//     void solve(Node* &root, vector<int>&q,int size,int &index){
//         if(root==NULL)return ;
//         if(index>=size)return;
//        solve(root->left,q,q.size(),index);
//         root->data=q[index];
//          index++;
//         solve(root->right,q,q.size(),index);
//     }
//     Node* binaryTreeToBST (Node* root)
//     {
//         vector<int>q;
//         inorder(root,q);
//         sort(q.begin(),q.end());
//         int index=0;
//         solve(root,q,q.size(),index);
//         return root;
//     }
// };
// 🔸time complexity:  O(2(N) + O(N logN))
// 🔸space complexity: O(N)

//				//❓Question: Balance a BST

// Given a Binary Search Tree, modify the given BST such that it is
// balanced and has minimum possible height. Return the balanced BST.

// Example1:
// Input:
//        30
//       /
//      20
//     /
//    10
// Output:
//      20
//    /   \
//  10     30

// Example2:
// Input:
//          4
//         /
//        3
//       /
//      2
//     /
//    1
// Output:
//       3            3           2
//     /  \         /  \        /  \
//    1    4   OR  2    4  OR  1    3
//     \          /                  \ 
//      2        1                    4

// Your Task:
// The task is to complete the function buildBalancedTree() which takes root as the input argument and returns the root of tree after converting the given BST into a balanced BST with minimum possible height. The driver code will print the height of the updated tree in output itself.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
// Here N denotes total number of nodes in given BST.

// Constraints:
// 1 <= N <= 105
// 1 <= Node data <= 109

// 🔴approach :

// class Solution{

//     public:
//     void inorder(Node* root, vector<int> &ans){
//         if(root==NULL){
//             return;
//         }
//         inorder(root->left,ans);
//         ans.push_back(root->data);
//         inorder(root->right,ans);
//     }

//     Node* buildtree(vector<int> &ans,int left,int right){
//         if(left > right){
//             return NULL;
//         }
//         else{
//             int mid= (left + right)/2;
//             Node* root=new Node(ans[mid]);
//             root->left=buildtree(ans,left,mid-1);
//             root->right=buildtree(ans,mid+1,right);

//         }
//     }

//     Node* buildBalancedTree(Node* root)
//     {
//         // Code here
//         vector<int> ans;
//         inorder(root,ans);

//         return buildtree(ans,0,ans.size()-1);
//     }
// };

//				//❓Question: Merge Two BST

// Given two BSTs, return elements of both BSTs in sorted form.

// Example 1:
// Input:
// BST1:
//        5
//      /   \
//     3     6
//    / \
//   2   4
// BST2:
//         2
//       /   \
//      1     3
//             \
//              7
//             /
//            6
// Output: 1 2 2 3 3 4 5 6 6 7
// Explanation:
// After merging and sorting the
// two BST we get 1 2 2 3 3 4 5 6 6 7.

// Example 2:
// Input:
// BST1:
//        12
//      /
//     9
//    / \    
//   6   11
// BST2:
//       8
//     /  \
//    5    10
//   /
//  2
// Output: 2 5 6 8 9 10 11 12
// Explanation:
// After merging and sorting the
// two BST we get 2 5 6 8 9 10 11 12.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function merge() which takes roots of both the BSTs as its input and returns an array of integers denoting the node values of both the BSTs in a sorted order.

// Expected Time Complexity: O(M+N) where M and N are the sizes of the two BSTs.
// Expected Auxiliary Space: O(Height of BST1 + Height of BST2 + M + N(for storing the answer)).

// Constraints:
// 1 ≤ Number of Nodes ≤ 105

// 🔴appraoch:
//     void inorder(Node* root , vector<int>&arr){
//          if(root == NULL){
//              return;
//          }
//          inorder(root->left,arr);
//          arr.push_back(root->data);
//          inorder(root->right,arr);
//      }
//      void helper(vector<int>&arr1 , vector<int>&arr2 , vector<int>&arr){

//         int i = 0 , j = 0;
//         while(i < arr1.size() && j < arr2.size()){
//             if(arr1[i] < arr2[j]){
//                 arr.push_back(arr1[i]);
//                 i++;
//             }
//             else{
//                 arr.push_back(arr2[j]);
//                 j++;
//             }
//         }
//         while(i < arr1.size()){
//             arr.push_back(arr1[i]);
//             i++;
//         }
//         while(j < arr2.size()){
//             arr.push_back(arr2[j]);
//             j++;
//         }

//     }
//     vector<int> merge(Node *root1, Node *root2)
//     {
//        vector<int> arr1 , arr2;
//        inorder(root1,arr1);
//        inorder(root2,arr2);

//        vector<int> arr;
//        helper(arr1,arr2,arr);
//        return arr;
//     }
// }
// 🔸time complexity: O(2(N+M))
// 🔸space complexity: O(2(arr1+arr2 ))

// 🔴approach :
//      void inorder(Node* root, vector<int>& result){
//          if(root == NULL){
//              return ;
//          }

//         inorder(root->left, result);
//         result.push_back(root->data);
//         inorder(root->right, result);
//     }
//     //Function to return a list of integers denoting the node
//     //values of both the BST in a sorted order.
//     vector<int> merge(Node *root1, Node *root2)
//     {
//        vector<int> result;
//        inorder(root1, result);
//        inorder(root2, result);

//        sort(result.begin(), result.end());
//        return result;
//     }
// };
// 🔸time complexity: O(N*logN + 2(N+M))
// 🔸space complexity: O(arr1+arr2)

//			//❓Question: Kth Largest Element

// Given a Binary Search Tree. Your task is to complete the function which will
// return the Kth largest element without doing any modification in Binary Search Tree.

// Example 1:
// Input:
//       4
//     /   \
//    2     9
// k = 2
// Output: 4

// Example 2:
// Input:
//        9
//         \ 
//           10
// K = 1
// Output: 10

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function kthLargest()
// which takes the root of the BST and an integer K as inputs and returns the Kth largest element in the given BST.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(H) where H is max recursion stack of height H at a given time.

// Constraints:
// 1 <= N <= 105
// 1 <= K <= N

// 🔴approach 1:
//  class Solution
//  {
//      public:
//      void helper(Node* root,int& k,int& ans)
//      {
//          if(root==NULL)
//          {
//              return;
//          }
//          helper(root->right,k,ans);
//          k--;
//          if(k==0)
//          {
//              ans=root->data;
//              return ;
//          }
//          helper(root->left,k,ans);
//      }

//     int kthLargest(Node *root, int k)
//     {
//         //Your code here
//         int ans;
//         helper(root,k,ans);
//         return ans;
//     }
// };
// 🔸time complexitY: O(N)
// 🔸space complexity: O(H)

// 🔴approach 2:
//   int kthLargest(Node *root, int K)
//      {
//          priority_queue<int> pq;
//          queue<Node*> q;
//          q.push(root);
//
//          while(!q.empty())
//          {
//              Node* curr = q.front();
//              q.pop();
//              if(curr->left)
//              {
//                  q.push(curr->left);
//              }
//              if(curr->right)
//              {
//                  q.push(curr->right);
//              }

//             pq.push(curr->data);
//         }

//         while(K>1)
//         {
//             pq.pop();
//             K--;
//         }
//         return pq.top();
//     }
// 🔸time complexitY: O(N)
// 🔸space complexity: O(2N)

// 				//❓Question: Kth smallest element in BST

// Given a BST and an integer K. Find the Kth Smallest
//  element in the BST using O(1) extra space.

// Example 1:
// Input:
//       2
//     /   \
//    1     3
// K = 2
// Output: 2
// Explanation: 2 is the 2nd smallest element in the BST

// Example 2:
// Input:
//         2
//       /  \
//      1    3
// K = 5
// Output: -1
// Explanation: There is no 5th smallest element in the BST as the size of BST is 3

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function KthSmallestElement()
// which takes the root of the BST and integer K as inputs and returns the Kth smallest element in the BST, if no such element exists return -1.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=Number of nodes<=10^5

// 🔴approach 1:
//  class Solution {
//    public:
//      int height = 0;
//      int KthSmallestElement(Node *root, int K) {
//          // add code here.
//          if(root == NULL)
//              return -1;
//          int left = KthSmallestElement(root -> left, K);
//          if(left != -1)
//              return left;
//          height++;
//          if(height == K)
//              return root -> data;
//          return KthSmallestElement(root -> right, K);
//      }
//  };
// 🔸time complexity: O(H)
// 🔸space complexity: O(1)

//				//❓ Question: Brothers from different Roots

// Given two BSTs containing N1 and N2 distinct nodes respectively and given a value x,
// your task is to complete the function countPairs(), that returns the count of all pairs of (a, b),
// where a belongs to one BST and b belongs to another BST, such that a + b = x.

// Example 1:
// Input:
// BST1:
//        5
//      /   \
//     3     7
//    / \   / \
//   2   4 6   8
// BST2:
//        10
//      /    \
//     6      15
//    / \    /  \
//   3   8  11   18
// x = 16
// Output:
// 3
// Explanation:
// The pairs are: (5, 11), (6, 10) and (8, 8)

// Example 2:
// Input:
// BST1:
//   1
//    \
//     3
//    /
//   2
// BST2:
//     3
//    / \
//   2   4
//  /
// 1
// x = 4
// Output:
// 3
// Explanation:
// The pairs are: (2, 2), (3, 1) and (1, 3)
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countPairs(), which takes two BST's as parameter in the form of root1 and root2 and the integer x, that returns the count of all pairs from both the BSTs whose sum is equal to x.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 106

// 🔴approach 1: Brute force approach 1110/1120
//  class Solution
//  {
//  public:
//      int ans = 0;
//      void solve(int temp, Node* root2, int x){
//          if(root2 == NULL)return;

//         if(root2->data + temp == x){
//             ans++;
//             return;
//         }
//         solve(temp, root2->left, x);
//         solve(temp, root2->right, x);
//     }

//     void inorder(Node* root1, Node* root2, int x){
//         if(root1 == NULL) return;

//         inorder(root1->left,root2,  x);
//          solve(root1->data,root2, x);
//         inorder(root1->right,root2,  x);
//     }

//     int countPairs(Node* root1, Node* root2, int x)
//     {
//         inorder(root1,root2, x);
//         return ans;
//     }
// };
// 🔸time complexity: O(H*H)
// 🔸space complexity: O(H)        //recursive stack space

// 🔴appraoch 2:
//  class Solution
//  {
//  public:
//      bool helper(Node* root, int x){
//          if(!root) return false;
//          if(root->data == x) return true;
//          return (root->data>x)? helper(root->left,x): helper(root->right,x);

//     }
//     int countPairs(Node* root1, Node* root2, int x)
//     {
//         queue<Node*> q;
//         q.push(root1);
//         int cnt = 0;
//         while(!q.empty()){
//             Node* node = q.front();
//             q.pop();
//             int temp = x-node->data;
//             if(helper(root2, temp)) cnt++;
//             if(node->left) q.push(node->left);
//             if(node->right) q.push(node->right);
//         }
//         return cnt;
//     }
// };
// 🔸time complexity: O(2H)
// 🔸space complexity: O(2H)        //queue space + recursive stack space

//				//❓Question: Median of BST

// Given a Binary Search Tree of size N, find the Median of its Node values.

// Example 1:
// Input:
//        6
//      /   \
//    3      8
//  /  \    /  \
// 1    4  7    9
// Output: 6
// Explanation: Inorder of Given BST will be:
// 1, 3, 4, 6, 7, 8, 9. So, here median will 6.

// Example 2:
// Input:
//        6
//      /   \
//    3      8
//  /   \    /
// 1    4   7
// Output: 5
// Explanation:Inorder of Given BST will be:
// 1, 3, 4, 6, 7, 8. So, here median will
// (4 + 6)/2 = 10/2 = 5.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findMedian() which takes the root of the Binary Search Tree as input and returns the Median of Node values in the given BST.
// Median of the BST is:

// If number of nodes are even: then median = (N/2 th node + (N/2)+1 th node)/2
// If number of nodes are odd : then median = (N+1)/2th node.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1<=N<=10000

// 🔴approach :
// void inorder(struct Node* root, vector<int>& temp){
//     if(root == NULL) return;
//     inorder(root->left, temp);
//     temp.push_back(root->data);
//     inorder(root->right, temp);
// }
// float findMedian(struct Node *root)
// {
//     vector<int> temp;
//     inorder(root, temp);

//      int n = temp.size();
//       if(n % 2 == 0){
//          return (temp[n/2-1] + temp[n/2])/2.0;
//       }
//       else{
//           return temp[n/2];
//       }
// }
// 🔸time complexity: O(H)
// 🔸space complexity: O(H)

//				//❓Question: Count BST node that lie in a given range

// Given a Binary Search Tree (BST) and a range l-h(inclusive), count the number of nodes in the BST that lie in the given range.
// The values smaller than root go to the left side
// The values greater and equal to the root go to the right side

// Example 1:
// Input:
//       10
//      /  \
//     5    50
//    /    /  \
//   1    40  100
// l = 5, h = 45
// Output: 3
// Explanation: 5 10 40 are the node in the range

// Example 2:
// Input:
//      5
//     /  \
//    4    6
//   /      \
//  3        7
// l = 2, h = 8
// Output: 5
// Explanation: All the nodes are in the given range.
// Your Task:
// This is a function problem. You don't have to take input. You are required to complete the function getCountOfNode() that takes root, l ,h as parameters and returns the count.
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 1 <= Number of nodes <= 100
// 1 <= l < h < 103

// 🔴appraoch :
// void inorder(Node* root, int l, int h, int& count){
//         if(root == NULL) return;

//         inorder(root->left, l, h, count);
//         if(root->data >= l && root->data <= h){
//             count++;
//         }
//         inorder(root->right, l, h, count);
//     }
//     int getCount(Node *root, int l, int h)
//     {
//        int count = 0;
//        inorder(root, l, h, count);
//        return count;
//     }
// 🔸time complexity: O(H)
// 🔸space complexity: O(H)      // stack space

//					//❓Question: Replace every element with the least greater element on its right

// Given an array arr[] of N integers and replace every element with the least greater element
// on its right side in the array. If there are no greater elements on the right side, replace it with -1.

// Example 1:
// Input:
// arr[] = {8, 58, 71, 18, 31, 32, 63, 92, 43, 3, 91, 93, 25, 80, 28}
// Output: {18, 63, 80, 25, 32, 43, 80, 93, 80, 25, 93, -1, 28, -1, -1}
// Explanation:
// The least next greater element of 8 is 18.
// The least next greater element of 58 is 63 and so on.

// Example 2:
// Input:
// arr[] = {2, 6, 9, 1, 3, 2}
// Output: {3, 9, -1, 2, -1, -1}
// Explanation:
// The least next greater element of 2 is 3.
// The least next greater element of 6 is 9.
// least next greater element for 9 does not
// exist and so on.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findLeastGreater() which takes an array arr[] of size N and returns a list as an output.

// Expected Time Complexity: O(N* log N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 1 <= A[i] <= 105

// 🔴approach :
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* insert(Node*& root, int val, Node*& succ){

//     if(root==NULL){
//       return root = new Node(val);
//     }

//     if(root->data > val ){
//         succ = root;
//         root->left = insert(root->left,val,succ);
//     }
//     else if(root->data <= val){
//         root->right = insert(root->right,val,succ);
//     }

//     return root;

// }
// class Solution{
//     public:
//     vector<int> findLeastGreater(vector<int>& arr, int n) {
//         Node* root = NULL;
//         vector<int> ans(n,-1);

//         for(int i=n-1;i>=0;i--){
//             Node* succ = NULL;
//             root = insert(root,arr[i],succ);
//             if(succ!=NULL) ans[i] = succ->data;
//         }

//         return ans;
//     }
// };
// 🔸time complexity: O(N*H)
// 🔸space complexity: O(H)
//

//			//❓ Question: Given n appointments, find all conflicting appointments

// Given n appointments, find all conflicting appointments.
// You will be given a list of appointments, where a single appointment contains the start time and end time. Your task is to find all of the conflicting appointments.
// An appointment is conflicting when there is another appointment between the start and end time of the current appointment.

// Sample Examples
// Input
//	list of appointments
//	{ {1,5}, {5, 8}, {4,5}, {6, 10}, {10,30}}

// Output
// [4 5] conflicting with [1 5]
// [6 10] conflicting with [5 8]

// 🔴Appraoch :
// #include <bits/stdc++.h>
// using namespace std;

// struct Appointment
// {
// 	int startTime;
// 	int endTime;
// };

// // node for interval tree
// class Node{
// public:
// 	// represents start time and end time
// 	Appointment *ap;
// 	int max;
// 	Node *left, *right;

// 	Node(Appointment a)
// 	{
// 		ap = new Appointment(a);
// 		max = a.endTime;
// 		left = right = nullptr;
// 	}
// };

// // function to insert new Node into interval tree
// Node *insert(Node *root, Appointment a){
// 	if (!root) return new Node(a);

// 	// getting start time of root node
// 	int st = root->ap->startTime;

// 	// if root's start time is smaller the current appointment goes to left subtree
// 	if (a.startTime < st)
// 		root->left = insert(root->left, a);

// 	// else the current appointment goes to right subtree
// 	else
// 		root->right = insert(root->right, a);

// 	// updating the max value
// 	if (root->max < a.endTime)
// 		root->max = a.endTime;

// 	return root;
// }

// // function to check whether two appointments conflict or not
// bool isConflicting(Appointment a1, Appointment a2)
// {
// 	// appointments are conflicting
// 	if (a1.startTime < a2.endTime && a2.startTime < a1.endTime)
// 		return true;

// 	// appointments are not conflicting
// 	return false;
// }

// // searching for conflicting appointments
// Appointment *searchAppointments(Node *root, Appointment ap)
// {
// 	if (!root)
// 		return nullptr;

// 	// given appointment is conflicting
// 	if (isConflicting(ap, *root->ap))
// 		return root->ap;

// 	if (root->left && root->left->max >= ap.startTime)
// 		return searchAppointments(root->left, ap);

// 	return searchAppointments(root->right, ap);
// }

// // function to print the conflicting appointments
// void printConflicting(vector<Appointment> appointments)
// {
// 	// creating interval tree with first appointment
// 	Node *root = nullptr;
// 	root = insert(root, appointments[0]);

// 	// iterating rest of the appointments
// 	for (int i = 1; i < appointments.size(); i++)
// 	{

// 		// checking if the current appointment conflicts with any other appointment
// 		Appointment *ap = searchAppointments(root, appointments[i]);
// 		if (ap)
// 		{
// 			cout << "[" << appointments[i].startTime << " " << appointments[i].endTime << "]\t";
// 			cout << "conflicts with\t";
// 			cout << "[" << ap->startTime << " " << ap->endTime << "]\n";
// 		}

// 		// inserting the current appointment into the interval tree
// 		root = insert(root, appointments[i]);
// 	}
// }

// // main function
// int main()
// {
// 	// list of appointments
// 	vector<Appointment> appointments = {{1, 5}, {5, 8}, {4, 5}, {6, 10}, {10, 30}};
// 	// printing conflicting appointments
// 	printConflicting(appointments);

// 	return 0;
// }
// 🔸Time complexity: O(N * H)
// 🔸space complexity: O(n)
//

//				//❓Questoin: Preorder to PostOrder

// Given an array arr[] of N nodes representing preorder traversal of some BST. You have to build the exact PostOrder from the given given preorder traversal.
// In Pre-Order traversal, the root node is visited before the left child and right child nodes.

// Example 1:
// Input:
// N = 5
// arr[]  = {40,30,35,80,100}
// Output: 35 30 100 80 40
// Explanation: PreOrder: 40 30 35 80 100
// Therefore, the BST will be:
//               40
//            /      \
//          30       80
//            \        \   
//            35      100
// Hence, the postOrder traversal will
// be: 35 30 100 80 40

// Example 2:
// Input:
// N = 8
// arr[]  = {40,30,32,35,80,90,100,120}
// Output: 35 32 30 120 100 90 80 40
// Your Task:
// You need to complete the given function and return the root of the tree. The driver code will then use this root to print the post order traversal.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 103
// 1 <= arr[i] <= 104

// 🔴Approach :
// class Solution{
// public:
//      Node* insertBST(Node* root,int data){
//         if(root==NULL){
//             return newNode(data);
//         }else if(data > root->data){
//             root->right = insertBST(root->right,data);
//         }else{
//             root->left = insertBST(root->left,data);
//         }
//         return root;
//     }

//     //Function that constructs BST from its preorder traversal.
//     Node* post_order(int pre[], int size)
//     {
//         Node* root = NULL;
//         for(int i=0;i<size;i++){
//             root = insertBST(root,pre[i]);
//         }
//         return root;
//     }
// };
// 🔸Time complexity: O(H)           // H = height of BST
// 🔸space complexity: O(H)          // H = Postorder BST space
//

//				//❓Question: Whether BST contains DeadEnd

// Given a Binary Search Tree that contains unique positive integer values greater than 0.
// The task is to complete the function isDeadEnd which returns true if the BST contains
// a dead end else returns false. Here Dead End means a leaf node,
// at which no other node can be inserted.

// Example 1:
// Input :
//                8
//              /   \ 
//            5      9
//          /  \     
//         2    7
//        /
//       1

// Output :
// Yes
// Explanation :
// Node 1 is a Dead End in the given BST.

// Example 2:
// Input :
//               8
//             /   \ 
//            7     10
//          /      /   \
//         2      9     13

// Output :
// Yes
// Explanation :
// Node 9 is a Dead End in the given BST.
// Your Task: You don't have to input or print anything. Complete the function isDeadEnd() which takes BST as input and returns a boolean value.

// Expected Time Complexity: O(N), where N is the number of nodes in the BST.
// Expected Space Complexity: O(N)

// Constraints:
// 1 <= N <= 1001
// 1 <= Value of Nodes <= 10001

// 🔴approach :
// class Solution{
//   public:
//     bool rec(Node* root,int mini,int maxi){
//       if(!root) return false;

//       if(maxi-mini==0) return true;

//       return rec(root->left,mini,root->data-1) || rec(root->right,root->data+1,maxi);
//     }
//     bool isDeadEnd(Node *root)
//     {
//         //Your code here
//         return rec(root,1,INT_MAX);
//     }
// };
// 🔸Time complexity: O(H)           // H = height of tree
// 🔸space complexity: O(N)          // N = recursion stack space
//

// 🔴approach same but cleaning the code:
// class Solution{
//   public:
//     bool rec(Node* root,int mini,int maxi){
//       if(!root) return false;

//       if(maxi-mini==0) return true;

//       int left = rec(root->left,mini,root->data-1)
//		 int right = rec(root->right,root->data+1,maxi);
//
//		return left || right;
//     }
//     bool isDeadEnd(Node *root)
//     {
//         //Your code here
//         return rec(root,1,INT_MAX);
//     }
// };
// 🔸Time complexity: O(H)           // H = height of tree
// 🔸space complexity: O(N)          // N = recursion stack space
//

//				//❓Question: Largest BST

// Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.
// Note: Here Size is equal to the number of nodes in the subtree.

// Example 1:
// Input:
//         1
//       /   \
//      4     4
//    /   \
//   6     8
// Output: 1
// Explanation: There's no sub-tree with size
// greater than 1 which forms a BST. All the
// leaf Nodes are the BSTs with size equal to 1.

// Example 2:
// Input: 6 6 3 N 2 9 3 N 8 8 2
//             6
//         /       \
//        6         3
//         \      /   \
//          2    9     3
//           \  /  \
//           8 8    2
// Output: 2
// Explanation: The following sub-tree is a
// BST of size 2:
//        2
//     /    \ 
//    N      8

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function largestBst() that takes the root node of the Binary Tree as its input and returns the size of the largest subtree which is also the BST. If the complete Binary Tree is a BST, return the size of the complete Binary Tree.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 1 ≤ Number of nodes ≤ 105
// 1 ≤ Data of a node ≤ 106

// 🔴 Appraoch :
// class Solution{

// public:
//     bool isBst(Node* root, int low , int high){
//         if(root==NULL) return true;
//         if(low>=root->data || high<=root->data){
//             return false;
//         }
//         return (isBst(root->left,low,root->data)
//         && isBst(root->right,root->data,high));
//     }

//     int getSize(Node* root){
//         if(root==NULL) return 0;
//         return 1+getSize(root->left)+getSize(root->right);
//     }

//     void call(Node* root,int &ans){
//          if(root==NULL) return;
//          call(root->left,ans);
//          call(root->right,ans);
//             if(isBst(root,INT_MIN,INT_MAX)) {
//                 ans = max(ans,getSize(root));
//             }
//          return;
//     }

//     int largestBst(Node *root)
//     {
//         //Your code here
//         int ans=0;
//         call(root,ans);
//         return ans;
//     }
// };
// 🔸Time complexity: O(H*H)           // H = height of tree
// 🔸space complexity: O(H*H)          // N = recursion stack space
//
