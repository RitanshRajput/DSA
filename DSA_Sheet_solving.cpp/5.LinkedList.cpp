
//                      //🔴🔴 LinkedList 🔴🔴 //

//                  //❓Question: Reverse a linked List

// Given a linked list of N nodes. The task is to reverse this list.

// Example 1:
// Input:
// LinkedList: 1->2->3->4->5->6
// Output: 6 5 4 3 2 1
// Explanation: After reversing the list, 
// elements are 6->5->4->3->2->1.

// Example 2:
// Input:
// LinkedList: 2->7->8->9->10
// Output: 10 9 8 7 2
// Explanation: After reversing the list,
// elements are 10->9->8->7->2.

// Your Task:
// The task is to complete the function reverseList() with head reference as the only argument
// and should return new head after reversing the list.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= N <= 104

//🔴approach : Iterative 
// Node* reverseLinkedList( Node* head) {
      
//     // if node is empty or there is only single node
//     if( head == NULL || head -> next == NULL) {
//         return head ;
//     }
    
//     // else if there are more than one node
//     Node* prev = NULL ;
//     Node* curr = head ;
//     Node* forward = NULL ;

//      while( curr != NULL)  {
//         forward = curr -> next ;
//         curr -> next = prev ;
//         prev = curr ;
//         curr = forward ;
//      }

//      return prev ;            // prev will become head atlast

// }
//🔸Time complexity : O(N)
//🔸space complexity : O(1)

//🔴apporach: strivers (iterative)
//   struct Node* reverseList(struct Node *head){
          
//       if(head==NULL || head->next==NULL){
//             return head;
//         }
        
//        struct Node* dummy = NULL ;
       
//        while(head){
//            struct Node* next = head->next ;
//            head->next = dummy;
//            dummy = head;
//            head = next;
//        }
//        return dummy ;
//     }
//🔸Time complexity : O(N)
//🔸space complexity : O(1)



//🔴approach : using stack
//   struct Node* reverseList(struct Node *head)
//     {
//      stack<int> s;
//      Node *temp=head;
//      while(temp!=NULL){
//          s.push(temp->data);
//          temp=temp->next;
//      }
//      temp=head;
//      while(temp!=NULL){
//          temp->data=s.top();
//          temp=temp->next;
//          s.pop();
//      }
     
//      return head;
//     }
//🔸time complexity: O(2N)
//🔸space complexity: O(1)



//🔴 approach: Using Recursion
//   struct Node* reverseList(struct Node *head){
          
//       if(head==NULL || head->next==NULL){
//             return head;
//         }
        
//         // recursion:
//         Node *chotahead=reverseList(head->next); // This will reverse the whole L.L except the head.
        
//         head->next->next=head;
//         head->next=NULL;
//         return chotahead;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(n)


//🔴approach : Recursive
//   ListNode* ansNode=nullptr;
//     void reverse(ListNode* head,ListNode* prev)
//     {
//         if(head==nullptr)
//         {
//             ansNode=prev;
//             return;
//         }
//         reverse(head->next,head);
//         head->next=prev;
//     }
    
//     ListNode* reverseList(ListNode* head) {
//         if(head==nullptr)
//             return nullptr;
//         reverse(head,nullptr);
//         return ansNode;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(n)




//                 //❓Question: Reverse a linked list in group of given size

// Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function)
// in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, 
// should be considered as a group and must be reversed (See Example 2 for clarification).

// Example 1:
// Input:
// LinkedList: 1->2->2->4->5->6->7->8
// K = 4 
// Output: 4 2 2 1 8 7 6 5 
// Explanation: 
// The first 4 elements 1,2,2,4 are reversed first 
// and then the next 4 elements 5,6,7,8. Hence, the 
// resultant linked list is 4->2->2->1->8->7->6->5.

