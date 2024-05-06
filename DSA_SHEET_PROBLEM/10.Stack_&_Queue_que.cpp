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

//
//                  ❓Question: Evaluation of Postfix Expression
//  

// Given string S representing a postfix expression, the task is to evaluate the expression and find the 
// final value. Operators will only include the basic arithmetic operators like *, /, + and -.

// Example 1:
// Input: S = "231*+9-"
// Output: -4
// Explanation:
// After solving the given expression, 
// we have -4 as result.

// Example 2:
// Input: S = "123+*8-"
// Output: -3
// Explanation:
// After solving the given postfix 
// expression, we have -3 as result.

// Your Task:
// You do not need to read input or print anything. Complete the function evaluatePostfixExpression() that takes the string S denoting the expression as input parameter and returns the evaluated value.

// Expected Time Complexity: O(|S|)
// Expected Auixilliary Space: O(|S|)

// Constraints:
// 1 ≤ |S| ≤ 105
// 0 ≤ |Si|≤ 9 (And given operators)

//🔴approach :
// class Solution
// {
//     public:
//     //Function to evaluate a postfix expression.
//     int evaluatePostfix(string S)
//     {
//         stack<int> st;
        
//         for(int i=0; i<S.length(); i++){
//             if(S[i] >= '0' && S[i] <= '9'){
//                 st.push(S[i] - '0');
//             }
//             else{
//                 int a = st.top();
//                 st.pop();
//                 int b = st.top();
//                 st.pop();
                
//                 switch(S[i]){
//                     case '+': 
//                     st.push(a+b);
//                     break;
                    
//                     case '-':
//                     st.push(b-a);
//                     break;
                    
//                     case '*':
//                     st.push(a*b);
//                     break;
                    
//                     case '/':
//                     st.push(b/a);
//                     break;
//                 }
//             }
//         }
        
//         return st.top();
//     }
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)  
//

//
//                      ❓Question: Add Element at the bottom of a stack without using any other DS
//
//Write a function to add a element in the bottom of the stack, without the use of any other Data structure.

// Example:
// Input 1:
// stack= [1,2,3,4], k = 5;
// output:
// stack = [5,1, 2, 3, 4]

//🔴appraoch :
// class Solution {
//     void addAtBottom(stack<int>& st, int k){
//         stack<int> temp;

//         while(!st.empty()){
//             temp.push(st.top());
//             st.pop();
//         }

//         st.push(key);

//         while(!temp.empty()){
//             st.push(temp.top());
//             temp.pop();
//         }
//     }
// };
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(1)  // auxilliary space
//

//
//                      ❓Question: Reverse a Stack using Recursion
//
// You are given a stack St. You have to reverse the stack using recursion.

// Example 1:
// Input:
// St = {3,2,1,7,6}
// Output:
// {6,7,1,2,3}
// Explanation:
// Input stack after reversing will look like the stack in the output.

// Example 2:
// Input:
// St = {4,3,9,6}
// Output:
// {6,9,3,4}
// Explanation:
// Input stack after reversing will look like the stack in the output.
// Your Task:

// You don't need to read input or print anything. Your task is to complete the function Reverse() which takes the stack St as input and reverses the given stack.

// Expected Time Complexity: O(N2)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= size of the stack <= 104
// -109 <= Each element of the stack <= 109
// Sum of N over all test cases doesn't exceeds 106
// Array may contain duplicate elements. 

//🔴appraoch : (Using Stack)
// class Solution{
// public:
//     stack<int>ans;
    
//     void Reverse(stack<int> &st){
       
//        if(st.size()==0)return;
        
//         ans.push(st.top());
//         st.pop();
        
//         Reverse(st);
        
//         st=ans;
//     }
// };
//

