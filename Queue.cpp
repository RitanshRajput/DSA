
//                             //🔴🔴QUEUE

// Queues are a type of container adaptors data structure that operate in a first in first out (FIFO) type of arrangement.
// Elements are inserted at the back (end) and are deleted from the front. 
// Queues use an encapsulated object of deque or list (sequential container class) as its underlying container,
// providing a specific set of member functions to access its elements.

// The time complexity and definition of the following functions are as follows:

// queue::empty()	O(1)
// queue::size()	O(1)
// queue::emplace()	O(1)
// queue::front()	O(1)
// queue::back()	O(1)
// queue::push(g) 	O(1)
// queue::pop() 	O(1)

// Method	Definition
// queue::empty()	Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
// queue::size()	Returns the size of the queue.
// queue::swap()	Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
// queue::emplace()	Insert a new element into the queue container, the new element is added to the end of the queue.
// queue::front()	Returns a reference to the first element of the queue.
// queue::back()	Returns a reference to the last element of the queue.
// queue::enqueue/push(g) 	Adds the element ‘g’ at the end of the queue.
// queue::dequeue/pop() 	Deletes the first element of the queue.


//🔸Implementing 

// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {
//     queue<int> q; 

//     q.push(11) ;
//     q.push(15) ;
//     q.push(12) ;
//     q.emplace(33) ;      

//     cout<<"size of queue is: " << q.size() <<endl ;
//     cout<<"first element in queue is: " << q.front() <<endl ;
//     cout<<"last element in queue is: " << q.back() <<endl ;

//     q.pop() ;
//     q.pop() ;
//     q.pop() ;

//     if(q.empty()) {
//         cout<<"queue is empty" ;
//     }
//     else{
//         cout<<"queue is not empty" ;
//     }

//     return 0;
// }

//🔴In this Question we learn to build a Queue from Scratch using Array and linkedlist (is in homework)

//                     //❓Question: Implement a Queue 

// Implement a Queue Data structure specifically to store integer data using a singly linked list or an array
// You need to implement the following public functions :
//    1. Constructor: It initializes the data members as required.
//    2. enqueue(data): This function should take one argument of type integer. It enqueues the element into the queue.
//    3. dequeue(): It dequeues/removes the element from the front of the queue and in turn, returns the element being
//    dequeued or removed. In case the queue is empty, it returns -1.
//    4. front(): It returns the element being kept at the front of the queue. In case the the queue is empty, it returns -1
// 5. isEmpty(): It returns a boolean value indicating whether the queue is empty or not.

// Operations Performed On The Queue :
// Query-1( (Denoted by an integer 1): Enqueues integer data to the queue.
// Query-2(Denoted by an integer 2): Dequeues the data kept at the front of the queue and returns it to the caller,
// return 1- if no element is present in the queue.
// Query-3 (Denoted by an integer 3): Fetches and returns the data being kept at the front of the queue but doesn't
// remove it, unlike the dequeue function, return 1- if no element is present in the queue.
// Query-4(Donated by an integer 4): returns a boolean value denoting whether the queuue is empty or not.

// Sample Input 1 :
// 1
// 7
// 1 17
// 1 23
// 1 11
// 2
// 2
// 2
// 2
// Sample Output 1 :
// 17
// 23
// 11
// -1
// Explanation For Sample Output 1 :
// The first three queries are of enQueue, so we will push 17, 23, and 11 into the queue.
// The next four queries are of deQueue, so we will starting removing elements from the queue, 
// so the first element will be 17, then 23, and then 11. And after the third dequeue query, 
// the queue is now empty so for the fourth query, we will return -1.

// Sample Input 2 :
// 1
// 3
// 2
// 1 10
// 3
// Sample Output 2 :
// -1 
// 10


// #include<iostream> 
// #include<queue>
// using namespace std;

// class Queue {

//     //data members
//     int *arr ;
//     int qfront ;         //to show front or first element
//     int rear ;           //to show rear or last element
//     int size; 

//     public:

//     // Implement the Constructor
//     Queue() {
//         size = 100001 ;
//         arr = new int[size] ;
//         qfront = 0;
//         rear = 0;
//     }

//     // Implement the isEmpty() function
//     bool isEmpty() {
//         if(qfront == rear) {
//            return true;
//         }
//         else{
//             return false;
//         }
//     }

//     // Implement the enqueue() / push() function
//     void enqueue(int data) {
//         if(rear == size) {
//           cout <<"queue is full " <<endl ;
//         }
//         else{
//            arr[rear] = data;
//            rear++ ;
//         }
//     }

//     // Implement the dequeue() / pop() function
//     int dequeue() {
//         if(qfront == rear) {
//             return -1 ;
//         }
//         else{
//             int ans = arr[qfront] ;
//             arr[qfront] = -1 ;
//             qfront++ ;
//             if(qfront == rear) {
//                 qfront = 0 ;
//                 rear = 0 ;
//             }
//             return ans ;
//         }
//     }

//     // Implement the front() function
//     int front() {
//         if(qfront == rear) {
//             return -1;
//         }
//         else{
//             return arr[qfront] ;
//         }
//     }
// };

