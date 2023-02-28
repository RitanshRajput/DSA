                   //🔴🔴RECURSION IN C++ :

//🔸 What Is Recursion in C++?
//  Recursion is a method in C++ which calls itself directly or indirectly until a suitable condition is met.
//  In this method, we repeatedly call the function within the same function, and it has a base case and a recursive condition.

//🔸when to use ?
// If a solution of big/complex problem is same type of small problem then we use recursion

//ex: if we say get 2^n 
//  2^4 = 2 x 2 x 2 x 2 
//  2^4 = 2 x 2^3           // we can also write it as
//🔸2^n = 2 x 2^n-1        // formula 


// 🔸Recursive Relation : formula 

//  f(n) = 2 x f(n-1)        // recursive relation 

//❓ Question :  factorial problem

//    5! = 5 x 4 x 3 x 2 x 1 
//    5! = 5 x 4!               // also
//    n!   = n  x f(n-1)        // formula
//    f(n) = n  x f(n-1)        // function form

// similarly for :
// 5! = 5 x 4!
// 4! = 4 x 3!
// 3! = 3 x 2!
// 2! = 2 x 1!
// 1! = 1 x 0!
// 0! = 1

///🔸Why is factorial 0 equal to 1?
// Factorial of a number in mathematics is the product of all the positive numbers less than or equal to a number.
//  But there are no positive values less than zero so the data set cannot be arranged which counts as 
// the possible combination of how data can be arranged (it cannot). Thus, 0! = 1

//🔸 BASE CASE/CONDITION :
// A case or condition where program should stop executing 

//ex :
// 2^4 = 2 x 2^3
// 2^3 = 2 x 2^2
// 2^2 = 2 x 2^1
// 2^1 = 2 x 2^0
// 2^0 = 1


//🔸Important points in recursion:
//🔸1. Base case if necessary             // condition to stop execution
//🔸2. return statement is mandatory      // return 
//🔸3. recursive relation is require      // ex: for factorial : f(n) = n x f(n-1)  , here f(n) = big problem, f(n-1) = small problem 
//🔸4. Processing part( cout, ++, -- etc)

//🔸Implementation : factorial
// #include<iostream>
// using namespace std;

// int factorial(int num){
//     // base case 
//     if( num ==0 ){
//         return 1 ;
//     }

// // solution 1: descriptive way
// //     int smallProblem = factorial( num - 1) ;
// //     int bigProblem = num * smallProblem ;
// //     return bigProblem ;

// // solution 2 : one line code
// // i. return   num * smallProblem       ===> bigProblem = num * smallProblem 
// // ii.return   factorial(num-1)         ===>  smallProblem = factorial(n-1)
// //iii.return   num * factorial(num-1)   ===> final solution
// return num * factorial(num-1) ;     
// }

// int main(){

//     int n ;
//     cout<<"enter num for factorial :"<<endl ;
//     cin>> n ;

//     int ans = factorial(n) ;
//     cout<<" factorial is : "<<ans <<endl ;
//     return 0;
// }


//🔸 why use base case ?
// when we call a function again and again it wont stop till stack memory is overflown and code will crash
// error: segmentation fault : without base case

//🔸factorial(3) call stack :
//     CALL STACK
//      
//    | fact(0)  |  => n = 0, basecase(n==0) = true,  returned 1
//    | fact(1)  |  => n = 1, basecase(n==0) = false, call = smallProblem = factorial( num - 1) , bigProblem = n * smallProblem ==> 1 * 1(fact(0) returned 1)
//    | fact(2)  |  => n = 2, basecase(n==0) = false, call = smallProblem = factorial( num - 1) , bigProblem = n * smallProblem ==> 2 * 1(fact(1) returned 1)
//    | fact(3)  |  => n = 3, basecase(n==0) = false, call = smallProblem = factorial( num - 1) , bigProblem = n * smallProblem ==> 3 * 2(fact(2) returned 2)
//    | fact(4)  |  => n = 4, basecase(n==0) = false, call = smallProblem = factorial( num - 1) , bigProblem = n * smallProblem ==> 4 * 3(fact(3) returned 6) = ans => 24
//    |__________|
//    |  main()  |  => n=3   , ans = 6 
//    |__________|



//🔴 Recursion Tree : factorial(4)
//  n = 3 , ANS = 24 

//         (4) => return 24 ⬆️ 
//           \
//            (3)  => return 6 ⬆️
//              \
//               (2)  => return 2 ⬆️
//                 \   
//                  (1)  => return 1 ⬆️
//                    \   
//                     (0)  => return 1 ⬆️  


//1️⃣ Tail recursion :

