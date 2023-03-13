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

// // 🔴❓Question :
// // check Palindrome using single pointer and string  in recursion (without using j )

// #include<iostream>
// using namespace std;

// bool palindrome(string str, int i){
//     //base case 
//     if( i > (str.length() - i - 1)){
//         return true;
//     }
//     if(str[i] != str[str.length() - i -1]){
//       return false ;
//     }
//     else {
//         return palindrome(str, i+1 ) ;
//     }
// }

// int main() {
 
// string str = "abbccbba" ;
// int i = 0;
// bool ans = palindrome( str, i ) ;

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

//     //recursive call 
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


//🔴 ❓Question :  selection sort using recursion


//❓ Selection sort without recursion to understand ;
// #include<iostream>
// using namespace std ;

// int printArray(int arr[], int n){
//       for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//       }
// }

// void selectionSort(int* arr, int n){

//     for(int i=0; i<n ; i++){
//         int minIndex = i;
//         for(int j=i+1; j<n; j++ ){ 
//              if( arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]) ;
//     }
    
//     printArray(arr, n) ;
// }

// int main(){
// int arr[5] =  {64, 25, 32, 22, 11};
// int n = 5 ;

//  selectionSort(arr, n) ;
//     return 0 ;
// }


//❓ selection sort with recursion :
// #include<iostream>
// using namespace std;

// int findMin(int arr[], int i, int j){
//       int mini ;

//     // base case
//      if( i==j ){       // i = index 0 , j = index nth - 1;
//         return i;
//      }

//     // recursive relation
//     mini = findMin(arr, i+1, j) ;    // value of mini = will compared to other next elements value
    
//     //processing part
//     if( arr[mini] > arr[i]){       // if arr[min] > arr[i] then mini = i ;
//         mini = i ;
//     }
//    return mini ;                 // return the minimum index element
// }

// void selectionSort(int arr[], int i, int size){
//     int temp ;
//     int minPos ;

//     //base case
//     if( i == size){
//         return ;
//     }
      
//     //recursive relation 
//     minPos = findMin(arr, i, size-1) ;    // find minimum index element recursively for each index

//     //processing part 
//     if(minPos != i) {                  //swap value of arr[i] and arr[miniposition]
//         temp = arr[i] ;
//         arr[i] =arr[minPos] ;
//         arr[minPos] = temp ;
//     }
//     selectionSort(arr, i+1, size) ;     
// }

// int main(){
 
// int arr[5] = {63, 45, 32, 11, 6} ;
// int size = 5 ;

// selectionSort(arr, 0, size) ;
// cout<< "sorted array using recursive selection Sort :"<<endl ;
//  for(int i=0; i<size; i++){
//     cout<< arr[i] << " " ;
//  }
 
//     return 0;
// }




//🔴 ❓ Question : Insertion sort using recursion

//❓ Insertion sort without recursion to understand:
// #include<iostream>
// using namespace std;

// int insertionSort(int arr[], int size) {
 
//      int i = 1;

//      while(i < size) {
    
//        int temp = arr[i] ;           // temporary array holds value of i
//        int j = i - 1 ;               // j holds value of arr[i+1] ;

//         while(j >= 0) {             
          
//          if( arr[j] > temp) {          // if j or lower indexes than j is greater than temp
//             arr[j+1] = arr[j] ;        // then assign arr[j]  in arr[j+1] means in array[temp] which holds current value of i
//          } 
//         else {
//             break ;                    
//         }

//          j-- ;                      // decrement j 
//      }
      
//       arr[j+1] = temp ;             // atlast assign temperary array value in arr[j+1]

//         i++ ;                       // increment i
//      }

//      for(int i=0; i<size; i++){        //loop to print new arrays
//         cout<< arr[i] <<" " ;
//      }
// }

// int main() {

// int arr[6] = {10, 32, 1, 4, 22, 7} ;
// int size = 6 ;

// insertionSort(arr, size) ;
//     return 0;
// }



//❓ Insertion Sort using Recursion :

// #include<iostream>
// using namespace std ;

// void recurseInsertion(int arr[], int size) {

