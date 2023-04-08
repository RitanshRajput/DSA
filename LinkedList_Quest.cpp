
//                     🔴🔴 Question on LinkedList 

//❓ Question:
// 🔸Reverse an Linked list :

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


//🔸 Recursive approach 3 :
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