//🔴Time complexity: O(1) 
//🔴space complexity: O(size)            //asssuming not sure


//              //🔴Implementing above Question using Linked list

// #include<iostream>
// #include<queue>
// using namespace std;

// //linkedlist Node class creation :
// class Node{
//   public:
//    int data;
//    Node* next;

//    //constructor
//    Node(int data){
//     this->data = data;
//     this->next = NULL;
//    }
// };

// //Queue Class creation :
// class Queue{
//    public:
//    Node *head;
//    Node *tail;
//    int size;

//    //constructor
//     Queue(int size){
//       this->size = size;
//       this->head = NULL;
//       this->tail = NULL;
//     }

// //empty function
//     void empty(){
//       if(head==NULL&&tail==NULL){
//        cout<<"Queue is Empty"<<endl;
//       }
//       else{
//        cout<<"Queue is not Empty"<<endl;
//       }
//     }

// //push/enqueue() function
//     void push(int data){
//         int rear = 0;
//         Node* temp = head;
//         while(temp!=NULL){
//             temp = temp ->next;
//             rear++;
//         }
//       if(rear >= size){
//         cout<<"Queue is full"<<endl;
//       }
//       else{
//         Node* newnode = new Node(data);
//         if(head == NULL){
//           head = newnode;
//           tail = newnode;
//           return;
//         }
//         else{
//           tail->next = newnode;
//           tail = newnode;
//         }
//       }
//     }

// //pop / dequeue() function
//     int pop(){
//       if(head==NULL&&tail==NULL){
//         return -1;
//       }
//       else{
//         if(head==tail){
//           tail = tail->next;
//         }
//         int ans = head->data;
//         Node* temp = head;
//         head = head ->next;
//         delete temp;
//         return ans;
//       }
//     }

// //front function
//     int front(){
//       if(head==NULL&&tail==NULL){
//         return -1;
//       }
//       else{
//         return head->data;
//       }
//     }

// //last /rear function
//     int back(){
//       if(head==NULL&&tail==NULL){
//         return -1;
//       }
//       else{
//         return tail->data;
//       }
//     }
// };



//          //🔴Circular Queue

// A Circular Queue is an extended version of a normal queue where the last element 
// of the queue is connected to the first element of the queue forming a circle.

// The operations are performed based on FIFO (First In First Out) principle. 
// It is also called ‘Ring Buffer’. 

//                                 [11]    -----> 0th index   (FRONT)
// (Last/rear)9th index ->    [20]      [12]   -------> 1th index
//           8th index --> [19]             [13]   -----> 2nd index
//           7th index --> [18]             [14]   ------> 3rd index
//           6th index --->   [17]      [15]     -----> 4th index
//                                 [16]    -------> 5th index

// In a normal Queue, we can insert elements until queue becomes full.
// But once queue becomes full, we can not insert the next element even if there is a space in front of queue.

//🔴Operations on Circular Queue:
// 🔸Front: 
// Get the front item from the queue.
// 🔸Rear:
// Get the last item from the queue.
// 🔸enQueue(value) :
// This function is used to insert an element into the circular queue. In a circular queue, the new element is always inserted at the rear position. 
// Check whether the queue is full – [i.e., the rear end is in just before the front end in a circular manner].
// If it is full then display Queue is full. 
// If the queue is not full then,  insert an element at the end of the queue.
// 🔸deQueue() :
// This function is used to delete an element from the circular queue. In a circular queue, the element is always deleted from the front position. 
// Check whether the queue is Empty.
// If it is empty then display Queue is empty.
// If the queue is not empty, then get the last element and remove it from the queue.


//❓Implement a Circular queue from Scratch 

//                          //❓Question: Circular Queue

// You will be given 'Q' queries. You need to implement a circular queue according to those queries. 
//Each query will belong to one of these two types:
//    1 'X' : Enqueue element 'X' into the end of the nth queue. Returns true if the element is enqueued, otherwise false.
//    2: Dequeue the element at the front of the nth queue. Returns 1- if the queue is empty, otherwise, returns the
//    dequeued element.

//  Note:
//    Enqueue means adding an element to the end of the queue, while Dequeue means removing the element from the front of
//    the queue.

// Sample Input 1:
// 3 7
// 1 2 
// 1 3 
// 2 
// 1 4 
// 1 6 
// 1 7 
// 2
// Sample Output 1:
// True 
// True
// 2
// True
// True
// False
// 3
// Explanation Of Sample Output 1:
// For this input, we have the size of the queue, 'N' = 3, and the number of queries, 'Q' = 7.

// Operations performed on the queue are as follows:

// push(2): Push element ‘2’ into the queue. This returns true.
// push(3): Push element ‘3’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 2.
// push(4): Push element ‘4’ into the queue. This returns true.
// push(6): Push element ‘6’ into the queue. This returns true.
// push(7): Push element ‘7’ into the queue. This returns false because the queue is full.
// pop(): Pop the top element from the queue. This returns 3.

// Sample Input 2:
// 4 7
// 1 11 
// 1 51 
// 1 26 
// 2 
// 1 6
// 2
// 2 
// Sample Output 2:
// True
// True
// True
// 11
// True
// 51
// 26
// Explanation For Sample Output 2:
// For this input, we have the size of the queue, 'N' = 3, and the number of queries, 'Q' = 7.

