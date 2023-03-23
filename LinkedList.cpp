//                  //🔴🔴🔴 LINKED LIST 

//🔸A Linked List is a linear data structure which looks like a chain of nodes, 
//  where each node is a different element. Unlike Arrays, Linked List elements 
//  are not stored at a contiguous location. 

//🔸It is basically chains of nodes, each node contains information such as data and 
//  a pointer to the next node in the chain. In the linked list there is a head pointer, 
//  which points to the first element of the linked list, and if the list is empty then 
//  it simply points to null or nothing.

//🔴 Why linked list data structure needed?

//🔸1.Dynamic Data structure:
//  The size of memory can be allocated(grow) or de-allocated(shrink) at run time based on the operation insertion or deletion.

//🔸2.Ease of Insertion/Deletion: 
//  The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion,
//  Just the address needed to be updated.

//🔸3.Efficient Memory Utilization:
//  As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement 
//  so this avoids the wastage of memory. 

//🔸4.Implementation: 
//  Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.


//🔸Node :
// Node contains information such as data and a pointer (address of) to the next node in the chain
// If no node is present then pointer points to NULL

//ex:
// address:     100              104              108              112
//            ____________      ___________      ___________      ___________
//           [data |  104 ] == [data | 108 ] == [data | 112 ] == [data | NULL]
//            ------------      -----------      -----------      -----------

//   🔴 Types of linked lists: 
// There are mainly three types of linked lists:

//🔘Single-linked list
//🔘Double linked list
//🔘Circular linked list
//🔘Circular Doubly linked list


//                      🔘Singly-linked list

// Traversal of items can be done in the forward direction only due to 
// the linking of every node to its next node.

// address:     100              104              108              112
//            ____________      ___________      ___________      ___________
//  Head =>  [data |  104 ] == [data | 108 ] == [data | 112 ] == [data | NULL] ==> Tail
//            ------------      -----------      -----------      -----------
//                  |                |                |                 |
//                node              node            node              node

//🔸 implementation :
// #include<iostream>
// using namespace std;

// //creating a node
// class Node {
 
//    public:
//     int data;         // data
//     Node* nextNode;   // pointer to next node

//  //function to make nxext node null and show output from argument
//     Node(int data){
//        this -> data = data ;
//        this -> nextNode = NULL ;
//     }
// };

// int main() {

// Node* node1 = new Node(28) ;
// cout << node1 -> data << endl ;         // output: 28
// cout << node1 -> nextNode << endl ;     // output: 0

//     return 0;
// }



//🔴Insertion in Singly LinkedList :
//🔴Traversing in Singly LinkedList :
//🔴deletion in Singly LinkedList :

// #include<iostream>
// using namespace std;

// //🔸Main node
// class Node {

//     public:
//     int data ;
//     Node* next;
   
//     //constructor
//     Node(int data) {
//         this -> data = data ;
//         this -> next = NULL ;
//     }

//    //destructor 
//    ~Node() {
//      int value = this -> data ;

//      //freeing memory 
//      if( this -> next != NULL ){
//         delete next ;
//         this -> next = NULL; 
//      }
//      cout<< "memory is free for node with data : "<< value << endl ;
//    }

// };

// //🔸Insertion from Head (function)
// void insertAtHead(Node* &head, int d) {

//     //new node creating at Head
//     Node* temp = new Node(d) ;
//     temp -> next = head ;
//     head = temp ;
// }

// //🔸Insertion from Tail (function)
// void insertionAtTail(Node* &tail, int d) {

//     //new node creating at tail
//     Node* temp = new Node(d) ;
//     tail -> next = temp ; 
//     tail  = temp ;

// }

// //🔸Insertion in Any position (function)
// void insertionAtPosition(Node* &head, Node* &tail, int position, int d){

//    //if we want to insert at head
//    if(position == 1){
//     insertAtHead(head, d) ;
//     return ;
//    }

//     Node* temp = head ;
//     int current = 1 ;

//     while( current < position - 1){
//         temp = temp -> next ;
//         current++ ;
//     }