//  function () {
//   [Base case]

//   [processing]

//   [Recursive relation]       

//🔸when recursive relation execute after processing part its called Tail Recursion
// }

// 2️⃣ Head recursion :

//  function () {
//   [Base case]

//   [Recursive relation]

//   [processing]

//🔸when recursive relation execute before processing part its called Head Recursion
// }



//❓ Question :  2 power n

// #include<iostream>
// using namespace std ;

// int power( int n) {

//     //base case 
//     if(n == 0){
//         return 1 ;
//     }

//     // recursive relation : solution 1
//     // int smallProblem = power(n-1) ;
//     // int bigProblem = 2 * smallProblem ;          // here 2 bcoz we want power of 2
//     // return bigProblem ;

//     // solution 2 
//     return 2 * power(n-1) ;
// }

// int main(){

//   int n;
//   cout<<" enter power of 2 : "<<endl ;
//   cin>> n;

//   int ans = power(n) ;
//   cout<<" ans : "<<ans <<endl ;

//     return 0;
// }


//❓ Print Counting :
// input: 5
//output: 5 4 3 2 1

// #include<iostream>
// using namespace std;

// void count(int n){
//     //base case
//     if(n==0){
//         return  ;
//     }

// /// solution1 (Tail recursion) : 5 4 3 2 1 
//     // //processing 
//     // cout<< n <<" " ;
//     // // recursive relation 
//     // count(n-1) ;


// /// solution2 (Head recursion): 1 2 3 4 5
//     // recursive relation 
//       count(n-1) ;
//     //processing 
//     cout<< n <<" " ;

// }

// int main(){

//     int n;
//     cout<<" enter num till u want count : "<<endl ;
//     cin>> n;

//    cout<<" output : " ;
//    count(n) ;

//     return 0;
// }


//🔸 Recursive Tree : for count program 
// n = 3 , ANS = 1 2 3
   
//        (3)  => print 3⬆️
//          \
//          (2)  => print 2 ⬆️
//            \
//             (1)  => print 1 ⬆️
//               \
//   base case    (0)  => return ⬆️



//🔸Understanding Recursive :
// #include<iostream>
// using namespace std;

// void Home(int src, int dest){
   
//    cout<< "src :"<<src <<" destiny :"<<dest <<endl ;
//     // base case 
//     if( src == dest){
//         cout<< " src === destiny "<<endl ;
//         return ;
//     }

//     // processing 
//     src++ ;

//     //recursive relation 
//     Home(src, dest) ;
// }

// int main(){

// int source = 0;
// int destiny = 10;

// Home(source, destiny) ;

//     return 0;
// }


//❓ Question : Leetcode Easy:
//  Fibonacci Series => 0 1 1 2 3 5 8 13 21 ....
// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, 
// such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.

// Example 1:

// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

// Example 2:

// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

// Example 3:

// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

// #include<iostream>
// using namespace std ;

// int Fibo(int n){

//     //base case 
//     if( n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans = Fibo( n-1 ) + Fibo( n-2 ) ;
//     return ans ;
// }

// int main(){
  
//   int n ;
//   cout<<" enter num till you want fibonacci number :"<<endl ;
//   cin>> n; 

//   int result = Fibo(n) ;
//   cout<<" ans : "<< result <<endl ;

//     return 0;
// }



//❓Question : coding ninjas : Medium
// Count ways to Reach the N-th Stairs  
// you have been given a number of stairs. initially you are at the 0th stairs and you need to reach the 
// Nth stair. each climb one step or two steps you are supposed to return the number of distinct
// ways in which you can climb from the 0th step to Nth step

// example:
// input n = 3 ;

// ways 1      4️⃣ __                       
//          3️⃣ __|                      
//        2️⃣__|                            
//     1️⃣__|                                 

// way 2      3️⃣__                       
//        2️⃣ __|                      
//        __|                            
//   1️⃣__|                                 

// ways 3     3️⃣__                       
//           __|                      
//      2️⃣__|                            
//   1️⃣__|                                 

//output : ans = 3 ( means there are three ways to climb the stairs)


//🔸 THinking recursive relation :
// question says either we can climb one step or Two step at a time
// means we reach nth stairs by a stair before nth stair( n - 1 )
// or two stairs before nth stairs (n - 2)

/// formula:  f(n) = f(n-1) + f(n-2) 

//🔸Base case :
// if we are standing at stair below the 0th stair we will return 0
// if we are standing at the 0th stair we will return 1 , bcoz we consider 0th stairs as 1st stair

// if( n < 0) return 0
// if( n == 0 ) return 1



// #include<iostream>
// using namespace std;

