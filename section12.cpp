              //🔴🔴 Basics Math for DSA :

//🔘🔘 Prime Number :

// #include<iostream>
// using namespace std ;

// int main(){
// int n; 
// cout<<"Enter number to check if Prime or Not : "<<endl ;
// cin>>n ;

// int count = 0 ;
// for(int i=1; i<=n; i++) {

//     if(n % i == 0){
//         count++ ;
//         cout<<"count is : "<<count<<endl;
//     }
// }

// if(count <= 2){
//     cout<<n <<" Isprime "<<endl ;
// }
// else{
//     cout<<n <<" Is Not prime "<<endl ;
// }

//     return 0;
// }

//🔸 Time-complexity :  O(n)       //As the loop is iterating from 1 to n , the time complexity for the worst case will be O(n), where n is the input element.
//🔸 Space-complexity : O(1)       //The program is not using any extra auxiliary space, only constant space is being used. So, the space complexity is O(1).


//🔴🔴 Auxiliary Space:
//      The extra space that is taken by an algorithm temporarily to finish its work

//🔴🔴 Space Complexity:
//       Space complexity is the total space taken by the algorithm with respect to the input size plus the auxiliary space that the algorithm uses.



//❓ Question leetcode medium :
// Count Primes :
// count how many prime number exist till given number 'n' 

//🔸 My approach : 
// #include<iostream>
// using namespace std;

// int IsPrime(int n) {

//     for(int i=2; i<n; i++ ){
//        int count= 0;

//         for(int j=2; j<=i; j++) {
//             if(i % j == 0){
//                 count++ ;
//             }
//         }

//         if(count <= 1) {
//            cout<<i<<" is Prime" <<endl ;
//         }
//     }
//     return 0; 
// }

// int main(){
//     int n;
//     cout<<"enter num till you want to see all the prime numbers :"<<endl ;
//     cin>>n ;

// IsPrime(n) ;

//  return 0;
// }

//🔸 Another approach but still TLE :
// #include<iostream>
// using namespace std;

// bool isPrime(int n){               // function to check if the given number is prime or not 

//     if(n <= 1){                    // if number is 1 or less than one then they are prime number so return false.
//         return false ;
//     }

//     for(int i=2; i<n; i++){         // start from 2 which is also prime number, to less than n to check prime or not
//         if(n%i==0){                 // if the any number is divisible by n other than itself then its not a prime number so return false. 
//             return false ;
//         }
//     }
//     return true ;                // if not false then true 
// }

// int countPrimes( int n){
//     int count = 0 ;

//     for(int i=2; i<n; i++){
//         if( isPrime(i) ){
//             count++ ;
//         }
//     }
//     cout<<count<<endl ;
//     return count ;
// }

// int main(){
//     int n;
//     cout<<"enter num till you want to see all the prime numbers :"<<endl ;
//     cin>>n ;

// countPrimes(n) ;

//  return 0;
// }


//🔸 Appproach for leetcode (because previous approach exceed time limit for contraint  0 <= n <=  5*10^6 )

                           //🔴🔴 SIEVE OF Eratosthenes :           

//🔸This approach helps to reduce time limit for above count prime number question :
//🔸How to implement :

//🔸Step 1:  given a number till we need to find all the prime numbers,
//ex:    n = 20 

//🔸Step 2: Mark every number as prime number except 1 and n (because we start from 1 and less than n )
//ex:  (1) 2  3  4  5  6  7  8  9  10
//      11 12 13 14 15 16 17 18 19 (20)

//🔸 Step 3: Then start searching for prime number  and mark all those which comes in that prime numbers table : and store that prime number
// first prime is 2 
//ex:   [2] 3  4  5  6  7  8  9  10
//      11 12 13 14 15 16 17 18 19 

// so mark all that comes in 2's table 
//Mark:   [2] 3  (4)  5 (6)  7 (8)  9  (10)
//      11 (12) 13 (14) 15 (16) 17 (18) 19 

// temp = 2

//🔸 Step 3 : Now repeat step 2 , find prime and mark all numbers that comes in that prime numbers table and store that prime number
//Mark:   [2] [3]  5  7  (9) 
//        11  13  (15) 17  19 

// temp = 2 3 

//repeat :
//Mark:   [2]  [3]  [5]  [7]  
//        [11] [13] [17] [19] 

// No remaining numbers to mark 

//temp : 2 3 5 7 11 13 17 19

// TOtal number of prime number till 20 = 8  .


// #include<iostream>
// #include<vector>
// using namespace std;

// int countPrime(int n){

//     int count = 0;

//     vector<bool> prime(n+1, true) ;          // we create vector of size n+1(n is given number) and assigning every number as true 

//     prime[0] = prime[1] = false;            // assigning 0 and 1 false as prime number