//     //base case  
//     // if size <= 1 then return means loop will run from nth index to 1th index

//     if( size <= 1 ){
//        return ;
//     }

//     // Recursive relation , to iterate all the index of array from nth to 1 (not 0)

//     recurseInsertion(arr, size-1) ;
   
//    //processing part where  :
//    // here temp is temporary variable to store value of nth index - 1
//    // j is declare outside to use outside of its scope which has nth index - 2 as value
//    // while loop runs when j >=0 && if arr[j] > temp , j--
//    // arr[j+1] = arr[j]  inside bigger value is shift to right side => 
//    // atlast arr[j+1] = temp , means after shifting previously the remaining index will now have the value of right side which used to be smaller value <=

//    int temp = arr[size - 1] ;
//    int j = size - 2 ;
   
//    while( j >=0 && arr[j] > temp ){
      
//       arr[j+1] = arr[j] ;
//       j-- ;
//    }
//    arr[j+1] = temp ;

// }


// int main() {

// int arr[6] =  {0, 1, 25, 33, 81, 15} ;
// int size = 6 ;

// recurseInsertion(arr, size) ;

// cout<< " Answer of recursive Insertion sort :"<<endl ;
// for( int i=0; i<size; i++){
//     cout<< arr[i] << " " ;
// }
 
//     return 0;
// }



           //🔴🔴 Merge Sort In Recursion :

//🔸Merge sort is a sorting algorithm that works by dividing an array into smaller subarrays,
// sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

// In simple terms, we can say that the process of merge sort is to divide the array into two halves,
// sort each half, and then merge the sorted halves back together. 
// This process is repeated until the entire array is sorted.

// One thing that you might wonder is what is the specialty of this algorithm. 
// We already have a number of sorting algorithms then why do we need this algorithm?
// One of the main advantages of merge sort is that it has a time complexity of O(n log n), 
// which means it can sort large arrays relatively quickly. It is also a stable sort, 
// which means that the order of elements with equal values is preserved during the sort.


//ex :
//🔸 dividing array :
//               [38, 27, 43, 3, 9, 82, 10]        // main array,  size = 7,  mid = (start +end ) / 2 = 3
//                     /             \
//              [38, 27, 43, 3]  [ 9, 82, 10]      // divided in 2 part
//                   /    \         /    \
//             [38, 27] [43, 3]   [9, 82] [10]     // further divided in 4 part
//                / \      / \       /\     \  
//            [38] [27] [43] [3]  [9] [82] [10]    // atlast divided in each individual parts

//🔸Now sorting and merging array :
//           [38] [27] [43] [3]  [9] [82] [10]  
//             \   /     \  /      \  /    |
//           [27, 38]   [3, 43]   [9, 82] [10]      // array are merge in sorted order
//                \        /         \     /
//             [3, 27, 38, 43]    [9, 10, 82]
//                   \             /
//               [3, 9, 10, 27, 38, 43, 82]         // Merge Sorted Array


//🔸Implement Using recursion:
//1. divide the array
//2. sort the array
//3. merge the sorted array

// #include<iostream>
// using namespace std;

// void merge(int *arr, int start , int end){

//        //mid index
//        int mid = (start + end) /2 ;

//        //length of divided array left part :
//        int left = mid - start + 1 ;

//        //length of divided array right part :
//        int right = end - mid;

//       //pointer to hold value of divided array left and right:
//        int *first = new int[left] ;
//        int *second = new int[right] ;

//        // Copy values of left array in *first ,
//        // k = Main array index
//        int k = start ;
//        for(int i=0; i<left; i++){
//         first[i] = arr[k++] ;
//        }

//         // Copy values of rigth array in *second,
//         // k = Main array index
//         k = mid + 1 ;
//        for(int i=0; i<right; i++){
//         second[i] = arr[k++] ;
//        }


//        //merge 2 sorted array :
//        int index1 = 0 ;
//        int index2 = 0 ;
//        k = start ;

