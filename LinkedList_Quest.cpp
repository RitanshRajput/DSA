
//                     🔴🔴 Question on LinkedList 

//                  ❓ Question🔸Reverse an Linked list :

// the given linked list is 1-> 2-> 3-> 4-> NULL.
// then the reverse linked list is 4-> 3-> 2-> 1-> NULL
// and the head of the reverse linked list will be 4


//🔸 Iterative approach 1 :
// #include<iostream>
// using namespace std;

// //creating Node
// class Node{

//    public :
//    int data ;
//    Node* next ;

//    Node(int data) {
//       this -> data = data ;
//       this -> next = NULL ;
//    }
// } ;

// // reverse linked list code
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

// int main() {

//     return 0;
// }
//🔴 Time complexity : O(N)
//🔴 space complexity : O(1)

//🔸 Recursive approach 2 :
// #include<iostream>
// using namespace std;

// //creating Node
// class Node{

//    public :
//    int data ;
//    Node* next ;

//    Node(int data) {
//       this -> data = data ;
//       this -> next = NULL ;
//    }
// } ;

// // reverse linked list code recursively 
// void reverse(Node* &head , Node* curr, Node* prev){
       
//     //base case
//     if( curr == NULL ){
//         head = prev ;
//         return ;
//     }
    
//     Node* forward = curr -> next ;
//     reverse(head, forward, curr) ; 
//     curr -> next = prev ;
// }


// Node* reverseLinkedList( Node* head) {

//     //recursive code
//     Node* curr = head ;
//     Node* prev = NULL ;
    
//     reverse(head, curr, prev) ;
//     return head ;
// }

// int main() {

//     return 0;
// }
//🔴 Time complexity : O(N)
//🔴 space complexity : O(N)


//                  //🔸 Recursive approach 3 :
// #include<iostream>
// using namespace std;

// //creating Node
// class Node{

//    public :
//    int data ;
//    Node* next ;

//    Node(int data) {
//       this -> data = data ;
//       this -> next = NULL ;
//    }
// } ;

// // reverse linked list code recursively
// //this will return head to the reverse linkedlist
// Node* reverse1(Node* head){

//     //base case
//     if(head == NULL || head -> next == NULL){
//         return head ;
//     }
    
//     Node* chotaHead = reverse1(head -> next) ;
//     head -> next -> next = head ;
//     head -> next = NULL ;

//     return chotaHead ;
// }


// Node* reverseLinkedList( Node* head) {

//     return reverse1(head) ;
// }

// int main() {

//     return 0;
// }
//🔴 Time complexity : O(N)
//🔴 space complexity : O(N)



//                          //❓Question Middle of Linked list
//ex:
// input:   [1]->[2]->[3]->[4]->NULL
//outut:  2
//Since the number of element in this linkedlist is 4 so we have 2 midddle element.
//i.e: 2 and 3 but we return 3 as it is farther from the head node i.e:1

// input:   [1]->[2]->[3]->[4]->[5]->NULL
//outut:  3
//Since the number of element in this linkedlist is 5 so we have 3 as a midddle element.


// #include<iostream>
// using namespace std;

// class Node{

//     public:
//     int data ;
//     Node* next ;

//     Node(int data){
//         this-> data = data;
//         this-> next = NULL ;
//     }
// };
// //insertion code from tail
// void insertElement(Node* &tail, int d) {

//     //new node creating at tail
//     Node* temp = new Node(d) ;
//     tail -> next = temp ; 
//     tail  = temp ;

// }
// //traverse code
// void print(Node* head) {
//     Node* temp = head ;
//     while(temp != NULL) {
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<<endl ;
// }

// // Finding middle element code :
// int getLength(Node* head) {
//     int len = 0 ;
//     while( head != NULL){
//         len++ ;
//         head = head -> next ;
//     }
//     return len ;
// }

// Node* findMiddle(Node* head){
//     int len = getLength(head) ;
//     int ans = (len/2)  ;
    
//     //we cant return int ans directly so we convert it in Node* temp and assign ans value
//     Node* temp = head ;
//     int cnt = 0 ;
//     while(cnt < ans){
//         temp = temp -> next ;
//         cnt++ ;
//     }
//     cout<< temp -> data <<endl ;
//     return temp ;
// }

// int main(){
// Node* box = new Node(12) ;
// Node* head = box ;
// Node* tail = box ;

// insertElement(tail, 13) ;
// insertElement(tail, 14) ;
// insertElement(tail, 15) ;
// insertElement(tail, 16) ;
// print(head) ;

// findMiddle(head) ;

// return 0;
// }

//🔴Time complexity : O(N)
// getLength() -> entire -> Time complex -> O(N) 
// findmiddle() -> len/2 -> Time complex -> O(N/2)
//  ==> time complexity : O(N) + O(N/2) 
//                      = O(N) + O(n)
//                      = 2O(N)
//                      = O(N)           //n = no.of node

//🔴Space complexity: O(N) 



//                   //🔴🔴Optimised code :
// #include<iostream>
// using namespace std;

// class Node{

//     public:
//     int data ;
//     Node* next ;

//     Node(int data){
//         this-> data = data;
//         this-> next = NULL ;
//     }
// };
// //insertion code from tail
// void insertElement(Node* &tail, int d) {

//     //new node creating at tail
//     Node* temp = new Node(d) ;
//     tail -> next = temp ; 
//     tail  = temp ;

