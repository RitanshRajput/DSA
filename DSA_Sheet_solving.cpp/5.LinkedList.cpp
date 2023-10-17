
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
//🔸space complexity: O(N)



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
//   Node* ansNode= NULL;
//     void reverse(Node* head, Node* prev)
//     {
//         if(head==NULL)
//         {
//             ansNode=prev;
//             return;
//         }
//         reverse(head->next,head);
//         head->next=prev;
//     }
    
//     Node* reverseList(Node* head) {
//         if(head==NULL)
//             return NULL;
//         reverse(head,NULL);
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



//              //❓Question: Remove Duplicate element from the sorted linkedlist

// Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values)
// from the given list (if exists).
// Note: Try not to use extra space. The nodes are arranged in a sorted way.

// Example 1:
// Input:
// LinkedList: 2->2->4->5
// Output: 2 4 5
// Explanation: In the given linked list 
// 2 ->2 -> 4-> 5, only 2 occurs more 
// than 1 time. So we need to remove it once.

// Example 2:
// Input:
// LinkedList: 2->2->2->2->2
// Output: 2
// Explanation: In the given linked list 
// 2 ->2 ->2 ->2 ->2, 2 is the only element
// and is repeated 5 times. So we need to remove
// any four 2.
// Your Task:
// The task is to complete the function removeDuplicates() which takes the head of input linked list as input. 
// The function should remove the duplicates from linked list and return the head of the linkedlist.

// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)

// Constraints:
// 1 <= Number of nodes <= 105

//🔴appraoch : 
// Node *removeDuplicates(Node *head)
// {
//     Node* prev = head;
    
//     while(prev->next != NULL){
//         if(prev->data == prev->next->data){
//             prev->next = prev->next->next ;
//         }
//         else{
//             prev = prev->next ;
//         }
//     }
    
//     return head;
// }
//🔸time complexity : O(n)
//🔸space complexity: O(n)     // node



//             //❓Question: Remove duplicates from un-sorted linkedlist

// Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List.
// When a value appears in multiple nodes, the node which appeared first should be kept, 
// all others duplicates are to be removed.

// Example 1:
// Input:
// N = 4
// value[] = {5,2,2,4}
// Output: 5 2 4
// Explanation:Given linked list elements are
// 5->2->2->4, in which 2 is repeated only.
// So, we will delete the extra repeated
// elements 2 from the linked list and the
// resultant linked list will contain 5->2->4

// Example 2:
// Input:
// N = 5
// value[] = {2,2,2,2,2}
// Output: 2
// Explanation:Given linked list elements are
// 2->2->2->2->2, in which 2 is repeated. So,
// we will delete the extra repeated elements
// 2 from the linked list and the resultant
// linked list will contain only 2.
// Your Task:
// You have to complete the method removeDuplicates() which takes 1 argument: the head of the linked list.  Your function should return a pointer to a linked list with no duplicate element.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= size of linked lists <= 106
// 0 <= numbers in list <= 104

//🔴approach : iterative
// Node * removeDuplicates( Node *head) {

//     if (head == NULL) return head;

//     Node* current = head;

//     while (current != NULL) {
//         Node* runner = current;

//         while (runner->next != NULL) {
//             if (runner->next->data == current->data) {
//                 Node* temp = runner->next;
//                 runner->next = runner->next->next;
//                 delete temp;
//             } else {
//                 runner = runner->next;
//             }
//         }

//             current = current->next;
//     }

//         return head;
// }
//🔸time complexity: O(n^2)
//🔸space complexity: O(1)    // head of nodes


//🔴 approach : unordered_map
// Node * removeDuplicates( Node *head)  {

//     map<int,bool> visited;

//     if(head==NULL){
//         return NULL;
//     }

//     Node* temp = head;
     
//     while(temp->next!=NULL){
//         visited[temp->data] = true;

//         if(visited[temp->next->data]==true){
//             temp->next=temp->next->next;
//         }
//         else{
//             temp=temp->next;
//         }
//     }
//      return head;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)        // number of node



//          //❓Question: Remove Last element to the front of the linkedlist

// You are given the head of a Linked List. You have to move the last element to the front of the Linked List 
// and return the list.

// Example 1:
// Input:
// N = 5
// List = {2,5,6,2,1}
// Output:
// {1,2,5,6,2}
// Explanation:
// In the given linked list, the last element is 1,
// after moving the last element to the front the
// linked list will be {1,2,5,6,2}.
 
// Example 2:
// Input:
// N = 1
// List = {2}
// Output:
// {2}
// Explanation:
// Here 2 is the only element so, the linked list
// will remain the same.
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function moveToFront() which takes the address of the head of the linked list and returns the modified linked list.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 0 <= Elements of List <= 109
// Sum of N over all test cases doesn't exceeds 106

//🔴approach : 
// ListNode *moveToFront(ListNode *head){
        
//         if(head == NULL || head->next == NULL) {
//             return head;
//         }
        
//         ListNode* prev = head;
//         ListNode* curr = head->next;
        
//         while(curr->next != NULL){
//             prev = prev->next;
//             curr = curr->next;
//         }
        
//         curr->next = head;
//         prev->next = NULL;
        
//         return curr;
//     }
//🔸 time complexity: O(N)
//🔸 space complexity: O(1)


//              //❓Question: Add 1 to a number represented as linked list

// A number N is represented in Linked List such that each digit corresponds to a node in linked list. 
// You need to add 1 to it.

// Example 1:
// Input:
// LinkedList: 4->5->6
// Output: 457
// Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 

// Example 2:
// Input:
// LinkedList: 1->2->3
// Output: 124 
// Your Task:
// Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
// Note: The head represents the left-most digit of the number.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= N <= 1021