//        while( index1 < left && index2 < right) {
//         // if element of first[index1] is less than second[index2] then arr[k] = first[index1] then k++ , index1++
//            if( first[index1] < second[index2] ){
//               arr[k++] = first[index1++] ;
//            }
//         // if element of first[index1] is greater than second[index2] then arr[k] = second[index2] then k++ , index2++
//            else{
//             arr[k++] = second[index2++] ;
//            }
//        }
 
//      // If there are some element which are remaining from above loop then compare them and add them to the sorted array
//        while( index1 < left ){
//         arr[k++] = first[index1++];
//        }

//        while( index2 < right ){
//         arr[k++] = second[index2++] ;
//        }

//        // deleting new int heap memory ( first and second)
//        delete []first ;
//        delete []second ;
     
// }

// void recursiveMerge(int *arr, int start, int end) {

//     //base case
//     if( start >= end) {
//         return ;
//     }
     
//      //Mid index
//     int mid = (start + end)/2 ;

//     //Sort left part <= 
//    recursiveMerge(arr, start, mid) ;

//     //Sort right part => 
//    recursiveMerge(arr, mid+1, end) ;

//     //Merge 
//     merge(arr, start, end) ;
// }

// int main() {

// int arr[8] = {12, 32, 1, 55, 3, 2, 44, 9} ;
// int size = 8 ;
// int start = 0;
// int end = size -1 ;

// recursiveMerge(arr,start, end) ;

// for(int i=0; i<size; i++){
//     cout<< arr[i] << " " ;
// }
//     return 0;
// }

//🔸space complexity :  O(n)    auxilliary space
// after dividing the main array the extra array
// to store value of divided array takes O(n/2) space 
// Therefore O(n) is space complexity

//🔸 Time Complexity : O(n log n)
//Merge Sort is a recursive algorithm and time complexity can be expressed as
// following recurrence relation. T(n) = 2T(n/2) + O(n) The solution of 
// the above recurrence is O(nLogn). The list of size N is divided into a max of Log n parts, 
// and the merging of all sublists into a single list takes O(N) time,
// the worst-case run time of this algorithm is O(nLogn) 
// Best Case Time Complexity:  O(n*log n)
// Worst Case Time Complexity: O(n*log n) 
// Average Time Complexity:    O(n*log n)
// The time complexity of MergeSort is O(n*Log n) in all the 3 cases (worst, average and best) 
// as the mergesort always divides the array into two halves and takes linear time to merge two halves


                            
                            //🔴Inversion Count:
// Inversion Count for an array indicates – how far (or close) the array is from being sorted. 
// If the array is already sorted, then the inversion count is 0, 
// but if the array is sorted in reverse order, the inversion count is the maximum. 

// Given an array a[]. The task is to find the inversion count of a[]. 
// Where two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// Examples: 

// Input: arr[] = {8, 4, 2, 1}
// Output: 6
// Explanation: 
// Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).

// Input: arr[] = {1, 20, 6, 4, 5}
// Output: 5
// Explanation: 
// Given array has five inversions: (20, 6), (20, 4), (20, 5), (6, 4), (6, 5). 


//🔸Implementation :
// #include<iostream>
// using namespace std ;

// int InversionCount(int *arr, int size) {
    
//     int invCount = 0;
     
//      for(int i=0;i < size ;i++){
//         for(int j=i+1; j <size ; j++){
//                if( arr[i] > arr[j]){
//                 invCount++ ;
//                }
//            }
//      }
       
//        return invCount; 
// }

// int main() {

// int arr[5] = {1, 20, 6, 4, 5} ;
// int size = 5 ;

// cout<< " Number of Inversion are : "<< InversionCount(arr, size) <<endl ;

//     return 0;
// }

//🔸Space complexity : O(1)   auxilliary space
//🔸Time complexity : O(n^2)
// Two nested loops are needed to traverse the array from start to end.




                //🔴🔴 Quick Sort Using Recursion :

//🔸Like Merge Sort, QuickSort is a Divide and Conquer algorithm. 
// It picks an element as a pivot and partitions the given array around the picked pivot. 
// There are many different versions of quickSort that pick pivot in different ways. 

//1. Always pick the first element as a pivot.
//2. Always pick the last element as a pivot (implemented below)
//3. Pick a random element as a pivot.
//4. Pick median as the pivot.

