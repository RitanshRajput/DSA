
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


// 65/149   43:00