//🔴appraoch : (Using Queue)
// class Solution{
// public:
//  queue<int>ans;
//   void Reverse(stack<int> &St){
//       if (!St.empty()){
//           ans.push(St.top());
//           St.pop();
//       }
//       else{
//           return;
//       }
//
//       Reverse(St);
//    
//       while (!ans.empty()){
//           St.push(ans.front());
//           ans.pop();
//       }
// };
//
//🔸Time complexity: O(N^2) 
//🔸space complexity: O(N)
//

//
//                  ❓Question: Sort a Stack using Recursion
//
// Given a stack, the task is to sort it such that the top of the stack has the greatest element.

// Example 1:
// Input:
// Stack: 3 2 1
// Output: 3 2 1

// Example 2:
// Input:
// Stack: 11 2 32 3 41
// Output: 41 32 11 3 2
// Your Task: 
// You don't have to read input or print anything. Your task is to complete the function sort() which sorts the elements present in the given stack. (The sorted stack is printed by the driver's code by popping the elements of the stack.)

// Expected Time Complexity: O(N*N)
// Expected Auxilliary Space: O(N) recursive.

//🔴appraoch :
// void insertSorted(stack<int> &s, int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
    
//     if(target >= s.top()){
//         s.push(target);
//         return;
//     }
    
//     int temp = s.top();
//     s.pop();
//     insertSorted(s,target);
//     s.push(temp);
// }

// void SortedStack :: sort()
// {
//     if(s.empty()){
//        return;
//     }
   
//    int target = s.top();
//    s.pop();
//    sort();
//    insertSorted(s,target);
// }
//
//🔸Time complexity: O(N^N) 
//🔸space complexity: O(N)
// 

//
//                          ❓Question: Merge Overlapping Intervals
//
//
// Given a collection of Intervals, the task is to merge all of the overlapping Intervals.

// Example 1:
// Input:
// Intervals = {{1,3},{2,4},{6,8},{9,10}}
// Output: {{1, 4}, {6, 8}, {9, 10}}
// Explanation: Given intervals: [1,3],[2,4]
// [6,8],[9,10], we have only two overlapping
// intervals here,[1,3] and [2,4]. Therefore
// we will merge these two and return [1,4],
// [6,8], [9,10].

// Example 2:
// Input:
// Intervals = {{6,8},{1,9},{2,4},{4,7}}
// Output: {{1, 9}}
// Your Task:
// Complete the function overlappedInterval() that takes the list N intervals as input parameters and returns sorted list of intervals after merging.

// Expected Time Complexity: O(N*Log(N)).
// Expected Auxiliary Space: O(Log(N)) or O(N).

// Constraints:
// 1 ≤ N ≤ 100
// 0 ≤ x ≤ y ≤ 1000

//🔴approach :
// class Solution {
// public:
//     vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
//             return a[0] < b[0];
//         });
    
//         stack<vector<int>> merged;
        
//         for (const auto& interval : intervals) {
//             if (merged.empty() || interval[0] > merged.top()[1]) { // If no overlap, push onto stack
//                 merged.push(interval);
//             } else {
//             // Merge intervals
//                 merged.top()[1] = max(merged.top()[1], interval[1]);
//             }
//         }
    
//         // Convert stack to vector
//         vector<vector<int>> result;
        
//         while (!merged.empty()) {
//             result.push_back(merged.top());
//             merged.pop();
//         }
    
//     // Reverse the result to maintain the order
//         reverse(result.begin(), result.end());
    
//         return result;
//     }
// };

//
//🔸Time complexity: O(N logN) 
//🔸space complexity: O(N)
// 

//
//                         ❓Question: Maximum Rectangular Area in a Histogram
//
// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made
// of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width 
// is 1 unit, there will be N bars height of each bar will be given by the array arr.

// Example 1:
// Input:
// N = 7
// arr[] = {6,2,5,4,5,1,6}
// Output: 12
// Explanation: In this example the largest area would be 12 of height 4 and width 3. We can achieve this 
// area by choosing 3rd, 4th and 5th bars.