//     // if we are inserting at last position then update tail , so that tail will point to new node not the previous tail
//     if(temp -> next == NULL){
//         insertionAtTail(tail, d); 
//         return ;
//     }

//     //creating node for d 
//     Node* nodeToInsert = new Node(d) ;
//     nodeToInsert -> next = temp -> next ;
//     temp -> next = nodeToInsert ;
// }

// //🔸 Deletion of Node using position
// void deleteNode(int position, Node* &head, Node* &tail) {

//     //deleting head or first node
//     if(position == 1){
//       Node* temp = head ;
//       head = head -> next ;
      
//       //memory freeing of head /first node from heap
//       temp -> next = NULL ;
//       delete temp ;
//     }
//     else {
//       // deleting at any middle position or last position
//       Node* current = head ;
//       Node* previous = NULL ;

//       int count = 1 ;
//       while(count < position ){
//         previous = current ;
//         current = current -> next ;
//         count++ ;
//       }


//       //memory freeing of the node at the given position
//       previous -> next = current -> next ;
//       current -> next = NULL ;
//       if(previous -> next == NULL){
//         tail = previous ;
//       }
//       delete current;

//     }
// }


// //🔸function to (traverse) print element in Node
// void print(Node* &head){
    
//     Node* temp = head ;

//     while(temp != NULL) {
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<< endl ;
// }

// int main() {

// //create a new node 
// Node* node1 = new Node(10) ;


// //🔸Inserting from head
// // Node* head = node1 ;
// // print(head) ;                  //output: 10

// // insertAtHead(head , 20) ;
// // print(head) ;                  //output: 20 10

// // insertAtHead(head , 30) ;
// // print(head) ;                  //output : 30 20 10


// //🔸Inserting from Tail
// Node* head = node1 ;
// Node* tail = node1 ;
// print(head) ;                  //output: 10

// insertionAtTail(tail , 20) ;
// print(head) ;                  //output: 10 20

// insertionAtTail(tail , 30) ;
// print(head) ;                  //output : 10 20 30


// //🔸Inserting at any position 
// insertionAtPosition(head, tail, 4, 22) ;
// print(head) ;                 //output: 10 20 22 30  (inserted 22 at 3rd position)


// //to verify if head and tail pointing to correct node after insertion
// cout<<"Head after insertion : "<< head -> data <<endl ;
// cout<<"tail after insertion : "<< tail -> data <<endl ;


// //🔸Deletion of any position :
// deleteNode(4, head, tail) ;
// print(head) ;                     //output: 10 20 30  (memory is free for node with data : 22)



// //to verify if head and tail pointing to correct node after deletion
// cout<<"Head after insertion : "<< head -> data <<endl ;
// cout<<"tail after insertion : "<< tail -> data <<endl ;

//     return 0;
// }




//                           //🔘Double linked list

//🔸A Doubly Linked List (DLL) contains an extra pointer, typically called the previous pointer,
//  together with the next pointer and data which are there in the singly linked list.

//🔴Advantages of DLL over the singly linked list:
//1. A DLL can be traversed in both forward and backward directions. 
//2. The delete operation in DLL is more efficient if a pointer to the node to be deleted is given. 
//3. We can quickly insert a new node before a given node. 
//4. In a singly linked list, to delete a node, a pointer to the previous node is needed. 
//   To get this previous node, sometimes the list is traversed. 
//   In DLL, we can get the previous node using the previous pointer. 

//🔴Disadvantages of DLL over the singly linked list:
//1.Every node of DLL Requires extra space for a previous pointer. 
//  It is possible to implement DLL with a single pointer though
//2.All operations require an extra pointer previous to be maintained. 
//  For example, in insertion, we need to modify previous pointers together with the next pointers.
//  For example in the following functions for insertions at different positions, we need 1 or 2 extra steps to set the previous pointer.



//ex : 
// address :   100                   104                   108                   112
//  Null <=  [Null | data | 104] == [100 | data | 108] == [104 | data | 112] == [108 | data | NULL] => NULL
//                     |                                                                |            
//                   Head                                                             tail


//1:00:09  48/149