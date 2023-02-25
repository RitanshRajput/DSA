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
//     int digit = n % 10 ;
//     n = n / 10 ;

//     // recursive relation
//     SayDigit(n, arr) ;

//     cout<< arr[digit] <<" " ;
// }

// int main(){

// int n ;
// cout<<" enter any digit number eX:1 21 321 4321 12345 : "<<endl ;
// cin>>n ;

// string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine"} ;

//  SayDigit(n, arr) ;
 
//     return 0;
// }

//🔸H/w = recursion tree of above code

//36/149