// Operations performed on the queue are as follows:

// push(11): Push element ‘11’ into the queue. This returns true.
// push(51): Push element ‘51’ into the queue. This returns true.
// push(26): Push element ‘26’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 11.
// push(6): Push element ‘6’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 51.
// pop(): Pop the top element from the queue. This returns 26.

// #include<iostream>
// #include<queue>
// using namespace std;

// class CircularQueue{

//     int *arr ;
//     int front ;
//     int rear ;
//     int size ;
    
//     public:

//     CircularQueue(int n) {
//         size = n ;
//         arr = new int[size] ;
//         front = rear = -1 ;
//     }

// // push() / enqueue function
//     bool enqueue(int value) {
//         //check if full or not
//          if( (front == 0 && rear == size-1) || (rear == (front-1) % (size - 1)) ) {
//             return false;
//          }
//         else if(front == -1){       //for first element
//           front = rear = 0 ;
//         }
//         else if (rear == size -1 && front != 0){  // when rear reach the end of array and there is some space left before front
//             rear = 0;
//         }
//         else{                 // normal state
//             rear++ ;
//         }

//         arr[rear] = value ;      //insert element in that index
//         return true ;
//     } 

// //pop() / dequeue function
//     int dequeue() {
//       //check if empty or not
//       if(front == -1) {
//         cout<< "queue is empty" ;
//         return -1;
//       }

//       int ans = arr[front] ;    //save ans to return atlast
//       arr[front] = -1 ;         //delete that element

//       if(front == rear) {          //for single element pop()
//         front = rear = -1;
//       }
//       else if(front == size-1) {     //if front reach last index (size -1) then again point to 0th index to maintain cyclic nature
//         front = 0 ;
//       }
//       else{          //if normal state then after deleting element point front to next index
//         front++ ;
//       }

//       return ans ;    //return deleted element
//     }
// };



//                     //🔴 Input Restricted Queue

// An input restricted queue is a special case of a double-ended queue 
// where data can be inserted from one end(rear) but can be removed from both ends (front and rear). 
// This kind of Queue does not follow FIFO(first in first out):

//                front                    rear
//                 [ |  |   |   |   |   | ]
//                  ⬆️                  ⬆️  
//          Dequeue/pop()             Enqueue push() / Dequeue pop()

// Mainly the following three basic operations are performed on input restricted queue:

// insertRear(): Adds an item at the rear of the queue. 
// deleteFront(): Deletes an item from the front of the queue. 
// deleteRear(): Deletes an item from rear of the queue.
// In addition to above operations, following operations are also supported

// getFront(): Gets the front item from the queue. 
// getRear(): Gets the last item from the queue. 
// isEmpty(): Checks whether queue is empty or not. 
// isFull(): Checks whether queue is full or not. 

// Need to implement input restricted queue:
// This queue is used when it is necessary to consume data in FIFO order but 
// it is necessary to discard recently added data for a variety of reasons, 
// such as useless data, performance issues, etc.
// It is needed when we have to inhibit insertion from the front of the deque.
// It is used in job scheduling algorithms.

// Advantages of Input Restricted Queue:
// Security of the system by restricting the insert method of the queue at the front.

// Disadvantages of Input Restricted Queue:
// Can’t provide the added functionality in comparison to Deque.



//                 //🔴Output Restricted Queue

// An output-restricted queue is a special case of a double-ended queue 
// where data can be removed from one end(front) but can be inserted from both ends (front and rear).
// This kind of Queue does not follow FIFO(first in first out):


//                front                    rear
//                 [ |  |   |   |   |   | ]
//                  ⬆️                  ⬆️  
//           Enqueue /Dequeue     Enqueue push() 

// Mainly the following three basic operations are performed on output restricted queue:

// insertRear(): Adds an item at the rear of the queue. 
// insertFront(): Adds an item at the front of the queue. 
// deleteFront(): Deletes an item from the front of the queue. 
// In addition to the above operations, the following operations are also supported

// getFront(): Gets the front item from the m queue. 
// getRear(): Gets the last item from the m queue. 
// isEmpty(): Checks whether the r queue is empty or not. 
// isFull(): Checks whether the queue is full or not. 


// Need to implement Output restricted queue:
// It is needed when we have to inhibit deletion from the rear of the deque.
// It is used in job scheduling algorithms.

// Advantages of Output Restricted Queue:
// Security of the system by restricting the delete method of the queue at the rear.

// Disadvantages of Output Restricted Queue:
// Can’t provide the added functionality in comparison to Deque.


//                    //🔴Doubly Ended Queue  (Deque)

// Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
// Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
// The functions for deque are same as vector, with an addition of push and pop operations for both front and back.  

// The time complexities for doing various operations on deques are-

// Accessing Elements- O(1)
// Insertion or removal of elements- O(N)
// Insertion or removal of elements at start or end- O(1):

//🔸Methods of Deque

// Method                    Definition