// Example 2:
// Input:
// N = 8
// arr[] = {7 2 8 9 1 3 6 5}
// Output: 16
// Explanation: Maximum size of the histogram 
// will be 8  and there will be 2 consecutive 
// histogram. And hence the area of the 
// histogram will be 8x2 = 16.

// Your Task:
// The task is to complete the function getMaxArea() which takes the array arr[] and its size N as inputs and finds the largest rectangular area possible and returns the answer.

// Expected Time Complxity : O(N)
// Expected Auxilliary Space : O(N)

// Constraints:
// 1 ≤ N ≤ 106
// 0 ≤ arr[i] ≤ 1012

//🔴approach:
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
//
//🔸Time complexity: O(3N) 
//🔸space complexity: O(N)
// 


//
//                     ❓Question: Valid Substring
//
//
// Given a string s consisting only of opening and closing parenthesis 'ie '('  and ')',
// find out the length of the longest valid(well-formed) parentheses substring.
// NOTE: The length of the smallest valid substring ( ) is 2.

// Example 1:
// Input: s = "(()("
// Output: 2
// Explanation: The longest valid 
// substring is "()". Length = 2.

// Example 2:
// Input: s = "()(())("
// Output: 6
// Explanation: The longest valid 
// substring is "()(())". Length = 6.

// Your Task:  
// You don't need to read input or print anything. Complete the function findMaxLen() which takes s as input parameter and returns the maxlength.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)   

// Constraints:
// 1 <= |s| <= 105

//🔴approach :
// class Solution {
//   public:
//     int findMaxLen(string s) {
//         stack<int>st;
//         st.push(-1);
//         int maxlen=0;
        
//         for(int i=0;i<s.length();i++){
            
//             if(s[i] == '('){
//                 st.push(i);
//             }
//             else{
//                 st.pop();
//                 if(!st.empty()){
//                     int len = i - st.top();
//                     maxlen = max(len,maxlen);
//                 }
//                 else{
//                     st.push(i);
//                 }
//             }
//         }
//         return maxlen;
//     }
// };
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)
// 



//
//                  ❓Question:  Expression contains redundant bracket or not
//
//
// Given a string of balanced expressions, find if it contains a redundant parenthesis or not. 
// A set of parenthesis is redundant if the same sub-expression is surrounded by unnecessary or 
// multiple brackets. Print ‘Yes‘ if redundant, else ‘No‘.
// Note: Expression may contain ‘+‘, ‘*‘, ‘–‘ and ‘/‘ operators. Given expression is valid and there are no white spaces present.

// Examples: 
// Input: str = “((a+b))”
// Output: YES
// Explanation: ((a+b)) can reduced to (a+b), this Redundant

// Input: str = “(a+(b)/c)”
// Output: YES
// Explanation: (a+(b)/c) can reduced to (a+b/c) because b is surrounded by () which is redundant.

//🔴approach :
// bool checkRedundancy(string& str)
// {
//     stack<char> st;
//
//     for (auto& ch : str) {
//         if (ch == ')') {
//             char top = st.top();
//             st.pop();

//             bool flag = true;
 
//             while (!st.empty() and top != '(') {
 
//                 if (top == '+' || top == '-' || 
//                     top == '*' || top == '/')
//                     flag = false;
 
//                 top = st.top();
//                 st.pop();
//             }
 
//             if (flag == true) return true;
//         }
//         else{
//             st.push(ch); 
//         }
//     }
//     return false;
// }
 
// // Function to check redundant brackets
// void findRedundant(string& str)
// {
//     bool ans = checkRedundancy(str);
//     if (ans == true)
//         cout << "Yes\n";
//     else
//         cout << "No\n";
// }
 
// // Driver code
// int main()
// {
//     string str = "((a+b))";
//     findRedundant(str);
//     return 0;
// }
//
//🔸Time complexity: O(n) 
//🔸space complexity: O(n)
// 

//
//                  ❓Question: Stack using two queues
//
//
// Implement a Stack using two queues q1 and q2.

