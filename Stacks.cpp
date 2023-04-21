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


//                      ❓Question:  Reverse a string using stack

//ex: Input:  babbar
//    output: rabbab

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {

// string str = "babbar" ;

// stack<int> s;                        //stack initialise

// // looop to push single character from the string into the stack 
// // (we cannot just push whole string together in stack)
// // here stack will become   [r | a | b | b | a | b]   like this (already in reverse order)
// for(int i=0; i< str.length(); i++) {     
//     char ch = str[i] ;
//     s.push(ch) ;
// }

// // initialise ans string to store final answer (Reverse string)
// string ans = "" ;

// //loop run till stack is not empty, and inside take last character from the stack ans push_back in ans
// // so ans string will become   [r | a | b | b | a | b ]  like this (pushing from back <=)
// while( !s.empty()) {
//     char ch =  s.top() ;
//     ans.push_back(ch) ;
//     s.pop() ;
// }

// cout<<"answer is: "<< ans <<endl ;          //output: rabbab

// return 0 ;
// }
//🔴time complexity: O(N)
//🔴space complexity: O(N)


//                       //❓Question:  Delete middle element from stack

// You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so that the size of
// resulting stack is 'N'.
// A stack is a linear data structure where both insertion and deletion of elements take place at the top. It
// follows FILO (First In Last Out) or LIFO (Last In First Out) approaches. Books piled on top of each other is an
// example of a stack, where you can only remove a single book at a time, which is at the top of the stack.
//  Likewise, you can only add a single book at


// Sample Input 1:
// 2
// 4
// 1 2 3 4 5
// 7
// 83 74 67 49 94 8 11 1
// Sample Output 1:
// 1 2 4 5
// 83 74 67 94 8 11 1

// Explanation for Sample 1:
// In the 1st testcase, there are an odd number of elements, 
// hence the middle element is clearly the (N+1) / 2th element which is 3, and is removed from the stack in the output.
// In the 2nd testcase, there are an odd number of elements,
// hence the middle element is clearly the (N+1) / 2th element which is 49, and is removed from the stack in the output.

// Sample Input 2:
// 3
// 1
// 5 10    
// 4
// 1 3 4 2 7
// 5
// 9 5 2 7 8 6
// Sample Output 2:
// 10
// 1 3 2 7
// 9 5 7 8 6

// #include<iostream>
// #include<stack>
// using namespace std;

// //code to find middle element and delete it through recurrsion
// void solve(stack<int> &inputStack, int count, int size) {
//     //base case
//     cout<<" base case check kiya "<<endl ;
//     if(count == size/2) {
//         inputStack.pop() ;
//         return ;
//     }
    
//     int num = inputStack.top() ;
//     inputStack.pop() ;
//     cout<< "num me input data : " <<num <<endl ;

//     //recursive call 
//     solve(inputStack, count+1, size) ;
   
//    cout<< "last me pohoch gaya yaha num hai:" <<num  <<endl ;
//     inputStack.push(num) ;

// }
// //main code
// void deleteMiddle(stack<int> &inputStack , int N){
//     cout<< "deletemiddle me aya : "<<endl ;
//     int count = 0 ;
//     solve(inputStack, count, N) ;
// }

// int main() {

// stack<int> inputStack ;

// inputStack.push(1) ;
// inputStack.push(2) ;
// inputStack.push(3) ; 
// inputStack.push(4) ; 
// inputStack.push(5) ; 
// inputStack.push(6) ; 

// int size = inputStack.size() ;

// deleteMiddle(inputStack, size) ;

//     return 0;
// }


//                  //❓Question: Valid parenthesis

// You're given string 'STR' consisting solely of "{" "}", and "]" Determine whether the parentheses
// are balanced.

// Sample Input 1 :
// 2
// [()]{}{[()()]()}
// [(])
// Sample Output 1 :
// Balanced
// Not Balanced

// Explanation Of The Sample Input 1 :
// In TestCase 1 there is always an opening brace before a closing brace 
// i.e ‘{‘ before ‘}’, ‘(‘ before ‘)’, ‘[‘ before ‘]’.
// In TestCase 2 there is closing brace for ‘[‘ i.e. ‘]’ before closing brace for ‘(‘ i.e. ‘)’. 
// The balanced sequence should be ‘[()]’.

// Sample Input 2 :
// 2
// [[}[
// []{}()
// Sample Output 2 :
// Not Balanced
// Balanced

// Explanation Of The Sample Input 2 :
// In TestCase 1 there is no opening brace before a closing brace i.e no ‘{‘ for ‘}’.
// In TestCase 2 there is exactly one closing for each opening braces 
// and each closing brace is after their corresponding opening brace.

// #include<iostream>
// #include<stack>
// using namespace std;

// bool isValidParenthesis(string expression) {

//     stack<int> s;
//     for( int i=0; i < expression.length(); i++) {

//         char ch = expression[i];

//         //if opening bracket, stack push
//         //if close brakcet stack check and pop
//         if(ch == '(' || ch == '{' || ch == '[') {
//             s.push(ch) ;
//         }
//         else{
//             //for closing bracket
//             if( !s.empty()) {
//               char top = s.top() ;
//                 if( (ch == ')' && top == '(') ||
//                     (ch == '}' && top == '{') ||
//                     (ch == ']' && top == '[')  ) {
//                     s.pop() ;
//                 }
//                 else{
//                     return false ;
//                 }
//             }
//             else{
//                 return false ;
//             }
//         }
//     }

//     if(s.empty()) {
//         return true ;
//     }
//     else{
//         return false;
//     }
// }

// int main() {

// string expression = "[{()}]" ;          //output: true (1)
// // string expression = "[{(})]" ;       //output: false (0)

// cout<< isValidParenthesis(expression) ;

//     return 0;
// }
//🔴time complexity: O(n) 
//🔴space complexity: O(n)



//                   //❓Question : Insert AN element at its bottom in a given stack

// You are given a stack/deque of integers 'MY-STACK' and an integer 'X'. Your task is to insert 'X' to the bottom of 'MY-
// STACK® and return the updated stack/deque.

// Note:
// If 'MY_STACK' = [7, 1, 4, 5], then the first element represents the element at the bottom of the
// stack and the last element represents the element at the top of the stack.

// For Example:
// Let 'MY_STACK` - [7, 1, 4, 5] and 'X' = 9. So, 'MY_STACK' after insertion becomes [9, 7, 1, 4, 5].

// Sample Input 1 :
// 2
// 3 8
// 4 3 2
// 4 5
// 6 2 4 9
// Sample Output 1 :
// 8 4 3 2
// 5 6 2 4 9

// Sample Input 2 :
// 2
// 1 0
// 4 
// 2 5
// 1 9
// Sample Output 2 :
// 0 4
// 5 1 9

// #include<iostream>
// #include<stack>
// using namespace std ;

// void solve(stack<int> &myStack, int x) {
//     //base case
//     if(myStack.empty()) {
//         myStack.push(x) ;
//         return ;
//     }

//     int num = myStack.top() ;
//     myStack.pop() ;

//     //recursive call
//     solve(myStack, x) ;

//     myStack.push(num) ;
// }

// stack<int> pushAtBottom(stack<int> &myStack, int x) {
//     solve(myStack, x) ;
//     return myStack ;
// }

// int main() {
//     stack<int> myStack;

//     myStack.push(2) ;
//     myStack.push(3) ;
//     myStack.push(4) ;
//     myStack.push(5) ;
//     myStack.push(6) ;

//     int x = 1 ;

//    stack<int> ans = pushAtBottom(myStack, x) ;

//    return 0;
//  }
//🔴Time complexity: O(N)
//🔴space complexity: O(n)


//                   //❓Question: Reverse stack using recrusion


// Reverse a given stack of integers using recursion.

// Note:
//    You are not allowed to use any extra space other than the internal stack space used due to recursion.
//    You are not allowed to use the loop constructs of any sort available as handy. For example: for, for-
//    each, while, etc.
//    The only inbuilt stack methods allowed are:
//    push(x) -- Push element x onto stack.
//    pop() -- Removes the element on top of the stack.
//    top() -- Get the top element.

// Output Format:
// N single space-separated integers in a single line, where the first integer denotes the TOP element of the reversed stack.

// Sample Input 1:
//    3
//    213
// Sample Output 1:
//    213

// Explanation To Sample Input 1:
//    First-line contains an integer 3 denotes the size of the input stack i.e N - 3.
//    Second-line contains 3 single space-separated integers i.e the elements of the stack.

// sample input 2:
// 2
// 3 2
// Sample Output 2:
// 3 2


// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int> &s, int element){

//     //base case
//     if(s.empty()) {
//         s.push(element);
//         return ;
//     }

//     int num = s.top() ;
//     s.pop() ;

//    //recursive call
//     insertAtBottom(s, element) ;
   
//     s.push(num) ;
// }

// //main code
// void reverseStack(stack<int> &s) {
//      //base case
//     if(s.empty()) {
//         return ;
//     }

//    int num = s.top() ;
//    s.pop() ;

//   //recrusive call
//    reverseStack(s) ;
    
//  insertAtBottom(s, num) ;
// }

// int main() {

// stack<int> s ;

// s.push(2) ;
// s.push(1) ;
// s.push(3) ;

// reverseStack(s) ;

//     return 0;
// }
//🔴Time complexity : O(N sqr) 
//🔴space complexity : O(N)        // O(2N) = O(n)



//                        //❓Question: Sort A stack using recursion


// You're given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.
// We can only use the following functions on this stack S.

//    is_empty(s) : Tests whether stack is empty or not.
//    push(S) : Adds a new element to the stack.
//    pop(S) : Removes top element from the stack.
//    top(S) : Returns value of the top element. Note that this function does not remove elements from the
//    stack.

// Note:
//  🔸1) Use of any loop constructs like while, for..etc is not allowed.
//    2) The stack may contain duplicate integers.
//    3) The stack may contain any integer i.e it may either be


// Sample Input 1:
// 1
// 5
// 5 -2 9 -7 3
// Sample Output 1:
// 9 5 3 -2 -7
// Explanation Of Sample Input 1:
// 9 Is the largest element, hence it’s present at the top. 
// Similarly 5>3, 3>-2 and -7 being the smallest element is present at the last. 


// Sample Input 2:
// 1
// 5
// -3 14 18 -5 30
// Sample Output 2:
// 30 18 14 -3 -5
// Explanation Of Sample Input 2:
// 30 is the largest element, hence it’s present at the top. 
// Similarly, 18>14, 14>-3 and -5 being the smallest element is present at the last. 

// #include<iostream>
// #include<stack>
// using namespace std;

// void sortedInsert(stack<int> &s, int num) {
//     //base case
//     if(s.empty() || (!s.empty() && s.top() < num)){
//       s.push(num)  ;
//       return ;
//     }

//     int n = s.top() ;
//     s.pop() ;

//     //recursive call
//     sortedInsert(s, num) ;

//     s.push(n)  ;
// }

// //main code
// void sortStack(stack<int> &s) {
//     //base case
//     if(s.empty()) {
//         return ;
//     }

//     int num = s.top() ;
//     s.pop() ;

//     //recursive call
//     sortStack(s) ;

//     sortedInsert(s, num) ;
// }

// int main() {

// stack<int> s;

// s.push(3) ;
// s.push(5) ;
// s.push(1) ;
// s.push(7) ;
// s.push(4) ;

// sortStack(s) ;

//     return 0;
// }
//🔴time complexitY: O(n sqr)
//🔴 space complexity: O(n)



//                     //❓Question: Redundant Brackets

// Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression
// contains a pair of redundant brackets, else return false. The given string only contains T.T. '+', - ** */ and lowercase
// English letters.

// Note:
// A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

// For Example:
//    ((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is
//    needless.
//    While (a + (b*c)) does not have any pair of redundant brackets.

// Sample Input 1 :
// 2
// (a+b)
// (a+c*b)+(c))
// Sample Output 1 :
// No
// Yes
// Explanation Of Sample Input 1 :
// In the first test case, there are no redundant brackets. 
// Hence, the output is “No”. 
// In the second test case, the brackets around the alphabet ‘c’( index 8 and index 10) are redundant.
// Hence the output is “Yes”.

// Sample Input 2 :
// 2
// (a*b+(c/d))
// ((a/b))
// Sample Output 2 :
// No
// Yes
// Explanation Of Sample Input 2 :
// In the first test case, there are no redundant brackets. 
// Hence, the output is “No”. 
// In the second test case, the brackets around the subexpression “(a+b)” ( index 0 and index 6) are redundant. 
// Hence the output is “Yes”.


//🔴approach 1:  
// #include<iostream>
// #include<stack>
// using namespace std;

// bool findRedundantBrackets(string &s) {
//     stack<char> st ;

//     for(int i=0; i< s.length(); i++) {
//         char ch = s[i] ;
//         if( ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch) ;
//         }
//         else{
//         //ch ya toh ')' hai or lowercase letter hai
//             if(ch == ')'){
//                 bool isRedundant = true ;

//                 while( st.top() != '(' ) {
//                     char top = st.top() ;
//                     if( top == '+' || top == '-' || top == '*' || top == '/' ){
//                        isRedundant = false ;
//                     }
//                     st.pop() ;
//                 }

//                 if(isRedundant == true) 
//                 return true ;
//                 st.pop() ;
//             } 
//         }
//     }
//     return false ;
// }

// int main() {
//     string s = "(a*b+(c/d))" ;
//     // string s = "((a/b))" ;

//     findRedundantBrackets(s) ;
//     return 0;
// }
//🔴Time complexity: O(N)
//🔴Space complexity: o(N)



// // 🔴Approach2 : No TLE /
// #include<iostream>
// #include<stack>
// using namespace std;

// bool findRedundantBrackets(string &s)
// {
//     stack<char> st ;
    
//     for(int i=0; i<s.length(); i++){

//         char ch = s[i] ;
//         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
//             st.push(ch) ;
//         }
//         else{
//             //ch is ')' or lowercase letter
//             if(ch == ')'){
//                 int count = 0 ;
                
//                 while( st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
//                     st.pop() ;
//                     count++ ;
//                 }
//                 st.pop() ;
//                 if(count == 0) {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     string s = "(a*b+(c/d))" ;
//     // string s = "((a/b))" ;

//     findRedundantBrackets(s) ;
//     return 0;
// }

//🔴Time complexity: O(N)
//🔴Space complexity: o(N)


//                          //❓Question: Minimum Cost to make string valid

// Ninja has been given a string 'STR' containing either '{' or '}'. 
// 'STR' is called valid if all the brackets are balanced. Formally for each opening
// bracket, there must be a closing bracket right to it.

// For Example:
// "{}{}", "{{}}" "{{}{}}" are valid strings while "}{}", "{}}{{}", are not valid strings.
                                                        
// Ninja wants to make 'STR' valid by performing some operations on it. 
// In one operation, he can convert '{' into '}' or vice versa, and the cost
// of one such operation is 1.
// Your task is to help Ninja determine the minimum cost to make 'STR' valid.

// For Example:
// Minimum operations to make 'STR' = "{{" valid is 1.

// In one operation, we can convert '{' at index '1' (0-based indexing) to '}'. The 'STR' now becomes "{}" which is a valid string.
// Note:
//    Return 1- if it is impossible to make 'STR' valid.


// Sample Input 1:
// 2
// {{{}
// {{}{}}
// Sample Output 1:
// 1
// 0
// Explanation For Sample Input 1:
// For the first test case:
// The two valid strings that can be obtained from  ‘STR’ using minimum operations “{{}}”   and “{}{}”. Ninja can transform ‘STR’ to “{{}}” by performing the following operations:
// Convert ‘{’ at index 2 to ‘}’.

// Ninja can transform ‘STR’ to “{}{}” by performing the following operations:
// Convert ‘{‘ at index 1 to ‘}’.
// The minimum number of operations in transforming ‘STR’ to either of the two valid strings is 1.So, the total cost is 1.

// For the second test case:
// Given ‘STR’ is already valid so the minimum number of 
// operations required is 0.
// So, the total cost is 0.


// Sample Input 2:
// 3
// {}}{}}
// {{{{
// {{{}}
// Sample Output 2:
// 1
// 2
// -1


// #include<iostream>
// #include<stack>
// using namespace std;

// int findMinimumCost(string str) {
    
//     //odd condition  {}}
//     if( str.length() % 2 == 1) {
//         return -1 ;
//     }

//     //valid expresssion  {{}{}}
//     stack<char> s ;
//     for(int i=0; i<str.length(); i++) {
//         char ch = str[i] ;

//         if(ch == '{') {
//             s.push(ch) ;
//         }
//         else{
//             //ch is closed brace
//             if( !s.empty() && s.top() == '{') {
//                 s.pop() ;
//             }
//             else{
//                 s.push(ch) ;
//             }
//         }
//     }
//         //stack  contains invalid experssion  }}}{{{ , }}}}{{{{ 
//         int a = 0 , b = 0 ;
//         while( !s.empty() ) {
//             if( s.top() == '{'){
//                 b++ ;
//             }
//             else{
//                 a++ ;
//             }
//             s.pop() ;
//         }

//         int ans = (a+1)/2 + (b+1)/2 ;

//         return ans ;
// }

// int main() {
//     string str = "{}}{}}" ;
//     // string str = "{{{{" ;
//     // string str = "{{{}}" ;
//     // string str = "{{}{}}" ;

//     int ans = findMinimumCost(str) ;

//     return 0;
// }
//🔴Time complexity: O(N)
//🔴space complexity: O(N)



//                    //❓Question:  Next Smaller Element

// You are given an array 'ARR' of integers of length N. Your task is to find the next smaller element for each of the array elements.
//  Next Smaller Element for an array element is the first element to the right of that element which has a value strictly smaller than that
//  element.
//  If for any array element the next smaller element does not exist, you should print -1 for that array element.

//  For Example:
//    If the given array is [ 2, 3, 1], we need to return [1, 1, -1].
//    Because for 2, 1 is the Next Smaller element. For
//    3,

// Sample Input 1:
// 2
// 4
// 2 1 4 3
// 3
// 1 3 2
// Sample Output 1:
// 1 -1 3 -1
// -1 2 -1

// Explanation For Sample Input 1:
// For the first test case : 
// 1) For ARR [1] = 2 ,  the next smaller element is 1. 
// 2) For ARR [2] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
// 3) For ARR [3] = 4 ,  the next smaller element is 3.
// 4) For ARR [4] = 3 ,  the next smaller element is -1 as no element exists in the right of it.
// Hence, we will return the array [ 1, -1, 3, -1] in this case.

// For the second test case :
// 1) For ARR [1] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
// 2) For ARR [2] = 3 ,  the next smaller element is 2.
// 3) For ARR [3] = 2 ,  the next smaller element is -1 as no element exists in the right of it.
// Hence we will return the array [ -1, 2, -1 ] in this case.

// Sample Input 2:
// 2
// 4
// 1 2 3 4
// 2
// 5 0
// Sample Output 2:
// -1 -1 -1 -1
//  0 -1


// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std ;

// vector<int> nextSmallerElement(vector<int> &arr, int n) {
      
//     stack<int> s ;
//     s.push(-1) ;          //kyuki hum arr ke piche se traverse karenge is stack me -1 push kardenge kyuki searching element ke right side me hogi
//     vector<int> ans(n) ;


//     for(int i=n-1; i>=0; i--) {
//         int curr = arr[i] ;
//         //agar element greater than equal hai curr ke toh pop karo
//         while(s.top() >= curr) {
//             s.pop() ;
//         }
//         //agar element smaller hai toh answer milgaya vector me add karo 
//         //ans is stack ka top
//         ans[i] = s.top() ;
//         s.push(curr) ;
//     }
//     return ans;

// } 

// int main() {

// vector<int> arr ;

// arr.push_back(1) ;
// arr.push_back(2) ;
// arr.push_back(3) ;
// arr.push_back(4) ;

// int n = arr.size() ;
// vector<int> ans  = nextSmallerElement(arr, n ) ;

//     return 0;
// }



//🔴🔴                   //❓Question: largest Rectangle in Histogram (HARD)

// Given an array of integers heights representing the histogram's bar height 
// where the width of each bar is 1, return the area of the largest rectangle in the histogram.

//                                        | 10 |
//             |6|                        |    | 
//         |5| | |     |3|                |    |     |3|
// |2|     | | | | |2| | |        |2|     |    | |2| | |
// | | |1| | | | | | | | |        | | |1| |    | | | | |

// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.

// Input: heights = [2,4]
// Output: 4



// #include<bits/stdc++.h>
// using namespace std;

// //next smaller elem code:
// vector<int> nextSmallerElement(vector<int> arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=n-1; i>=0; i--) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //prev smaller elem code:
// vector<int> prevSmallerElement(vector<int> arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=0; i<n; i++) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //main code
// int largestRectangleArea(vector<int> & heights ){

//     int n = heights.size() ;
//     vector<int> next(n) ;
//     next = nextSmallerElement(heights, n) ;

//     vector<int> prev(n) ;
//     prev = prevSmallerElement(heights, n) ;

//     int area = INT_MIN; 
//     for(int i=0; i<n; i++) {
//         int length = heights[i] ;
         
//         if(next[i] == -1){
//             next[i] = n ;
//         }

//         int breadth = next[i] - prev[i] - 1 ;

//         int newArea = length * breadth ;
//         area = max(area, newArea) ;
//     }
//    return area ;
// }

// int main() {

// }

//🔴Time complexity: o(N)       ==> o(n) + o(n) + o(n) ==>  3o(3N) => O(N)
//🔴space complexity: o(N)


//62/149