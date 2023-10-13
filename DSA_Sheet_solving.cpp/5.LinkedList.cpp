
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
//🔸time complexity: O(n)
//🔸space complexity: O(n)    // head of nodes


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