// }
// //traverse code
// void print(Node* head) {
//     Node* temp = head ;
//     while(temp != NULL) {
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<<endl ;
// }

// // Finding middle element code :

// Node* getMiddle(Node* head) {
//     //empty of single node
//     if( head == NULL ||  head -> next == NULL){
//         return head ;
//     }

//     //2 nodes case
//     if(head-> next -> next == NULL) {
//         return  head -> next ;
//     }

//     //other
//     Node* fast = head->next ;
//     Node* slow = head ;

//     while(fast != NULL) {
//         fast = fast -> next ;
//         if(fast != NULL){
//             fast = fast -> next ;
//         }
//         slow = slow -> next ;
//     }
//     cout<< slow -> data <<endl ;
//    return slow ;
// }

// Node* findMiddle(Node* head){
//     return getMiddle(head) ;
// }

// int main(){
// Node* box = new Node(12) ;
// Node* head = box ;
// Node* tail = box ;

// insertElement(tail, 13) ;
// insertElement(tail, 14) ;
// insertElement(tail, 15) ;
// insertElement(tail, 16) ;
// print(head) ;

// findMiddle(head) ;


// return 0;
// }

//🔴Time complexity: O(N/2) ==> O(N) 
//🔴Space complexity: O(1) 



//                     🔴🔴Homework reverse Doubly LinkedList
//solution code:
////🔴 doubly linked list reverse
// Node* reverseDLL(Node * head)
// {
//    Node* curr=head;
//    Node* pre=NULL;
//    Node* forward=NULL;
//    while(curr!=NULL){
//        forward=curr->next;
//        curr->prev=curr->next;
//        curr->next=pre;
//        pre=curr;
//        curr=forward;
//    }
//    return pre;
// }


 
//                      //❓Question Reverse LinkedList in "K groups" 

//You are given a linked list of 'N' nodes and an integer 'K’. 
//You have to reverse the given linked list in groups of
// size K i.e if the list contains x nodes numbered from 1 to x, 
// then you need to reverse each of the groups (1,K), (K+1,2*K), and so on.

// For example, if the list is [1, 2, 3, 4, 5, 6] and K = 2, 
// then the new list will be [2, 1, 4, 3, 6, 5].

//Notes:
// 1. In case the number of elements in the last cannot be evenly divided into groups of size
// k, then just reverse the last group(with any size). For example if the list is 1 2 3 4 5
// and K = 3, then the answer would be 3 2 1 5 4.
// 2. All the node values will be distinct.

//          ______        ______        _______
//ex:      |      |      |      |      |       |
// Input: [3] => [2] => [7] => [8] => [9] => [11] => NULL
// k = 2 

//output: [2] => [3] => [8] => [7] => [11] => [9] => NULL

//          _____________        _____________ 
//ex:      |             |      |             |
// Input: [3] => [2] => [7] => [8] => [9] => [11] => NULL
// k = 3 

//output: [7] => [2] => [3] => [11] => [9] => [8] => NULL


//🔴Recursive Approach :

// #include<iostream>
// using namespace std ;

// class Node{
//     public:
//     int data ;
//     Node* next ;

//     Node(int data) {
//         this-> data = data ;
//         this-> next = NULL ;
//     }
// };

// //🔸Recursive solution :
// Node* kReverse(Node* head, int k) {
//     //base case
//     if(head == NULL){
//       return NULL ;
//     }

//     //step1 : reverse first k nodes
//     Node* next = NULL ;
//     Node* curr = head ;
//     Node* prev = NULL ;
//     int count  = 0    ;

//     while(curr != NULL && count < k){
//         next = curr -> next ;
//         curr -> next = prev ;
//         prev = curr ;
//         curr = next ;
//         count++ ;
//     }
      
//     //step for when N=size of linked list is Not divisible by K.
//     // everytime it checks the temp is not null and there are k elements next to null 
//     // so we can perform the operation
//      ListNode* temp = curr;
//      count = 0;
//      while(temp != NULL && count < k){
//          temp = temp->next;
//          count++;
//      }

//     //step2: recursion we see other
//     if(next != NULL && count == k) {
//       head -> next = kReverse(next,k) ; 
//     }
//     else{
//        head -> next = curr
//      }

//     //step3: return head of reversed list
//     return prev ;
// }

// //insertion code from tail
// void insertElement(Node* &tail, int d) {

//     //new node creating at tail
//     Node* temp = new Node(d) ;
//     tail -> next = temp ; 
//     tail  = temp ;

// }
// //traverse code
// void print(Node* head) {
//     Node* temp = head ;
//     while(temp != NULL) {
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<<endl ;
// }

// int main() {

// Node* elem = new Node(11) ;
// Node* head = elem ;
// Node* tail = elem ;

// insertElement(tail, 12) ;
// insertElement(tail, 13) ;
// insertElement(tail, 14) ;
// insertElement(tail, 15) ;
// print(head);

// kReverse(head, 2) ;

//     return 0;
// }
//🔴Time complexity: O(N)        //bcoz we are visiting every node only once
//🔴space complexity: O(N)      
// if we see in stack we are reversing every kth node
// so space its taking will be (N/K)  K is constant so we ignore
// so remaining N ==> O(N)



//                     ❓Question Circular Linked list or not

//you are given the head of a linked list containing integers,you need to find out whether the
// the given linked list is circular or not.

