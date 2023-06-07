
//                //🔴🔴🔴Dynamic Programming 

// Dynamic Programming is mainly an optimization over plain recursion. 
// Wherever we see a recursive solution that has repeated calls for same inputs, 
// we can optimize it using Dynamic Programming. 
// The idea is to simply store the results of subproblems, 
// so that we do not have to re-compute them when needed later. 
// This simple optimization reduces time complexities from exponential to polynomial.

// For example, if we write simple recursive solution for Fibonacci Numbers, 
// we get exponential time complexity and if we optimize it by storing solutions of subproblems, 
// time complexity reduces to linear.


//🔴 Those who forget the past, are condemned to repeat it !!!


//🔴🔴Approach to solve question using Dynamic Programming
//🔸1.  top-down  ==>  Recursion +  Memoization(store the value of subproblem in map/table)
//🔸2.  bottom-up  ==>  Tabulation






//                //❓Question: Nth fibonacci number

// Nth term of Fibonacci series F(n). where  F(n) IS a function, is calculated using the following formula -
//       F(n) = F(n-1) + F(n-2),
//        Where, F(1) - 1,
//              F(2) = 1

// Provided N you have to find out the Nth Fibonacci Number. Handle edges cases like when n=1 or n=2 by using conditionals like if else
//  and return what's exprected.

// Constraints:
//    1 <= N <= 10000
//    Where 'N' represents the number for which we have to find its equivalent Fibonacci number.
//    Time Limit: 1 second

// Sample Input 1:
// 6
// Sample Output 1:
// 8
// Explanation
// Now the number is ‘6’ so we have to find the “6th” Fibonacci number
// So by using the property of the Fibonacci series i.e 

// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.


//🔸Basic Recursion approach :
// int fibo (int n) {
//     if(n==1 || n==0) {
//         return n ;
//     }

//     return fibo(n-1) + fibo(n-2) ;
// }

//🔴approach using DP:
//🔴using top-down ==> recursion + memoization

// #include<iostream>
// #include<vector>
// using namespace std;

// //fibonacci series
// int fib(int n,  vector<int> &dp) {
//     // step1. base case
//     if(n <= 1){
//         cout<<"step1:" <<endl ;
//         return n ;
//     }

//     //step3: 
//     if(dp[n] != -1) {
//         cout<<"step3:" <<endl ;
//         return dp[n] ;
//     }

//     //step2: 
//         cout<<"step2:" <<endl ;
//     dp[n] = fib(n-1, dp) + fib(n-2, dp) ;
//     return dp[n] ;
// }

// int main() {

//     int n ;
//     cin >> n ;

//     vector<int> dp(n+1) ;

//     for(int i=0; i<=n; i++) {
//         dp[i] = -1 ;
//     }

//     cout<< fib(n, dp) << endl ;

//     return 0 ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)              // O(N) + O(N)


//🔴approach using DP:
//🔴using bottom-up ==> Tabulation

// #include<iostream>
// #include<vector>
// using namespace std;

// //fibonacci series
// int fib(int n,  vector<int> &dp) {
    
//     dp[0] = 0 ;
//     dp[1] = 1 ;

//     for(int i=2; i<=n; i++) {
//         dp[i] = dp[i-1] + dp[i-2] ;
//     }

//     return dp[n] ;
// }

// int main() {

//     int n ;
//     cin >> n ;

//     vector<int> dp(n+1) ;

//     for(int i=0; i<=n; i++) {
//         dp[i] = -1 ;
//     }

//     cout<< fib(n, dp) << endl ;

//     return 0 ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)



//🔴🔴approach using DP:
//🔴space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     int n ;
//     cin >> n ;

//     int prev1 =  1 ;
//     int prev2 = 0 ;

//     if(n == 0){
//         return prev2 ;
//     }

//     for(int i=2; i<=n; i++) {
//         int curr = prev1 + prev2; 
//         //shift logic
//         prev2 = prev1 ;
//         prev1 = curr ;
//     }
//     cout<< prev1  << endl ;