// Example 1:
// Input:
// push(2)
// push(3)
// pop()
// push(4)
// pop()
// Output: 3 4
// Explanation:
// push(2) the stack will be {2}
// push(3) the stack will be {2 3}
// pop()   poped element will be 3 the 
//         stack will be {2}
// push(4) the stack will be {2 4}
// pop()   poped element will be 4  

// Example 2:
// Input:
// push(2)
// pop()
// pop()
// push(3)
// Output: 2 -1
// Your Task:

// Since this is a function problem, you don't need to take inputs. You are required to complete the two methods push() which takes an integer 'x' as input denoting the element to be pushed into the stack and pop() which returns the integer poped out from the stack(-1 if the stack is empty).

// Expected Time Complexity: O(1) for push() and O(N) for pop() (or vice-versa).
// Expected Auxiliary Space: O(1) for both push() and pop().

// Constraints:
// 1 <= Number of queries <= 100
// 1 <= values of the stack <= 100

//🔴approach :
// class QueueStack{
// private:
//     queue<int> q1;
//     queue<int> q2;
// public:
//     void push(int);
//     int pop();
// };

// //Function to push an element into stack using two queues.
// void QueueStack :: push(int x)
// {
//      q2.push(x);
     
//      while(!q1.empty()){
//          int a = q1.front();
//          q2.push(a);
//          q1.pop();
//      }
     
//      swap(q1, q2);
// }

// //Function to pop an element from stack using two queues. 
// int QueueStack :: pop()
// {
//     if(q1.empty()) {
//         return -1;
//     }else{
//         int front = q1.front();
//         q1.pop();
//         return front;
//     }  
// }
//
//🔸Time complexity: O(1) 
//🔸space complexity: O(1)
// 


//
//                  ❓Question: Stack Permutations
//
// You are given two arrays A and B of unique elements of size N. Check if array B is a stack permutation of the array A or not.
// Stack permutation means that array B can be created from array A using a stack and stack operations.

// Example 1:
// Input:
// N = 3
// A = {1,2,3}
// B = {2,1,3}
// Output:
// 1
// Explanation:
// 1. push 1 from A to stack
// 2. push 2 from A to stack
// 3. pop 2 from stack to B
// 4. pop 1 from stack to B
// 5. push 3 from A to stack
// 6. pop 3 from stack to B

// Example 2:
// Input:
// N = 3
// A = {1,2,3}
// B = {3,1,2}
// Output:
// 0
// Explanation:
// Not Possible
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isStackPermutation() which takes two arrays A and B as inputs and returns 1 if it is a stack permutation otherwise returns 0.
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
// Constraints:
// 1 <= N <= 105
// 0 <= A[i], B[i] <= 2*105
// Sum of N over all test cases doesn't exceeds 106

//🔴approach :
// class Solution{
// public:
//     int isStackPermutation(int N,vector<int> &A,vector<int> &B){
//         stack<int> s;
//         int j = 0;
    
//     for (int i = 0; i < N; i++) {
//         s.push(A[i]);
//         while (!s.empty() && s.top() == B[j]) {
//             s.pop();
//             j++;
//         }
//     }
    
//     if (s.empty()) { 
//         return true;
//     }
//        return false;       
//     }
// };

//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)
// 

//
//                  ❓Question: Queue Using two stacks
//
// Implement a Queue using 2 stacks s1 and s2 .
// A Query Q is of 2 Types
// (i) 1 x (a query of this type means  pushing 'x' into the queue)
// (ii) 2   (a query of this type means to pop element from queue and print the poped element)
// Note :- If there is no element return -1 as answer while popping.

// Example 1
// Input:
// 5
// 1 2 1 3 2 1 4 2
// Output: 
// 2 3
// Explanation: 
// In the first testcase
// 1 2 the queue will be {2}
// 1 3 the queue will be {2 3}
// 2   poped element will be 2 the queue 
//     will be {3}
// 1 4 the queue will be {3 4}
// 2   poped element will be 3.