//1. A linked list id said to be circular if it has no node having its next pointer equal to NULL
//   and all the nodes form a circle i.e: the next pointer of last node points to the first node.
//2. An empty linked will also be considered as circular.
//3. All the integers in the linked list are unique.
//4. In the input, the next pointer of a node with i'th integer is linked to the node with
//   data (i+1)'th integer (if(i+1)'th node exists). if there is no such (i+1)'th integer then 
//   the next pointer of such node is set to NULL.

// Sample Input 1 :
// ex: input 
// 1 2 3 4 1

// Sample Output 1 :
// True

// Sample Input 2 :
// input :
// 1 2 3 4 5 6 7

// Sample Output 2 :
// False

//🔸APproach 1 : TLE
// #include<iostream>
// using namespace std;

// class Node{

//     public:
//     int data ;
//     Node* next = NULL ;

//     Node(int data){
//         this -> data = data ;
//         this -> next = NULL ;
//     }
// };

// //🔸 if linked list is circular or not
// bool isCircularList(Node* head) {
//     //empty list 
//     if(head == NULL) {
//       return true ;
//     }

//     Node* temp = head -> next ;
//     while(temp != NULL && temp != head) {
//         temp = temp -> next ;
//     }

//     if(temp == head) {
//       return true ;
//     }

//     return false ;
// }

// //🔸Insertion from Head (function)
// void insertElement(Node* &head, int d) {

//     //new node creating at Head
//     Node* temp = new Node(d) ;
//     temp -> next = head ;
//     head = temp ;
// }

// //traverse code
// void print(Node* head) {
//     Node* temp = head ;
//     while(temp != NULL) {
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<<endl ;
// }
// int main() {

// Node* elem = new Node(12) ;
// Node* head = elem ;

// insertElement(head, 13) ;
// insertElement(head, 14) ;
// insertElement(head, 15) ;
// print(head) ;

//     return 0;
// }



//🔴 Approach 2: better for understanding  
// bool isCircular(Node* head){
//  //fast ptr is ahead of slow pointer  
//    Node* slow=head; 
//    Node* fast=head->next;

//   //if linked list is empty it returns true as its entirely null.
//    if(head==NULL)
//     return true;

//    while(true) { 
//     //fast ptr traverses quickly so If its not circular then it reaches or points to null.
//     if(fast == NULL || fast->next == NULL){
//     return false;
//     }

//     //when circular fast meets or points to slow pointer while traversing
//     else if(slow == fast || fast->next == slow){
//     return true;
//     }
    
//     // for moving forward through linked list.
//     else {
//       slow = slow->next;
//       // fast traverses way ahead so it distinguishes loops out of circular
//       // list.
//       fast = fast->next->next;
//     }
//   }
// }


//                              🔴 MAP:
//Maps are associative containers that store elements in a mapped fashion. 
//Each element has a key value and a mapped value.
// No two mapped values can have the same key values.

//🔸Some basic functions associated with Map: 
// begin() – Returns an iterator to the first element in the map.
// end() – Returns an iterator to the theoretical element that follows the last element in the map.
// size() – Returns the number of elements in the map.
// max_size() – Returns the maximum number of elements that the map can hold.
// empty() – Returns whether the map is empty.
// pair insert(keyvalue, mapvalue) – Adds a new element to the map.
// erase(iterator position) – Removes the element at the position pointed by the iterator.
// erase(const g)– Removes the key-value ‘g’ from the map.
// clear() – Removes all the elements from the map.


//🔴Let us see the differences between Map and Unordered_Map -:

//              map	                              unordered_map
// 1.  map is define in               |1.  unordered_map is defined in 
//     #include <map> header file     |    #include <unordered_map> header file
// 2.  It is implemented by           |2.  It is implemented using hash table.
//     red-black tree.                | 
// 3.  It is slow.	                  |3.  It is fast.
// 4.  Time complexity for            |4.  Time complexity for operations is O(1)
//     operations is O(log N)         |    O(n) -> Worst Case
// 5.  map is used to store elements  |5.  unordered_map is used to store elements 
//     as key,value pairs in order    |   as key,value pairs in non-sorted order.
//     sorted by key                  |


//🔴 Use std::map when :
// You need ordered data.
// You would have to print/access the data (in sorted order).
// You need predecessor/successor of elements.

//🔴 Use std::unordered_map when 
// You need to keep count of some data (Example – strings) and no ordering is required.
// You need single element access i.e. no traversal.

//🔸Approach 3 : Using Map 

// bool circularOrNot(Node* head) {
      
//     if(head == NULL) {
//         return false ;
//     }

//     map<Node*, bool> visited; 

//     Node* temp = head ;

//     while(temp != NULL) {

//         //cycle present
//         if(visited[temp] == true){
//             return 1;            
//         }

//         visited[temp] = true;
//         temp = temp -> next ;
//     }
//     return false ;
// }


//🔴 Homework Floyd's cycle detection algorithm:


//                    //❓ Question: Detect and Remove Loop

// Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present. 
// You have to make changes in the given linked list itself and return the updated linked list.
// Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. 
// Here, n is the number of nodes in the linked list.

// Sample Input:
// 6 2
// 1 2 3 4 5 6 
// Picture:  [1]=>[2]=>[3]=>[4]=>[5]=>[6]=> 
//                ⬆️---------------------⬇️ 