// deque::insert()	   |Inserts an element. And returns an iterator that points to the first of the newly inserted elements.
// deque::rbegin()	   |Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning).
// deque::rend()       |Returns a reverse iterator which points to the position before the beginning of the deque (which is considered its reverse end).
// deque::cbegin()	   |Returns a constant iterator pointing to the first element of the container, that is, the iterator cannot be used to modify, only traverse the deque.
// deque::max_size()   |Returns the maximum number of elements that a deque container can hold.
// deque::assign()	   |Assign values to the same or different deque container.
// deque::resize() 	   |Function which changes the size of the deque.
// deque::push_front() |It is used to push elements into a deque from the front.
// deque::push_back()  |This function is used to push elements into a deque from the back.
// deque::pop_front() 
//and deque::pop_back()  |pop_front() function is used to pop or remove elements from a deque from the front. pop_back() function is used to pop or remove elements from a deque from the back.
// deque::front() 
//and deque::back()	     |front() function is used to reference the first element of the deque container. back() function is used to reference the last element of the deque container.
// deque::clear() 
//and deque::erase()     |clear() function is used to remove all the elements of the deque container, thus making its size 0. erase() function is used to remove elements from a container from the specified position or range.
// deque::empty() 
//and deque::size()	     |empty() function is used to check if the deque container is empty or not. size() function is used to return the size of the deque container or the number of elements in the deque container.
// deque::operator=  
//and deque::operator[]	 |operator= operator is used to assign new contents to the container by replacing the existing contents. operator[] operator is used to reference the element present at position given inside the operator.
// deque::at() 
//and deque::swap()	     |at() function is used reference the element present at the position given as the parameter to the function. swap() function is used to swap the contents of one deque with another deque of same type and size.
// deque::begin() 
//and deque::end 	     |begin() function is used to return an iterator pointing to the first element of the deque container. end() function is used to return an iterator pointing to the last element of the deque container.
// deque::emplace_front()| and deque::emplace_back() 	emplace_front() function is used to insert a new element into the deque container. The new element is added to the beginning of the deque. emplace_back() function is used to insert a new element into the deque container. 
//                         The new element is added to the end of the deque.



//                front                    rear
//                 [  |  |   |   |   |   |  ]
//                  ⬆️                   ⬆️  
//         Push_front() /              push_back() /
//         pop_front()                 pop_back()


//🔸Implementing STL Dequeue
// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {

//     deque<int> d ;

//     d.push_front(12) ;
//     d.push_back(14) ;

//     cout<< d.front() <<endl ;    //output: 12
//     cout<< d.back()  << endl ;   //output:  14

//     d.pop_front() ;

//     cout<< d.front() <<endl ;    //output: 14
//     cout<< d.back()  << endl ;   //output:  14

//     d.pop_back() ;

//     if(d.empty()) {
//         cout<< "empty" <<endl ;
//     }
//     else{
//         cout<< "not empty" <<endl ;
//     }
// }



//                         //❓Question:  Implement Deque

// Design a data structure to implement deque of size 'N'. It should support the following operations:
//    pushFront(x): Inserts an element x in the front of the deque. Returns true if the element is inserted, otherwise
//    false.
//    pushRear(x): Inserts an element x in the back of the deque. Returns true if the element is inserted, otherwise
//    false.
//    popFront(): Pops an element from the front of the deque. Returns 1- if the deque is empty, otherwise returns the
//    popped element.
//    popRear(): Pops an element from the back of the deque. Returns 1- if the deque is empty, otherwise returns the
//    popped element.
//    getFront(): Returns the first element of the deque. If the deque is empty, it returns -1.
//    getRear (): Returns the last element of the deque. If the deque is empty, it returns -1.
//    isEmpty(): Returns true if the deque is empty, otherwise false.
//    isFull(): Returns true if the deque is full, otherwise false.

// Following types of queries denote these operations:
//    Type 1: for pushFront (X) operation.
//    Type 2: for pushRear(x) operation.
//    Type 3: for popFront(( operation.
//    Type 4: for popRear() operation.
//    Type 5: for getFront() operation.
//    Type 6: for getRear() operation.
//    Type 7: for isEmpty() operation.
//    Type 8: for isFull() operation.

// Sample Input 1:
// 5 7
// 7
// 1 10
// 1 20
// 2 30
// 5
// 4
// 4
// Sample Output 1:
// True 
// True 
// True
// True
// 20
// 30
// 10
// Explanation 1:
// For the given input, we have the number of queries, Q = 7.
// Operations performed on the deque are as follows:

// isEmpty(): Deque is initially empty. So, this returns true.
// pushFront(10): Insert the element ‘10’ in the front of the deque. This returns true.
// pushFront(20): Insert the element ‘20’ in the front of the deque. This returns true.
// pushRear(30): Insert the element ‘30’ in the back of the deque. This returns true.
// getFront(): Returns the front element of the deque i.e. 20
// popRear(): Pop an element from the back of the deque. This returns 30.
// popRear(): Pop an element from the back of the deque. This returns 10.


// Sample Input 2:
// 2 5
// 1 15
// 2 25
// 1 20
// 8
// 6
// Sample Output 2:
// True
// True
// False
// True
// 25