//🔸The key process in quickSort is a partition(). 
//   The target of partitions is, given an array and an element x of an array as the pivot, 
//   put x at its correct position in a sorted array and put all smaller elements (smaller than x) before x,
//   and put all greater elements (greater than x) after x. All this should be done in linear time.

//🔸 Psuedo code :
//  void quicksort(int arr[], int start, int end){
//     //base case
//     if( start >= end){
//         return ;
//     }

//     //partition point
//     p = partition(arr, start, end)

//     //recursive call to sort left and right part of array
//     quicksort(arr, start, p - 1);
//     quicksort(arr, p+1, end) ;
//  }

//🔸Pivot Method :

//       [(3), 4, 1, 5, 2] 

// Take  a pivot  (we are taking first element in this case)
// Count = all element < pivot 
// Put pivot element on = start + count
// condition:      a< | a | > a

//          : [4, 1, 3, 5, 2]
// Pointer :    i           j         // to compare if the pivot is on the right position or not means all the element on its left side should be less than pivot
//            [2, 1, 3, 5, 4]         // 4 and 2 swapped because 2 is less than 3 pivot 

//sort left and right part of pivot : [1 ,2, 3, 4, 5]

//🔸Implementation :

// #include<iostream>
// using namespace std;

// int partition(int arr[], int start, int end) {

//     int pivot = arr[start] ;
//     int count = 0 ;

//     //Inversion count to find lower element on the right side of pivot element
//     for(int i = start+1; i<= end; i++ ){
//          if(arr[i] < pivot){
//             count++ ;
//          }
//     }
    
//     // place pivot on it right index
//     int pivotCorrectIndex = start + count ;
//     swap( arr[pivotCorrectIndex] , arr[start]) ;

//     // sort left and right array from pivot
//     int i = start , j = end ;

//     while( i < pivotCorrectIndex && j > pivotCorrectIndex) {

//         while( arr[i] < pivot){
//             i++ ;
//         }
//         while( arr[j] > pivot){
//             j-- ;
//         }

//         if( i < pivotCorrectIndex && j > pivotCorrectIndex){
//             swap(arr[i++], arr[j--]) ;
//         }
//     }

//     return pivotCorrectIndex ;

// }

// void quickSort(int arr[], int start, int end) {

//     //base case
//     if(start >= end) {
//         return ;
//     }
     
//      // find pivot and work on it
//     int pivot = partition(arr, start, end) ;

//    // recursive call sort Left array :
//     quickSort(arr,start, pivot - 1) ;

//     // recursive call sort right array :
//     quickSort(arr, pivot + 1, end) ; 

// }

// int main() {

// int arr[7] = {7, 6, 5, 4, 3, 2, 1};
// int size = 7 ;
// int start = 0;
// int end = size - 1;

//  quickSort(arr, start, end ) ;

//  for(int i=0; i<size; i++){
//     cout<< arr[i] << " " ;
//  }

//     return 0;
// }


//🔸Space COmplexity: O(n)
//🔸Time complexity : 
// Best case  : O(n Log n)
// Avg case   : O(n Log n)
// Worst case : O(n^2)

//🔴 Stable or Unstable algo :
// Some sorting algorithms are stable by nature like Insertion sort, Merge Sort, Bubble Sort, etc. 
// And some sorting algorithms are not, like Heap Sort, Quick Sort, etc. 
//🔸QuickSort is an unstable algorithm because we do swapping of elements 
// according to pivot’s position (without considering their original positions).

//🔴 In-place or Not :
//In the sense that it doesn't create partial or whole copies of the data being sorted,
// QuickSort is in-place and doesn't require additional heap space.
// This does not imply that it uses no additional memory, though. 
// Recursion is a common way to implement it, and it uses O(logN) stack space (not heap space).

// #include<iostream>
// using namespace std ;

// int partition( int arr[], int start, int end) {
//    cout<< "partition pivot = arr[start]:  "<< arr[start] <<endl ;
//     int pivot = arr[start] ;
//     int count = 0 ;