// Example 2:
// Input:
// LinkedList: 1->2->3->4->5
// K = 3
// Output: 3 2 1 5 4 
// Explanation: 
// The first 3 elements are 1,2,3 are reversed 
// first and then elements 4,5 are reversed.Hence, 
// the resultant linked list is 3->2->1->5->4.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function reverse()
// which should reverse the linked list in group of size k and return the head of the modified linked list.

// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= k <= N

//🔴approach :  recursive 
// struct node *reverse (struct node *head, int k)
//     { 
//         // Complete this method
//     if(head == NULL) return head;
    
//     node * nextNode = NULL;
//     node * currentNode = head;
//     node * previousNode = NULL;
//     int count = 1;
    
//     while(currentNode && count <= k)
//     {
//         nextNode = currentNode -> next;
//         currentNode -> next = previousNode;
//         previousNode = currentNode;
//         currentNode = nextNode;
//         count++;
//     }
    
//     if(nextNode)
//         head -> next = reverse(nextNode, k);
//     return previousNode;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(k)



//              //❓Question: (GFG) Pairwise swap element in a linkedlist

// Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
// For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
// Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

// Example 1:
// Input:
// LinkedList: 1->2->2->4->5->6->7->8
// Output: 
// 2 1 4 2 6 5 8 7
// Explanation: 
// After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.

// Example 2:
// Input:
// LinkedList: 1->3->4->7->9->10->1
// Output: 
// 3 1 7 4 10 9 1
// Explanation: 
// After swapping each pair considering (1,3), (4, 7), (9, 10).. so on as pairs, we get 3, 1, 7, 4, 10, 9, 1 as a new linked list.
// Your Task:
// The task is to complete the function pairWiseSwap() which takes the head node as the only argument and returns the head of modified linked list.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 105


//🔴approach :
//     Node* pairWiseSwap(Node* head) 
//   {
//     // Check if the list is empty or has only one node
//     if (!head || !head->next) {
//         return head;
//     }

//     Node* dummy = new Node(0); // Create a dummy node to simplify swapping
//     dummy->next = head;

//     Node* prev = dummy;
//     Node* curr = head;

//     while (curr && curr->next) {
//         Node* nextNode = curr->next;
        
//         // Swap the current node and the next node
//         curr->next = nextNode->next;
//         nextNode->next = curr;
//         prev->next = nextNode;

//         // Move to the next pair
//         prev = curr;
//         curr = curr->next;
//     }

//     head = dummy->next; // Update the new head
//     delete dummy; // Delete the dummy node

//     return head;
//   }
//🔸time complexity: O(n)
//🔸space complexity: O(N)


//              //❓Question:  Detect Loop in linked list

// Given a linked list of N nodes. The task is to check if the linked list has a loop.
// Linked list can contain self loop.

// Example 1:
// Input:
// N = 3
// value[] = {1,3,4}
// x(position at which tail is connected) = 2
// Output: True
// Explanation: In above test case N = 3.
// The linked list with nodes N = 3 is
// given. Then value of x=2 is given which
// means last node is connected with xth
// node of linked list. Therefore, there
// exists a loop.

// Example 2:
// Input:
// N = 4
// value[] = {1,8,3,4}
// x = 0
// Output: False
// Explanation: For N = 4 ,x = 0 means
// then lastNode->next = NULL, then
// the Linked list does not contains
// any loop.
// Your Task:
// The task is to complete the function detectloop() which contains reference to the head as only argument.  
// This function should return true if linked list contains loop, else return false.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 104
// 1 ≤ Data on Node ≤ 103

//🔴Approach : flyod's tortoise(slow and fast) appraoch
//   bool detectLoop(Node* head)
//     {
//         Node* slow = head;
//         Node* fast = head;
        
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next ;
//             fast = fast->next->next;
            
//             if(fast == slow) return true;
//         }
        
//         return false;
//     }
//🔸time complexity: O(N)
//🔸slow complexity: O(1)



//                  //❓Question: Remove loop in linkedlist