//🔴appraoch : 
//     Node* reverse(Node* head) {
        
//     if(head->next == NULL)
//         return head;
        
//         Node* headNext = head->next;
//         Node* newHead  = reverse(head->next);
//         headNext->next = head;
//         head->next = NULL;
//     return newHead;
//  }
 
// class Solution {
//     public:
    
//     Node* addOne(Node *head) 
//     {
//         Node* h = reverse(head);
//         Node* preptr = NULL;
//         Node* ptr = h;
//         int carry = 1;
        
//         while(ptr) {
//             int cur = (ptr->data+carry) ;
//             ptr->data = cur%10;
//             carry=cur/10;   
//             if(carry==0)
//                 break;
//             preptr = ptr;
//             ptr = ptr->next;
//         }
        
//         if(carry) {
//             preptr->next = new Node(carry);
//         }
            
//         return reverse(h);
//     }
// };
//🔸time complexity  : O(2N)
//🔸space complexity : O(N)


//              //❓Question: Add two numbers represented by linkedlist

// Given two decimal numbers represented by two linked lists of size N and M respectively. 
// The task is to return a linked list that represents the sum of these two numbers.

// For example, the number 190 will be represented by the linked list, 1->9->0->null, 
// similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, 
// which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

// Example 1:
// Input:
// N = 2
// valueN[] = {4,5}
// M = 3
// valueM[] = {3,4,5}
// Output: 3 9 0  
// Explanation: For the given two linked
// list (4 5) and (3 4 5), after adding
// the two linked list resultant linked
// list will be (3 9 0).

// Example 2:
// Input:
// N = 2
// valueN[] = {6,3}
// M = 1
// valueM[] = {7}
// Output: 7 0
// Explanation: For the given two linked
// list (6 3) and (7), after adding the
// two linked list resultant linked list
// will be (7 0).

// Your Task:
// The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

// Constraints:
// 1 <= N, M <= 5000

//🔴approach : reverse -> add -> reverse

//  struct Node* reverse(struct Node* head){
//         Node *curr = head;
//         Node *next = NULL;
//         Node *prev = NULL;
        
