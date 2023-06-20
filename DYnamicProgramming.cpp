
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




// 🔴🔴🔴             //❓Question: Count ways to reach the N-th stairs 

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





// 🔴🔴🔴            //❓Question: Min Cost Climbing Stairs

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



// 🔴🔴🔴                //❓Question: Minimum elements

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

//🔴approach: recursion
//🔸Time limit exceeded

// #include <iostream>
// #include<vector>
// #include<limits.h> 
// using namespace std;

// int solve(vector<int> &num, int x) {
//     //base case
//     if(x == 0) {
//         return 0 ;
//     }

//     if(x  < 0){
//         return INT_MAX ;
//     }

//     int mini = INT_MIN ;

//     for(int i=0; i<num.size(); i++) {
//          int ans = solve(num, x - num[i]) ;
//         if(ans != INT_MIN) {
//             mini = min(mini, 1+ans) ;
//         }
//     }

//     return mini ;
// }

// int minimumElements(vector<int> &num, int x)
// { 
//   int ans = solve(num, x) ;    
//   if( ans == INT_MAX) {
//     return -1;
//   }
//  return ans ;
// }
//🔸time complexity: Exponential          // bad very bad


// //🔴approach: recursion + memoization
// //🔸 Time limit exceeded

// #include <iostream>
// #include<vector>
// #include<limits.h> 
// using namespace std;

// int solve(vector<int> &num, int x, vector<int> &dp ) {
//     //base case
//     if(x == 0) {
//         return 0 ;
//     }

//     if(x  < 0){
//         return INT_MAX ;
//     }

//     if( dp[x] != -1) {
//         return dp[x] ;
//     }

//     int mini = INT_MIN ;

//     for(int i=0; i<num.size(); i++) {
//          int ans = solve(num, x - num[i], dp) ;
//         if(ans != INT_MIN) {
//             mini = min(mini, 1+ans) ;
//         }
//     }
//     dp[x] = mini ;

//     return mini ;
// }

// int minimumElements(vector<int> &num, int x)
// { 
//   vector<int> dp(x + 1, -1) ;
//   int ans = solve(num, x, dp) ;

//   if(ans == INT_MAX) {
//      return -1 ;
//   }
//   else{
//      return ans ;
//   }
// }
//🔸time complexity: O(x * n)             // x = amount, n = no of coins
//🔸space complexity: O(x)


//🔴approach: Tabulation 

// #include <iostream>
// #include<vector>
// #include<limits.h> 
// using namespace std;

// int solve(vector<int> &num, int x) {

//   vector<int> dp(x+1, INT_MAX) ;
//   dp[0] = 0 ;

//   for(int i=1; i<=x; i++){
//     // trying to solve for every amount figure from 1 to x
//     for(int j=0; j<num.size(); j++) {

//         if( i-num[j] >= 0 && dp[i-num[j]] != INT_MAX){ 
//            dp[i] = min(dp[i], 1 + dp[i-num[j]]) ;
//         }
//     }
//   }

//   if( dp[x] == INT_MAX) {
//      return -1 ;
//   }

//   return dp[x] ;

// }

// int minimumElements(vector<int> &num, int x)
// { 
//   return solve(num, x) ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(x)


//🔴🔴🔴               //❓Question: Maximum sum of non-adjacent element


// You are given an array/list of 'N' integers. You are supposed to return the maximum sum of the subsequence with the constraint that no
//  two elements are adjacent in the given array/list.
//  Note:
//    A subsequence of an array/list is obtained by deleting some number of elements (can be zero) from the array/list,
//    leaving the remaining elements in their original order.

// Constraints:
//    1 <= T <= 500
//    1 <= N <= 1000
//    0 <= ARR[i] <= 10^5
//    Where 'ARR[i]" denotes the 'i-th' element in the array/list.
//    Time Limit: 1 sec.

// Sample Input 1:
// 2
// 3
// 1 2 4
// 4
// 2 1 4 9
// Sample Output 1:
// 5
// 11
// Explanation To Sample Output 1:
// In test case 1, the sum of 'ARR[0]' & 'ARR[2]' is 5 which is greater than 'ARR[1]' which is 2 so the answer is 5.
// In test case 2, the sum of 'ARR[0]' and 'ARR[2]' is 6, the sum of 'ARR[1]' and 'ARR[3]' is 10, and the sum of 'ARR[0]' and 'ARR[3]' is 11. So if we take the sum of 'ARR[0]' and 'ARR[3]', it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.

// Sample Input 2:
// 2
// 5
// 1 2 3 5 4
// 9
// 1 2 3 1 3 5 8 1 9
// Sample Output 2:
// 8
// 24
// Explanation To Sample Output 2:
// In test case 1, out of all the possibilities, if we take the sum of 'ARR[0]', 'ARR[2]' and 'ARR[4]', i.e. 8, it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.
// In test case 2, out of all the possibilities, if we take the sum of 'ARR[0]', 'ARR[2]', 'ARR[4]', 'ARR[6]' and 'ARR[8]', i.e. 24 so, it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.

//🔴approach: Recusrion 
//🔸 Time limit exceeeded
// #include<iostream>
// #include<vector> 
// using namespace std;

// int solve(vector<int> &nums, int n){
//     //base case
//     if(n < 0){
//         return 0 ;
//     }

//     if(n == 0){
//         return nums[0] ;
//     }

//     int include = solve(nums, n-2)  + nums[n] ;
//     int exclude = solve(nums, n-2) + 0 ;
    
//     return max(include, exclude) ;
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     int n = nums.size() ;
//     int ans = solve(nums, n-1) ;
//     return ans ;
// }


//🔴approach: Recusrion  + Memoization
//🔸 Time limit exceeded
// #include<iostream>
// #include<vector> 
// using namespace std;

// int solve(vector<int> &nums, int n, vector<int> &dp) {
//     //base case
//     if(n < 0){
//         return 0 ;
//     }

//     if(n == 0){
//         return nums[0] ;
//     }
   
//      //step3:
//     if(dp[n] != -1){
//         return dp[n] ;
//     }

//     //step2:
//     int include = solve(nums, n-2, dp)  + nums[n] ;
//     int exclude = solve(nums, n-2, dp) + 0 ;
    
//     dp[n] = max(include, exclude) ;
//     return dp[n] ;
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     int n = nums.size() ;
//     vector<int> dp(n, -1) ; 

//    return solve(nums, n-1, dp) ;
//    ;
// }
//🔸Time complexity: O(n)
//🔸Space complexity: O(n)        // O(n) + O(n)



//🔴approach: Tabulation
//🔸
// #include<iostream>
// #include<vector> 
// using namespace std;

// int solve(vector<int> &nums) {
    
//     int n = nums.size() ;
//     vector<int> dp(n, 0) ;

//     dp[0] = nums[0] ;