//     for(int i= start+1 ; i<=end; i++){
//         if(pivot > arr[i]) {
//             count++ ;
//         }
//     }

//     int pivotPlace = start + count ;
//     cout<<"partition pivotplacce : "<<pivotPlace <<endl ;
//     swap (arr[pivotPlace], arr[start] ) ;
//     cout<<"partition arr[pivotplace], arr[start] : "<<arr[pivotPlace] <<","<<arr[start] <<endl ;
//     int i = start, j = end ;
//       cout<< "partition while loop "<<endl ;
//       cout<< "i, j, pivot, pivotPlcae : "<< i <<" "<<j <<" "<<pivot << " "<<pivotPlace <<endl ;

//     while( i < pivotPlace && j > pivotPlace){
//         cout<< "inside while loop"<<endl ;
//         while(arr[i] < pivot) {
//             i++ ;
//         }
//         while(arr[j] > pivot) {
//             j-- ;
//         }

//         if( i < pivotPlace && j > pivotPlace){
//             swap( arr[i++], arr[j--]) ;
//         }
//     }
//     cout<<pivotPlace << "!!" <<endl ;
//     return pivotPlace ;
// }

// void quick(int arr[], int start, int end) {
// cout<< "quicksort :"<< endl ;
// for(int i=start; i<=end; i++){
//     cout<< arr[i] << " " ;
// }
// cout<<endl ;
//     //base case
//     if(start >= end){
//         cout<<"true"<<endl ;
//         return ;
//     }
//  cout<< "quicksort pivot start, end : "<< start <<" "<< end <<endl ;
//     // pivot 
//     int pivot = partition(arr, start, end) ;

//     //left element from pivot
//     cout<<"quicksort left start, pivot - 1: "<<start << " " <<pivot-1 <<endl ;
//     quick( arr, start, pivot - 1) ; 
//     //right element from pivot
//     cout<<"quicksort right pivot + 1 , end: "<< pivot+1 << " " <<end <<endl ;
//     quick( arr, pivot + 1, end) ;

// }

// int main() {

// int arr[5] = {5, 4, 3, 2, 1} ;
// int size = 5 ;
// quick(arr, 0, size -1 ) ;

// for(int i=0; i<size; i++){
//     cout<< arr[i] << " " ;
// }

//     return 0;
// }


//🔸Above code without comment
// #include<iostream>
// using namespace std ;

// int partition(int arr[] ,int start, int end){
//     int pivot = arr[start] ;
//     int count = 0;

//     //total number of smaller element after pivot 
//     for(int i=start+1; i<=end ;i++){
//         if(arr[i] < pivot){
//             count++ ;
//         }
//     }

//     int corrPosition = start + count ;
//     swap(arr[corrPosition] , arr[start]) ;

//    int i = start , j = end ;
//     while( i < corrPosition && j > corrPosition) {
//         while( arr[i] < pivot){
//             i++ ;
//         }
//         while( arr[j] > pivot){
//             j-- ;
//         }

//         if( i < corrPosition && j > corrPosition){
//             swap(arr[i++], arr[j--]) ;
//         }
//     }

//     return corrPosition ;
// }

// void quickSort( int arr[], int start, int end){

//     //base case
//     if( start >= end) {
//         return ;
//     }

//     int pivot = partition(arr, start, end) ;

//     //left and right array of pivot point using recursive call
//     quickSort(arr, start, pivot - 1); 
//     quickSort(arr, pivot+1, end) ;
// }

// int main() {

// int arr[8] = {8, 4, 1, 1, 2, 5, 3, 6} ;
// int size = 8 ;
// int start  = 0;
// int end = size - 1;

// quickSort(arr, start, end) ;

// for(int i=0; i<size; i++){
//     cout<< arr[i] <<" " ;
// }
//     return 0;
// }



//❓ Question : Leetcode Medium
// Subsets
// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

// Example 2:
// Input: nums = [0]
// Output: [[],[0]]
 
// Constraints:
// 1 <= nums.length <= 10
// -10 <= nums[i] <= 10
// All the numbers of nums are unique.

// Power set : set of all subsets
// formula : no. of element in power set : 2^n  