// int CountDistinctWay(int n) {
//     //base case 
//     if( n<0 ){
//         return 0;
//     }
//     if( n==0){
//         return 1 ;
//     }

//     // recursive relation 
//     long long ans = CountDistinctWay( n-1 ) + CountDistinctWay( n-2 ) ;

//     return ans ;
// }

// int main(){

// int n ;
// cout<< "enter total number of stairs :"<<endl;
// cin >> n ;

// long long ans = CountDistinctWay(n) ;

// cout<<" There are total "<< ans << " ways to climb " << n << " stairs "<<endl ;

//     return 0;
// }


//🔸Recursion Tree :  for above problem statement
 
//                                5    +    3 ==> 8 ans  

//            1step back (4 return 5) (5)  2step back(3 return 3)
//                                  3 /  2  == 3+2 => 5
//           1step back(3 return 3) (4)  2step back(2 return 2)
//                               2  /  1  == 2+1 => 3
//        1step back(2 return 2)  (3)  2step back(1 return 1)
//                            1   /   1 == 1+1 => 2
//       1step back(1 return 1) (2) 2step back(0 return 1)
//                         1    /   0   == 1+0 => 1 
//      1step back(0 return 1) (1)  2step back(-1 return 1)



//❓Question :
// Say Digits :

// input: 4 1 2 
// output : four one two

// #include<iostream>
// using namespace std ;

// void SayDigit( int n , string arr[]){

//     //base case
//     if( n==0){
//         return ;
//     }

//     //processing part
//     int digit = n % 10 ;                 // output : ex = 412,  digit : 4 1 2
//     n = n / 10 ;                         // output : ex = 412 , n :412 41 4 

//     // recursive relation
//     SayDigit(n, arr) ;

//     cout<< arr[digit] <<" " ;         //output: ex = 412 ,  Four One Two
// }

// int main(){

// int n ;
// cout<<" enter any digit number eX:1 21 321 4321 12345 : "<<endl ;
// cin>>n ;

// string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine"} ;

//  SayDigit(n, arr) ;
 
//     return 0;
// }

//🔸Recursion tree of above code :

// input : 412 
//                          n = 412
//
//                       (4) return n = 41 , digit = 2    ==> arr[10] = Two
//                         \
//                          (1)  return  n = 4 , digit = 1   ==> arr[10] = One
//                            \ 
//                             (2)  return  n = 0 ,  digit = 4  ==> arr[10] = Four
//                               \
//                                (0) return 0 




                     //🔴Recursion and Binary Search

//❓ Question :
// Array sorted or not using Recursion and Binary search
//ex:
// input : [2, 4, 21, 33, 512] 
// output: true sorted

// input: [4, 33, 1, 53, 2]
// output : false Not Sorted


// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int size){

//     //base case 
//     if( size == 0 || size == 1){
//         return true;
//     }

//     //recursive relation
//     if(arr[0] > arr[1]) {
//     return false ;
//     }
//     else {
//         bool remainingPart = isSorted( arr+1 , size-1) ;
//         return remainingPart ;
//     }
// }

// int main(){

//   int arrS[5] = { 2, 4, 15, 31, 232} ;
//   int arrN[5] = { 2, 4, 15, 21, 1} ;
//   int size = 5 ;

//   bool ans = isSorted(arrS , size) ;

//   if( ans ){
//     cout<< " array is sorted ";
//   }
//   else {
//     cout<<" array is Not sorted ";
//   }
  
//     return 0;
// }



//❓ Question 
// sum of array element : Solve using recursion
// input = [3, 2, 5, 1, 6]
// output = sum of array is 17  (3 + 2 + 5 + 1 + 6)

// #include<iostream>
// using namespace std;

// int sumOfArray( int* arr , int size){
//     // base case
//     if( size == 0){
//         return 0;
//     }
//     else if( size == 1){
//         return arr[0] ;
//     }

//     // recursive relation 
//     int remainingPart = sumOfArray( arr + 1, size - 1) ;
//      int sum = arr[0] + remainingPart ;

//      return sum ;
// }

// int main() {

//  int arr[5] = {3, 2, 5, 1, 6} ;
//  int size = 5 ;

//   int ans = sumOfArray(arr, size) ;
//   cout<< " sum : "<<ans <<endl ;

//     return 0;
// }


//🔸Recursive Tree for summ of array element above question
// input :
// arr[5] = {3, 2, 5, 1, 6} 
// size = 5 