//     for(int i=1; i<n; i++) {
//         int include = dp[i-2] + nums[i] ;
//         int exclude = dp[i-1] + 0 ;
//         dp[i] = max(include, exclude); 
//     }

//     return dp[n-1];
// }

// int maximumNonAdjacentSum(vector<int> &nums){
   
//    return solve(nums) ;
//    ;
// }
//🔸Time complexity: O(n)
//🔸Space complexity: O(n)



// 🔴approach: Space optimisation

// #include<iostream>
// #include<vector> 
// using namespace std;

// int solve(vector<int> &nums) {
    
//     int n = nums.size() ;
//     int prev2 = 0 ;
//     int prev1 = nums[0] ;


//     for(int i=1; i<n; i++) {
//         int include = prev2 + nums[i] ;
//         int exclude = prev1 + 0 ;

//         int ans  = max(include, exclude); 
//         prev2 = prev1 ;
//         prev1 = ans ;
//     }

//     return prev1 ;
// }

// int maximumNonAdjacentSum(vector<int> &nums){
   
//    return solve(nums) ;
//    ;
// }
//🔸Time complexity: O(n)
//🔸Space complexity: O(1)



//🔴🔴🔴           //❓Question : House robber II

// Mr. x is a professional robber planning to rob houses along a street. Each house has a certain amount of money hidden. All houses
// along this street are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a
// security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
// You are given an array/list of non-negative integers 'ARR' representing the amount of money of each house. Your task is to return the
// maximum amount of money Mr. X can rob tonight without alerting the police.
// Note:
//    It is possible for Mr. x to rob the same amount of money by looting two different sets of houses. Just print the
//    maximum possible robbed amount, irrespective of sets of houses robbed.
// For Example:
//  (i) Given the input array arr[] = {2, 3, 2} the output will be 3 because Mr x cannot rob house 1 (money - 2) and
//    then rob house 3 (money = 2 2), because they are adjacent houses. So, he'll rob only house 2 (money 3)
//  (ii) Given the input array arr[] = {1, 2, 3, 1} the output will be 4 because Mr x rob house 1 (money = 1 1) and then
//    rob house 3 (money = 3).
//  (iii) Given the input array arr[] - {0} the output will be 0 because Mr. x has got nothing to rob.

// Constraints:
//    1 <= y <= 10
//    1 <=N == 5 x 10 ٨ 3
//    9 ٨ 10 <= ARR[i] <= 1
//    Time limit: 1 sec.

// Sample Input 1:
// 3
// 1
// 0
// 3
// 2 3 2
// 4
// 1 3 2 1
// Sample Output 1:
// 0
// 3
// 4
// Explanation Of Input 1:
// (i) Mr. X has only one house to rob, but with no money.

// (ii) Mr. X cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses (remember, it’s a circular street). So, he’ll rob only house 2 (money = 3) with a maximum value

// (iii) Mr. X will get maximum value when he robs house 2 (money = 3) and then robs house 4 (money = 1) i.e. 4 units of money.
// Sample Input 2:
// 3
// 5
// 1 5 1 2 6
// 3
// 2 3 5
// 4
// 1 3 2 0
// Sample Output 2:
// 11
// 5
// 3


// 🔴 approach: Last question space optimisation (solve function is used)
// #include<iostream>
// #include<vector>
// using namespace std;


// long long solve(vector<int> &nums) {
    
//     long long n = nums.size() ;
//     long long prev2 = 0 ;
//     long long prev1 = nums[0] ;


//     for(int i=1; i<n; i++) {
//         long long include = prev2 + nums[i] ;
//         long long exclude = prev1 + 0 ;
//         long long ans  = max(include, exclude); 
//         prev2 = prev1 ;
//         prev1 = ans ;
//     }

//     return prev1 ;
// }

// long long int houseRobber(vector<int>& valueInHouse)
// {
//     long long n = valueInHouse.size() ;

//     if(n== 1){
//         return valueInHouse[0] ;
//     }
//         vector<int> first, second ;

//         for(int i=0; i<n; i++){
//             // if including first house then excluding last house, as it will be adjacent house
//             if( i != n-1) {
//                 first.push_back(valueInHouse[i]) ;
//             }
//             // if including last house then excluding first house , as it will be adjacent house
//             if(i != 0){
//                 second.push_back(valueInHouse[i]) ;
//             }
//         }

//     return max(solve(first), solve(second)) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)



//🔴🔴🔴          //❓Question: cut into segments

// You are given an integer 'N' denoting the length of the rod. You need to determine the maximum number of segments you can make of
// this rod provided that each segment should be of the length 'X', 'Y', or 'Z'.

// Sample Input 1:
// 2
// 7 5 2 2
// 8 3 3 3
// Sample Output 1:
// 2
// 0
// Explanation For Sample Input 1:
//                7
//   |=====================|=========
//   |       5             |  2
//   |                     | 
// 
//    ====================
//           5
//                      ============
//                           2
//
//
// In the first test case, cut it into 2 parts of 5 and 2.

// In the second case, there is no way to cut into segments of 3 length only as the length of the rod is less than the given length. 
// Sample Input 2:
// 2
// 7 3 2 2
// 8 1 4 4
// Sample Output 2:
// 3
// 8
// Explanation For Sample Input 2:
// In the first test case, cut it into 3 parts of 3, 2 and 2.

// In the second case, cut it into 8 parts of length 1.