//     return 0 ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(1)




//              //❓Question: Count ways to reach the N-th stairs 

// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either
//  climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth
//  step.
//  Example:
//    N=3
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

// We can climb one step at a time i.e. {(о, 1) ,1, 2),(2,3)} or we can climb the first two-step and then one step
//  i.e. {(0,2),(1, 3)} or we can climb first one step and then two step i.e. {(0,1), (1,3)}.

// Constraints :
//    1 <= 'T' <= 10
//    0 <= "N' <= 10^5
//    Where 'T' is the number of test cases, and 'N' is the number of stairs.
//    It is guaranteed that sum of 'N' over all test cases is <= 10^5.

// Sample Input 1 :
// 2
// 2
// 3
// Sample Output 1 :
// 2
// 3
// Explanation Of Sample Input 1 :
// In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

// In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
// Sample Input 2 :
// 2
// 4
// 5
// Sample Output 2 :
// 5
// 8
// Explanation Of Sample Input 2 :
// In the first test case, there are five ways to climb the stairs i.e. {1,1,1,1} , {1,1,2} , {2,1,1} , {1,2,1} , {2,2}.
// In the second test case, there are eight ways to climb the stairs i.e. {1,1,1,1,1} , {1,1,1,2} , {1,1,2,1}, {1,2,1,1}, {2,1,1},{2,2,1},{2,1,2} and {2,2,1}.

//🔴Appraoch using recursion  :
//  Time limit exceeded
// #include <iostream>
// using namespace std ;

// //🔸Output Format:
// //   For each test case/query, print the number of distinct ways to reach the top of stairs.
// //   Since the number can be huge, so return output modulo 10^9+7. 
// //   therefore using #define MOD 1000000007

// #define MOD 1000000007
// int solve(long long nStairs, int i) {
//      //base case 
//     if(i == nStairs) {
//         return 1 ;
//     }

//     if(i > nStairs) {
//         return 0 ;
//     }

//     return (solve(nStairs, i+1) + solve(nStairs, i+2)) % MOD ;
// }

// int countDistinctWays(int nStairs) {
//     int ans = solve(nStairs, 0) ;
//     return ans ;
// }
//🔸time complexity: O()
//🔸space complexity: O()





//             //❓Question: Min Cost Climbing Stairs

// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. 
// Once you pay the cost, you can either climb one or two steps.
// You can either start from the step with index 0, or the step with index 1.
// Return the minimum cost to reach the top of the floor.

// Example 1:

// Input: cost = [10,15,20]
// Output: 15
// Explanation: You will start at index 1.
// - Pay 15 and climb two steps to reach the top.
// The total cost is 15.

// Example 2:

// Input: cost = [1,100,1,1,1,100,1,1,100,1]
// Output: 6
// Explanation: You will start at index 0.
// - Pay 1 and climb two steps to reach index 2.
// - Pay 1 and climb two steps to reach index 4.
// - Pay 1 and climb two steps to reach index 6.
// - Pay 1 and climb one step to reach index 7.
// - Pay 1 and climb two steps to reach index 9.
// - Pay 1 and climb one step to reach the top.
// The total cost is 6.
 
// Constraints:
// 2 <= cost.length <= 1000
// 0 <= cost[i] <= 999


//🔴approach: using recusrion
// Time limit exceeded

// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int solve(vector<int> &cost, int n) {
//        //base case
//        if(n == 0){
//         return cost[0] ;
//        }

//        if(n == 1) {
//         return cost[1] ;
//        }

//        int ans = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
//        return ans ;
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size() ;
//         int ans = min(solve(cost, n-1), solve(cost, n-2)) ;
//         return ans; 
//     }
// };

// //🔴approach: using recursion + memoization (top+down)

// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int solve2(vector<int> &cost, int n, vector<int> &dp) {
//        //base case
//        if(n == 0){
//         return cost[0] ;
//        }