// Sample Output:
// 1 2 3 4 5 6
// updated :  [1]=>[2]=>[3]=>[4]=>[5]=>[6]=> NULL

//🔴There are many questions made by this Question: some ex are
//1: Detect cycle in Linked list
//2: Remove Cycle from Linked list 
//3: Beginning/Start node of loop in Linked list


// #include<iostream>
// #include<map>
// using namespace std ;

// class Node{
//     public:
//     int data ;
//     Node* next ;

//     Node(int data){
//         this-> data = data ;
//         this-> next = NULL ;
//     }
// };

// //🔴 Normal Code to detect loop:
// bool detectLoop(Node* head) {
      
//     if(head == NULL) {
//         return false ;
//     }

//     map<Node*, bool> visited; 

//     Node* temp = head ;

//     while(temp != NULL) {

//         //cycle present
//         if(visited[temp] == true){
//             return 1;            
//         }

//         visited[temp] = true;
//         temp = temp -> next ;
//     }
//     return false ;
// }
// //🔸space complexity: o(N)       //using map extra space
// //🔸Time complexity: o(N)

// //🔴Flyods Loop Detection Code:
// Node* flyodDetectLoop(Node* head){

//     if(head == NULL){
//         return NULL;
//     }

//     Node* slow = head;
//     Node* fast = head ;

//     while(slow != NULL && fast != NULL) {

//         fast = fast -> next ;
//         if(fast != NULL){
//             fast = fast -> next ;
//         }

//         slow = slow -> next ;
//         if(slow == fast) {
//             return slow;
//         }
//     }
//     return NULL;
// }
// //🔸space complexity: o(1)       //no extra spaces
// //🔸Time complexity: o(N)


// //🔴 Code to find Start/beginning node of loop
//   Node* getStartingNode(Node* head) {

//     if(head == NULL){
//         return NULL ;
//     }

//     Node* intersection = flyodDetectLoop(head) ;

//     if(intersection == NULL){
//         return NULL ;
//     }
//     Node* slow = head ;

//     while(slow != intersection){
//         slow = slow -> next;
//         intersection = intersection -> next ;
//     }

//     return slow ;
// }

// //🔴Remove loop from linkedlist Code
// Node *removeLoop(Node *head)
// {
//     if(head == NULL){
//         return NULL;
//     }

//     Node* startOfLoop = getStartingNode(head) ;

//     if(startOfLoop == NULL){
//         return head ;
//     }
    
//     Node* temp = startOfLoop;

//     while(temp -> next != startOfLoop){
//         temp = temp -> next;
//     }

//     temp -> next = NULL ;
    
//     return head;

// }
// //🔸space complexity: o(1)       //no extra spaces
// //🔸Time complexity: o(N)


// int main() {

//     return 0;
// }


//🔴Homework
// learn remove loop it has 5 diff ways
// learn detect cycle it has 3 diff ways



//                      //❓Question Remove Duplicates from a Sorted/Unsorted Linked list

//              🔸For SOrted linkedlist:
// You want to play with your friend, but your friend has pending homework, help him complete that.
//  You are given a 'Head' of a sorted linked list. You can remove some values from the linked list. In the end, you
//  must return a sorted linked list that contains no adjacent values that are equal.

// Sample Input 1 :
// 2
// 1 2 2 3 -1
// 1 2 3 4 -1
// Sample Output 1 :
// 1 2 3 -1
// 1 2 3 4 -1

// Sample Input 2 :
// 2
// 1 -1
// 2 5 5 5 5 -1 
// Sample Output 2 :
// 1 -1
// 2 5 -1


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this-> data = data;
//         this-> next = NULL;
//     }
// };


// Node* uniqueSortedList(Node* head){

//     //empty list
//     if(head == NULL){
//         return NULL;
//     }

//     //non-empty list
//     Node* curr = head ;

//     while(curr != NULL){

//         if( (curr -> next != NULL) && curr -> data == curr -> next -> data){
//             Node* nextKaNext = curr -> next -> next ;
//             Node* nodeToDelete = curr -> next ;
//             delete(nodeToDelete);
//             curr -> next = nextKaNext ;
//         }
//         else{
//             //not equal
//             curr = curr -> next ;
//         }
//     }
//     return head; 
// }
// //🔴time complexity: O(N)
// //🔴space complexity: O(1)        // constant space taken 

// int main() {
//   return 0;
// }



//              🔸For UNsorted linkedlist:

// You are given a linked list of N nodes. Your task is to remove the duplicate nodes from the linked list such that
//  every element in the linked list occurs only once i.e. in case an element occurs more than once, only keep its
//  first occurrence in the list.

// Sample Input 1 :
// 2
// 4 2 5 4 2 2 -1
// 1 2 1 2 2 2 7 7 -1
// Sample Output 1 :
// 4 2 5 -1
// 1 2 7 -1

// Sample Input 2 :
// 2
// 3 3 3 3 3 -1
// 10 20 10 20 30 10 20 30 -1
// Sample Output 2 :
// 3 -1
// 10 20 30 -1

//Homework
//🔴there are 3 approaches to solve above unsorted remove duplicate problem
//1. using 2 while loop just like when we solve array  (T.C o(N^2))
//2. first sort the linkedlist and then do previous solution(sorted ll)  (T.C  O(nlogn))
//3. using map  (T.c  0(n))


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };



// int main(){
//     return 0;
// }