//🔴approach: Recursion
//🔸time limit exceeded
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int solve(int n, int x, int y, int z){
//     //base case
//     if(n == 0) {
//         return 0 ;
//     }

//     if(n < 0){
//         return INT_MIN ;
//     }

//     int a = solve(n-x, x, y, z) + 1 ;
//     int b = solve(n-y, x, y, z) + 1 ;
//     int c = solve(n-z, x, y, z) + 1 ;

//     int ans = max(a, max(b, c)) ;
//     return ans ;
// }

// int cutSegments(int n, int x, int y, int z) {

//     int ans = solve(n, x, y, z) ;
//     if( ans < 0){
//         return 0 ;
//     }
//     else{
//         return ans ;
//     }
// }
//🔸time complexity: exponential
//🔸space complexity: exponential


// //🔴approach: Recursion + memoization

// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;

// int solve(int n, int x, int y, int z, vector<int> &dp){
//     //base case
//     if(n == 0) {
//         return 0 ;
//     }

//     if(n < 0){
//         return INT_MIN ;
//     }
//     //step3:
//    if( dp[n] != -1) {
//     return dp[n] ;
//    }

//     int a = solve(n-x, x, y, z, dp) + 1 ;
//     int b = solve(n-y, x, y, z, dp) + 1 ;
//     int c = solve(n-z, x, y, z, dp) + 1 ;
//     //step2:
//     dp[n] = max(a, max(b, c)) ;
//     return dp[n] ;
// }

// int cutSegments(int n, int x, int y, int z) {
//     //step1:
//     vector<int> dp(n+1, -1) ;
//     int ans = solve(n, x, y, z, dp) ;

//     if(ans < 0){   
//     return 0 ;
//     }
//     else{
//         return ans ;
//     }
// }
//🔸time complexity:  O(n)
//🔸space complexity: O(n) + O(n)


//🔴approach: Tabulation

// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;

// int solve(int n, int x, int y, int z){
//       //step1:
//     vector<int> dp(n+1, INT_MIN) ;
//     dp[0] = 0 ;

//     for(int i=1; i<=n; i++) {
//         if( i-x >= 0)
//         dp[i] = max(dp[i], dp[i-x]+1) ;

//         if( i-y >= 0)
//         dp[i] = max(dp[i], dp[i-y]+1) ;

//         if( i-z >= 0)
//         dp[i] = max(dp[i], dp[i-z]+1) ;
//     }

//     if( dp[n] < 0){
//         return 0 ;
//     }
//     else{
//         return dp[n] ;
//     }
// }

// int cutSegments(int n, int x, int y, int z) {
  
//     return solve(n, x, y, z) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)

//🔴approach: Tabulation (without INT_MIN)

// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;

// int solve(int n, int x, int y, int z){
//       //step1:
//     vector<int> dp(n+1, -1) ;
//     dp[0] = 0 ;

//     for(int i=1; i<=n; i++) {
//         if( i-x >= 0 && dp[i-x] != -1)
//         dp[i] = max(dp[i], dp[i-x]+1) ;

//         if( i-y >= 0 && dp[i-y] != -1)
//         dp[i] = max(dp[i], dp[i-y]+1) ;

//         if( i-z >= 0 && dp[i-z] != -1)
//         dp[i] = max(dp[i], dp[i-z]+1) ;
//     }

//     if( dp[n] < 0){
//         return 0 ;
//     }
//     else{
//         return dp[n] ;
//     }
// }

// int cutSegments(int n, int x, int y, int z) {
  
//     return solve(n, x, y, z) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)



//🔴🔴🔴         //❓Question: COunt derangements

// A Derangement is a permutation of 'N' elements, such that no element appears in its original position. For example, an instance of
//  derangement of {0, 1, 2, 3} is {2, 3, 1, 0} because 2 present at index 0 is not at its initial position which is 2 and similarly for other
//  elements of the sequence.
//  Given a number 'N', find the total number of derangements possible of a set of 'N' elements.
//  Note:
//    The answer could be very large, output answer %(10 ٨ 9 + 7).

// Constraints:
//    1 <= T <= 100
//    1 <= N <= 3000
//    Time limit: 1 sec

// Sample Input 1:
// 2
// 2
// 3
// Sample Output 1:
// 1
// 2
// Explanation Of Sample Output 1:
// In test case 1, For two elements say {0, 1}, there is only one possible derangement {1, 0}. 1 is present at index 0 and not at its actual position, that is, 1. Similarly, 0 is present at index 1 and not at its actual position, that is, 0.
// In test case 2, For three elements say {0, 1, 2}, there are two possible derangements {2, 0, 1} and {1, 2, 0}. In both the derangements, no element is present at its actual position.
//
//                  [ n=3 ]
// 
//     arr       [ 0 | 1 | 2 ]
//     index       0   1   2
//         
//           possible derangements
//            /               \ 
//  [ 2 | 0 | 1]            [ 1 | 2 | 0 ]
//    0   1   2               0   1   2

// Sample Input 2:
// 2
// 1
// 4
// Sample Output 2:
// 0
// 9
// Explanation Of Sample Output 2:
// In test case 1, For the array = {0}, there is no possible derrangements. Hence the answer is 0 (zero).

// In test case 2, For the array elements = {0, 1, 2, 3}, total 9 derrangements are possible. One of them is: { 3, 2, 1, 0}.


//🔴 approach: Recursion
//🔸time limit exceeded
// #include<iostream>
// using namespace std;

// #define MOD 1000000007

// long long int countDerangements(int n){
//    //base case
//     if( n == 1) {
//         return 0 ;
//     }

//     if( n == 2){
//         return 1 ;
//     }

//     int ans = ( ((n-1)%MOD )*((countDerangements(n-1)%MOD) + (countDerangements(n-2)%MOD))%MOD ) ;
   
//    return ans ;
// }
//🔸time complexity: exponential
//🔸space complexity: exponential


// //🔴 approach: Recursion + memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007

// long long int solve(int n, vector<long long int> &dp) {
// //base case
//     if( n == 1) {
//         return 0 ;
//     }

//     if( n == 2){
//         return 1 ;
//     }
     
//     //step3: 
//      if( dp[n] != -1) 
//      return dp[n] ;

//     //step2:
//     dp[n] = ( ((n-1)%MOD )*((solve(n-1, dp)%MOD) + (solve(n-2, dp)%MOD))%MOD ) ;
   
//    return dp[n] ;
// }

// long long int countDerangements(int n){
//    //step1:
//    vector<long long int> dp(n+1, -1) ;
//    return solve(n, dp) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n) + O(n)  



// //🔴 approach: Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007

// long long int solve(int n) {
//   vector<long long int> dp(n+1, 0) ;
//   dp[1] = 0 ;
//   dp[2] = 1 ; 

//   for(int i=3; i<=n; i++) {
//     long long int first = dp[i-1] % MOD ;
//     long long int second = dp[i-2] % MOD ;
//     long long int sum = (first + second) % MOD ;

//     long long int ans = ( (i-1)*sum) %MOD ;
//     dp[i] = ans ;
//   }

//     return dp[n] ;
// }

// long long int countDerangements(int n){
//    return solve(n) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)   


//🔴 approach: space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007

// long long int solve(int n) {

//   long long int prev2 = 0 ;
//   long long int prev1 = 1 ;

//   for(int i=3; i<=n; i++) {
//     long long int first = prev1 % MOD ;
//     long long int second = prev2 % MOD ;
//     long long int sum = (first + second) % MOD ;

//     long long int ans = ( (i-1)*sum) %MOD ;
//     prev2 = prev1 ;
//     prev1 = ans ;
//   }
  
//     return prev1  ;
// }

// long long int countDerangements(int n){
//    return solve(n) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(1) 


//                  🔴🔴 Painting Fence Algorithm:

//🔴🔴🔴            //❓Question: Ninja and the fence

// Ninja has given a fence, and he gave a task to paint this fence. The fence has 'N' posts, and Ninja has 'K' colors. Ninja wants to paint the
// fence so that not more than two adjacent posts have the same color.
//  Ninja wonders how many ways are there to do the above task, so he asked for your help.
// Your task is to find the number of ways Ninja can paint the fence. Print the answer modulo 10^9 + 7.
//  Example:
//    Input: 'N' - 3, "K" = 2
//    Output: 6
//    Say we have the colors with the numbers 1
// Say we have the colors with the numbers 1 and 0. We can paint the fence with 3 posts with the following different
// combinations.
// 110
// 001
// 101
// 100
// 010
// 011

// Constraints :
//    1 <= 'T' <= 10
//    1 <= 'N' <= 10^5
//    1 <= "K" <= 10^5
//    Time Limit: 1 sec

// Sample Output 1 :
// 1
// 6
// Explanation Of Sample Input 1 :
// For the first test case, there is only one way to paint the fence. 

// For the second test case, We can paint the fence with 3 posts with the following different combinations.
// 110
// 001
// 101
// 100
// 010
// 011

// Sample Input 2 :
// 2
// 2 4
// 4 2
// Sample Output 2 :
// 16
// 10


//🔴Approach: Recursion
//🔸Timelimit exceeded
// #include<iostream>
// using namespace std;

// #define MOD 1000000007

// int add(int a, int b) {
//     return (a % MOD + b % MOD) % MOD ;
// }

// int multi(int a, int b) {
//     return (( a % MOD ) * (b % MOD )) % MOD ;
// }

// int solve(int n, int k) {
//     //base case
//     if( n==1)
//     return k ;

//     if( n==2)
//     return add(k, multi(k, k-1)) ;

//     int ans = add(multi(solve(n-2, k), k-1), multi(solve(n-1, k), k-1)) ;
//     return ans ;
// }

// int numberOfWays(int n, int k) {
//    return solve(n, k) ;
// }
//🔸time complexity: exponential
//🔸space complexity: exponential



//🔴Approach: Recursion + memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007
// #define LL long long

// int add(int a, int b) {
//     return (a % MOD + b % MOD) % MOD ;
// }

// int multi(int a, int b) {
//     return (( a % MOD ) * 1LL * (b % MOD )) % MOD ;
// }

// int solve(int n, int k, vector<int> &dp) {
//     //base case
//     if( n==1)
//     return k ;

//     if( n==2)
//     return add(k, multi(k, k-1)) ;
     
//     //step3:
//     if(dp[n] != -1){
//         return dp[n] ;
//     }

//     //step2:
//     dp[n]  = add(multi(solve(n-2, k, dp), k-1), multi(solve(n-1, k, dp), k-1)) ;
//     return dp[n] ;
// }

// int numberOfWays(int n, int k) {
//     //step1:
//     vector<int> dp(n+1, -1) ;
//    return solve(n, k, dp);
// }
//🔸time complexity: O(n)
//🔸space complexity: O(n)+O(N)


//🔴Approach: Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007
// #define LL long long

// int add(int a, int b) {
//     return (a % MOD + b % MOD) % MOD ;
// }

// int multi(int a, int b) {
//     return (( a % MOD ) * 1LL * (b % MOD )) % MOD ;
// }

// int solve(int n, int k) {
//     vector<int> dp(n+1, 0) ;
//     dp[1] = k ;
//     dp[2] = add(k, multi(k, k-1)) ;

//     for(int i=3 ; i<=n; i++) {
//         dp[i] = add(multi(dp[i-2], k-1), multi(dp[i-1], k-1)) ;
//     }

//     return dp[n] ;
// }

// int numberOfWays(int n, int k) {
//     return solve(n ,k) ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


// 🔴Approach: space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// #define MOD 1000000007
// #define LL long long

// int add(int a, int b) {
//     return (a % MOD + b % MOD) % MOD ;
// }

// int multi(int a, int b) {
//     return (( a % MOD ) * 1LL * (b % MOD )) % MOD ;
// }

// int solve(int n, int k) {
//     int prev2  = k ;
//     int prev1  = add(k, multi(k, k-1)) ;

//     for(int i=3 ; i<=n; i++) {
//         int ans  = add(multi(prev2, k-1), multi(prev1, k-1)) ;
//         prev2 = prev1 ;
//         prev1 = ans ;
//     }

//     return prev1  ;
// }

// int numberOfWays(int n, int k) {
//     return solve(n ,k) ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//     🔴🔴🔴          2-D  Dynamic Programming              🔴🔴🔴 


// .🔴🔴                //❓Question: 0 1 Knapsack

// A thief is robbing a store and can carry a maximal weight of W into his knapsack. 
// There are N items and the ith item weighs wi and is of  value vi. 
// Considering the constraints of the maximum weight that a knapsack can carry, 
// you have to find and return the maximum value that a thief can generate by stealing items.

// Constraints:
//    1 < T <= 10
//    1 < N <= 10^2
//    1<= wi <= 50
//    1 <= vi <= 10^2
//    1 <= W <= 10^3
//    Time Limit: 1 second

// Sample Input:
// 1 
// 4
// 1 2 4 5
// 5 4 8 6
// 5
// Sample Output:
// 13

//🔸explanation:
// 4 items are present 
// knapsack can carrry weight ==> 5 
// every item has weight and value 

// item   = 1  2  3  4 
// weight = 1  2  4  5  
// value  = 5  4  8  6

// case1:  {5} => value [6]                   // knapsack full value recived 6
// case2:  {1, 4} => value 8 + 5 => [13]      // knapsack full value recived 13
// case3:  {1, 2} => value 5 + 4 => [9]       // knapsack is not full but no other 
//                                            // weight can be added further so value received 9

// maximum value can be generated is ==> [13]   for weight {1, 4}

//🔴Approach: Recursion
//🔸time limit exceeded
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &weight, vector<int> &value, int index, int capacity){
//     //base case
//     //if only 1 item to steal,then just compare its weight with the knapsack capacity
//     if(index == 0) {
//         if( weight[0] <= capacity) {
//             return value[0] ;
//         }
//         else{
//             return 0 ;
//         }
//     }
    
//     int include =  0 ;
//     if(weight[index] <= capacity) {
//         include = value[index] + solve(weight, value, index-1, capacity - weight[index]) ;
//     }

//     int exclude = 0 + solve(weight, value, index - 1, capacity ) ;

//     int ans = max(exclude, include) ;

//     return ans ;
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//        return solve(weight, value, n-1, maxWeight ) ;
// }
//🔸time complexity:  exponential
//🔸space complexity:  exponential


//🔴Approach: Recursion + memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &weight, vector<int> &value, int index, int capacity ,  vector<vector<int>> &dp){
//     //base case
//     //if only 1 item to steal,then just compare its weight with the knapsack capacity
//     if(index == 0) {
//         if( weight[0] <= capacity) {
//             return value[0] ;
//         }
//         else{
//             return 0 ;
//         }
//     }
    
//     //step3:
//     if(dp[index][capacity] != -1) {
//         return dp[index][capacity] ;
//     }
    
//     int include =  0 ;
//     if(weight[index] <= capacity) {
//         include = value[index] + solve(weight, value, index-1, capacity - weight[index], dp) ;
//     }

//     int exclude = 0 + solve(weight, value, index - 1, capacity, dp ) ;

//     dp[index][capacity] = max(exclude, include) ;
//     return dp[index][capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//     // changes occuring in two states(index is changing , and capacity is changing in solve function) 
//     // therfore using 2d DP
//     vector<vector<int>> dp(n, vector<int>(maxWeight+1, -1))  ;
//     return solve(weight, value, n-1, maxWeight, dp) ;

// }
//🔸time complexity: O(N * maxweight)
//🔸space complexity: O(N * maxWeight)



//🔴Approach: Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &weight, vector<int> &value, int n, int capacity ){
//    //step1: initialise dp
//    vector<vector<int>> dp(n, vector<int>(capacity+1, 0)) ;

//    //step2: analyse base case
//    for(int w = weight[0]; w <= capacity; w++) {
//      if(weight[0] <= capacity) {
//         dp[0][w] = value[0] ;
//      }
//      else{
//         dp[0][w] = 0;
//      }
//    }

//    //step3: take care remaining recursive call
//    for(int index = 1; index < n; index++) {
//        for(int w = 0; w <= capacity; w++) {
//            int include = 0;

//            if(weight[index] <= w) {
//              include = value[index] + dp[index-1][w-weight[index]] ;
//            }
         
//          int exclude = 0 + dp[index-1][w]; 

//          dp[index][w] = max(exclude, include) ;
//        }
//    }
  
//   return dp[n-1][capacity] ;
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {

//     return solve(weight, value, n, maxWeight) ;
// }
//🔸time complexity: O(N * maxWeight)
//🔸space complexity: O(2 * maxWeight)


//🔴Approach: Space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &weight, vector<int> &value, int n, int capacity ){
//    //step1: 
//    vector<int> prev(capacity+1, 0)    ;
//    vector<int> curr(capacity+1, 0)    ;

//    //step2: analyse base case
//    for(int w = weight[0]; w <= capacity; w++) {
//      if(weight[0] <= capacity) {
//         prev[w] = value[0] ;
//      }
//      else{
//         prev[w] = 0;
//      }
//    }

//    //step3: take care remaining recursive call
//    for(int index = 1; index < n; index++) {
//        for(int w = 0; w <= capacity; w++) {
//            int include = 0;

//            if(weight[index] <= w) {
//              include = value[index] + prev[w-weight[index]] ;
//            }
         
//          int exclude = 0 + prev[w]; 

//         curr[w] = max(exclude, include) ;
//        }
//        prev = curr ;
//    }
  
//   return prev[capacity] ;
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {

//     return solve(weight, value, n, maxWeight) ;
// }
//🔸time complexity: O(N * maxWeight)
//🔸space complexity: O(N)


//🔴Approach: More optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &weight, vector<int> &value, int n, int capacity ){
//    //step1: 
//    vector<int> curr(capacity+1, 0)    ;

//    //step2: analyse base case
//    for(int w = weight[0]; w <= capacity; w++) {
//      if(weight[0] <= capacity) {
//         curr[w] = value[0] ;
//      }
//      else{
//         curr[w] = 0;
//      }
//    }

//    //step3: take care remaining recursive call
//    for(int index = 1; index < n; index++) {
//        for(int w = capacity; w >=0; w--) {
//            int include = 0;

//            if(weight[index] <= w) {
//              include = value[index] + curr[w-weight[index]] ;
//            }
         
//          int exclude = 0 + curr[w]; 

//         curr[w] = max(exclude, include) ;
//        }
//    }
  
//   return curr[capacity] ;
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {

//     return solve(weight, value, n, maxWeight) ;
// }
//🔸time complexity: O(N * maxWeight)
//🔸space complexity: O(N)



// 🔴🔴                //?Question: Combination Sum IV

// You are given an array of distinct integers and you have to tell how many different ways of selecting the elements from the array are
//  there such that the sum of chosen elements is equal to the target number tar.
//  Note: Two ways are considered the same if for every index the contents of both the ways are equal example way1=[1.2,3,1] and way2=
//  [1,2,3,1] both way1 and way 2 are the same.
//  But if way1 =[1,2,3,4] and way2= [4,3,2,1] then both ways are different.
//  Input Is Given Such That The Answer Will Fit In A 32-Bit Integer.
//  For Example:

// If N 1 = 3 and tar and array elements are [1,2,5] then the number of possible ways of making sum 5 are:
//  (1,1,1,1,1)
//  (1,1,1,2)
//  (1,2,1,1)
//  (2,1,1,1)
//  (1,1,2,1)
//  (2,2,1)
//  (1,2,2)
//  (2,1,2)
//  (5)
// Hence the output will be 9.

// Constraints:
//    1 <= N <= 200
//    1 <= nums[i] <= 1000
//    All the elements will be unique
//    1 <= tar <= 1000
//    Time limit: 1 sec

// Sample Input 1 :
// 2
// 3 5
// 1 2 5
// 2 3
// 1 2
// Sample Output 1 :
// 9
// 3
// Explanation For Sample Output 1:
// For the first test case, the number of possible ways will be
// (1,1,1,1,1)
// (1,1,1,2)
// (1,2,1,1)
// (2,1,1,1)
// (1,1,2,1)
// (2,2,1)
// (1,2,2)
// (2,1,2)
// (5)

// For the second test case, the number of ways will be
// (1,1,1)
// (1,2)
// (2,1)
// Here you can see we have considered (1,2) and (2,1) in 2 different ways.
// Sample Input 2 :
// 2
// 3 4
// 12 1 3
// 2 41
// 2 34
// Sample Output 2 :
// 3
// 0

//🔴Approach: Recursion
//🔸 Time limit exceeded
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<int> &num, int tar){
//     //base case
//     if(tar < 0){
//         return 0;
//     }

//     if(tar == 0){
//         return 1 ;
//     }

//     int ans = 0 ;
//     for(int i=0; i<=num.size(); i++){
//        ans += solve(num, tar - num[i]) ;
//     }

//     return ans ;
// }

// int findWays(vector<int> &num, int tar) {
//     return solve(num ,tar) ;
// }
//🔸Time complexity: exponential
//🔸space complexity: exponential


//🔴Approach: Recursion + memoization
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<int> &num, int tar, vector<int> &dp){
//     //base case
//     if(tar < 0){
//         return 0;
//     }

//     if(tar == 0){
//         return 1 ;
//     }

//    //step2: 
//    if(dp[tar] != -1){
//       return dp[tar] ;
//    }
  
//   //step3:
//     int ans = 0 ;
//     for(int i=0; i<=num.size(); i++){
//        ans += solve(num, tar - num[i], dp) ;
//     }
    
//     dp[tar] = ans ;
//     return dp[tar] ;
// }

// int findWays(vector<int> &num, int tar) {
//     //create 1d dp (bcoz in above solve function only one value is changing on every recursive call ( tar - num[i]))
//     vector<int> dp(tar+1, 0) ;

//     return solve(num ,tar, dp) ;
// }
//🔸Time complexity: O(Target)
//🔸space complexity: O(n)


//🔴Approach: Tabulation
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<int> &num, int tar){
//     vector<int> dp(tar+1, 0) ;
//     dp[0] = 1;

//    // traversing from target 1 to tar
//     for(int i=1; i<=tar; i++){

//        // traversing on num vector
//         for(int j=0; j<num.size(); j++){

//             if( i - num[j] >= 0) {
//             dp[i] += dp[i - num[j]] ;
//            }
//         }
//     }
//  return dp[tar] ;
// }

// int findWays(vector<int> &num, int tar) {
//     return solve(num ,tar) ;
// }
//🔸Time complexity: O( N * M)             // (tar * num)
//🔸space complexity: O(n) ;




//🔴🔴🔴           //❓Question: Get Minimum Square

// Given a number N. Find the minimum number of squares of any number that sums to N. 
// For Example: If N = 100 , N can be expressed as (10*10) and also as (5*5 + 5*5 + 5*5 + 5*5)
//  but the output will be 1 as minimum number of square is 1 , i.e (10*10).
 
//  Constraints:
// 1 <= N <= 10000

// Example 1:
// Input: N = 100
// Output: 1
// Explanation: 10 * 10 = 100


// Example 2:
// Input: N = 6
// Output: 3
// Explanation = 1 * 1 + 1 * 1 + 2 * 2 = 6

//🔴approach:  Recursion
//🔸 Time limit exceeded
// #include<iostream>
// #include<vector>
// using namespace std;

// class solution{
//     public:
    
//     int solve(int n){
//         //base case
//         if( n == 0){
//             return 0;
//         }
        
//         int ans = n ;
//         for(int i=1; i*i <= n; i++) {
//             int temp = i*i ;
//             ans = min(ans, 1+solve(n-temp)) ;
//         }
//         return ans;
//     }

//     int minSquares(int n) {
//         return solve(n) ;
//     }
// };
//🔸time complexity: exponential
//🔸space complexity: exponential



//🔴approach:  Recursion + Memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// class solution{
//     public:
    
//     int solve(int n, vector<int> &dp){
//         //base case
//         if( n == 0){
//             return 0;
//         }

//         //step2:
//         if(dp[n] != -1){
//             return dp[n];
//         }

//         //step3:
//         int ans = n ;
//         for(int i=1; i*i <= n; i++) {
//             int temp = i*i ;
//             ans = min(ans, 1+solve(n-temp, dp)) ;
//         }
//         dp[n] = ans ;
//         return dp[n];
//     }

//     int minSquares(int n) {
//         vector<int> dp(n+1, -1) ;
//         return solve(n, dp) ;
//     }
// };
//🔸time complexity: O(N)
//🔸space complexity: O(N)


// //🔴approach:  Tabulation
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// class solution{
//     public:
    
//     int solve(int n){
//        vector<int> dp(n+1, INT_MAX) ;
//        dp[0] = 0 ;

//        for(int i=1; i<=n; i++){
//          for(int j=1; j*j<=n; j++){
//             int temp = j*j;
//             if(i-temp >= 0){
//             dp[i] = min(dp[i], 1 + dp[i-temp]) ;
//             }
//          }
//        }
//         return dp[n];
//     }

//     int minSquares(int n) {
//         return solve(n) ;
//     }
// };
//🔸time complexity: O(n^2)
//🔸space complexity: O(N)




//🔴🔴🔴             //❓Question: Minimum Cost for Tickets(leetcode)  / Ninjas's Trip(coding ninjas)

// Ninja Is Willing To Take Some Time Off From His Training And Planning A Year-Long Tour.
// You Are Given A DAYS Array Consisting Of 'N' Days When Ninjas Will Be Traveling During The Year. Each Day Is An Integer
//  Between 1 To 365 (Both Inclusive).
// Train Tickets Are Sold In Three Different Ways:
//    A 1-day pass is sold for 'COST'[[]] coins,
//    A 7-day pass is sold for 'COST'[1] coins, and
//    A 30-day pass is sold for 'COST'[2] coins.
//    The passes allow for many days of consecutive travel.

// Your Task Is To Help The Ninja To Find The Minimum Number Of Coins Required To Complete His Tour.
//  For Example,
//    If Ninja gets a 7-day pass on day 2, then he can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.

// Constraints:
//    1 <= T <= 10
//    1 <= N <= 365
//    1 <= DAYS[i] <= 365
//    Time Limit: 1 sec


// Sample Input 1:
// 2
// 2 
// 2 5
// 1 4 25    
// 7
// 1 3 4 5 7 8 10
// 2 7 20
// Sample Output 1:
// 2
// 11
// Explanation For Sample Input 1:
// For the first test case, 
// On Day 2, Ninja will buy a 1-day pass with 1 coin.
// On Day 5, Ninja will buy a 1-day pass with 1 coin.
// In total, Ninja will spend 2 coins. Hence the answer is 2.

// For the second test case,
// On Day 1, Ninja will buy a 1-day pass with 2 coins.
// On Day 3, Ninja will buy a 7-day pass with 7 coins valid for days 3,4,5...9.
// On Day 10, Ninja will buy a 1-day pass with 2 coins.
// In total, Ninja will spend 11 coins. Hence the answer is 11.
// Sample Input 2:
// 2
// 6
// 1 4 6 7 8 20
// 2 7 15
// 12
// 1 2 3 4 5 6 7 8 9 10 30 31
// 2 7 15 
// Sample Output 2:
// 11
// 17


// //🔴Approach : Recursion
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int n, vector<int> &days, vector<int> &cost, int index) {
//     //base case
//     if(index >= n) {
//         return 0 ;
//     }

//     // 1 day pass :
//     int option1 = cost[0] + solve(n, days, cost, index+1) ;

//     int i ;
//     // 7 day pass :
//     for(i = index; i<n && days[i] < days[index] + 7; i++) ;
        
//         int option2 = cost[1] + solve(n, days, cost, i) ;
    

//    // 30 day pass :
//     for(i = index; i<n && days[i] < days[index] + 30; i++) ;
        
//         int option3 = cost[2] + solve(n, days, cost, i) ;


//     return min(option1, min(option2, option3));

// }

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//     return solve(n, days, cost, 0) ;
// }
// //🔸time complexity: exponential
// //🔸space complexity: exponential


//🔴Approach : Recursion + Memoisation (Top-Down)
// #include<iostream>
// #include<vector>
// using namespace std;


// int solve(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp) {
//     //base case
//     if(index >= n) {
//         return 0 ;
//     }

//     //step2: 
//     if(dp[index] != -1){
//         return dp[index] ;
//     }

//     // 1 day pass :
//     int option1 = cost[0] + solve(n, days, cost, index+1, dp) ;

//     int i ;
//     // 7 day pass :
//     for(i = index; i<n && days[i] < days[index] + 7; i++) ;
        
//         int option2 = cost[1] + solve(n, days, cost, i, dp) ;
    

//    // 30 day pass :
//     for(i = index; i<n && days[i] < days[index] + 30; i++) ;
        
//         int option3 = cost[2] + solve(n, days, cost, i, dp) ;


//     dp[index] = min(option1, min(option2, option3));
//     return dp[index] ;
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//     vector<int> dp(n+1, -1) ;
//     return solve(n, days, cost, 0, dp) ;
// }
//🔸time complexity: O(1)            // O(index) == index = O(365) ==> O(1)
//🔸space complexity: O(n)



//🔴Approach : Tabulation (Bottom up)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(int n, vector<int> &days, vector<int> &cost) {
//     vector<int> dp(n+1, INT_MAX) ;
//     dp[n] = 0;

//     for(int k = n-1; k >= 0; k--) {

//     // 1 day pass :
//     int option1 = cost[0] + dp[k + 1] ;

//     int i ;
//     // 7 day pass :
//     for(i = k; i<n && days[i] < days[k] + 7; i++) ;
        
//     int option2 = cost[1] + dp[i] ;
    

//    // 30 day pass :
//     for(i = k; i<n && days[i] < days[k] + 30; i++) ;
        
//     int option3 = cost[2] + dp[i] ;

//     dp[k] = min(option1, min(option2, option3));

//     }

//   return dp[0] ;
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//     return solve(n, days, cost) ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)




//🔴Approach : Space Optimisation
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//     int ans  = 0 ;
    
//     queue<pair<int,int>> month ;
//     queue<pair<int,int>> week ;

//     for(int day:days) {

//         //step1: remove expired days
//         while(!month.empty() && month.front().first + 30 <= day) 
//           month.pop() ;

//         while(!week.empty() && week.front().first + 7 <= day) 
//           week.pop() ;

//         //step2: add cost for current day 
//         week.push(make_pair(day, ans+cost[1])) ;
//         month.push(make_pair(day, ans+cost[2])) ;

//         //step3: answer update
//         ans = min(ans+cost[0], min(week.front().second, month.front().second)) ;
//     }
//         return ans ;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                   //❓Question: Largest square formed in a matrix 

// Given a binary matrix mat of size n * m, find out the maximum size square sub-matrix with all 1s.

// Example 1:
// Input: n = 2, m = 2
// mat = {{1, 1}, 
//        {1, 1}}
// Output: 2
// Explaination: The maximum size of the square
// sub-matrix is 2. The matrix itself is the 
// maximum sized sub-matrix in this case.

// Example 2:
// Input: n = 2, m = 2
// mat = {{0, 0}, 
//        {0, 0}}
// Output: 0
// Explaination: There is no 1 in the matrix.


//🔴approach 1: Recursion
//🔸Time limit exceeded
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<vector<int>> &mat, int i, int j, int &maxi) {
//     //base case (if row or col are out of bound)
//     if( i >= mat.size() || j >= mat[0].size()) {
//         return 0 ;
//     }
    
//     int right = solve(mat, i, j+1, maxi) ;
//     int diagonal = solve(mat, i+1, j+1, maxi) ;
//     int down = solve(mat, i+1, j, maxi) ;

//     if( mat[i][j] == 1) {
//         int ans = 1 + min(right, min(diagonal, down)); 
//         maxi = max(maxi, ans) ;
//         return ans;
//     }
//     else{
//         return 0 ;
//     }

// }

// int maxSquare(int n, int m, vector<vector<int>> mat) {
//     int maxi = 0;
//     solve(mat, 0, 0, maxi) ;
//     return maxi ;
// }
//🔸Time complexity: exponential
//🔸space complexity: exponential



//🔴approach : Recursion + Memoization
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<vector<int>> &mat, int i, int j,vector<vector<int>> &dp,  int &maxi) {
//     //base case (if row or col are out of bound)
//     if( i >= mat.size() || j >= mat[0].size()) {
//         return 0 ;
//     }
    
//     //step2:
//     if(dp[i][j] != -1) {
//         return dp[i][j] ;
//     }

//     //step3: 
//     int right = solve(mat, i, j+1, dp, maxi) ;
//     int diagonal = solve(mat, i+1, j+1, dp, maxi) ;
//     int down = solve(mat, i+1, j, dp, maxi) ;

//     if( mat[i][j] == 1) {
//         dp[i][j] = 1 + min(right, min(diagonal, down)); 
//         maxi = max(maxi, dp[i][j]) ;
//         return dp[i][j];
//     }
//     else{
//         return dp[i][j] = 0;
//     }

// }

// int maxSquare(int n, int m, vector<vector<int>> mat) {
//     int maxi = 0;
//     vector<vector<int>> dp(n, vector<int>(m, -1)) ;         // because there are 2 things which are changing on every recursive call (i, j) therefore we used 2d dp
//     solve(mat, 0, 0, dp, maxi) ;
//     return maxi ;
// }
//🔸Time complexity: O(m*n)
//🔸space complexity: O(M*N)


//🔴approach : Tabulation
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<vector<int>> &mat, int &maxi) {
//     int row = mat.size();
//     int col = mat[0].size() ;
//     vector<vector<int>> dp(row+1, vector<int>(col+1, 0)) ;

//     for(int i=row-1; i>=0; i--) {
//         for(int j=col-1; j>=0; j--){
            
//             int right = dp[i][j+1];
//             int diagonal = dp[i+1][j+1] ;
//             int down = dp[i+1][j] ;
           
//             if(mat[i][j] == 1) {
//                 dp[i][j] = 1 + min(right, min(diagonal, down)) ;
//                 maxi = max(maxi, dp[i][j]) ;
//             }
//             else{
//                 dp[i][j] = 0 ;
//             }
//         }
//     }

//     return dp[0][0] ;
// }

// int maxSquare(int n, int m, vector<vector<int>> mat) {
//     int maxi = 0 ;
//     solve(mat, maxi) ;
//     return maxi ;
// }
//🔸Time complexity: O(m*n)
//🔸space complexity: O(m*n)



//🔴approach : Space Optimisation
// #include<iostream>
// #include<vector>
// using namespace std ;

// int solve(vector<vector<int>> &mat, int &maxi) {

//     int row = mat.size();
//     int col = mat[0].size() ;

//     vector<int> curr(col+1, 0) ;
//     vector<int> next(col+1, 0) ;


//     for(int i=row-1; i>=0; i--) {
//         for(int j=col-1; j>=0; j--){
            
//             int right = curr[j+1];
//             int diagonal = next[j+1] ;
//             int down = next[j] ;
           
//             if(mat[i][j] == 1) {
//                 curr[j] = 1 + min(right, min(diagonal, down)) ;
//                 maxi = max(maxi, curr[j]) ;
//             }
//             else{
//                curr[j] = 0 ;
//             }
//         }

//         next = curr ;
//     }

//     return next[0] ;
// }

// int maxSquare(int n, int m, vector<vector<int>> mat) {
//     int maxi = 0 ;
//     solve(mat, maxi) ;
//     return maxi ;
// }
//🔸Time complexity: O(m*n)
//🔸space complexity: O(m)


//                  //❓ Question: 1039. Minimum Score Triangulation of Polygon

// You have a convex n-sided polygon where each vertex has an integer value. 
// You are given an integer array values where values[i] is the value of the ith vertex (i.e., clockwise order).
// You will triangulate the polygon into n - 2 triangles.
// For each triangle, the value of that triangle is the product of the values of its vertices, 
// and the total score of the triangulation is the sum of these values over all n - 2 triangles in the triangulation.
// Return the smallest possible total score that you can achieve with some triangulation of the polygon.

// Example 1:
//           2
//          / \ 
//         /   \  
//        /     \  
//     1 /_______\ 3

// Input: values = [1,2,3]
// Output: 6
// Explanation: The polygon is already triangulated, and the score of the only triangle is 6.

// Example 2:
//        3 __________ 7             3  __________ 7
//         |        / |                | \        |    
//         |      /   |                |   \      |    
//         |    /     |                |     \    |    
//         |  /       |                |       \  |    
//       5 |/_________| 4            5 |_________\| 4
//


// Input: values = [3,7,4,5]
// Output: 144
// Explanation: There are two triangulations, with possible scores: 3*7*5 + 4*5*7 = 245, or 3*4*5 + 3*4*7 = 144.
// The minimum score is 144.

//🔴approach : Recursion:
//🔸time limit exceeded
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std; 

// int solve(vector<int> &v, int i, int j) {
//     //base case
//     if( i+1 == j){         //means if only 2 points then return 0
//         return 0 ;
//     }

//     int ans = INT_MAX;
//     for(int k = i+1; k<j; k++) {
//         ans = min(ans, (v[i]*v[j]*v[k] + solve(v, i, j) + solve(v, k, j))) ;
//     }

//     return ans ;
// }

// int minScoreTriangulation(vector<int> &values)
// {
//     int n = values.size() ;
//     return solve(values, 0, n-1) ;
// }
//🔸time complexity: exponential 
//🔸space complexity: exponential 


//🔴approach : Recursion + memoization (top-bottom)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std; 

// int solve(vector<int> &v, int i, int j, vector<vector<int>> &dp) {
//     //base case
//     if( i+1 == j){         //means if only 2 points cannot create a triangle
//         return 0 ;
//     }

//     if(dp[i][j] != -1){
//         return dp[i][j] ;
//     }

//     int ans = INT_MAX;
//     for(int k = i+1; k<j; k++) {
//       ans = min(ans, (v[i]*v[j]*v[k] + solve(v, i, k, dp) + solve(v, k, j, dp))) ;
//     }
    
//     dp[i][j] = ans;
//     return dp[i][j] ;
// }

// int minScoreTriangulation(vector<int> &values) {
//     int n = values.size() ;
//    vector<vector<int>> dp(n, vector<int> (n, -1)) ;
//     return solve(values, 0, n-1, dp) ;
// }
//🔸time complexity: O(n^3)
//🔸space complexity: O(n^2)


//🔴approach : Tabulation (Bottom-up) 
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std; 

// int solve(vector<int> &v) {
//     int n = v.size() ;
//     vector<vector<int>> dp(n, vector<int> (n, 0)) ;

//     for(int i= n-1; i>=0; i--) {
//         for(int j=i+2; j<n; j++){

//         int ans = INT_MAX;
//         for(int k = i+1; k<j; k++) {
//             ans = min(ans, (v[i]*v[j]*v[k] + dp[i][k] +  dp[k][j])) ;
//         }

//         dp[i][j] = ans ;
//         }
//     }
//         return dp[0][n-1] ;
// }

// int minScoreTriangulation(vector<int> &values)
// {
//     return solve(values) ;
// }
//🔸time complexity: O(n^3)
//🔸space complexity: O(n^2)



//                      //🔴🔴Catalan Numbers:

// Important topic to know how many traingle can be form by given polygon 
// for above question

// Catalan numbers are defined as a mathematical sequence that consists of positive integers, 
// which can be used to find the number of possibilities of various combinations. 
// The nth term in the sequence denoted Cn, 
//is found in the following formula:  (2n)! / ((n+1)!n!)             

// The first few Catalan numbers for n = 0, 1, 2, 3, … are : 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …  
//ex:
//          / \ 
//         /   \          ==> 1 triangle can be formed     
//        /     \  
//       /_______\ 

//          __________         __________ 
//         |        / |       | \        |    
//         |      /   |       |   \      |    
//         |    /     |       |     \    |   ==> in both given polygon 2 triangles can be formed    
//         |  /       |       |       \  |    
//         |/_________|       |_________\| 
//

//             / \ 
//            /   \ 
//           /     \          
//          |       |          ==> 5 triangles can be formed
//          |       |
//          |_______|


//             / \ 
//            /   \ 
//           /     \          
//          |       |          ==> 14 triangles can be formed
//          |       |
//          |       |
//           \     /
//            \   /
//             \ /

// Catalan numbers for n = 0, 1, 2, 3, 4 , 5   ==> : 1, 1, 2, 5, 14

//🔴 Catalan numbers occur in many interesting counting problems like the following.
//🔸Count the number of expressions containing n pairs of parentheses that are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).
//🔸Count the number of possible Binary Search Trees with n keys (See this)
//🔸Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.
//🔸Given a number n, return the number of ways you can draw n chords in a circle with 2 x n points such that no 2 chords intersect.

//🔴 Follow the steps below to implement the above recursive formula
//🔸Base condition for the recursive approach, when n <= 1, return 1
//🔸Iterate from i = 0 to i < n
//🔸Make a recursive call catalan(i) and catalan(n – i – 1) and keep adding the product of both into res.
//🔸Return the res

//🔴Implementation :
// #include <iostream>
// using namespace std;
 
// // A recursive function to find nth catalan number
// unsigned long int catalan(unsigned int n)
// {
//     // Base case
//     if (n <= 1)
//         return 1;
 
//     // catalan(n) is sum of
//     // catalan(i)*catalan(n-i-1)
//     unsigned long int res = 0;
//     for (int i = 0; i < n; i++)
//         res += catalan(i) * catalan(n - i - 1);
 
//     return res;
// }
 
// // Driver code
// int main()
// {
//     for (int i = 0; i < 10; i++)
//         cout << catalan(i) << " ";
//     return 0;
// }

//🔸Output :
// 1 1 2 5 14 42 132 429 1430 4862 



// 126 / 149