//     for(int i=2; i<n; i++){             
//         if(prime[i]) {                    // if the number is true which we assign while declaring vector, then mark every number 
//                                           // that comes in its table as false , which means no prime number (because prime no. only comes it its own table)
//             count++ ;                 // count++ for prime number or number which are true 

//             for(int j=j*i; j<n; j=j+i){        // loop for marking every number till n that comes in ith number table
//                 prime[j] = 0 ;                 // mark all the number that comes in that prime no. table as false(0)
//             }
//         }
//     }
//     return count;
// }


// int main(){

//  int n ;
//  cout<<"enter num till you want to see prime number :"<<endl ;
//  cin>> n;

// int ans = countPrime(n) ;
// cout<<ans; 


//     return 0 ;
// }

//🔸Time-complexity: 
// total = n
// total n0. of comparison for prime number =
//           =     (n/2 + n/3 + n/5 + n/7 + n/11 + n/13 ....)
//           =    n (1/2 + 1/3 + 1/5 + 1/7 + 1/11 + 1/13 .... )   
// above expression is similar to harmonic progression  ⬆️ 
// so when we solved it, it becomes log(log n)
// multiplying n it becomes =  O ( n * log(log n) )   

// Time complexity =  O ( n * log(log n) )        for sieve of eratothenes 



// 🔴🔴 Segmented Sieve to learn Homework

//🔸Problems with Simple Sieve:
// The Sieve of Eratosthenes looks good, but consider the situation when n is large,
// the Simple Sieve faces the following issues.

//🔸An array of size Θ(n) may not fit in memory
//🔸The simple Sieve is not cached friendly even for slightly bigger n. 
//The algorithm traverses the array without locality of reference 

//🔴 Segmented Sieve : (Souce geeks for geeks)
//🔸The idea of a segmented sieve is to divide the range [0..n-1] in different segments and compute primes in all segments one by one. 
// This algorithm first uses Simple Sieve to find primes smaller than or equal to √(n).

//🔸 Below are steps used in Segmented Sieve.
//1.Use Simple Sieve to find all primes up to the square root of ‘n’ and store these primes in an array “prime[]”. 
//  Store the found primes in an array ‘prime[]’.

//2.We need all primes in the range [0..n-1]. We divide this range into different segments such that the size of every segment is at-most √n

//3.Do following for every segment [low..high] 
// i.  Create an array mark[high-low+1]. Here we need only O(x) space where x is a number of elements in a given range.
// ii. Iterate through all primes found in step 1. For every prime, mark its multiples in the given range [low..high].

//🔸In Simple Sieve, we needed O(n) space which may not be feasible for large n. 
// Here we need O(√n) space and we process smaller ranges at a time (locality of reference)

//🔸 Implementation :

// // C++ program to print  all primes smaller than n using segmented sieve.
// #include <bits/stdc++.h>
// using namespace std;
 
// // This functions finds all primes smaller than 'limit'
// // using simple sieve of eratosthenes. It also stores
// // found primes in vector prime[]
// void simpleSieve(int limit, vector<int> &prime)
// {
//     // Create a boolean array "mark[0..n-1]" and initialize
//     // all entries of it as true. A value in mark[p] will
//     // finally be false if 'p' is Not a prime, else true.
//     vector<bool> mark(limit + 1, true);
 
//     for (int p=2; p*p<limit; p++)
//     {
//         // If p is not changed, then it is a prime
//         if (mark[p] == true)
//         {
//             // Update all multiples of p
//             for (int i=p*p; i<limit; i+=p)
//                 mark[i] = false;
//         }
//     }
 
//     // Print all prime numbers and store them in prime
//     for (int p=2; p<limit; p++)
//     {
//         if (mark[p] == true)
//         {
//             prime.push_back(p);
//             cout << p << " ";
//         }
//     }
// }
 
// // Prints all prime numbers smaller than 'n'
// void segmentedSieve(int n)
// {
//     // Compute all primes smaller than or equal
//     // to square root of n using simple sieve
//     int limit = floor(sqrt(n))+1;
//     vector<int> prime;
//     prime.reserve(limit);
//     simpleSieve(limit, prime);
 
//     // Divide the range [0..n-1] in different segments
//     // We have chosen segment size as sqrt(n).
//     int low = limit;
//     int high = 2*limit;
 
//     // While all segments of range [0..n-1] are not processed,
//     // process one segment at a time
//     while (low < n)
//     {
//         if (high >= n)
//            high = n;
         
//         // To mark primes in current range. A value in mark[i]
//         // will finally be false if 'i-low' is Not a prime,
//         // else true.
//         bool mark[limit+1];
//         memset(mark, true, sizeof(mark));
 