//🔴Homework question: Split circular LL in two halve (each ll must be circular)
//input: 
//  [1]=>[2]=>[3]=>[4]=>[5]=[6]=> 
//  ⬆️-----------------------⬇️ 

//output: 
// [1]=>[2]=>[3]=>               [4]=>[5]=[6]=> 
// ⬆️-----------⬇️              ⬆️-----------⬇️



//                   //❓Question: Sort 0s, 1s, 2s in Linked list

// You are given a linked list having N number of nodes and each node will have an integer which
// can be 0,1 or 2 . you have to sort the given linked list in ascending order

// Sample Input 1:
// 2
// 1 0 2 1 2 -1
// 0 0 1 2 -1
// Sample Output 1:
// 0 1 1 2 2 -1
// 0 0 1 2 -1

// Sample Input 2:
// 2
// 2 2 1 0 0 0 -1
// 1 1 1 1 -1
// Sample Output 2:
// 0 0 0 1 2 2 -1
// 1 1 1 1 -1

//🔴Approach 1: Dutch national flag algorithm
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* next ;

//     Node(int data){
//         this->data = data ;
//         this->next = NULL ;
//     }
// };

// Node* sortList(Node* head) {

//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node* temp = head; 

//     while(temp != NULL){

//         if(temp-> data == 0){
//             zeroCount++ ;
//         }
//         else if(temp->data == 1){
//             oneCount++ ;
//         }
//         else if(temp-> data == 2){
//             twoCount++ ;
//         }

//         temp = temp-> next ;
//     }

//     temp = head;

//     while(temp != NULL) {
//         if(zeroCount != 0){
//             temp-> data = 0 ;
//             zeroCount-- ;
//         }
//         else if(oneCount != 0){
//             temp->data = 1 ;
//             oneCount-- ;
//         }
//         else if(twoCount != 0){
//             temp-> data = 2;
//             twoCount-- ;
//         }
//         temp = temp-> next;
//     } 
//  return head ;
// }
// //🔴time complexity: O(N)     [ O(N) + O(N)  = 2(N) ]
// //🔴space complexity: O(1) ;


// int main() {
//     return 0;
// }


//🔴Approach 2:  dummy node (TLE)

// #include<iostream>
// using namespace std;

// class Node{
//     public:


//     int data; 
//     Node* next ;

//     Node(int data){
//         this-> data = data ;
//         this-> next = NULL ;
//     }
// };

// void insertAtTail(Node* tail, Node* curr){
//     tail -> next = curr ;
//     tail = curr ;
// }

// //Main function: 
// Node* sortList(Node* head){

//     //creating dummy node
//     Node* zeroHead = new Node(-1) ;
//     Node* zeroTail = new Node(-1) ;

//     Node* oneHead = new Node(-1) ;
//     Node* oneTail = new Node(-1) ;

//     Node* twoHead = new Node(-1) ;
//     Node* twoTail = new Node(-1) ;

//     Node* curr = head ;

//     //create separate list 0s, 1s, and 2s:
//     while(curr != NULL){

//         int value = curr -> data ;