//                          (arr, size)         sum = arr[0] + remainingPart
//                                0 \ 
//                arr+1, size-1  ([3, 2, 5, 1, 6], 5)   return 3, sum = 3 + 14 => 17
//                                  0  \
//                  arr+1, size-1  ([2, 5, 1, 6], 4)    return 2, sum = 2 + 12 => 14
//                                    0  \ 
///                   arr+1, size-1  ([5, 1, 6], 3)     return 5 , sum = 5 +  7 => 12
//                                       0 \  
///                    arr+1, size-1   ([1, 6], 2)      return 1 ,  sum = 1 + 6 => 7
//                                         0 \ 
//                        arr+1, size-1   ([6], 1)      return 6 , sum = 6 + 0 ==> 6
//                                             \ 
//                                         ([], 0)      return 0


// ❓Question :
// Linear Search using recursion
//ex:
// input : [1, 2, 3, 4, 5]
// key : 3
// output: key found  ( at index 2 element is equal to key)

// input : [1, 2, 3, 4, 5]
// key : 12
// output: key Not found  ( key is not in array)

// #include<iostream>
// using namespace std ;

// bool keyPresent(int arr[], int size, int key){

//     //base case 
//     if(size == 0){
//         return false;
//     }

//     //recursive realtion 
//     if( arr[0] == key ){
//         return true ;
//     }
//     else {
//          bool remainingPart = keyPresent( arr+1, size-1, key) ;
//          return remainingPart;
//     }
// }

// int main() {

//   int arr[7] = { 11, 21, 31, 41, 51, 123, 443} ;
//   int size = 7 ;
//   int key = 126 ;

// bool ans = keyPresent(arr, size, key) ;

// if(ans){
//     cout<<" key is present in array : "<<endl;
// }
// else{
//     cout<<" key is Not present in array : "<<endl;
// }

//     return 0;
// }


//🔸Recursion Tree for linear search using recursion
//ex:
// input arr[6] = {1 ,2, 3, 4, 5, 6} 
// size = 6 
// key = 5

//                     (arr, size, key)
//                                \  
//     arr-1, size+1, key=5, ([1,2,3,4,5,6], 6, 5)  arr[0] = 6, key = 5 return false
//                                    \
//       arr-1, size+1, key=5,  ([2,3,4,5,6], 5, 5)  arr[0] = 6, key = 5 return false
//                                       \ 
//          arr-1, size+1, key=5,  ([3,4,5,6], 4, 5)   arr[0] = 6, key = 5 return false
//                                          \ 
///            arr-1, size+1, key=5,  ([4,5,6], 3, 5)    arr[0] = 6, key = 5 return false
//                                             \ 
//                 arr-1, size+1, key=5,  ([5,6], 2, 5)    arr[0] = 5 , key = 5, return true
//                                                \
//                     arr-1, size+1, key=5,   ([6], 1, 5)   arr[0] = 6, key = 5 return false
//                                                   \ 
//                         arr-1, size+1, key=5,   ([], 0, 5)  return 0 



//❓ Question 
// Binary Search using Recursion
//ex:
// input arr[5] = {1, 2, 3, 4, 5}
// key = 4 

//🔸psuedo code for basic binary search :
// start = 0 ;
// end = size -1;
// mid = start + end / 2

//while loop (start <= end)
// if( key > mid ){
//  search in right side
//   start = mid + 1
// }

// if( key < mid){
// search in left side
//  end = mid - 1
//}

// mid = start+end /2 

//🔸Implementation for binary search in recursion

// #include<iostream>
// using namespace std;

// bool binarySearch(int* arr, int start, int end, int key){
           
//         //base case 
//         if( start > end){
//             return false ;
//         }

//         //recursive relation
//         int mid = start + ( end - start) / 2;

//         //element found 
//         if( arr[mid] == key)
//         return true ;
        

//         if( arr[mid] < key ){
//             return binarySearch(arr, mid+1, end, key) ;
//         }
//         else {
//             return binarySearch(arr, start, mid - 1, key) ;
//         }

// }

// int main() {

// int arr[5] = {12, 13, 14, 15, 16} ;
// int size = 5 ;
// int key = 15 ;
// int start = 0;
// int end = size - 1 ;

// bool ans = binarySearch(arr, start, end , key) ;

// if( ans ){
//     cout<< " key present "<<endl ;
// }
// else{
//     cout<< " key not present "<<endl ;
// }

//     return 0;
// }

//🔸H/w : solve all previous binary search questions using recursion




//🔴🔴RECURSION WITH STRING

//❓ Question :
// Reverse a string using recursion
// ex:
// input: "abcde"
// output: "edcba"

// #include<iostream>
// using namespace std ;

// void reverse(string& str, int i, int j) {          // pass by reference string&