// Given a linked list of N nodes such that it may contain a loop.
// A loop here means that the last node of the link list is connected to the node at position X(1-based index). 
// If the link list does not have any loop, X=0.

// Remove the loop from the linked list, if it is present, 
// i.e. unlink the last node which is forming the loop.

// Example 1:
// Input:
// N = 3
// value[] = {1,3,4}
// X = 2
// Output: 1
// Explanation: The link list looks like
// 1 -> 3 -> 4
//      ^    |
//      |____|    
// A loop is present. If you remove it 
// successfully, the answer will be 1. 

// Example 2:
// Input:
// N = 4
// value[] = {1,8,3,4}
// X = 0
// Output: 1
// Explanation: The Linked list does not 
// contains any loop. 

// Example 3:
// Input:
// N = 4
// value[] = {1,2,3,4}
// X = 1
// Output: 1
// Explanation: The link list looks like 
// 1 -> 2 -> 3 -> 4
// ^              |
// |______________|
// A loop is present. 
// If you remove it successfully, 
// the answer will be 1. 

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function removeLoop() which takes the head of the linked list as the input parameter. Simply remove the loop in the list (if present) without disconnecting any nodes from the list.
// Note: The generated output will be 1 if your submitted code is correct.

// Expected time complexity: O(N)
// Expected auxiliary space: O(1)

// Constraints:
// 1 ≤ N ≤ 10^4

//🔴approach : 
//  void removeLoop(Node* head)
//     {
//         Node *slow = head; 
//         Node *fast = head;
//         Node *prev = NULL;
        
//         //flyod's algo to detect loop iffound then break (using prev )
//         while(fast!=NULL && fast->next!=NULL){
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
            
//             if(fast==slow) break;
//         }
        
//         //if not found return 
//         if(slow!=fast) return; 
    
        
//         if(slow==head && fast==head){
//             prev->next=NULL;
//             return;
//         }
        
//         slow=head;
//         while(slow->next!=fast->next){
//              slow = slow->next;
//              fast = fast->next;
//         }
//         fast->next = NULL;
//     }
//🔸time complexity : O(2N)
//🔸space compplexity: O(1)


//              //❓Question: Find the first node of loop in linkedlist

// Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. 
// If a loop is present return the node data of the first node of the loop else return -1.

// Example 1:
// Input:
// 1 -> 3 -> 2 -> 4 -> 5->
// ^                     |
// |_____________________|
// Output: 3
// Explanation:
// We can see that there exists a loop 
// in the given linked list and the first
// node of the loop is 3.
 
// Example 2:
// Input:
// 1->3->2->1
// Output: -1
// Explanation: No loop exists in the above
// linked list.So the output is -1.
 
// Your Task:
// The task is to complete the function findFirstNode() which contains reference to the head as only argument. 
// This function should return the value of the first node of the loop if the linked list contains a loop, 
// else return -1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= Data on Node <= 106 
// 0 <= pos <= N

//🔴approach: Using remove loop code
//   int findFirstNode(Node* head)
//     {
//         Node *slow = head; 
//         Node *fast = head;
        
//         //flyod's algo to detect loop iffound then break (using prev )
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
            
//             if(fast==slow) break;
//         }
        
//         //if loop not found return 
//         if(slow!=fast) return -1; 
    
        
//         if(slow==head && fast==head){
//             return head->data ;
//         }
        
//         slow=head;
//         while(slow->next!=fast->next){
//              slow = slow->next;
//              fast = fast->next;
//         }
//         return (fast->next->data);
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)

//🔴approach : using Unordered_set<Node*>
//   int findFirstNode(Node* head)
//   {
//       unordered_set<Node*> visited;
//       Node* current = head;
//       Node* prev = NULL;
//       while(current!=NULL)
//       {
//           if(visited.find(current)!=visited.end())
//           {
//               return current->data;
//           }
//           visited.insert(current);
//           current=current->next;
//       }
//       return -1;
//   }
//🔸time complexity: O(1)
//🔸space complexity: O(N)
