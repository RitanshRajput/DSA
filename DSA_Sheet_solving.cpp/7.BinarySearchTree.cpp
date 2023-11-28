

//                //❓Question : Search a node in BST

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
// You don't need to read input or print anything. Complete the function search()which returns true if the node with value x is present in the BSTelse returns false.

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
//    1  4   7         2          7
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
 

//🔴approach : 
// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//          if(root==NULL)return NULL;

//         if(key<root->val){
//             root->left=deleteNode(root->left,key);
//         }
//         else if(key>root->val){
//             root->right=deleteNode(root->right,key);
//         }
//         else{
//             if(!root->left && !root->right){
//                 delete root;
//                 return NULL;
//             }
//              else if(!root->left || !root->right){
//                 TreeNode* temp=root->left?root->left:root->right;
//                 delete root;
//                 return temp;
//             }
//             else if(root->left && root->right){
//                 TreeNode* temp=root;
//                 temp=temp->left;
//                 while(temp->right)temp=temp->right;
//                 root->val=temp->val;
//                 root->left=deleteNode(root->left,temp->val);
//             }
//         }
//         return root;
//     }
// };
//🔴time complexity: O(H)
//🔴space complexity: O(1) 