//         // Use the found primes by simpleSieve() to find
//         // primes in current range
//         for (int i = 0; i < prime.size(); i++)
//         {
//             // Find the minimum number in [low..high] that is
//             // a multiple of prime[i] (divisible by prime[i])
//             // For example, if low is 31 and prime[i] is 3,
//             // we start with 33.
//             int loLim = floor(low/prime[i]) * prime[i];
//             if (loLim < low)
//                 loLim += prime[i];
 
//             /* Mark multiples of prime[i] in [low..high]:
//                 We are marking j - low for j, i.e. each number
//                 in range [low, high] is mapped to [0, high-low]
//                 so if range is [50, 100] marking 50 corresponds
//                 to marking 0, marking 51 corresponds to 1 and
//                 so on. In this way we need to allocate space only
//                 for range */
//             for (int j=loLim; j<high; j+=prime[i])
//                 mark[j-low] = false;
//         }
 
//         // Numbers which are not marked as false are prime
//         for (int i = low; i<high; i++)
//             if (mark[i - low] == true)
//                 cout << i << " ";
 
//         // Update low and high for next segment
//         low = low + limit;
//         high = high + limit;
//     }
// }
 
// // Driver program to test above function
// int main()
// {
//     int n = 100;
//     cout << "Primes smaller than " << n << ":\n";
//     segmentedSieve(n);
//     return 0;
// }

// Output: 
// Primes smaller than 100:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

//🔸Time Complexity : O(sqrt(n))
//🔸Auxiliary Space: O(1)

//🔸Note that time complexity (or a number of operations) by Segmented Sieve is the same as Simple Sieve.
//  It has advantages for large ‘n’ as it has better locality of reference thus allowing better caching by the CPU and also requires less memory space.




//🔘🔘 GCD (greatest common divisor) / HCF (highest common factor) :

//🔸The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. 
//  It is also called the highest common factor (HCF).
// For example :
// the greatest common factor of 15 and 10 is 5, since both the numbers can be divided by [5]  15/5 = 3 , 10/5 = 2.

//ex:
// gcd/hcf for 24 and 72 :
     
//       2  |  24        2  |  72    
//      ----------      ---------
//       2  |  12        2  |  36
//       2  |  6         2  |  18
//       3  |  3         3  |  9
//          |  1         3  |  3
//                          |  1

// 24 =  2 x 2 x 2 x 3 
// 72 =  2 x 2 x 2 x 3 x 3 
//       -----------------
//       2 x 2 x 2 x 3   =>   4 x 6   => 24  hcf/gcd for 24 and 72 


// 🔸 another method for gcd/hcf :
// The GCF of 24 and 72 is 24. 
//  To calculate the greatest common factor of 24 and 72, 
//  we need to factor each number 
//  (factors of 24 = 1, 2, 3, 4, 6, 8, 12, 24;
//  factors of 72 = 1, 2, 3, 4, 6, 8, 9, 12, 18, 24, 36, 72) 
//  and choose the greatest factor that exactly divides both 24 and 72, 
//  i.e., 24.


//🔸Approach for code :
// gcd(a,b) =>  gcd(a-b, b) or gcd(a % b, b)

//ex : gcd(72, 24)  => gcd( a-b, b) 
//                  => gcd( 48, 24)
//                  => gcd( 24, 24)
//                  => gcd( 0,  24)        // remaining 24 which is answer
//   ==> 24 

// #include<iostream>
// using namespace std ;

// int gcd(int a, int b ) {

//        if(a == 0){               // if a == 0 then answer is b
//         return b;
//        }
//        if(b == 0){
//         return a;                // if b == 0 then answer is a
//        }

//        while( a != b){          //if both not 0 then loop till a is not equal to b

//         if(a>b){                // if a is greater no. then a=a-b
//             a = a-b ;
//         }
//         else{
//             b = b-a ;           // if b is greater no. then b=b-a
//         }
//        }
//      return a;                
// }

// int main() {
// int a, b ;
// cout<<"Enter two numbers to find gcd :"<<endl ;
// cin>>a >>b ;

// int ans = gcd(a,b) ;

// cout<<" gcd for "<<a<<" , "<<b<<" is : "<<ans<<endl ;

//     return 0 ;
// }


//🔸 Another method / formula :
// lcm(a,b) * gcd(a,b)
//  = a * b 



// 🔘🔘 Modulo :
//🔸Modulo is a math operation that finds the remainder when one integer is divided by another. 
//  In writing, it is frequently abbreviated as mod, or represented by the symbol %. For two integers a and b: a mod b = r.
//  Where a is the dividend, b is the divisor (or modulus), and r is the remainder.

// some basic identity for modulo :
//i.   (a + b) % m  =  a % m  +  b % m

//ii.   a % m  -  b % m  = (a - b) % m

//iii.  a % m  *  b % m  = (a * b) % m



//🔘🔘 Fast exponentiation :

//🔸  a^b                   // a power b
// if b is even =  (a^b / 2)^2       
// if b is odd  =  ((a^b / 2)^2) * a  

