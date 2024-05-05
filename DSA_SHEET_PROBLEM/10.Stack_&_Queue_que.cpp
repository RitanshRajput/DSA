//
//                      🔴🔴🔴 STACK & QUEUE🔴🔴🔴 
//
///



//              ❓Question:  Implementing stack through ARRAY :
// #include<iostream>
// using namespace std ;

// class Stack{
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
//🔸time complecity: O(1)

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

//              ❓Question:  Implementing stack through LINKED LIST:

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


// 
//                      //❓Question: Implement Queue from scratch 
//

// #include<iostream> 
// #include<queue>
// using namespace std;

// class Queue {
//
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

//🔸Time complexity: O(1) 
//🔸space complexity: O(size)  

//
//              //❓Question: Implementing queue using Linked list
//

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
//
//
//🔸Time complexity: O(1) 
//🔸space complexity: O(size)  
//

//
//                      ❓Question: Implement two stacks in an array
//

// Your task is to implement  2 stacks in one array efficiently. You need to implement 4 methods.

// twoStacks : Initialize the data structures and variables to be used to implement  2 stacks in one array.
// push1 : pushes element into first stack.
// push2 : pushes element into second stack.
// pop1 : pops element from first stack and returns the popped element. If first stack is empty, it should return -1.
// pop2 : pops element from second stack and returns the popped element. If second stack is empty, it should return -1.

// Example 1:
// Input:
// push1(2)
// push1(3)
// push2(4)
// pop1()
// pop2()
// pop2()
// Output:
// 3 4 -1
// Explanation:
// push1(2) the stack1 will be {2}
// push1(3) the stack1 will be {2,3}
// push2(4) the stack2 will be {4}
// pop1()   the poped element will be 3 from stack1 and stack1 will be {2}
// pop2()   the poped element will be 4 from stack2 and now stack2 is empty
// pop2()   the stack2 is now empty hence returned -1.

// Example 2:
// Input:
// push1(1)
// push2(2)
// pop1()
// push1(3)
// pop1()
// pop1()
// Output:
// 1 3 -1
// Explanation:
// push1(1) the stack1 will be {1}
// push2(2) the stack2 will be {2}
// pop1()   the poped element will be 1 from stack1 and stack1 will be empty
// push1(3) the stack1 will be {3}
// pop1()   the poped element will be 3 from stack1 and stack1 will be empty
// pop1()   the stack1 is now empty hence returned -1.

// Your Task:
// You don't need to read input or print anything. You are required to complete the 4 methods push1, push2 which takes one argument an integer 'x' to be pushed into stack one and two and pop1, pop2 which returns the integer poped out from stack one and two. If no integer is present in the stack return -1.

// Expected Time Complexity: O(1) for all the four methods.
// Expected Auxiliary Space: O(1) for all the four methods.

// Constraints:
// 1 <= Number of queries <= 104
// 1 <= Number of elements in the stack <= 100
// The sum of count of elements in both the stacks < size of the given array

//🔴approach :
// class twoStacks
// {
//     int *arr;
//     int size;
//     int top1, top2;
//     public:
    
//     twoStacks(int n=100)
//     {
//         size = n; 
//         arr = new int[n]; 
//         top1 = -1; 
//         top2 = size;
//     }
 
//     //Function to push an integer into the stack1.
//     void push1(int x)
//     {
//         if(top2 - top1 > 1){
//             top1++ ;
//             arr[top1] = x ;
//         }
//     }
    
//     //Function to push an integer into the stack2.
//     void push2(int x)
//     {
//        if(top2 - top1 > 1){
//            top2-- ;
//            arr[top2] = x ;
//        }
//     }
    
//     //Function to remove an element from top of the stack1.
//     int pop1()
//     {
//         if(top1 >= 0) {
//             int ans = arr[top1] ;
//             top1-- ;
//             return ans ;
//         }
//         else{
//             return -1;
//         }
//     }
    
//     //Function to remove an element from top of the stack2.
//     int pop2()
//     {
//         if(top2 < size) {
//             int ans = arr[top2] ;
//             top2++ ;
//             return ans ;
//         }
//         else{
//             return -1 ;
//         }
//     }
// };
//🔸Time complexity: O(1) 
//🔸space complexity: O(size)  
//

//
//                          ❓Question: Design a stack to implement operation on middle element
//

// How to implement a stack which will support the following operations in O(1) time complexity? 
// 1) push() which adds an element to the top of stack. 
// 2) pop() which removes an element from top of stack. 
// 3) findMiddle() which will return middle element of the stack. 
// 4) deleteMiddle() which will delete the middle element. 
// Push and pop are standard stack operations. 

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//         int num;
//         Node* next;
//         Node* prev;
//
//         Node(int num) {
//          this->num = num; 
//         }
//     };
 
// class myStack {
//     // Members of stack
//     Node* head = NULL;
//     Node* mid = NULL;
//     int size = 0;
 
// public:
//     void push(int data)
//     {
//         Node* temp = new Node(data);
//         if (size == 0) {
//             head = temp;
//             mid = temp;
//             size++;
//             return;
//         }
 
