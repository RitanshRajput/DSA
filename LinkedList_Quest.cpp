
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



//❓Question :
//Middle of Linked list
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



//🔴🔴Optimised code :
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


//🔴🔴Homework reverse Doubly LinkedLis

//50/149