//         while(curr!=NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
    
    
//     void insertAtTail(struct Node* &head, struct Node* &tail, int val){
//         Node* temp = new Node(val);
//         if(head==NULL){
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else{
//             tail->next=temp;
//             tail = temp;
//         }
//     }
    
//     struct Node* add(struct Node* first, struct Node* second){
//         int carry = 0;
//         Node* ansHead = NULL, *ansTail = NULL;
        
//         while(first!=NULL || second!=NULL || carry!=0){
//             int val1 = 0;
//             if(first!=NULL) val1 = first->data;
//             int val2 = 0;
//             if(second!=NULL) val2 = second->data;
            
//             int sum = carry + val1 + val2;
//             int digit = sum%10;
            
//             //create Node and add in answer linked list
//             insertAtTail(ansHead, ansTail, digit);
            
//             carry = sum/10;
//             if(first != NULL) first = first->next;
//             if(second!= NULL) second =  second->next;
//         }
//         return ansHead;
//     }
    
    
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
//         //step 1: Reverse LL's
//         first = reverse(first);
//         second = reverse(second);
        
//         //step 2: Add
//         Node *ans = add(first, second);
        
//         //step 3: reverse back the ans
//         ans = reverse(ans);
        
//         return ans;
//     }
//🔸Time complexity : O(2N+M + ans)          // ans = total number of final nodes
//🔸space complexity : O(ans)               // total sum of two ll



//                  //❓Question: Intersection of two sorted linked list

// Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with its own memory the original lists should not be changed.
// Note: The linked list elements are not necessarily distinct.

// Example 1:
// Input:
// L1 = 1->2->3->4->6
// L2 = 2->4->6->8
// Output: 2 4 6
// Explanation: For the given first two
// linked list, 2, 4 and 6 are the elements
// in the intersection.

// Example 2:
// Input:
// L1 = 10->20->40->50
// L2 = 15->40
// Output: 40
// Your Task:
// The task is to complete the function intersection() which should find the intersection of two linked list and add all the elements in intersection to the third linked list and return the head of the third linked list.

// Expected Time Complexity : O(n+m)
// Expected Auxilliary Space : O(n+m)
// Note: n,m are the size of the linked lists.

// Constraints:
// 1 <= size of linked lists <= 5000
// 1 <= Data in linked list nodes <= 104


//🔴approach :
// Node* reverse(Node* head) {
    
//     Node* temp = NULL ;
    
//     while(head != NULL) {
//         Node* forward = head->next;
//         head->next = temp;
//         temp = head;
//         head = forward;
//     }
    
//     return temp ;
// }

// Node* findIntersection(Node* head1, Node* head2)
// {
//     Node* temp = NULL ;
    
//     while(head1 != NULL && head2 != NULL){
        
//         if(head1->data == head2->data){
//             Node* ansNode = new Node(head1->data) ;
//             ansNode->next = temp ;
//             temp = ansNode;
            
//             head1 = head1->next ;
//             head2 = head2->next ;
//         }  
//         else if(head1->data > head2->data) {
//             head2 = head2->next;
//         }
//         else{
//             head1 = head1->next;
//         }
//     }
    
//     return reverse(temp);
// }
//🔸time complexity:  O(min(N,M) + ansNode)
//🔸space complexity: O(min(N,M))


//🔴appraoch : Optimised 
// Node* findIntersection(Node* head1, Node* head2)
// {
//     if(head1 == NULL || head2 == NULL){
//         return NULL;
//     }
    
//     Node* ansHead = NULL;
//     Node* tail = NULL;
    
//     while(head1!=NULL &&head2!=NULL){
//         if(head1 -> data == head2 -> data){
//             Node* newNode = new Node(head1 -> data);
//             if(ansHead == NULL){
//                 ansHead = newNode;
//                 tail = newNode;
//             }
//             else{
//                 tail -> next = newNode;
//                 tail = newNode;
//             }
//             head1 = head1 -> next;
//             head2 = head2 -> next;
//         }
//         else if(head1 -> data < head2 -> data){
//             head1 = head1 -> next;
//         }
//         else{
//             head2 = head2 -> next;
//         }
//     }
    
//     return ansHead;
// }
// 🔸time complexity : O(min(N, M))
// 🔸space complexity: O(min(N,M))


//                      //❓ Question : Intersection Point in Y Shaped Linked Lists

// Given two singly linked lists of size N and M, 
// write a program to get the point where two linked lists intersect each other.

// Example 1:
// Input:
// LinkList1 = 3->6->9->common
// LinkList2 = 10->common
// common = 15->30->NULL
// Output: 15
// Explanation:
// Y ShapedLinked List

// Example 2:
// Input: 
// Linked List 1 = 4->1->common
// Linked List 2 = 5->6->1->common
// common = 8->4->5->NULL
// Output: 8
// Explanation: 

// 4              5
// |              |
// 1              6
//  \             /
//   8   -----  1 
//    |
//    4
//    |
//   5
//   |
//   NULL    

// Your Task:
// You don't need to read input or print anything. The task is to complete the function intersetPoint() which takes the pointer to the head of linklist1(head1) and linklist2(head2) as input parameters and returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should return -1.
// Challenge : Try to solve the problem without using any extra space.

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N + M ≤ 2*105
// -1000 ≤ value ≤ 1000

//🔴approach : 
// int intersectPoint(Node* head1, Node* head2)
// {
//    int size1 = 0;
//    int size2 = 0;
//    Node* temp1 = head1;
//    Node* temp2 = head2;
   
//    while(temp1 != NULL){
//        size1++ ;
//        temp1 = temp1->next;
//    }
   
//    while(temp2 != NULL){
//        size2++ ;
//        temp2 = temp2->next;
//    }
   
//    int intersect = 0 ;
   
//    if(size1 > size2){
//        intersect = size1-size2;
//        while(intersect != 0){
//            head1 = head1->next ;
//            intersect-- ;
//        }
//    }
//    else{
//        intersect = size2-size1;
//        while(intersect != 0){
//            head2 = head2->next ;
//            intersect-- ;
//        }
//    }
   
//    while(head1 != NULL){
//        if(head1 == head2){
//            return head1->data;
//        }
//        else{
//            head1 = head1->next;
//            head2 = head2->next;
//        }
//    }
   
//    return -1;
// }
//🔸time complexity: O(M)        // max size node
//🔸space complexity: O(N+M)     // size of both nodes



//              //❓Question: Merge sort for Linked list

// Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
// Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

// Example 1:
// Input:
// N = 5
// value[]  = {3,5,2,4,1}
// Output: 1 2 3 4 5
// Explanation: After sorting the given
// linked list, the resultant matrix
// will be 1->2->3->4->5.

// Example 2:
// Input:
// N = 3
// value[]  = {9,15,0}
// Output: 0 9 15
// Explanation: After sorting the given
// linked list , resultant will be
// 0->9->15.

// Your Task:
// For C++ and Python: The task is to complete the function mergeSort() which sort the linked list using merge sort function.
// For Java: The task is to complete the function mergeSort() and return the node which can be used to print the sorted linked list.

// Expected Time Complexity: O(N*Log(N))
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105

//🔴appraoch : 
// class Solution{
//   public:
//   // function to get mid 
//     Node* getMid(Node* root) {
//         Node* slow = root;
//         Node* fast = root->next ;
        
//         while(fast != NULL && fast->next != NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//         }
        
//         return slow;
//     }
    
//     //Function to sort and merge the linked list 
//     Node* merge_LL(Node* left, Node* right) {
//         if(left == NULL){
//             return right ;
//         }    
        
//         if(right == NULL){
//             return left ;
//         }
        
//         Node* finalHead = new Node(-1);
//         Node* finalTail = finalHead;
        
//         while(left != NULL && right != NULL){
//             if(left->data < right->data){
//                 finalTail->next = left ;
//                 finalTail = left;
//                 left = left->next;
//             }
//             else{
//                 finalTail->next = right;
//                 finalTail = right;
//                 right = right->next;
//             }
//         }
        
//         while(left != NULL){
//             finalTail->next = left ;
//             finalTail = left;
//             left = left->next; 
//         }
        
//         while(right != NULL){
//             finalTail->next = right ;
//             finalTail = right ;
//             right = right->next;
//         }
        
//         finalHead = finalHead->next ;
//         return finalHead;
//     }
    
    
//     //Function to sort the given linked list using Merge Sort.
//     Node* mergeSort(Node* head) {
//         //base case
//         if(head == NULL || head->next == NULL){
//             return head;
//         }
        
//         // Divide the linked list and find mid
//         Node* mid = getMid(head) ;
        
//         Node* left = head ;
//         Node* right = mid->next;
//         mid->next = NULL ;
        
//         //sort the left and right linkedlist
//         left = mergeSort(left) ;
//         right = mergeSort(right);
        
//         // Merge the final left and right linkedlist
//         Node* result = merge_LL(left, right) ;
        
//         return result ;
//     }
// };
//🔸time complexity: O(N* logn)
//🔸space complexity: O(N)


//              //❓Question: QuickSort for Linkedlist

// Sort the given Linked List using quicksort. which takes O(n^2) time in worst case and O(nLogn) 
// in average and best cases, otherwise you may get TLE.

// Input:
// In this problem, method takes 1 argument: address of the head of the linked list. The function should not read any input from stdin/console.
// The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list.
// There are multiple test cases. For each test case, this method will be called individually.

// Output:
// Set *headRef to head of resultant linked list.

// Example:
// Input:
// 2
// 3
// 1 6 2
// 4
// 1 9 3 8

// Output:
// 1 2 6
// 1 3 8 9

// Explanation:
// Testcase 1: After sorting the nodes, we have 1, 2 and 6.
// Testcase 2: After sorting the nodes, we have 1, 3, 8 and 9.

// User Task:
// The task is to complete the function quickSort() which should set the *headRef to head of the resultant linked list.

// Constraints:
// 1<=T<=100
// 1<=N<=200

// Note: If you use "Test" or "Expected Output Button" use below example format

//🔴appraoch :
// struct node* partition(struct node* low, struct node* high) {
//     int pivot = low->data ;
//     struct node* ind = low ;
    
//     for(struct node* j = low->next; j != high; j = j->next) {
//         if(j->data < pivot){
//             ind = ind->next;
//             swap(ind->data, j->data) ;
//         }
//     }
    
//     swap(low->data, ind->data) ;
//     return ind ;
// }


// void solve(struct node* head, struct node* end){
//     if(head==end || head->next==end) {
//         return ;
//     }
//     struct node* pivot = partition(head, end);
//     solve(head, pivot) ;
//     solve(pivot->next, end) ;
// }

// //you have to complete this function
// void quickSort(struct node **headRef) {
//    node* head = *headRef ;
//    solve(head, NULL) ;
// }
//🔸time complexity: O(N^2)
//🔸space complexity: O(N)



//              //❓Question: Middle of the linkedList

// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.

// Example 1:
// 1->2->3->4->5
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

// Example 2:
//  1->2->3->4->5->6
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 
// Constraints:
// The number of nodes in the list is in the range [1, 100].
// 1 <= Node.val <= 100

//🔴appraoch :
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//        if(head == NULL || head->next == NULL){
//             return head; 
//        }
        
//        ListNode* slow = head ; 
//        ListNode* fast = head ;
        
//         while(fast != NULL && fast->next != NULL){
//             fast = fast->next->next;
//             slow = slow->next ;
//         }

//         return slow;
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity : O(1)


//              //❓Question: Check if a linkedlist is a circular linkedlist or not

// Given head, the head of a singly linked list, find if the linked list is circular or not. 
// A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. 
// An empty linked list is considered as circular.
// Note: The linked list does not contains any inner loop.

// Example 1:
// Input:
// LinkedList: 1->2->3->4->5
// (the first and last node is connected,
// i.e. 5 --> 1)
// Output: 1

// Example 2:
// Input:
// LinkedList: 2->4->6->7->5->1
// Output: 0
// Your Task:
// The task is to complete the function isCircular() which checks if the given linked list is circular or not. 
// It should return true or false accordingly. (the driver code prints 1 if the returned values is true, otherwise 0)

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <=Number of nodes<= 100

//🔴appraoch :
// bool isCircular(Node *head)
// {
//     if(head == NULL || head->next == NULL){
//         return 0 ;    
//     }
    
//     Node* slow = head; 
//     Node* fast = head; 
    
//     while(fast != NULL && fast->next != NULL){
//          slow = slow->next;
//          fast = fast->next->next;
//          if(slow == fast){
//              return 1 ;
//          }
//     }
    
//     return 0 ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//          //❓Question : Split a circular linkedlist in two halves

// Given a Cirular Linked List of size N, split it into two halves circular lists. 
// If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists,
// first list should have one node more than the second list. The resultant lists should also 
// be circular lists and not linear lists.

// Example 1:
// Input:
// Circular LinkedList: 1->5->7
// Output:
// 1 5
// 7
 
// Example 2:
// Input:
// Circular LinkedList: 2->6->1->5
// Output:
// 2 6
// 1 5

// Your Task:
// Your task is to complete the given function splitList(), which takes 3 input parameters: The address of the head of the linked list, addresses of the head of the first and second halved resultant lists and Set the head1_ref and head2_ref to the first resultant list and second resultant list respectively.

// Expected Time Complexity: O(N)
// Expected Auxilliary Space: O(1)

// Constraints:
// 1 <= N <= 100

//🔴approach :

// void splitList(Node *head, Node **head1, Node **head2)
// {
//     // if single node or NULL node
//     if(head->next == head || head==NULL){
//         *head1 = NULL;
//         *head2 = NULL;
//         return ;
//     }
    
//     // getting lengtt of the ll
//     int length = 0 ;
//     Node* temp = head;
//     do{
//         length++ ;
//         temp = temp->next;
//     }
//     while(temp != head)  ;
    
    
//     // distributing both ll 
//     int first = 0;
//     int second = 0 ;
    
//     // if odd 
//     if(length & 1) {
//         first = (length/2)+1;
//         second = length/2 ;
//     }
//     else{
//         first = length/2;
//         second = length/2 ;
//     }
    
    
//     // spliting first half
//     *head1 = head ;
//     temp = head;
    
//     while(first > 1){
//         temp = temp->next;
//         first-- ;
//     }
     
//     //splitting second half
//     *head2 = temp->next ;
//     temp->next = *head1 ;
    
//     temp = *head2;
    
//     while(second > 1){
//         temp = temp->next;
//         second--;
//     }
    
//     temp->next = *head2;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                  //❓Question: Check is LinkedList is Palindrome or not

// Given a singly linked list of size N of integers. The task is to check if the given linked list 
// is palindrome or not.

// Example 1:
// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.

// Example 2:
// Input:
// N = 4
// value[] = {1,2,3,4}
// Output: 0
// Explanation: The given linked list
// is 1 2 3 4 , which is not a palindrome
// and Hence, the output is 0.
// Your Task:
// The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

// Expected Time Complexity: O(N)
// Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

// Constraints:
// 1 <= N <= 105

//🔴 approach : brute force
//   bool isPalind(vector<int> result){
//         int start = 0 ;
//         int end = result.size()-1;
        
//         while(start <= end){
//             if(result[start] != result[end]) {
//                 return 0 ;
//             }
//             start++ ;
//             end-- ;
//         }
//         return 1;
//     }
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         if(head==NULL || head->next==NULL){
//             return 1;
//         }
        
//         vector<int> result ;
//         Node* temp = head;
        
//         while(temp != NULL){
//             result.push_back(temp->data);
//             temp = temp->next;
//         }
        
//         return isPalind(result) ;
//     }
//🔸time complexity: O(N)              // O(N + N/2)
//🔸space complexity: O(N)


//🔴approach : space Optmisied 
////get middle of list
//   Node* getMid(Node* head) {
//     Node* slow = head ;
//     Node* fast = head -> next ;
    
//     while(fast != NULL && fast->next != NULL){
//         fast = fast -> next-> next ;
//         slow = slow -> next ;
//     }
//     return slow  ;    //mid
//   }
  
////reversed half list
//   Node* reverse(Node* head) {
     
//      Node* curr = head ;
//      Node* prev = NULL ;
//      Node* next = NULL ;
     
//      while(curr != NULL){
//          next = curr -> next ;
//          curr -> next = prev ;
//          prev = curr ;
//          curr = next ;
//      }
//      return prev;         //head
//   }

////Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//      //single node
//      if(head -> next == NULL){
//          return true ;
//      }
     
//      //step1: find mid of list
//      Node* middle = getMid(head) ;
     
//      //step2: reverse other half of list after middle
//      Node* temp = middle -> next ;
//      middle -> next = reverse(temp) ;
     
//      //step3: compare both list
//      Node* head1  = head ;
//      Node* head2 = middle -> next ;
     
//      while(head2 != NULL) {
//          if(head1 -> data != head2 -> data){
//              return false;
//          }
//          head1 = head1 -> next ;
//          head2 = head2 -> next ;
//      }
     
//      //step4: reverse the previously reverse list to get it back into its original order
//      temp = middle -> next ;
//      middle -> next = reverse(temp) ;
     
//      return true;
//     }
//🔸time complexity: O(N)              // O(3N)    //   O(N + N + N/2 + N)
//🔸space complexity: O(1)



//                  //❓Question : Deletion from a circular linkedlist (Deletion and reverse a LL)

// Given a Circular Linked List of size N. The task is to delete the given node in the circular linked list 
// and then print the reverse of the circular linked list.

// Example 1:
// Input:
// 5
// 2 5 7 8 10
// 8

// Output:
// 10 7 5 2
// Explanation: 
// After deleting 8 from the given circular linked 
// list, it has elements as 2, 5, 7, 10. Now, 
// reversing this list will result in 10, 7, 5, 2.
 
// Example 2:
// Input:
// 4
// 1 7 8 10
// 8

// Output:
// 10 7 1

// Explanation:
// After deleting 8 from the given circular linked 
// list, it has elements as 1, 7,10. Now, reversing 
// this list will result in 10, 7, 1.
 
// Your Task:
// You don't need to read, input, or print anything. Your task is to complete the function deleteNode( ), which takes Node head, and integer key as input parameters, and delete the node with data key. Also Complete function reverse() which reverses the linked list.

// Constraints:
// 1 <= T <= 100
// 2 <= n <= 100
// 1 <= data <= 100

//🔴appraoch :
// void deleteNode(struct Node **head, int key)
// {   
//     Node* temp = *head;
//     Node* prev = NULL;
//     Node* curr = temp;
//     if(curr -> data == key){
//         curr = curr -> next;
//         *head = curr;
//     }
//     while(curr -> data != key){
//         prev = curr;
//         curr = curr -> next;
//     }
//     prev -> next = curr -> next;
//     return;
// }

// /* Function to reverse the linked list */
//  void reverse(struct Node** head_ref)
// {

//     Node* temp = *head_ref;
//     Node* curr = temp -> next;
//     Node* prev = temp;
//     Node* forward = NULL;
    
//     while(curr != temp){
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     curr -> next = prev;
//     *head_ref = prev;
//     return;
// }    
//🔸time complexity: O(2N)
//🔸space complexity: O(1)



//              //❓Question: Reverse a Doubly Linkedlist

// Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

// Example 1:
// Input:
// LinkedList: 3 <--> 4 <--> 5
// Output: 5 4 3

// Example 2:
// Input:
// LinkedList: 75 <--> 122 <--> 59 <--> 196
// Output: 196 59 122 75
// Your Task:
// Your task is to complete the given function reverseDLL(), which takes head reference as argument and should reverse the elements so that the tail becomes the new head and all pointers are correctly pointed. You need to return the new head of the reversed list. The printing and verification is done by the driver code.

// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= number of nodes <= 103
// 0 <= value of nodes <= 103


//🔴 approach : Iterative Approach 
// Node* reverseDLL(Node * head)
// {
//     if(head == NULL || head->next == NULL){
//         return head ;
//     }
//     Node* temp = NULL;
//     Node* curr = head;
//     Node* next = head;
    
//     while( next != NULL) {
//         next = curr->next;
//         curr->next = temp;
//         curr->prev = next;
        
//         temp = curr;
//         curr = next;
//     }
    
//     return temp;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//🔴 appraoch : Recursive 
// void reverse(Node* &head, Node* curr, Node* back)
// {
//     //base case
//     if(curr == NULL)
//     {
//         head = back;
//         return;
//     }
//     Node* forward = curr->next;
//     reverse(head,forward,curr);
//     curr->next = curr->prev;
//     curr->prev = forward;
// }
// Node* reverseDLL(Node * head)
// {
//     //Your code here
//     Node* curr = head;
//     Node* back = NULL;
//     reverse(head,curr,back);
//     return head;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//              //❓QUestion: Find pairs with given sum in doubly linkedlist

// Given a sorted doubly linked list of positive distinct elements, 
// the task is to find pairs in a doubly-linked list whose sum is equal to given value target.

// Example 1:
// Input:  
// 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9
// target = 7
// Output: (1, 6), (2,5)
// Explanation: We can see that there are two pairs 
// (1, 6) and (2,5) with sum 7.
 
// Example 2:
// Input: 
// 1 <-> 5 <-> 6
// target = 6
// Output: (1,5)
// Explanation: We can see that there is one pairs  (1, 5) with sum 6.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findPairsWithGivenSum() which takes head node of the doubly linked list and an integer target as input parameter and returns an array of pairs. If there is no such pair return empty array.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
// Constraints:
// 1 <= N <= 105
// 1 <= target <= 105

//🔴approach : Brute force
// class Solution
// {
// public:
//     vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
//     {
//         vector<pair<int, int>> result ;
//         vector<int> elem ;
        
//         Node* temp = head;
//         while(temp != NULL){
//             elem.push_back(temp->data) ;
//             temp = temp->next;
//         }
        
//         int low = 0 ;
//         int high = elem.size()-1 ;
        
//         while(low < high) {
//             int sum = elem[low] + elem[high] ;
            
//             if( sum == target) {
//                 result.push_back({elem[low], elem[high]}) ;
//                 low++ ;
//             }
//             else if(sum > target){
//                 high-- ;
//             }
//             else{
//                 low++ ;
//             }
//         }
        
//         return result;
//     }
// };
//🔸time complexity:  O(N)               //O( N + n/2)
//🔸space complexity: O(2N)              // temp.size() and result.size()


//🔴appraoch : Optimised
//  vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
//     {
//         // code her
//         vector<pair<int,int>>ans;
//         Node*head1=head;
//         Node*tail=head;
//         while(tail->next!=NULL){
//             tail=tail->next;
//         }
//         while(tail->data>head1->data){
//             if((tail->data+head1->data)==target){
//                 pair<int,int>p;
//                 p.first=head1->data;
//                 p.second=tail->data;
//                 ans.push_back(p);
//                 head1=head1->next;
//                 tail=tail->prev;
//             }
//             else if((tail->data+head1->data)>target){
//                 tail=tail->prev;
//             }
//             else {
//                 head1=head1->next;
//             }
//         }
//         return ans;
//     }
//🔸time complexity:  O(N/2)               
//🔸space complexity: O(N)              //  result.size()



//             //❓Question: Count triplet in a doubly Linked list

// Given a sorted linked list of distinct nodes (no two nodes have the same data) and an integer X. 
// Count distinct triplets in the list that sum up to given integer X.
// Note: The Linked List is sorted in decending order.

// Example 1:
// Input: LinkedList: 9->8->6->5->4->2->1,  X = 17
// Output: 2
// Explanation: Distinct triplets are (2, 6, 9) 
// and (4, 5, 8) which have sum equal to X i.e 17.

// Example 2:
// Input: LinkedList: 9->8->6->5->4->2->1, X = 15
// Output: 5
// Explanation: (1, 5, 9), (1, 6, 8), (2, 4, 9), 
// (2, 5, 8), (4, 5, 6) are the distinct triplets
// Your Task:  
// You don't need to read input or print anything. Complete the function countTriplets() which takes a head reference and X as input parameters and returns the triplet count

// Expected Time Complexity: O(N2)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 ≤ Number of Nodes ≤ 103 
// 1 ≤ Node value ≤ 104

//🔴approach : 
// int countTriplets(struct Node* head, int x) 
// { 
//    vector<int> vec;
   
//    while(head!=NULL) {
//        vec.emplace_back(head->data);
//        head=head->next;
//    }
   
//    sort(vec.begin(),vec.end());
   
//    int count=0;
   
//     for(int i=vec.size()-1; i>=2; i--){
//         int a=0;
//         int b=i-1;
        
//         while(a < b) {
//         int sum=vec[a]+vec[b]+vec[i];
        
//         if(sum==x) {
//            count++;
//             a++;
//             b--;
//         } 
//         else if(sum<x) {
//             a++;
//         }
//         else{ 
//             b--;
//         }
//       } 
//     }
//    return count;
// } 
//🔸time complexity:O(N*logn)           //  O(N + N*logn + N)
//🔸space complexity: O(N)



//          //❓Question : Sort a k sorted doubly linked list

// Given a doubly linked list containing n nodes, where each node is at most k away from its target position in the list.
// The problem is to sort the given doubly linked list. 
// For example, let us consider k is 2, a node at position 7 in the sorted doubly linked list, 
// can be at positions 5, 6, 7, 8, 9 in the given doubly linked list.

// Examples:
// DLL :  3<->6<->2<->12<->56<->8
// k = 2 

//output: 2<->3<->6<->8<->12<->56


//🔴appraoch : brute force

// // function to sort a k sorted doubly linked list
// struct Node* sortAKSortedDLL(struct Node* head, int k)
// {
//     if(head == NULL || head->next == NULL)
//         return head;
  
//     // perform on all the nodes in list
//     for(Node *i = head->next; i != NULL; i = i->next) {
//         Node *j = i;
//           // There will be atmost k swaps for each element in the list
//         // since each node is k steps away from its correct position
//         while(j->prev != NULL && j->data < j->prev->data) {
//               // swap j and j.prev node
//             Node* temp = j->prev->prev;
//             Node* temp2 = j->prev;
//             Node *temp3 = j->next;
//             j->prev->next = temp3;
//             j->prev->prev = j;
//             j->prev = temp;
//             j->next = temp2;
//             if(temp != NULL)
//                 temp->next = j;
//             if(temp3 != NULL)
//                 temp3->prev = temp2;
//         }
//           // if j is now the new head
//        // then reset head
//         if(j->prev == NULL)
//             head = j;
//     }
//     return head;
// }
//🔸time complexity : O(N*K)
//🔸space complexity: O(1)


//🔴approach : optmised (Min-heap) priority-queue

// 'compare' function used to build up the priority queue
// struct compare {
//     bool operator()(struct Node* p1, struct Node* p2)
//     {
//         return p1->data > p2->data;
//     }
// };
 
// // function to sort a k sorted doubly linked list
// struct Node* sortAKSortedDLL(struct Node* head, int k)
// {
//     // if list is empty
//     if (head == NULL)
//         return head;
 
//     // priority_queue 'pq' implemented as min heap with the help of 'compare' function
//     priority_queue<Node*, vector<Node*>, compare> pq;
 
//     struct Node* newHead = NULL, *last;
 
//     // Create a Min Heap of first (k+1) elements from  input doubly linked list
//     for (int i = 0; head != NULL && i <= k; i++) {
//         // push the node on to 'pq'
//         pq.push(head);
 
//         // move to the next node
//         head = head->next;
//     }
 
//     // loop till there are elements in 'pq'
//     while (!pq.empty()) {
 
//         // place root or top of 'pq' at the end of the result sorted list so far having the first node pointed to by 'newHead'
//         // and adjust the required links
//         if (newHead == NULL) {
//             newHead = pq.top();
//             newHead->prev = NULL;
 
//             // 'last' points to the last node of the result sorted list so far
//             last = newHead;
//         }
 
//         else {
//             last->next = pq.top();
//             pq.top()->prev = last;
//             last = pq.top();
//         }
 
//         // remove element from 'pq'
//         pq.pop();
 
//         // if there are more nodes left in the input list
//         if (head != NULL) {
//             // push the node on to 'pq'
//             pq.push(head);
 
//             // move to the next node
//             head = head->next;
//         }
//     }
 
//     // making 'next' of last node point to NULL
//     last->next = NULL;
 
//     // new head of the required sorted DLL
//     return newHead;
// }
//🔸time complexity: O(n*log k)
//🔸space complexity: O(1)



//              //❓Question : Rotate a doubly linked list by N nodes

// Given a doubly-linked list, rotate the linked list counter-clockwise by N nodes. 
// Here N is a given positive integer and is smaller than the count of nodes in linked list. 

//Example :
// DLL :  NULL <-> a <-> b <-> c <-> d <-> e 
// N = 3

//output: NULL <-> c <-> d <-> e <-> a <-> b 

//🔴appraoch : 
// void rotateByN(Node* &head, int pos) 
// { 
//     // return without any changes if position is 0. 
//     if(pos==0) return; 
  
//     // Finding last node. 
//     Node* temp=head; 
//     while(temp->next!=NULL) 
//     { 
//         temp=temp->next; 
//     } 
//     // making the list circular. 
//     temp->next=head; 
//     head->pre=temp; 
  
//     // move head and temp by the given position. 
//     int count=1; 
//     while(count<=pos) 
//     { 
//         head=head->next; 
//         temp=temp->next; 
//         count++; 
//     } 
  
//     // now again make list un-circular. 
//     temp->next=NULL; 
//     head->pre=NULL; 
// }
//🔸time complexity: O(N)         //  O(N+pos)
//🔸 space complexity: O(1)


//🔴appraoch :
  
// void rotateByN(Node *&head, int pos) 
// { 
//     if (pos == 0) 
//         return; 
  
//     Node *curr = head; 
//     while (pos) 
//     { 
//         curr = curr->next; 
//         pos--; 
//     } 
  
//     Node *tail = curr->pre; 
//     Node *NewHead = curr; 
//     tail->next = NULL; 
//     curr->pre = NULL; 
  
//     while (curr->next != NULL) 
//     { 
//         curr = curr->next; 
//     } 
      
//     curr->next = head; 
//     head->pre = curr; 
//     head = NewHead; 
// } 
//🔸time complexity: O(N)         
//🔸space complexity: O(1)




//              //❓Question: Reverse a doubly linked list in groups of given size

// Given a doubly linked list containing n nodes. The problem is to reverse every group of k nodes in the list.

//Example :
// DLL : NULL <-> a <-> b <-> c <-> d <-> e 
// k = 2

//output: NULL <-> b <-> a <-> d <-> c <-> e 

//🔴approach :
// function to Reverse a doubly linked list in groups of given size
// Node* reverseByN(Node* head, int k)
// {
//     if (!head)
//         return NULL;
//
//     head->prev = NULL;
//     Node *temp, *curr = head, *newHead;
//     int count = 0;
//     while (curr != NULL && count < k) {
//         newHead = curr;
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//         count++;
//     }
//     // checking if the reversed LinkedList size is equal to K or not
//     // if it is not equal to k that means we have reversed
//     // the last set of size K and we don't need to call the recursive function
//     if (count >= k) {
//         Node* rest = reverseByN(curr, k);
//         head->next = rest;
//         if (rest != NULL)
//             // it is required for prev link otherwise u wont be backtrack list due to broken links
//             rest->prev = head;
//     }
//     return newHead;
// }
//🔸time complexity:  O(N)
//🔸space complexity : O(log n)           // recursive stack space



//          //❓Question : CAN WE REVERSE A LINKEDL LIST IN LESS THAN O(N) TIME COMPLEXITY
// ===> NO 
//      It is not possible to reverse a simple singly linked list in less than O(n). 
//      A simple singly linked list can only be reversed in O(n) time using recursive and iterative methods


//          //❓QUESTION: WHY quicksort is prefered for arrays and merge sort is preferred for linked list

//🔸 Why is Quick Sort preferred for arrays?

// Quick Sort in its general form is an in-place sort (i.e. it doesn’t require any extra storage) 
// whereas merge sort requires O(N) extra storage, N denoting the array size which may be quite expensive.
// Allocating and de-allocating the extra space used for merge sort increases the running time of the algorithm.
// Comparing average complexity we find that both type of sorts have O(NlogN) average complexity but the constants differ. 
// For arrays, merge sort loses due to the use of extra O(N) storage space.
// Most practical implementations of Quick Sort use randomized version. The randomized version has expected time complexity of O(nLogn). 
// The worst case is possible in randomized version also, but worst case doesn’t occur for a particular pattern (like sorted array) 
// and randomized Quick Sort works well in practice.
// Quick Sort is also a cache friendly sorting algorithm as it has good locality of reference when used for arrays.
// Quick Sort is also tail recursive, therefore tail call optimizations is done.

//🔸 Why is Merge Sort preferred for Linked Lists?

// In case of linked lists the case is different mainly due to difference in memory allocation of arrays and linked lists. 
// Unlike arrays, linked list nodes may not be adjacent in memory.
// Unlike array, in linked list, we can insert items in the middle in O(1) extra space and O(1) time if we are given reference/pointer to the previous node. 
// Therefore merge operation of merge sort can be implemented without extra space for linked lists.
// In arrays, we can do random access as elements are continuous in memory. Let us say we have an integer (4-byte) array A and let the address 
// of A[0] be x then to access A[i], we can directly access the memory at (x + i*4). Unlike arrays, we can not do random access in linked list.
// Quick Sort requires a lot of this kind of access. In linked list to access i’th index, 
// we have to travel each and every node from the head to i’th node as we don’t have continuous block of memory. 
// Therefore, the overhead increases for quick sort. Merge sort accesses data sequentially and the need of random access is low.



//              //❓Question : Flatenning a Linked List

// Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
// (i) a next pointer to the next node,
// (ii) a bottom pointer to a linked list where this node is head.
// Each of the sub-linked-list is in sorted order.
// Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

// Note: The flattened list will be printed using the bottom pointer instead of the next pointer.
// For more clarity have a look at the printList() function in the driver code.

// Example 1:
// Input:
// 5 -> 10 -> 19 -> 28
// |     |     |     | 
// 7     20    22   35
// |           |     | 
// 8          50    40
// |                 | 
// 30               45
// Output:  5-> 7-> 8- > 10 -> 19-> 20->
// 22-> 28-> 30-> 35-> 40-> 45-> 50.
// Explanation:
// The resultant linked lists has every 
// node in a single level.
// (Note: | represents the bottom pointer.)
 
// Example 2:
// Input:
// 5 -> 10 -> 19 -> 28
// |          |                
// 7          22   
// |          |                 
// 8          50 
// |                           
// 30              
// Output: 5->7->8->10->19->22->28->30->50
// Explanation:
// The resultant linked lists has every
// node in a single level.
// (Note: | represents the bottom pointer.)
 
// Your Task:
// You do not need to read input or print anything. Complete the function flatten() that takes the head of the linked list as input parameter and returns the head of flattened link list.

// Expected Time Complexity: O(N*N*M)
// Expected Auxiliary Space: O(N)

// Constraints:
// 0 <= N <= 50
// 1 <= Mi <= 20
// 1 <= Element of linked list <= 103


//🔴approach :
// Node *flatten(Node *root)
// {
//     if(root==NULL) return root;
    
//    Node* temp = root;
//    Node* nxtroot = temp->next ;
//    Node* btmroot = temp->bottom ;
   
//    vector<int> nodedata;

//    while(temp != NULL){
//        nodedata.push_back(temp->data);
//        btmroot = temp->bottom;
//        while(btmroot != NULL){
//            nodedata.push_back(btmroot->data);
//            btmroot = btmroot->bottom;
//        }
//        temp = temp->next;
//    }
   
//    sort(nodedata.begin(), nodedata.end()) ;
//    Node* dummy = new Node(-1) ;
//    temp = dummy ;
//    int vecsize = nodedata.size() ;
   
//    for(int i=0; i<vecsize; i++) {

//         Node* dummy2 = new Node(nodedata[i]) ;
//         dummy->bottom = dummy2 ;
//         dummy = dummy->bottom;
//    }
   
//   temp = temp->bottom ;
   
//    return temp ;
// }
//🔸time complexity: O(N*logn)                // O(node+bottom + N*logn + vectorSize ) 
//🔸space complexity: O(Node+bottom)