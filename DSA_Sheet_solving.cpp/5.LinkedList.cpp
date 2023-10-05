
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
