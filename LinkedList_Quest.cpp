
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
//1. using 2 while loop just like when we solve array
//2. first sort the linkedlist and then do previous solution(sorted ll)
//3. using map 


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


// 54/149