//         head->next = temp;
//         temp->prev = head;
 
//         // update the pointers
//         head = head->next;
//         if (size % 2 == 1) {
//             mid = mid->next;
//         }
//         size++;
//     }
 
//     int pop()
//     {
//       int data=-1;
//         if (size != 0) {
//           Node* toPop = head;
//           data = toPop->num;
//             if (size == 1) {
//                 head = NULL;
//                 mid = NULL;
//             }
//             else {
//                 head = head->prev;
//                 head->next = NULL;
//                 if (size % 2 == 0) {
//                     mid = mid->prev;
//                 }
//             }
//               delete toPop;
//             size--;
//         }
//       return data;
//     }
 
//     int findMiddle()
//     {
//         if (size == 0) {
//             return -1;
//         }
//         return mid->num;
//     }
 
//     void deleteMiddle()
//     {
//         if (size != 0) {
//               Node* toDelete = mid;
//             if (size == 1) {
//                 head = NULL;
//                 mid = NULL;
//             }
//             else if (size == 2) {
//                 head = head->prev;
//                 mid = mid->prev;
//                 head->next = NULL;
//             }
//             else {
//                 mid->next->prev = mid->prev;
//                 mid->prev->next = mid->next;
//                 if (size % 2 == 0) {
//                     mid = mid->prev;
//                 }
//                 else {
//                     mid = mid->next;
//                 }
//             }
//               delete toDelete;
//             size--;
//         }
//     }
// };
 
// int main()
// {
//     myStack st;
//     st.push(11);
//     st.push(22);
//     st.push(33);
//     st.push(44);
//     st.push(55);
//     st.push(66);
//     st.push(77);
//     st.push(88);
//     st.push(99);
//     cout <<"Popped : "<< st.pop() << endl;
//     cout <<"Popped : "<< st.pop() << endl;
//     cout <<"Middle Element : "<< st.findMiddle() << endl;
//     st.deleteMiddle();
//     cout <<"New Middle Element : "<< st.findMiddle() << endl;
//     return 0;
// }

//
//                          ❓Question: Parenthesis Checker
//

// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).
// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// Example 1:
// Input:
// {([])}
// Output: 
// true
// Explanation: 
// { ( [ ] ) }. Same colored brackets can form 
// balanced pairs, with 0 number of 
// unbalanced bracket.

// Example 2:
// Input: 
// ()
// Output: 
// true
// Explanation: 
// (). Same bracket can form balanced pairs, 
// and here only 1 type of bracket is 
// present and in balanced way.

// Example 3:
// Input: 
// ([]
// Output: 
// false
// Explanation: 
// ([]. Here square bracket is balanced but 
// the small bracket is not balanced and 
// Hence , the output will be unbalanced.
// Your Task:
// This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true if brackets are balanced else returns false. The printing is done automatically by the driver code.

// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)

// Constraints:
// 1 ≤ |x| ≤ 32000

//🔴Approach : 
// class Solution
// {
//     public:
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x)
//     {
//         stack<char> temp;
//         temp.push(x[0]) ;
        
//         int n = x.length() ;
//         int i=1; 
        
//         while(i < n) {
            
//             if(temp.empty()) {
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             else{
            
//             if(temp.top() == '[' && x[i] == ']') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '(' && x[i] == ')') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '{' && x[i] == '}') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else{
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             }
//         }
        
//         return temp.empty();
//     }
// };

//🔸Time complexity: O(n) 
//🔸space complexity: O(n)  
//

//
//                      ❓Question: Reverse a string using Stack
//

// You are given a string S, the task is to reverse the string using stack.

// Example 1:
// Input: S="GeeksforGeeks"
// Output: skeeGrofskeeG
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function reverse() which takes the string S as an input parameter and returns the reversed string.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 ≤ length of the string ≤ 100

//🔴approach : 
//return the address of the string
// char* reverse(char *S, int len)
// {
//     stack<char> st;
    
//     for(int i=0; i<len; i++){
//         char temp = S[i];
//         st.push(temp);
//     }
    
//     for(int i=0; i<len; i++){
//         char temp = st.top();
//         st.pop();
//         S[i] = temp;
//     }
    
//     return S;
// }

//🔸Time complexity: O(n) 
//🔸space complexity: O(n)  
//

//
//                      ❓Question: Special Stack
//

// Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), 
// isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. 
// Your task is to complete all the functions, using stack data-Structure.

// Example 1:
// Input:
// Stack: 18 19 29 15 16
// Output: 15
// Explanation:
// The minimum element of the stack is 15.
 
// Your Task:
// Since this is a function problem, you don't need to take inputs. You just have to complete 5 functions, push() which takes the stack and an integer x as input and pushes it into the stack; pop() which takes the stack as input and pops out the topmost element from the stack; isEmpty() which takes the stack as input and returns true/false depending upon whether the stack is empty or not; isFull() which takes the stack and the size of the stack as input and returns true/false depending upon whether the stack is full or not (depending upon the
// given size); getMin() which takes the stack as input and returns the minimum element of the stack. 
// Note: The output of the code will be the value returned by getMin() function.