// Example 2:
// Input:
// 4
// 1 2 2 2 1 4

// Output: 
// 2 -1

// Explanation: 
// In the second testcase 
// 1 2 the queue will be {2}
// 2   poped element will be 2 and 
//     then the queue will be empty
// 2   the queue is empty and hence -1
// 1 4 the queue will be {4}.

// Your Task:
// You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the queue and pop which returns a integer poped out from other queue(-1 if the queue is empty). The printing is done automatically by the driver code.
// Expected Time Complexity : O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()  
// Expected Auxilliary Space : O(1).
// Constraints:
// 1 <= Q <= 100
// 1 <= x <= 100
// Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

//🔴approach :
// class StackQueue{
// private:   
//     // These are STL stacks ( http://goo.gl/LxlRZQ )
//     stack<int> s1;
//     stack<int> s2;
// public:
//     void push(int);
//     int pop();
// }; 

// //Function to push an element in queue by using 2 stacks.
// void StackQueue :: push(int x)
// {
//     s1.push(x);
// }

// //Function to pop an element from queue by using 2 stacks.
// int StackQueue :: pop()
// {
//     if(s1.empty()) return -1;
      
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
    
//     int ans = s2.top();
//     s2.pop();
    
//     while(!s2.empty()){
//         s1.push(s2.top());
//         s2.pop();
//     }
    
//     return ans;      
// }
//
//🔸Time complexity: O(N) 
//🔸space complexity: O(N)
// 

//
//                  ❓Question: LRU Cache
//
// Design a data structure that works like a LRU Cache. Here cap denotes the capacity 
// of the cache and Q denotes the number of queries. Query can be of two types:
// SET x y: sets the value of the key x with value y
// GET x: gets the key of x if present else returns -1.
// The LRUCache class has two methods get() and set() which are defined as follows.
// get(key): returns the value of the key if it already exists in the cache otherwise returns -1.
// set(key, value): if the key is already present, update its value. If not present, add the key-value pair to the cache. If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
// In the constructor of the class the capacity of the cache should be initialized.

// Example 1:
// Input:
// cap = 2
// Q = 2
// Queries = SET 1 2 GET 1
// Output: 2
// Explanation: 
// Cache Size = 2
// SET 1 2 GET 1
// SET 1 2 : 1 -> 2
// GET 1 : Print the value corresponding
// to Key 1, ie 2.

// Example 2:
// Input:
// cap = 2
// Q = 8
// Queries = SET 1 2 SET 2 3 SET 1 5
// SET 4 5 SET 6 7 GET 4 SET 1 2 GET 3
// Output: 5 -1
// Explanation: 
// Cache Size = 2
// SET 1 2 : 1 -> 2

// SET 2 3 : 1 -> 2, 2 -> 3 (the most recently 
// used one is kept at the rightmost position) 

// SET 1 5 : 2 -> 3, 1 -> 5

// SET 4 5 : 1 -> 5, 4 -> 5 (Cache size is 2, hence 
// we delete the least recently used key-value pair)

// SET 6 7 : 4 -> 5, 6 -> 7 

// GET 4 : Prints 5 (The cache now looks like
// 6 -> 7, 4->5)

// SET 1 2 : 4 -> 5, 1 -> 2 
// (Cache size is 2, hence we delete the least 
// recently used key-value pair)

// GET 3 : No key value pair having 
// key = 3. Hence, -1 is printed.

// Your Task:
// You don't need to read input or print anything. Complete the constructor and get(), and set() methods of the class LRUcache. 
// Expected Time Complexity: O(1) for both get() and set().
// Expected Auxiliary Space: O(1) for both get() and set(). 
// (Although, you may use extra space for cache storage and implementation purposes).
// Constraints:
// 1 <= cap <= 10^3
// 1 <= Q <= 10^5
// 1 <= x, y <= 10^4

