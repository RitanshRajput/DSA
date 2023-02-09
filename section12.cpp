              //🔴🔴 Basics Math for DSA :

//🔸 Prime Number :

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
//                 prime[j] = 0 ;
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
//                (n/2 + n/3 + n/5 + n/7 + n/11 + n/13 ....)
//              n (1/2 + 1/3 + 1/5 + 1/7 + 1/11 + 1/13 .... )   
// similar to harmonic progression  ⬆️ 
// so when we solved it it becomes log(log n)
// multiplying n it becomes =  O ( n * log(log n) )   

// Time complexity =  O ( n * log(log n) )        for sieve of eratothenes 



// 🔴🔴 Segemented Sieve to learn Homework

// 19:00 26/149 