//        if(n == 1) {
//         return cost[1] ;
//        }
//        //step3:
//        if(dp[n] != -1) {
//         return dp[n] ;
//        }

//        //step2:
//        dp[n] = cost[n] + min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
//        return dp[n] ;
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size(); 
//         //step1:
//         vector<int> dp(n-1, -1) ;
//         int ans = min(solve2(cost, n-1, dp), solve2(cost, n-2, dp)) ;
//         return ans ;
//     }
// };
//🔸time complexity: O(n)
//🔸space complexity: O(n)         // o(n)+ o(n)

//🔴approach using:  Tabulation (bottom-up)
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int solve(vector<int> &cost, int n) {
//         //step1: creation
//         vector<int> dp(n+1) ;
//         //step2: base case
//         dp[0] = cost[0] ;
//         dp[1] = cost[1] ;
       
//         //step3:
//         for(int i=2; i<n; i++){
//             dp[i] = cost[i] +  min(dp[i-1], dp[i-2]) ;
//         }
       
//        return min(dp[n-1], dp[n-2]) ;
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size(); 
//         return solve(cost, n) ;
//     }
// };
//🔸time complexity: O(n)
//🔸space complexity: O(n)



//🔴approach using:  space optimisation (method)
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int solve(vector<int> &cost, int n) {
       
//         int prev2 = cost[0] ;
//         int prev1 = cost[1] ;
       
//         for(int i=2; i<n; i++){
//             int curr = cost[i] + min(prev1, prev2) ;
//             prev2 = prev1 ;
//             prev1 = curr ;
//         }
       
//        return min(prev1, prev2) ;
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size(); 
//         return solve(cost, n) ;
//     }
// };
//🔸time complexity: O(n)
//🔸space complexity: O(1)



//                   //❓Question: Minimum elements

// You are given an array of 'N' distinct integers and an integer 'X' representing the target sum. You have to tell the minimum number of
//  elements you have to take to reach the target sum 'X'.
//  Note:
//    You have an infinite number of elements of each type.

// For Example
//    If N=3 and X=7 and array elements are [1,2,3].
//    Way 1 - You can take 4 elements [2, 2, 2, 1] as 2 + 2 + 2 + 1 = 7.
//    Way 2 - You can take 3 elements [3, 3, 1] as 3 + 3 +1=7.
//    Here, you can see in Way 2 we have used 3 coins to reach the target sum of 7.
//    Hence the output is 3.

// Constraints:
//    1 <= T <= 10
//      <= N <= 15
//    1 <= nums[i] <= (2^31) - 1
//    1 <= x <= 10000
//    All the elements of the "nums" array will be unique.
//    Time limit: 1 sec

// Sample Input 1 :
// 2
// 3 7
// 1 2 3
// 1 0
// 1
// Sample Output 1 :
//  3
//  0
// Explanation For Sample Output 1:
// For the first test case,
// Way 1 - You can take 4 elements  [2, 2, 2, 1] as 2 + 2 + 2 + 1 = 7.
// Way 2 - You can take 3 elements  [3, 3, 1] as 3 + 3 + 1 = 7.
// Here, you can see in Way 2 we have used 3 coins to reach the target sum of 7.
// Hence the output is 3.

// For the second test case,
// Way 1 - You can take 3 elements  [1, 1, 1] as 1 + 1 + 1  = 3.
// Way 2 - You can take 2 elements  [2, 1] as 2 + 1 = 3.
// Here, you can see in Way 2 we have used 2 coins to reach the target sum of 7.
// Hence the output is 2.
// Sample Input 2 :
// 2
// 3 4
// 12 1 3
// 2 11
// 2 1
// Sample Output 2 :
// 2
// 6 

// #include <iostream>
// using namespace std;

// int minimumElements(vector<int> &num, int x)
// {
//     // Write your code here.
// }

//113 /149