// #include<iostream>
// #include<vector>
// using namespace std ;

// void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    
//     //base case
//     if(index >= nums.size()){
//         ans.push_back(output) ;
//         return ;
//     }

//     //exclude
//     solve(nums, output, index+1, ans);

//     //include
//     int element = nums[index] ;
//     output.push_back(element) ;
//     solve(nums, output, index+1 , ans) ;

// }

// vector<vector<int>> subsets(vector<int>& nums) {

//        vector<vector<int>> ans ;     // to store main answer
//        vector<int> output ;          // to store current output that we will pass in ans
//        int index = 0 ;               // index to iterate

//        solve(nums, output, index, ans) ;

//        return ans ;
// }

// int main()
// {
//     vector<int> nums ;
//     nums.push_back(1) ;
//     nums.push_back(2) ;
//     nums.push_back(3) ;

//    vector<vector<int>> res =  subsets(nums) ;

// //loop to print answer vector
//     for(auto i:res){
//         cout<< "[" ;
//         for(auto j:i){
//         cout<< j <<"";
//         }
//         cout<< "] , " ;
//     }
    
//     return 0 ;
// }


//❓ Question : medium coding ninjas
// Subsequences of string
//You are given a string 'str' containing lowercase english letter from a to z inclusive .
// your task is to find all non-empty possible subsequences of 'str'

//example 1:
// input : str = 'abc'
// output : 'a' 'ab' 'abc' 'ac' 'b' 'bc' 'c'

// exmaple 2:
// input : 'str' = 'bbb'
// output : 'b' 'b' 'b' 'bb' 'bb' 'bb' 'bbb'


// #include<iostream>
// #include<vector>
// using namespace std ;

// void solve(string str, string output, int index, vector<string>& ans) {

//       //base case
//       if( index >= str.length()){
//          if( output.length() > 0){          // if condition if dont want to return an empty string as an answers
//            ans.push_back(output) ;
//          }
//         return ;
//       }

//       //exclude
//       solve(str, output, index+1, ans) ;

//       //include
//       char element = str[index] ;
//       output.push_back(element) ;

//       solve(str, output, index+1, ans) ;
// }

// vector<string> subseq( string str) {
//     vector<string> ans ;
//     string output = "" ;
//     int index = 0 ;
//     solve(str, output, index, ans) ;
     
//      return ans ;
// }

// int main() {
//    string str = {"abc"} ;

//     vector<string> res = subseq(str) ;
//     for(auto i:res){
//         cout<<"'"<< i <<"'"<<" " ;
//     }

//     return 0;
// }


                                        //🔴Basic Backtracking question

//🔴❓Question : Leetcode Medium : 
// Asked in company :  FAAG , Uber, adobe, twitter, bloomberg, goldman sachs, 
//                     oracle, nutanix, duolingo ,snapchat , samsung, infuit, 
//                     epic systems, swiggy

//🔴 Phone KeyPad Recurssion : USing Recurssion 

// Given a string containing digits from 2-9 inclusive, 
// return all possible letter combinations that the number could represent.
// Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below.
// Note that 1 does not map to any letters.

//  1  2  3         0_0  abc  def
//  4  5  6         ghi  jkl  mno
//  7  8  9         pqrs tuv  wxyz
//     0             *    -    #

// Example 1:
// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

// Example 2:
// Input: digits = ""
// Output: []

// Example 3:
// Input: digits = "2"
// Output: ["a","b","c"]
 
// Constraints:
// 0 <= digits.length <= 4
// digits[i] is a digit in the range ['2', '9'].

// #include<iostream>
// #include<vector>
// using namespace std ;

// void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {

//     //base case 
//     if(index >= digit.length()){
//         ans.push_back(output) ;
//         return ;
//     }

//     //processing 
//     int number = digit[index] - '0' ;         // to convert string into integer - '0' ,index = 1 , digit[1] = 2 ==> 2 - '0' ==> 2 (else it will give ascii number)
//     string value = mapping[number] ;          // ex: value  = mapping[number] , number = 2 , mapping[2] = "abc" 

//     for(int i=0; i<value.length(); i++){