//🔴approach :
// class LRUCache
// {
//     public:
//     class Node{
//         public:
//         int key, val;
//         Node *next, *prev;
//         Node (int KEY, int VAL) {
//             key=KEY; val=VAL;
//         }
//     };
    
//     int cap;
//     unordered_map<int, Node*> mp;
//     Node *head=new Node(-1, -1);
//     Node *tail=new Node(-1, -1);
//     LRUCache(int capacity) {
//         cap=capacity;
//         head->next=tail;
//         tail->prev=head;
//     }
//     void addNode(Node *newNode) {
//         Node *temp=head->next;
//         newNode->next=temp;
//         newNode->prev=head;
//         head->next=newNode;
//         temp->prev=newNode;
//     }
//     void deleteNode(Node *delNode) {
//         Node *delPrev=delNode->prev;
//         Node *delNext=delNode->next;
//         delPrev->next=delNext;
//         delNext->prev=delPrev;
//     }
//     //Function to return value corresponding to the key.
//     int GET(int key) {
//         if(mp.find(key) != mp.end()) {
//             Node *resNode=mp[key];
//             int res=resNode->val;
            
//             mp.erase(key);
//             deleteNode(resNode);
            
//             addNode(resNode);
//             mp[key]=head->next;
//             return res;
//         }
//         return -1;
//     }
    
//     //Function for storing key-value pair.
//     void SET(int key, int value) {
//         if(mp.find(key) != mp.end()) {
//             Node *existingNode=mp[key];
//             mp.erase(key);
//             deleteNode(existingNode);
//         }
//         if(mp.size() == cap) {
//             mp.erase(tail->prev->key);
//             deleteNode(tail->prev);
//         }
//         addNode(new Node(key, value));
//         mp[key]=head->next;
//     }
// };

//
//🔸Time complexity: O(1) 
//🔸space complexity: O(1)
// 


//
//                  ❓Question: Queue Reversal Using Recursion
//
// Given a Queue Q containing N elements. The task is to reverse the Queue. 
// Your task is to complete the function rev(), that reverses the N elements of the queue.

// Example 1:
// Input:
// 6
// 4 3 1 10 2 6
// Output: 
// 6 2 10 1 3 4
// Explanation: 
// After reversing the given elements of the queue , the resultant queue will be 6 2 10 1 3 4.

// Example 2:
// Input:
// 4
// 4 3 2 1 
// Output: 
// 1 2 3 4
// Explanation: 
// After reversing the given elements of the queue , the resultant queue will be 1 2 3 4.
// Your Task: You need to complete the function rev that takes a queue as parameter and returns the reversed queue. The printing is done automatically by the driver code.

// Expected Time Complexity : O(n)
// Expected Auxilliary Space : O(n)

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ elements of Queue ≤ 105
//🔴approach :
// class Solution
// {
//     public:
//     stack<int> temp;
//     void solve(queue<int>& q){
//         if(q.empty()){
//             return;
//         }
        
//         temp.push(q.front());
//         q.pop();
//         solve(q);
        
//         while(!temp.empty()){
//             q.push(temp.top());
//             temp.pop();
//         }
//     }
    
//     queue<int> rev(queue<int> q)
//     {
//        solve(q);    
       
//        return q;
//     }
// };
//
//🔸Time complexity: O(N*2) 
//🔸space complexity: O(N)
// 

//
//                  ❓Question: 
//
//


//🔴approach :

//
//🔸Time complexity: O() 
//🔸space complexity: O()
// 

//
//                  ❓Question: 
//
//


//🔴approach :

//
//🔸Time complexity: O() 
//🔸space complexity: O()
// 

//
//                  ❓Question: 
//
//


//🔴approach :

//
//🔸Time complexity: O() 
//🔸space complexity: O()
// 


//
//                  ❓Question: 
//
//


//🔴approach :

//
//🔸Time complexity: O() 
//🔸space complexity: O()
// 