//🔴 Approach:
// push_front()  :
// if full  => return "quue is full"
// if( front == -1) => front = rear = 0     (for first/single element)
// if(front == 0)  => front = n-1           (if there is no space in front then point to n-1 cyclically)
// normal flow => front--                (in normal flow push element and then front--  , in dequeue when we push element in front then after pushing element we make front to point previous index)

//push_rear()  :
// same as cicular queue

//pop_front() :
// same as cicular queue

//pop_back()  :
//  if empty => return "queue is empty"
//  if( rear = front ) => front = rear = -1    (for single element)
//  if(rear == 0) => rear = n-1    (after every pop_back point rear backward rear-- , if rear react to 0th index then make cyclically nature again point to n-1)
// normal flow => rear--

//🔸Code Implementations
// #include<iostream> 
// #include<queue>
// using namespace std;

// class Deque {

//     int *arr ;
//     int front ;
//     int rear ;
//     int size ;

// public:
//    //constructing / initialising data structure for deque
//     Deque(int n)
//     {
//       size = n ;
//       arr = new int[size] ;
//       front = -1; 
//       rear = -1 ;  
//     }

// //push_front operation:
//     bool pushFront(int x)
//     {
//         //check is full 
//         if(isFull()) {
//             return false;
//         }
//         else if (isEmpty()){   //for single/first element
//             front = rear = 0 ;
//         }
//         else if(front == 0 && rear != size - 1) {   //if no space in front then cyclically point front to n-1
//             front = size-1 ;
//         }
//         else{
//             front-- ;
//         }
//         arr[front] = x ;
//         return true ;
//     }

// //push_back() operation
//     bool pushRear(int x)
//     {
//        //check if full
//        if(isFull()) {
//           return false ;
//        }
//        else if(isEmpty()) {  //for single element
//             front = rear = 0 ;
//        }
//        else if( rear == size-1 && front != 0){    //if no space in rear then cyclically point front to n-1
//             rear = 0;
//        }
//        else{
//            rear++ ;
//        }
//        arr[rear] = x ;
//        return true;
//     }

// // pop_front() operation:
//     int popFront()
//     {
//     //check if queue is already empty or not
//      if(isEmpty()) {
//         return -1 ;
//      }

//      int ans = arr[front] ;
//      arr[front] = -1 ;

//      if(front == rear) {           //single element
//         front = rear = -1 ;
//      }
//      else if(front == size -1) {    //if no space in front then cyclical nature
//         front = 0 ; 
//      }
//      else{
//         front++ ;
//      }

//      return ans ;
//     }

// // pop_back() operation: 
//     int popRear()
//     {  
//         //check if queue is already empty or not
//      if(isEmpty()) {
//         return -1 ;
//      }

//      int ans = arr[rear] ;
//      arr[rear] = -1 ;

//      if(front == rear) {           //single element
//         front = rear = -1 ;
//      }
//      else if(rear == 0) {    //if no space in front then cyclical nature
//         rear = size -1 ; 
//      }
//      else{
//         rear-- ; ;
//      }

//      return ans ;
//     }

// // Returns the first element of the deque. If the deque is empty, it returns -1.
//     int getFront()
//     {
//        if(isEmpty()) {
//         return -1 ;
//        }
//        return arr[front] ;
//     }

// // Returns the last element of the deque. If the deque is empty, it returns -1.
//     int getRear()
//     {
//         if(isEmpty()) {
//             return -1;
//         }
//         return arr[rear] ;
//     }

// // Returns true if the deque is empty. Otherwise returns false.
//     bool isEmpty()
//     {
//         if(front == -1) {
//             return true ;
//         }
//         else{
//             return false;
//         }
//     }

// // Returns true if the deque is full. Otherwise returns false.
//     bool isFull()
//     {
//         if((front == 0 && rear == size -1) || ((front != 0) && (rear = (front -1)%(size-1))) ) {
//             return true ;
//         }
//         else{
//             return false ;
//         }
//     }
// };


//                         //❓Question: Queue Reversal 

// Given a Queue Q containing N elements. The task is to reverse the Queue. 
// Your task is to complete the function rev(), that reverses the N elements of the queue.

// Example 1:
// Input:
// 6
// 4 3 1 10 2 6
// Output: 
// 6 2 10 1 3 4
// Explanation: 
// After reversing the given
// elements of the queue , the resultant
// queue will be 6 2 10 1 3 4.

// Example 2:
// Input:
// 4
// 4 3 2 1 
// Output: 
// 1 2 3 4
// Explanation: 
// After reversing the given
// elements of the queue , the resultant
// queue will be 1 2 3 4.

//🔸Appraoch 1:
// using recursion :
//🔴time complexity: O(n)
//🔴space complexity: ?


//🔸Approach 2:  
// create a stack 
// push element from queue to stack 1 by 1  (will get element in reverse order bcoz stack follows FILO)
// then push element from stack to queue (and return queue)
//🔴time complexity: O(n)
//🔴space complexity: O(n)

// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;

// queue<int> reverse(queue<int> q) {

//     stack<int> s ;

//     while( !q.empty()) {
//         int element = q.front() ;
//         q.pop();
//         s.push(element) ;
//     }

//     while( !s.empty()) {
//         int element = s.top() ;
//         s.pop() ;
//         q.push(element) ;
//     }