//         if(value == 0){
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1){
//             insertAtTail(oneTail, curr) ;
//         }
//         else if(value == 2){
//             insertAtTail(twoTail, curr) ;
//         }
//         curr = curr-> next ;
//     }

//     //merge 3 sublist :
//     if(oneHead -> next != NULL) {
//         zeroTail-> next = oneHead -> next -> next ;
//     }
//     else{
//         zeroTail-> next = twoHead -> next -> next ;
//     }

//     oneTail -> next = twoHead ->  next ;
//     twoTail -> next = NULL ;

//     //setup head:
//     head = zeroHead -> next ;

//     //delete dummy nodes
//     delete zeroHead ;
//     delete oneHead ;
//     delete twoHead ;

//     return head ;
//  }
// //🔴Time complexity: O(N)       [ O(N) + O(1) + O(1) + O(1) ] = O(N)
// //🔴space complexity: O(1)


// int main(){
//     return 0;
// }



//                     //❓ QUestion: Merge 2 sorted Linked list

//you are given two sorted linked list. you have to merge them to produce a combines sorted linked list
// you need to return the head of the final linked list

//the given linked list may or may not be null

// Sample Input 1:
// 2
// 1 4 5 -1
// 2 3 5 -1
// 7 8 -1
// 1 3 4 6 -1
// Sample Output 1:
// 1 2 3 4 5 5 -1
// 1 3 4 6 7 8 -1

// Sample Input 2:
// 2
// 5 -1
// 1 3 6 10 -1
// 1 1 1 -1
// 1 1 1 -1
// Sample Output 2
// 1 3 5 6 10 -1
// 1 1 1 1 1 1 -1


// #include<iostream>
// using namespace std;

// template <typename T>         // like a macro, use to avoid using same thing again and again
// class Node{
//     public:
//     T data ;
//     Node* next ;

//     Node(T data){
//         this->data = data ;
//         this->next = NULL ;
//     }

//     ~Node(){
//         if(next != NULL){
//             delete next ;
//         }
//     }
// };

// Node<int>* solve( Node<int>* first, Node<int>* second) {

//      //if only one node present in first list
//      if(first -> next == NULL){
//         first -> next = second;
//         return first;
//     }
     
//      //if more than one node present
//     Node<int>* curr1 = first ;
//     Node<int>* next1 = curr1 -> next ;
//     Node<int>* curr2 = second ;
//     Node<int>* next2 = NULL ; 

//     while( next1 != NULL && curr2 != NULL){

//       if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)) {
            
//             //add nodes in between the first list
//             curr1 -> next = curr2 ;
//             next2 = curr2 -> next ;
//             curr2 -> next = next1 ;

//            //update pointer
//             curr1 = curr2 ;
//             curr2 = next2 ;
//         }
//         else{
//             //curr1 and next1 ko agge badhana padega
//             curr1 = next1 ;
//             next1 = next1 -> next ;

//             //if first list is finished then point curr1 to second list's remaining node
//             if(next1 == NULL){
//                 curr1 -> next = curr2 ;
//                 return first ;
//             }
//         }
//     }
//     return first;
// }

// //main function :
// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){
       
//     if(first == NULL){
//        return second ;
//     }
//     if(second == NULL){
//         return first;
//     }

//     if(first -> data <= second -> data){
//         return solve(first, second) ;
//     }
//     else{
//         return solve(second, first) ;
//     }
// };
// //🔴Time complexity: O(N)
// //🔴space complexity: O(1)

// int main() {
//     return 0;
// }



//                    //❓Question: Check if Linked List is Palindrome

//Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

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


//🔴approach 1: copy node data into array and find if palindrome or not
// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next ;
     
//     Node(int data) {
//         this-> data = data;
//         this-> next = NULL;
//     }

//     ~Node(){
//         if(next != NULL){
//             delete next;
//         }
//     }
// };

// //checkpalindrome in arr
// bool checkPalindrome(vector<int> arr){

//     int size = arr.size() ;
//     int start = 0;
//     int end = size -1;

//     while(start<=end){
//         if(arr[start] != arr[end]) {
//             return 0;
//         }
//         start++ ;
//         end-- ;
//     }
//     return 1;
// }

// //main solution
// bool isPalindrome(Node* head){
      
//     vector<int> arr ;

//     Node* temp = head ;
//     while( temp != NULL){
//         arr.push_back(temp-> data);
//         temp = temp->next;
//     }

//     return checkPalindrome(arr);
// }
// //🔴Time complexity: O(N) ;
// //🔴space complexity: O(N);   (additional space vector<int> arr)

// int main(){
//     return 0;
// }


//🔴Approach 2(Optimised): without additional space (divide , reverse and compare)

// #include<iostream>
// using namespace std;

// class Node{
//     public: 
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL ;
//     }

//     ~Node() {
//         if(next != NULL) {
//             delete next ;
//         }
//     }
// };
// //program to find middle node
// Node* getMid(Node* head) {
    
//     Node* slow = head ;
//     Node* fast = head -> next ;

//     while( fast != NULL && fast -> next != NULL) {
//       fast = fast->next->next ;
//       slow = slow ->next ;
//     } 
//     return slow;                //middle node
// }

// //program to reverse half list
// Node* reverse(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;
//     Node* next = NULL ;

//     while(curr != NULL) {
//         next = curr->next ;
//         curr->next = prev ;
//         prev = curr ;
//         curr = next ;
//     }
//     return prev;           //head of reverse list
// }

// bool isPalindrome(Node* head) {

//     //single node   
//     if(head->next == NULL){
//         return true;
//     }
     
//     //step 1: find middle node
//     Node* middle = getMid(head) ;

//     //step2: reverse list after middle
//     Node* temp = middle -> next ;
//     middle -> next = reverse(temp);

//     //step3: compare both half of list
//     Node* head1 = head ;
//     Node* head2 = middle -> next ;

//     while(head2 != NULL) {
//         if(head1 ->data != head2 ->data){
//             return false ;
//         }
//         head1 = head1 ->next ;
//         head2 = head2->next ;
//     }

//     //step4:  again reverse the previously reversed list to make it original list
//     temp = middle -> next ;
//     middle -> next = reverse(temp) ;

//     return true ;
// }
// //🔴Time complexity: O(N)
// //🔴Space complexity: O(1)      // no additional space (only auxilliary space)

// int main() {
//     return 0;
// }



//                     //❓Question: Add 2 Numbers represented by linked lists

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

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

//🔸appraoch 1: reverse both list and add 
// #include<iostream>
// using namespace std; 

// class Node{
//     public:
//     int data;
//     Node* next; 

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node(){
//         if(next != NULL){
//             delete next;
//         }
//     }
// };

// //reverse code:
// Node* reverse(Node* head){
//     Node* curr = head; 
//     Node* prev = NULL;
//     Node* next = NULL;

//     while(curr != NULL){
//         next = curr -> next ;
//         curr -> next = prev ;
//         prev = curr ;
//         curr = next ;
//     }
//   return prev;       //return head
// }

// // insert At tail code:
// void insertAtTail(Node* &head, Node* &tail, int val){

//     Node* temp = new Node(val) ;

//     if(head == NULL){
//        head = temp ;
//        tail = temp ;
//        return ;
//     }
//     else{
//        tail -> next = temp ;
//        tail = temp ;
//     }
// }

// //addition code:
// Node* addition(Node* first, Node* second){
    
//     int carry = 0;
//     Node* ansHead = NULL ;
//     Node* ansTail = NULL;

//     while(first != NULL && second != NULL){

//         int sum = carry + first->data + second->data ;
//         int digit = sum % 10 ;

//         //create node and add in answer linkedlist
//         insertAtTail(ansHead, ansTail, digit) ;

//         carry = sum / 10; 
//         first = first -> next ;
//         second = second -> next ;
//     }

//    // for remaining Node of first list
//     while(first != NULL){
//         int sum = carry + first -> data;
//         int digit = sum % 10 ;
//         //create node and add  remaining answer in linkedlist
//         insertAtTail(ansHead, ansTail, digit) ;
//         carry = sum / 10; 
//         first = first -> next;
//     }

//     // for remaining Node of second list
//     while(second != NULL){
//         int sum = carry + first -> data;
//         int digit = sum % 10 ;
//         //create node and add  remaining answer in linkedlist
//         insertAtTail(ansHead, ansTail, digit) ;
//         carry = sum / 10; 
//         second = second-> next;
//     }

//     // if carry is remained
//     while( carry != 0){
//         int sum = carry ;
//         int digit = sum % 10 ;
//        //create node and add remaining answer in linked list
//        insertAtTail(ansHead, ansTail, digit) ;
//        carry = sum / 10;
//     }
//     return ansHead;
// }

// //🔸Main code:
// Node* addTwoLists(Node* first, Node* second){

//     //step 1: reverse input linkedlist
//     first = reverse(first);
//     second = reverse(second) ;

//     //step2: add 2 linkedlist
//     Node* ans = addition(first, second) ;

//     //step3: reverse back the ans list
//     ans = reverse(ans) ;

//     return ans;
// }

// int main(){
//     return 0;
// }


// //🔸appraoch2:  optimising above code to make it short
// #include<iostream>
// using namespace std; 

// class Node{
//     public:
//     int data;
//     Node* next; 

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node(){
//         if(next != NULL){
//             delete next;
//         }
//     }
// };

// //reverse code:
// Node* reverse(Node* head){
//     Node* curr = head; 
//     Node* prev = NULL;
//     Node* next = NULL;

//     while(curr != NULL){
//         next = curr -> next ;
//         curr -> next = prev ;
//         prev = curr ;
//         curr = next ;
//     }
//   return prev;       //return head
// }

// // insert At tail code:
// void insertAtTail(Node* &head, Node* &tail, int val){

//     Node* temp = new Node(val) ;

//     if(head == NULL){
//        head = temp ;
//        tail = temp ;
//        return ;
//     }
//     else{
//        tail -> next = temp ;
//        tail = temp ;
//     }
// }

// //addition code:
// Node* addition(Node* first, Node* second){
    
//     int carry = 0;
//     Node* ansHead = NULL ;
//     Node* ansTail = NULL;

//     while(first != NULL || second != NULL || carry != 0){

//         int val1 = 0 ;
//          if(first != NULL) 
//          val1 = first -> data ;
        
//         int val2 = 0 ;
//          if(second != NULL) 
//          val2 = second -> data;

//         int sum = carry + val1 + val2 ;
//         int digit = sum % 10 ;

//         //create node and add in answer linkedlist
//         insertAtTail(ansHead, ansTail, digit) ;
//         carry = sum / 10; 

//         if(first != NULL)
//           first = first -> next ;
        
//         if(second != NULL)
//           second = second -> next ;
//     }
//     return ansHead;
// }

// //🔸Main code:
// Node* addTwoLists(Node* first, Node* second){

//     //step 1: reverse input linkedlist
//     first = reverse(first);
//     second = reverse(second) ;

//     //step2: add 2 linkedlist
//     Node* ans = addition(first, second) ;

//     //step3: reverse back the ans list
//     ans = reverse(ans) ;

//     return ans;
// }
// //🔴Time complexity:  O(M+N)
// // first = reverse(first);                   // O(M)
// // second = reverse(second) ;                // o(N)
// // Node* ans = addition(first, second) ⬇️ 
// // while(first != NULL || second != NULL)    // O(max(M, N))       // will till the max list whether M or N
// // ans = reverse(ans) ;                      // O(M+N)
// //                                      ___________________
// // final complexity:                            O(M+N)

// //🔴space complexity:  O(max(M,N))
// // insertAtTail(ansHead, ansTail, digit) ;     //O(max(M,N))       //creating ans list
// //                                             _____________
// // final space complexity:                       O(max(M,N))

// int main(){
//     return 0;
// }



//                     //❓Question: Clone a linked list with next and random pointer

// You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. 
// You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  
// i.e. a->arb = b (arb is pointer to random node).

// Construct a copy of the given list. 
// The copy should consist of exactly N new nodes,
// where each new node has its value set to the value of its corresponding original node. 
// Both the next and random pointer of the new nodes should point to new nodes in the copied list 
// such that the pointers in the original list and copied list represent the same list state. 
// None of the pointers in the new list should point to nodes in the original list.

// For example, if there are two nodes X and Y in the original list,
// where X.arb --> Y, then for the corresponding two nodes x and y in the copied list, x.arb --> y.
// Return the head of the copied linked list.
//                       _____________  ______
//                      |            ⬇️|    ⬇️ 
//diagram ex:          [3] -> [5] -> [7] -> [9] -> NULL
//                      ⬆️____|⬆️___________|   
// 
// Note :- The diagram isn't part of any example, it just depicts an example of how the linked list may look like.

// Example 1:
// Input:
// N = 4, M = 2
// value = {1,2,3,4}
// pairs = {{1,2},{2,4}}

// Output: 1
// Explanation: In this test case, there
// are 4 nodes in linked list.  Among these
// 4 nodes,  2 nodes have arbitrary pointer
// set, rest two nodes have arbitrary pointer
// as NULL. Second line tells us the value
// of four nodes. The third line gives the
// information about arbitrary pointers.
// The first node arbitrary pointer is set to
// node 2.  The second node arbitrary pointer
// is set to node 4.

// Example 2:
// Input:
// N = 4, M = 2
// value[] = {1,3,5,9}
// pairs[] = {{1,1},{3,4}}

// Output: 1
// Explanation: In the given testcase ,
// applying the method as stated in the
// above example, the output will be 1.

// NOTE : 
// 1. If there is any node whose arbitrary pointer is not given then it's by default NULL. 
// 2. Your solution return an output 1 if your clone linked list is correct, else it returns 0.
// 3. Don't make any changes to the original linked list

//🔴basically we have to clone the original linkedlist and 
// then also clone the random pointer which are pointing to random node
// in original node into clone node as well

//🔴Appraoch 1: using map 
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// class Node{
//    public:
//    int data ;
//    Node* next;
//    Node* random ;        ///random pointer (which will be pointing to random node)

//    Node(int data){
//     this-> data = data;
//     this-> next = NULL ;
//     this-> random = NULL ;
//    }

//    ~Node() {
//     if(next != NULL){
//         delete next ;
//     }
//    }
// };

// //insert At Tail code:
// void insertAtTail(Node* &head ,Node* &tail, int data) {
       
//     Node* newNode = new Node(data) ;
//     if(head == NULL) {
//         head = newNode;
//         tail = newNode;
//         return ;
//     }
//     else{
//         tail -> next = newNode ;
//         tail = newNode ;
//     }
// }

// //Main code:
// Node* copyList(Node* head) {

//     //step1: create a clone list
//     Node* cloneHead = NULL; 
//     Node* cloneTail = NULL ;
//     Node* temp = head; 

//     while(temp != NULL) {
//        insertAtTail(cloneHead, cloneTail, temp -> data) ;
//        temp = temp -> next ;
//     }
   
//    //step2: creating a Map to keep track of both original and clone list together
//     unordered_map<Node*, Node*> oldToNewNode ;     // unordered_map used when we want to store in unsorted order
    
//     Node* originalNode = head ;   //head of original list
//     Node* cloneNode = cloneHead ;     //head of clone list

//     while(originalNode != NULL && cloneNode != NULL) {
//         oldToNewNode[originalNode] = cloneNode ;
//         originalNode = originalNode -> next ;
//         cloneNode = cloneNode -> next ;
//     }

//     originalNode = head ;
//     cloneNode = cloneHead ;

//     while(originalNode != NULL) {
//         cloneNode -> random = oldToNewNode[originalNode -> random] ;
//         originalNode = originalNode -> next ;
//         cloneNode = cloneNode -> next ;
//     }
//    return cloneHead ;
// }
// //🔴time complexity: O(N) 
// //🔴Space complexity: O(N)


//🔴Approach2:  without using map
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* next ;
//     Node* random ;

//     Node(int data) {
//         this-> data = data ;
//         this-> next = NULL ;
//         this-> random = NULL;
//     }
// };

// //insert at tail code:
// void insertAtTail(Node* &head, Node* &tail, int data) {

//     Node* newNode = new Node(data) ;
//     if(head == NULL) {
//        head = newNode ;
//        tail = newNode ;
//        return ;
//     }
//     else{
//         tail -> next = newNode ;
//         tail = newNode ;
//     }
// }

// //main program:
// Node* copyList(Node* head) {

//     //step1: create a clone list
//     Node* cloneHead = NULL ;
//     Node* cloneTail = NULL ;
//     Node* temp = head ;
        
//     while(temp != NULL){
//         insertAtTail(cloneHead, cloneTail, temp -> data) ;
//         temp = temp -> next ; 
//     }

//     //step2:  cloneHead add in between original list
//     Node* originalNode = head ;
//     Node* cloneNode = cloneHead ;
        
//     while(originalNode != NULL && cloneNode != NULL){
//         Node* next = originalNode -> next ;
//         originalNode -> next = cloneNode ;
//         originalNode = next ;
            
//         next = cloneNode -> next ;
//         cloneNode -> next = originalNode ;
//         cloneNode = next ;
//     }

//     //step3: random pointer copy from original to clone Node
//     temp = head ;
        
//         while(temp != NULL){
//             if(temp -> next != NULL) {
//                 temp -> next -> random = temp -> random
//                 ? temp -> random -> next : temp -> random  ;
//             }
//             temp = temp -> next -> next ;
//         }

//     //step4: revert changes done in step 2 (where we are keeping track of orginal->next using clone->next)
//     originalNode = head ;
//     cloneNode = cloneHead ;
        
//     while(originalNode != NULL && cloneNode != NULL){
//         originalNode -> next = cloneNode -> next ;
//         originalNode = originalNode -> next ;
            
//         if(originalNode != NULL){
//             cloneNode -> next = originalNode -> next ;
//         }
            
//         cloneNode = cloneNode -> next ;
//     }

//     //step5: return ans
//    return cloneHead ;
// }
//🔴Time complexity: O(N)       // (O(n) + o(n) + o(n) + O(n)) ==> ( 4O(4n)) ==>O O(N)
//🔴space complexity: O(1)     //constant space

//58 /149