//     //base case 
//     if( i > j){
//         return ;
//     }

//     // recursive relation
//     swap(str[i], str[j]) ;
//     i++ ;
//     j-- ;

//     //recursive call
//     reverse(str, i, j) ;
// }

// int main() {

// string str = "abcde" ;
// int i = 0;
// int j = str.length() - 1 ;
// reverse(str, i, j) ;

// cout<<" reverse string : "<< str <<endl ;

//     return 0;
// }


//🔸Recursive tree for above reverse string question :

// str = "abcde" 
// i =0 ; j = 5
//reverse( str, i, j) 

//                    reverse( "abcde" , 0 , 4 )
//                                  |
//                           ("ebcda", 2, 2) 
//                                  |
//                           ("edcba", 3, 2)      // i > j  return


//❓Question :
// check Palindrome
// ex:
// input :  "abba"
// output:  true  ( palindrome mean if we reverse the string and its still the same then its a palindrome)

// #include<iostream>
// using namespace std;

// bool palindrome(string str, int i, int j){

//     //base case 
//     if( i > j){
//         return true;
//     }
 
//     if(str[i] != str[j]){
//       return false ;
//     }
//     else {
//         return palindrome(str, i+1 , j-1) ;
//     }
// }

// int main() {
 
// string str = "abbccbba" ;
// int i = 0;
// int j = str.length() - 1 ;
// bool ans = palindrome( str, i , j) ;

// if( ans ){
// cout<< " It is a palindrome " << endl ;
// }
// else{
// cout<< " It is Not palindrome " << endl ;
// }
//     return 0;
// }



//❓ Question :
// A power B
//ex:
// input: a = 3, b = 2 
// output: 9 ( 3^2 )


//explaination :
// a^b = if b is even ==>  a^ b/2 * a^ b/2
// a^b = if b is odd  ==> a * ( a^ b/2  * a^ b/2)

// #include<iostream>
// using namespace std ;

// int power(int a, int b) {

//     if(b == 0){
//         return 1 ;
//     }

//     if( b == 1){
//         return a ;
//     }
 
//    //recursion relation 
//    int ans = power( a, b/2);
     
//    //if b is even ==>  a^ b/2 * a^ b/2
//      if( b%2 == 0){
//         return ans * ans;
//      }
//      else{
//     //if b is odd  ==> a * ( a^ b/2  * a^ b/2)
//      return a * ans * ans ;
//      }


// }

// int main() {

// int a = 3 ;
// int b = 2 ;

// int ans = power(a, b) ;
// cout<< " a power b : "<< ans <<endl ;

//     return 0;
// }

//🔸 Recursion tree : a power b
//ex:
// a = 3, b = 11 ;

//                (a, b)
//                  |  ans ==> 177147
//     ans =     (3, 11/2) // b == 11 , odd == return a* ans*ans ==> 3*243*243 => 177147
//                  |243
//               (3, 5/2) // b == 5, odd == return a * ans*ans  ==> 3*9*9 = 3*81 = 243 
//                  | 9
//               (3, 2/2) // b == 2, even == return ans * ans  ==>  3*3 = 9
//                  | 3 
//               (3, 1)  // b == 1 , return a ==> 3
 

//🔴 ❓ Question :
// Bubble sort using recursion :
//ex :
// input: { 3, 2, 1, 5, 4}
// output: { 1, 2, 3, 4, 5}

//working of bubble sort :
// round 1 : { 3, 2, 1, 4, 5}   // largest elemeent sorted
// round 2 : { 3, 2, 1, 4, 5}   // 2nd largest element sorted
// round 3 : { 2, 1, 3, 4, 5}   // 3rd largest element sorted
// round 4 : { 1, 2, 3, 4, 5}   // all element sorted

// #include<iostream>
// using namespace std;

// void bubble(int *arr, int size) {

//     //base case 
//     if( size == 0 || size == 1){
//         return ;
//     }
    
//     // solve 1 case => sort largest element to the nth index (last index)
//     for( int i=0; i<size-1;  i++ ){
//          if(arr[i] > arr[i+1]){
//             swap(arr[i], arr[i+1]) ;
//          }
//     }

//     bubble(arr, size-1) ;

// }

// int main() {

// int arr[5] = { 3, 2, 1, 5, 4} ;
// int size = 5 ;

// bubble(arr, size) ;

// cout<<" Bubble sorted array : "<<endl ;

// for(int i=0; i<size; i++)  {
//     cout<< arr[i] << " " ;
// }

//     return 0;
// }


//🔴 homework : selection sort using recursion
//🔴 homework : Insertion sort using recursion

//38/149