// Expected Time Complexity: O(N) for getMin, O(1) for remaining all 4 functions.
// Expected Auxiliary Space: O(1) for all the 5 functions.

// Constraints:
// 1 ≤ N ≤ 104

//🔴approach : 
// void push(stack<int>& s, int a){
// 	s.push(a);
// }

// bool isFull(stack<int>& s,int n){
// 	return (s.size() == n)? true : false;
// }

// bool isEmpty(stack<int>& s){
// 	return s.empty();
// }

// int pop(stack<int>& s){
// 	s.pop();
// }

// int getMin(stack<int>& s){
// 	int mini = INT_MAX;

// 	while(!s.empty()){
// 	    int tmp = s.top();
// 	    mini = min(mini, tmp);
// 	    s.pop();
// 	}
	
// 	return mini;
// }
//🔸Time complexity: O(n) 
//🔸space complexity: O(1)  
//

//
//                  ❓Question:  Next Greater Element
//

// Given an array arr[ ] of size N having elements, the task is to find the next greater 
// element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the 
// right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element 
// for current element is -1. For example, next greater of the last element is always -1.

// Example 1:
// Input: 
// N = 4, arr[] = [1 3 2 4]
// Output:
// 3 4 4 -1
// Explanation:
// In the array, the next larger element 
// to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
// since it doesn't exist, it is -1.

// Example 2:
// Input: 
// N = 5, arr[] [6 8 0 1 3]
// Output:
// 8 -1 1 3 -1
// Explanation:
// In the array, the next larger element to 
// 6 is 8, for 8 there is no larger elements 
// hence it is -1, for 0 it is 1 , for 1 it 
// is 3 and then for 3 there is no larger 
// element on right and hence -1.

// Your Task:
// This is a function problem. You only need to complete the function nextLargerElement() that takes list of integers arr[ ] and N as input parameters and returns list of integers of length N denoting the next greater elements for all the corresponding elements in the input array.

// Expected Time Complexity : O(N)
// Expected Auxiliary Space : O(N)

// Constraints:
// 1 ≤ N ≤ 106
// 0 ≤ Ai ≤ 1018

//🔴approach : 
// class Solution
// {
//     public:
//     //Function to find the next greater element for each element of the array.
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//         stack<long long> st;
//         st.push(-1);
//         st.push(arr[n-1]);
        
//         vector<long long> vec(n, -1);
        
//         for(int i=n-2; i>=0 ; i--){
//             long long currElem = arr[i];
            
//             while(st.top() <= currElem && st.top() != -1){
//                 st.pop();
//             }
            
//             vec[i] = st.top();
//             st.push(currElem);
//         }
        
//         return vec;
//     }
// };
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)  
//

//
//                     ❓Question: The Celebrity Problem
//
// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Return the index of the celebrity, if there is no celebrity return -1.
// Note: Follow 0 based indexing.
// Follow Up: Can you optimize it to O(N)

// Example 1:
// Input:
// N = 3
// M[][] = {{0 1 0},
//          {0 0 0}, 
//          {0 1 0}}
// Output: 1
// Explanation: 0th and 2nd person both
// know 1. Therefore, 1 is the celebrity. 

// Example 2:
// Input:
// N = 2
// M[][] = {{0 1},
//          {1 0}}
// Output: -1
// Explanation: The two people at the party both
// know each other. None of them is a celebrity.

// Your Task:
// You don't need to read input or print anything. Complete the function celebrity() which takes the matrix M and its size N as input parameters and returns the index of the celebrity. If no such celebrity is present, return -1.

// Expected Time Complexity: O(N^2)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 3000
// 0 <= M[][] <= 1

//🔴approach :
// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//        stack<int> st;
//        for(int i=0; i<n; i++){
//            st.push(i);
//        }
       
//        while(st.size() > 1){
//             int a = st.top();
//             st.pop();
            
//             int b = st.top();
//             st.pop();
            
//             if(M[a][b] == 1){
//                 st.push(b);
//             }
//             else{
//                 st.push(a);
//             }
//        }
       
//        int ans = st.top();
       
//        int zeroCount = 0;
       
//        for(int i=0; i<n; i++){
//            if(M[ans][i] == 0){
//                zeroCount++;
//            }
//        }
       
//        if(zeroCount != n) return -1;
       
//        int oneCount = 0;
       
//        for(int i=0; i<n; i++){
//            if(M[i][ans] == 1){
//                oneCount++;
//            }
//        }
       
//        if(oneCount != n-1) return -1;
       
       
//        return ans;
//     }
// };
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)  
//

//🔴appraoch 2: brute force
// int a[n]={0};
// int b[n]={0};
//  int i,j;

//   for(i=0;i<n;i++) {
//     for(j=0;j<n;j++) {

//          if(M[i][j]==1) {
//             a[j]++;
//             b[i]++;
//         }
//     }         
//   }

//    for(i=0;i<n;i++) {
//         if(a[i]==n-1 and b[i]==0) {
//             return i;
//         }
//     }

//     return -1;
//
//🔸Time complexity: O(N^2) 
//🔸space complexity: O(N)  
//