//     return q ;
// }


//                    //❓Question: First negative integer in every window of size K

// Given an array A[] of size N and a positive integer K, find the first negative integer 
// for each and every window(contiguous subarray) of size K.

// Example 1:
// Input : 
// N = 5
// A[] = {-8, 2, 3, -6, 10}
// K = 2
// Output : 
// -8 0 -6 -6
// Explanation :
// First negative integer for each window of size k
// {-8, 2} = -8
// {2, 3} = 0 (does not contain a negative integer)
// {3, -6} = -6
// {-6, 10} = -6
 
// Example 2:
// Input : 
// N = 8
// A[] = {12, -1, -7, 8, -15, 30, 16, 28}
// K = 3
// Output :
// -1 -1 -7 -15 -15 0 

//🔸Approach:
//create deque<int> dq;
//1. first k element (first window)
//  answer => 

// #include<iostream>
// #include<queue>
// using namespace std;

// vector<long long> printFirstNegativeInteger( long long int A[], long long int N[], long long int K) {
//         deque<long long int> dq ;
//         vector<long long> ans ;

//         //process first window of k size 
//         for(int i=0; i< K; i++) {
//             if( A[i] < 0) {
//                 dq.push_back(i) ;
//             }
//         }

//         //store answer of first k sized window
//         if(dq.size()  > 0 ){
//             ans.push_back(A[dq.front()]) ;
//         }
//         else{
//             ans.push_back(0) ;
//         }

//         //process for remaining windows
//         for(int i=K; i<N; i++) {
//             //removal
//             if( !dq.empty() && i - dq.front() >= K) {
//                 dq.pop_front() ;
//             }

//             //addition
//             if(A[i]< 0) {
//                 dq.push_back(i) ;
//             }

//             //ans store
//             if( dq.size() > 0) {
//                 ans.push_back(A[dq.front()]) ;
//             }
//             else{
//                 ans.push_back(0); 
//             }
//         }
//         return ans ;
// }
//🔴Time complexity: O(N)             ==> O(K+N)  ==> K could be of size N (K= N) so it could become O(N+N) ==> O(N)
//🔴Space complexity: O(N)



//                      //❓Question: Reverse First K element of Queue

// Given an integer K and a queue of integers, we need to reverse the order of
// the first K elements of the queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

// enqueue(x) : Add an item x to rear of queue
// dequeue() : Remove an item from front of queue
// size() : Returns number of elements in queue.
// front() : Finds front item.
// Note: The above operations represent the general processings. 
//      In-built functions of the respective languages can be used to solve the problem

// Example 1:
// Input:
// 5 3
// 1 2 3 4 5

// Output: 
// 3 2 1 4 5

// Explanation: 
// After reversing the given
// input from the 3rd position the resultant
// output will be 3 2 1 4 5.

// Example 2:
// Input:
// 4 4
// 4 3 2 1

// Output: 
// 1 2 3 4

// Explanation: 
// After reversing the given
// input from the 4th position the resultant
// output will be 1 2 3 4.

//🔸 Approach:
//1] fetch (pop) first k element from queue and put into stack
//2] fetch element from stack and put into queue
//3] fetch first (n-k) element from Queue and push_back

// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;

// queue<int> modifyQueue( queue<int> q, int K) {
//      stack<int> s ;
//     //step1: pop() first k element from queue and push in stack
//     for(int i=0; i<K; i++) {
//         int val = q.front(); 
//         q.pop() ;
//         s.push(val) ;
//     }

//     //step2: fetch from stack and push into queue
//     while( !s.empty()) {
//         int val = s.top() ;
//         s.pop() ;
//         q.push(val) ;
//     }

//     //step3: fetch first (n-k) element from Q and push back
//     int t = q.size() - K ;

//     while(t--) {
//        int val = q.front() ;
//        q.pop() ;
//        q.push(val) ; 
//     }
//     return q ;
// }
//🔴Time complexity: O(N)        ==> O(k) + O(K) + O(n-k) ==> O(N) +O(N) + O(N-N) ==> O(N) +O(N)+ O(0) ==>O(N)
//🔴space complexity: O(K)


//                    //❓Question: First Non-repeating character in a stream

// Given an input stream of A of n characters consisting only of lower case alphabets. 
// The task is to find the first non repeating character, each time a character is inserted to the stream. 
// If there is no such character then append '#' to the answer.
 

// Example 1:
// Input: A = "aabc"
// Output: "a#bb"
// Explanation: For every character first non
// repeating character is as follow-
// "a" - first non-repeating character is 'a'
// "aa" - no non-repeating character so '#'
// "aab" - first non-repeating character is 'b'
// "aabc" - first non-repeating character is 'b'

// Example 2:
// Input: A = "zz"
// Output: "z#"
// Explanation: For every character first non
// repeating character is as follow-
// "z" - first non-repeating character is 'z'
// "zz" - no non-repeating character so '#'

// Expected Time Complexity: O(26 * n)
// Expected Space Complexity: O(26)

//🔸Appraoch: 

// #include<iostream>
// #include<unordered_map>
// #include<queue>
// using namespace std;

// string firstNonRepeating(string A) {

