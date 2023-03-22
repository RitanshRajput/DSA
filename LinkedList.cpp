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

// Single-linked list
// Double linked list
// Circular linked list
// Circular Doubly linked list


//            🔘Singly-linked list

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


// 18:39  48/149