
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
//🔸space complexity: O(1)




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