//     unordered_map<char, int> count ;
//     queue<int> q ;
//     string ans = "" ;

//     for(int i=0; i<A.length(); i++) {
//         char ch = A[i] ;

//         //store in map and increase count
//         count[ch]++ ;

//         //push in quuee
//         q.push(ch) ;

//         while( !q.empty()) {
//             if(count[q.front()] > 1) {
//                 //repeating character
//                 q.pop() ;
//             }
//             else{
//                 //non-repeating character is found
//                 ans.push_back(q.front()) ;
//                 break ;
//             }
//         }

//         if(q.empty()) {
//             ans.push_back('#') ;
//         }
//     }
//     return ans ;
// }


//🔴🔴🔴                  //❓ Question: Circular Tour

// Suppose there is a circle. There are N petrol pumps on that circle. 
// You will be given two sets of data.
// 1. The amount of petrol that every petrol pump has.
// 2. Distance from that petrol pump to the next petrol pump.
// Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.
// Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.

// Example 1:
// Input:
// N = 4
// Petrol = 4 6 7 4
// Distance = 6 5 3 5
// Output: 1

// Explanation: There are 4 petrol pumps with
// amount of petrol and distance to next
// petrol pump value pairs as {4, 6}, {6, 5},
// {7, 3} and {4, 5}. The first point from
// where truck can make a circular tour is
// 2nd petrol pump. Output in this case is 1
// (index of 2nd petrol pump).


//🔸approach:
//index:     0        1       2      3
//        [{4,6} | {6,5} | {7,3} | {4,5}] 
//          ⬆️ 
//       front /
//        rear

//if travel possible (start block to next block travel possible) ==> P - D >= 0 ==> rear++ 
// else (if travel not possible)  ==>  (front = rear + 1)
//if( front == rear) ==> circle complete

//algo :
// if(start block to next block travel possible) 
// rear++ ;
//else 
// front = rear + 1 ;
// start = front ;
// rear = front ;

// if(front == rear) 
//cycle complete

// #include<iostream>
// #include<queue>
// using namespace std;

// class petrolPump {
//         int petrol;
//         int distance ;


// int tour(petrolPump p[], int n) {
//    int deficit = 0;
//    int balance = 0;
//    int start = 0;

//    for(int i=0; i<n; i++) {

//     balance += p[i].petrol - p[i].distance ;

//     if(balance < 0) {
//         deficit += balance ;
//         start = i+1 ;
//         balance = 0 ;
//     }
//    }

//    if(deficit + balance >= 0) {
//     return start;
//    }
//    else{
//     return -1 ;
//    }
// }

// };


//                    //❓Question: Interleave the first half of the queue with second half

// Given a queue of integers of even length, rearrange the elements by interleaving 
// the first half of the queue with the second half of the queue.  

// Examples:
// Input :  1 2 3 4
// Output : 1 3 2 4

// Input : 11 12 13 14 15 16 17 18 19 20
// Output : 11 16 12 17 13 18 14 19 15 20

//🔸approach: 

// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;

// void interLeaveQueue(queue <int>& q) 
// {
//     stack<int> s;
    
//     int n=q.size()/2;
    
//     // step-1: First half of queue into stack
//     for(int i=0;i<n;i++)
//     {
//         int val=q.front();
//         q.pop();
//         s.push(val);
//     }
    
//     // step-2: stack se firse queue me push kardo
//     while(!s.empty())
//     {
//         int val=s.top();
//         s.pop();
//         q.push(val);
//     }

//     // step-3: first half of queue pop and queue me hi push 
//     for(int i=0;i<n;i++)
//     {
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }

//     // step-4: Again First half of queue into stack (Repeat step-1)
//     for(int i=0;i<n;i++)
//     {
//         int val=q.front();
//         q.pop();
//         s.push(val);
//     }
    
//     // step-5: first half of queue into stack
//     while(!s.empty())
//     {
//         int val=s.top();
//         s.pop();
//         q.push(val);

//         val=q.front();
//         q.pop();
//         q.push(val);
//     }
    
// }

//🔴Time complexity: O(n)
//🔴space complexity: O(n)    


//                //❓Question: K queue in an array 

// The idea is similar to the stack post, here we need to use three extra arrays. 
// In stack post, we needed two extra arrays, one more array is required because in queues, 
// enqueue() and dequeue() operations are done at different ends.

// Following are the three extra arrays are used: 

// front[]: This is of size k and stores indexes of front elements in all queues. 
// rear[]: This is of size k and stores indexes of rear elements in all queues. 
// next[]: This is of size n and stores indexes of next item for all items in array arr[]. 
// Here arr[] is the actual array that stores k stacks.

// Together with k queues, a stack of free slots in arr[] is also maintained.
//  The top of this stack is stored in a variable ‘free’.

// All entries in front[] are initialized as -1 to indicate that all queues are empty.
// All entries next[i] are initialized as i+1 because all slots are free initially and pointing to the next slot. 
// Top of the free stack, ‘free’ is initialized as 0.

//🔸this question is same as N stack in single array but for queue this time.
// #include<iostream>
// #include<queue>
// using namespace std;