//         output.push_back(value[i]) ;
//         //recursive call
//         solve(digit, output, index+1, ans, mapping) ;
        
//         output.pop_back() ;
//     }
// }


// vector<string> letterCombination(string digit) {
         
//          vector<string> ans ;
//          if(digit.length() == 0){
//             return ans ;
//          }
//          string output ;
//          int index = 0;
//          string mapping[10] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"} ;
//          solve(digit, output, index, ans, mapping) ;
   
//          return ans ;
// }

// int main() {

// string digit = "23" ;

// vector<string> res = letterCombination(digit) ;

// for(int i=0; i<res.size(); i++){
//    cout<< res[i] <<" " ;
// }

//     return 0;
// }



//🔴❓ Question : Company interview
// PERMUTATION OF STRING
// you are given a string 'str' consisting of lowercase english letters.
// your task is to return all permutation of the given string in lexicographically 
// increasing order.

// String A is lexicographically less than string B.
// if either A is a prefix of B (ans A != B).
// or there exists such  i (1 <= i <= min([A],[B])), that A[i] < B[i] 
// and for any j ( 1 <= j <= i) A[i] = B[i] .
// here [A] denotes the length of the string A

// Sample Input 1:
// 3
// abc
// bc
// c

// Output 1:
// abc acb bac bca cab cba    // if n = 3 then answer becomes 3! means str.length = 3, output are 6
// bc cb
// c

// Explanation For Sample Input 1:
// In the 1st test case, there are 6 permutations of the given string.
// In the 2nd test case, there are 2 permutations of the given string.
// In the 3rd test case, there is only 1 permutation of the given string.

// Sample Input 2:
// 1
// xyz

// Output 2:
// xyz xzy yxz yzx zxy zyx 

// #include<iostream>
// #include<vector>
// using namespace std ;

// void solve(string str, vector<string>& ans, int index) {
//       //base case
//       if( index >=str.length()){
//         ans.push_back(str) ;
//         return ;
//       }
//       //processing
//       for(int i=index; i<str.length(); i++){
//           swap(str[index], str[i]) ;
//           //recursive call
//           solve(str, ans, index+1) ;
//           //backtracking
//           swap(str[index], str[i]) ;
//       }
// }

// vector<string> generatePermutation(string& str) {
//      vector<string> ans ;
//      int index = 0 ;
//      solve(str, ans, index) ;
//      return ans ;
// }

// int main() {
//   string str = "abc" ;

//   vector<string> ans = generatePermutation(str) ;

// for(auto i:ans){
//     cout<< i  <<" ";
// }

//     return 0;
// }

//🔴 ❓Question : Leetcode Medium
// Permutations :
// Given an array nums of distinct integers, 
// return all the possible permutations. You can return the answer in any order.

// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

// Example 2:
// Input: nums = [0,1]
// Output: [[0,1],[1,0]]

// Example 3:
// Input: nums = [1]
// Output: [[1]]
 
// Constraints:
// 1 <= nums.length <= 6
// -10 <= nums[i] <= 10
// All the integers of nums are unique.


// #include<iostream>
// #include<vector>
// using namespace std ;

// void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
//     //base case 
//     if( index >= nums.size()){
//         ans.push_back(nums) ;
//         return ;
//     }

//     for(int j=index; j<nums.size(); j++){
//         swap(nums[index], nums[j]) ;
//         //recursive call
//         solve(nums, ans, index+1); 
//         //backtracking
//         swap(nums[index], nums[j]);          // to learn again in future check 43/149 
//     }
// }

// vector<vector<int>> permutation(vector<int>& nums){
       
//        vector<vector<int>> ans ;
//        int index = 0 ;
//        solve(nums, ans, index) ;

//        return ans ;
// }

// int main() {
// vector<int> nums ;

// nums.push_back(1) ;
// nums.push_back(2) ;
// nums.push_back(3) ;

// vector<vector<int>> res = permutation(nums) ;

// for(auto i:res){
//     cout<<"[" ;
//     for(auto j:i){
//     cout<< j ;
//     }
//     cout<< "] " ;
// }

//     return 0;
// }