//ex :
// if power is even :
//   2^10 ==>  (2^5)^2   ==> 2^10              

//if power is odd :
//  2^11 ==>  ((2^5)^2) * 2  ==> 2^10 * 2  ==>  2^10+1  ==>  2^11



//❓ Question :
// Modular Exponentiation :
// You are given a three integers 'X' , 'N' and 'M'. your task is to find ("X", "N") % "M".
// A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

//INput format:
// the first line of input contains a single integer "T" , representing the number of test cases.
// the first line of each test contains three space-separated integers "X", "N" , and "M" .

//OUtput format:
// for each test case, return a single line containing the value of ("X" ^ "N") % "M"
//input given x , n , m .  we need to give output for (x^n) % m.

// #include<iostream>
// using namespace std;

// int modularExp(int x, int n, int m) {

//     int result = 1;

//     while(n>0){
       
//     // for odd case : // ii.  ((a^b/2)^2) * a  = if b is odd    ==> ((x^n/2)^2)  * m
//       if(n&1) {  
//            result = (1LL * (result) * (x)% m) % m ;         // 1LL is long long, we are typecasting ll because of contraint x <= 10^9
//       }
//       x = (1LL * (x)% m * (x)% m) % m ;
//       n = n >> 1;                  // instead of dividing we are using bit right shift it is easier than dividing 
//     }
//     return result ;
// }

// int main() {
// int x , n, m ;
// cout<<" Enter x , n, m :"<<endl ;
// cin>> x >>n >>m ;

// int ans = modularExp(x, n, m) ;

// cout<<" answer = "<<ans<<endl ;

//     return 0;
// }



//❓ question :
// return a power b
//🔸  a^b                                // a power b
// if b is even =  (a^b / 2)^2           // use this formula
// if b is odd  =  ((a^b / 2)^2) * a     // use this formula

//ex :
// if power is even :
//   2^10 ==>  (2^5)^2   ==> 2^10              

//if power is odd :
//  2^11 ==>  ((2^5)^2) * 2  ==> 2^10 * 2  ==>  2^10+1  ==>  2^11


// #include<iostream>
// using namespace std;

// long fastPower(int a, int b) {
//     long res = 1; 

//     while( b > 0 ){              // loop till b is not zero
//       cout<<"b :: "<<b<<endl ;
    //     if( b % 2 != 0){         // if b is odd  (if ((b&1) != 0) ) or (if (b&1) ) another way to find if b is odd or not)
    //       cout<<"odd b : "<<b<<endl ;
    //        res = res * a;  
    //        cout<<"res : "<<res<<endl ;
    //     }
                  
    //     a = a*a ;
    //     cout<<"a : "<<a<<endl ;
    //     b = b/2 ;               // also b = b >> 1  (if right shift 1 then b divide by 2) (if left shift then b multiply by 2)
    //     cout<<"b/2 : "<<b<<endl ;
      
    // }

//     return res ;

// }

// int main() {

// int a = 3 ;
// int b = 5 ;

// int ans = fastPower(a, b) ;
// cout<<"ans : "<<ans<<endl ;

//     return 0;
// }



// ❓ Homework question :
// factorial of no:
// (212!) % m , where m = 10^9 + 7 

//🔸  a^b                                // a power b
// if b is even =  (a^b / 2)^2           // use this formula
// if b is odd  =  ((a^b / 2)^2) * a     // use this formula

//ex :
// if power is even :
//   2^10 ==>  (2^5)^2   ==> 2^10              

//if power is odd :
//  2^11 ==>  ((2^5)^2) * 2  ==> 2^10 * 2  ==>  2^10+1  ==>  2^11

//🔸 Below ans is working fine in online compiler solution is correct
// #include<iostream>
// #include<math.h>
// using namespace std ;

// long factorial(int a) {
//   long res = 1 ;
//   int m = 1000000007 ;
      
//     while( a > 0){
//     res = (res* (a%m)) %m ;
//     a-- ;
//     }
//     return res ;
// }

// int main() {
// int a = 212;

// long ans = factorial(a) ;
// cout<<"ans : "<<ans<<endl ;

//     return 0 ;    // 616613957 = 212 fact
// }


//🔸Another approach for above question : this is also write but not working properly in vscode 
// #include<iostream> 
// #include<math.h>
// using namespace std;
  
// long long fact(int n, int m){
//     long factorial=1;
  
//     for(int i=1;i<=n;i++){
//       factorial= (factorial* i)%m ;
//     }
//     return factorial;
// }

// int main(){
// int m = pow (10, 9)+7;            // given m = 10^9 + 7  == 1000000007

// cout<<fact(212,m) <<endl ;
// return 0;
// }



//🔸Homework :
//i. pigeonHole principle
//ii. catalon number
//iii. inclusive-exclusive principle