// class kQueue {
// // data member
//     public:
//        int n ;
//        int k ;
//        int* front ;
//        int* rear ;
//        int* arr ;
//        int freeSpot ;
//        int* next ;
    
//     public:
//     //constructor
//        kQueue(int n, int k) {            // k queue, in n size array
//         this -> n = n ;
//         this -> k = k ;
//         front = new int[k] ;
//         rear = new int[k] ;
//         for(int i=0; i<k; i++) {
//             front[i] = -1;
//             rear[i] = -1 ;
//         }

//         next = new int[n] ;
//         for(int i=0; i<n; i++) {
//             next[i] = i+1;
//         }
//         next[n-1] = -1; 

//         arr = new int[n] ;
//         freeSpot = 0 ;

//        }

// // push() / enqueue function
//     void enqueue(int data, int queueNum) {
//         //overflow
//         if(freeSpot == -1) {
//             cout<<" no empty sapce is present" << endl ;
//             return ;
//         }

//         //find first free index 
//         int index = freeSpot ;

//         //update freespot
//         freeSpot = next[index] ;

//         //check whether first element
//         if(front[queueNum-1] == -1) {
//             front[queueNum-1] = index ;
//         }
//         else{
//             //link new element to prev element
//             next[rear[queueNum-1]] = index ;
//         }

//         //update next ;
//         next[index] = -1 ;

//         //update rear ;
//         rear[queueNum-1] = index ;

//         //push element 
//         arr[index] = data ;
//     }

// //pop()/ dequeue function

//     int dequeue(int queueNum) {
//         //underflow
//         if(front[queueNum-1] == -1) {
//             cout<< "queue underflow" <<endl ;
//             return -1;
//         }

//         //find index to pop
//         int index = front[queueNum-1]; 

//         //front to aaage badhao
//         front[queueNum-1] = next[index] ;

//         //freeeslots to manage karo
//         next[index] = freeSpot ;
//         freeSpot = index ;

//         return arr[index] ;
//     }

// };

// int main() {
//     kQueue q(10, 3) ;
//     q.enqueue(10, 1) ;
//     q.enqueue(15, 1) ;
//     q.enqueue(20, 2) ;
//     q.enqueue(25, 1) ;

//     cout<< q.dequeue(1) <<endl ;
//     cout<< q.dequeue(2) <<endl ;
//     cout<< q.dequeue(1) <<endl ;
//     cout<< q.dequeue(1) <<endl ;
//     cout<< q.dequeue(1) <<endl ;

// }


//                  //❓Question: Sum of minimum and maximum elements of all subarrays of size k.

// Given an array of both positive and negative integers, 
// the task is to compute sum of minimum and maximum elements of all sub-array of size k.

// Examples: 
// Input : arr[] = {2, 5, -1, 7, -3, -1, -2}  
//         K = 4
// Output : 18
// Explanation : Subarrays of size 4 are : 
//      {2, 5, -1, 7},   min + max = -1 + 7 = 6
//      {5, -1, 7, -3},  min + max = -3 + 7 = 4      
//      {-1, 7, -3, -1}, min + max = -3 + 7 = 4
//      {7, -3, -1, -2}, min + max = -3 + 7 = 4   
     
//      Missing sub arrays -  
//      {2, -1, 7, -3}
//      {2, 7, -3, -1}
//      {2, -3, -1, -2}
//      {5, 7, -3, -1}
//      {5, -3, -1, -2}
//      and few more -- why these were not considered??
//      Considering missing arrays result coming as 27
     
//      Sum of all min & max = 6 + 4 + 4 + 4 
//                           = 18   


// #include<iostream>
// #include<queue>
// using namespace std;

// int solve(int* arr, int n, int k) {
//     deque<int> maxi(k) ;
//     deque<int> mini(k) ;
   
//    //addition of first k size window
//    for(int i=0; i<k; i++) {

//     while( !maxi.empty() && arr[maxi.back()] <= arr[i]) 
//        maxi.pop_back() ;

//     while( !mini.empty() && arr[mini.back()] >= arr[i]) 
//        mini.pop_back() ;
    
//     maxi.push_back(i) ;
//     mini.push_back(i) ;
//    }
   
//    int ans = 0 ;
//    ans += arr[maxi.front()] + arr[mini.front()] ;

//    //remaining windows ko process karo
//    for(int i=k; i<n; i++) {

//     //next window
//     //removal
//     while( !maxi.empty() && i - maxi.front() >= k) {
//         maxi.pop_front() ;
//     }

//     while( !mini.empty() && i - mini.front() >= k) {
//         mini.pop_front() ;
//     }

//     //addition 
//     while( !maxi.empty() && arr[maxi.back()] <= arr[i]) {
//        maxi.pop_back() ;
//     }

//     while( !mini.empty() && arr[mini.back()] >= arr[i]) {
//        mini.pop_back() ;
//     }
    
//     maxi.push_back(i) ;
//     mini.push_back(i) ;
//    }

//     return ans ;
// }

// int main() {

//     int arr[7] = {2, 5, -1, 7, -3, -1, -2} ;
//     int k = 4 ;
//     cout<< solve(arr, 7, k) << endl ;

//     return 0;
// }
// //🔴Time complexity: O(n)
// //🔴space complexity: O(n)
