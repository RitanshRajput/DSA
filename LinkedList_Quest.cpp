
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


//🔴🔴Homework reverse Doubly LinkedList


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

#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;

    Node(int data) {
        this-> data = data ;
        this-> next = NULL ;
    }
};

//🔸Recursive solution :
Node* kReverse(Node* head, int k) {
    //base case
    if(head == NULL){
      return NULL ;
    }

    //step1 : reverse first k nodes
    Node* next = NULL ;
    Node* curr = head ;
    Node* prev = NULL ;
    int count  = 0    ;

    while( curr != NULL && count < k){
        next = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = next ;
    }

    //step2: recursion we see other
    
}

int main() {


    return 0;
}

//14:45 51/149