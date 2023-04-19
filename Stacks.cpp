//                🔴🔴 STACKS 

// 🔸Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, 
// where a new element is added at one end (top) and an element is removed from that end only. 
// Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container,
// providing a specific set of member functions to access its elements. 

// 🔸If there is confusion in remembering the basic difference between stack and queue, 
// then just have a real life example for this differentiation, for stack, stacking of books 
// we can take the top book easily and for queue remember when you have to stand in queue front of ATM for taking out the cash,
// then first person near to ATM has the first chance to take out the money from ATM. 
// So, queue is the FIFO (First In First Out) type working.

// 🔸Stack Syntax:-

// 🔸For creating  a stack, we must include the <stack> header file in our code. 
// We then use this syntax to define the std::stack:

// 🔸template <class Type, class Container = deque<Type> > class stack;
// 🔸Type –
// is the Type of element contained in the std::stack. 
// It can be any valid C++ type or even a user-defined type.

// 🔸Container – 
// is the Type of underlying container object.

// 🔸Member Types:-

// 🔸value_type- 
//The first template parameter, T. It denotes the element types.

// 🔸container_type- 
// 🔸The second template parameter, Container. It denotes the underlying container type.

// 🔸size_type- Unsigned integral type.
  
// The functions associated with stack are: 
// 🔘empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// 🔘size() – Returns the size of the stack – Time Complexity : O(1) 
// 🔘top() / peek()  – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// 🔘push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// 🔘pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 


//🔴STL stack Implementation :
// #include<iostream>
// #include<stack>          //declaration of stack library
// using namespace std;

// int main() {

// stack<int> s;          //creation of stack

// s.push(2) ;            //adding a element in stack ;
// s.push(3) ;
// s.push(4) ;           

// cout<<"printing top element : "<< s.top() <<endl ;    //output: 2

// s.pop()  ;             //removing the element last inserted element (means top element)

// cout<<"printing top element : "<< s.top() <<endl ;   // output: 3

// if(s.empty()) {                        //empty() return true if stack is empty , false if not empty
//     cout<<" stack is empty: "<<endl ;  //true
// }
// else{
//     cout<<" stack is not empty: "<<endl ; //false
// }

//  return 0 ;
// }


//              🔴 Implementing stack through ARRAY :
// #include<iostream>
// using namespace std ;

// //declaring a class in which we will create stack as array
// class Stack{
//    //creating properties/data members
//    public:
//    int* arr ;
//    int top ;
//    int size ;

//   //creating constructor
//    Stack(int size) {
//     this -> size = size ;
//     arr = new int[size] ;
//     top = -1 ;
//    }

//    //behaviours: 
//    //adding element in stack
//    void push(int element) {
//     if(size - top > 1) {           //if size - top is greater then 1 then space is available so insert/add an element
//         top++ ;
//         arr[top] = element ;
//     }
//     else {
//         cout<<" stack overflow "<<endl ;  //else send msg stack is overflow
//     }
//    }

//    //removing element
//    void pop() {
//       if(top >= 0) {
//         top-- ;
//       }
//       else{
//         cout<<"stack underflow "<<endl ;
//       }
//    }

//    //traverse the top element in stack
//    int peek() {
//     if(top >= 0) {
//         return arr[top] ;
//     }
//     else{
//         cout<<"stack is empty "<<endl ;
//         return -1 ;
//     }
//    }

//    //checking is stack is empty or not
//    bool isEmpty() {
//     if(top == -1) {
//         return true ;
//     }
//     else{
//         return false ;
//     }
//    }

// };
// //🔴time complecity: O(1)

// int main() {

// //creating a stack
// Stack st(5) ;                  //stack size is 5

// //pushing element in stack
// st.push(22) ;
// st.push(23) ;
// st.push(24) ;
// st.push(25) ;

// //checking top element
// cout<< st.peek() <<endl ;          //output: 25

// //poping out last element from stack and reflecting new top
// st.pop() ;
// cout<< st.peek() <<endl ;          //output: 24

// st.pop() ;
// cout<< st.peek() <<endl ;          //output: 23

// st.pop() ;
// cout<< st.peek() <<endl ;          //output: 22

// st.pop() ;
// cout<< st.peek() <<endl ;          //output: stack is empty -1

// //checking if stack is empty or not
// if(st.isEmpty()) {
//     cout<< "stack is empty bhaiya" <<endl ;    //output: stack is empty bhaiya
// }
// else{
//     cout<<"stack is not empty bhiya" <<endl ;
// }

// //trying to overflow stack
// st.push(11) ;
// st.push(12) ;
// st.push(13) ;
// st.push(14) ;
// st.push(15) ;
// st.push(16) ;            
// //because we assign stack size 5 after inserting 5th element stack becomes full
// // and if we try to add another element it shows stack is overflowed

//     return 0;
// }

//              🔴 Implementing stack through LINKED LIST:

// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
    
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Stack{
//     public:
//     Node* head;
//     int size;
    
//     Stack(int size){
//         this->size = size;
//         this->head = NULL;
//     }
    
//     //push operation 
//     void push(int data){
//         int cnt = 0;
//         Node* temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             cnt++;
//         }
//         if(cnt<size){
//             // insert at head
//             Node* newNode = new Node(data);
//             if(head==NULL){
//                 head = newNode;
//                 return;
//             }
//             else{
//                 newNode->next = head;
//                 head = newNode;
//             }
//         }
//         else cout<<"Stack Overflow"<<endl;
//     }

//     // checking top/peek element
//     void peak(){
//         if(head==NULL) cout<<"stack is empty"<<endl;
//         else{
//             cout<<head->data<<endl;
//         }
//     }
    
//     //pop operation
//     void pop(){
//         if(head==NULL) cout<<"Stack underflow"<<endl;
//         else{
//             Node* temp = head;
//             cout<<"poped element is: "<<temp->data<<endl;
//             head = head->next;
//             delete temp;
//         }
//     }

//     //checking if stack is empty or not
//     bool isEmpty(){
//         if(head==NULL) return true;
//         else return false;
//     }
// };

// int main() {
//     //initialising stack
//     Stack s(5);      //size 5

//     //pushing element
//     s.push(5);
//     s.push(15);
//     s.push(25);
//     s.push(35);
//     s.push(45);
//     //checking if empty or not
//     cout<<s.isEmpty()<<endl;        //output: 0  (false not empty)

//     //trying to overflow stack by inserting element more than size
//     s.push(5);           //output: stack overflow
//     //checking top element
//     s.peak();            //output: 45
//     //poping top element
//     s.pop();             //output: poped element is 45
    
//     s.peak();            //output: 35
//     s.pop();             //output: poped element is 35
     
//     s.peak();            //output: 25
//     s.pop();             //output: poped element is 25
    
//     s.peak();            //output:  25
//     s.pop();             ///output: 15
    
//     s.peak();           //output: 15
//     s.pop();            //output: 5
    
//     s.peak();           //output: stack is empty
//     s.pop();            //output: stack is underflow
//     cout<<s.isEmpty()<<endl;       //output : 1 (true stack is empty)

//     return 0;
// }




//                         //❓Question:  Two stacks

//Design a data structure which represents two stacks using only one array common for both
// stacks. the data structure should support the following operations

// push1(NUM) - Push 'NUM' into stack1.
// push2(NUM) - Push 'NUM' into stack2.
// pop1() - Pop out a top element from stack1 and return popped element, in case of underflow
//  return -1.
//  pop2() - Pop out a top element from stack2 and return popped element, in case of underflow
//  return -1.

// There are 2 types of queries in the input
//    Type 1 - These queries correspond to Push operation.
//    Type 2 - These queries correspond to Pop operation.

// Note:
//    1. You are given the size of the array.
//    2. You need to perform push and pop operations in such a way that we are able to push
//    elements in the stack until there is some empty space available in the array.
//    3. While performing Push operations, do nothing in the situation of the overflow of the
//    stack.


// Sample Input 1:
// 3 5
// 1 1 3
// 1 2 4
// 1 1 5
// 2 1
// 2 2
// Sample Output 1:
// 5
// 4

//       __   __       __   __       __   __       __   __       __   __
//      |3 | |  |  => |3 | |4 |  => |5 | |4 |  => |3 | |4 |  => |3 | |  |  =>
//      |  | |  |  => |  | |  |  => |3 | |  |  => |  | |  |  => |  | |  |  =>
//       s1   s2       s1   s2       s1   s2       s1   s2       s1    s2

// Here every step shows a snapshot of 2 stacks after each operation.

// Initialising the size of the array to 3, twoStack = new TwoStack(3).
// Then operation on two stacks occurs as follows:
// twoStack.push1(3) // pushing 3 in stack1.
// twoStack.push2(4) // pushing 4 in stack2.
// twoStack.push1(5) // pushing 5 in stack1.
// twoStack.pop1() // popping out from stack2, it returns 5.
// twoStack.pop2() // popping out from stack2, it returns 4.


// Sample Input 2:
// 3 10
// 1 1 2
// 1 1 4
// 1 1 3
// 1 2 5
// 2 2
// 2 1
// 1 2 6
// 2 2
// 2 1
// 1 2 7
// Sample Output 2:
// -1
// 3
// 6
// 4


//🔸so basically we need to create two stack in a single array 
//🔸APPRAOCH : 
//we will add stack1 from the front of the array from the 0th index
// and stack1 from the end of the array from the size -1 ;
//keep adding element till no space available
// and also perform pop operation in both stack
// this is optimal way to solve this problem because space is optimised nicely
//                  0  1  2  3  4  5  6  7  8  9 
//array :         [  |  |  |  |  |  |  |  |  |  | ]
//          stack1 ⬆️                           ⬆️ stack2

// #include<iostream>
// using namespace std;

// class TwoStack{
     
//     public:
//     int* arr ;
//     int top1 ;
//     int top2 ;
//     int size ;

//     //consrtuctor:
//     TwoStack(int size) {
//         this -> size = size ;
//         top1 = -1 ;             //top1 will add element from oth index (front of array)
//         top2 = size ;           //top2 will add element from size -1 index (back of array)
//         arr = new int[size] ;
//     }

//     //behaviour:

//     //push in stack 1
//     void push1(int num) {
//        //atleast one empty space present
//        if(top2 - top1 > 1) {
//         top1++ ;
//         arr[top1] = num ;
//        }
//     }

//     //push in stack 2
//     void push2(int num) {
//         //atleast one empty space present
//         if(top2 - top1 > 1) {
//         top2-- ;
//         arr[top2] = num ;
//         }
//     }

//     //pop from stack 1 and return popped element
//     int pop1() {
//         if(top1 >= 0) {
//             int ans = arr[top1] ;
//             top1-- ;
//             return ans ;
//         }
//         else{
//            return -1 ;
//         }
//     }

//    //pop from stack 2 and return popped element
//     int pop2() {
//         if(top2 < size) {
//             int ans = arr[top2] ;
//             top2++ ;
//             return ans ;
//         }
//         else{
//            return -1 ;
//         }
//     }

// } ;


<<<<<<< HEAD
//60 / 149   new video
=======
//60/149
>>>>>>> 0cc2519acf4486fb4916bf4c69ec9370a42e03a0
