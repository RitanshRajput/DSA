
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



//🔴🔴                //❓Question: 1824. Minimum Sideway Jumps  (HARD)

// There is a 3 lane road of length n that consists of n + 1 points labeled from 0 to n. 
// A frog starts at point 0 in the second lane and wants to jump to point n. 
// However, there could be obstacles along the way.

// You are given an array obstacles of length n + 1 where each obstacles[i] (ranging from 0 to 3)
// describes an obstacle on the lane obstacles[i] at point i. 
// If obstacles[i] == 0, there are no obstacles at point i. 
// There will be at most one obstacle in the 3 lanes at each point.

// For example, if obstacles[2] == 1, then there is an obstacle on lane 1 at point 2.
// The frog can only travel from point i to point i + 1 on the same lane 
// if there is not an obstacle on the lane at point i + 1. To avoid obstacles, 
// the frog can also perform a side jump to jump to another lane (even if they are not adjacent)
//  at the same point if there is no obstacle on the new lane.

// For example, the frog can jump from lane 3 at point 3 to lane 1 at point 3.
// Return the minimum number of side jumps the frog needs to reach any lane 
// at point n starting from lane 2 at point 0.

// Note: There will be no obstacles on points 0 and n.

//🔸example 1: 
// lane1  ___________________________________
//           [stone]            ^______>_____>             
// lane2  ----------------------|------------
//         [frog] ----->|    [stone]         
// lane3  --------------|       |------------
//                      |______>|    [stone]
//        _____________________________________
// 0              1       2      3     4

// Input: obstacles = [0,1,2,3,0]
// Output: 2 
// Explanation: The optimal solution is shown by the arrows above. 
// There are 2 side jumps (red arrows).
// Note that the frog can jump over obstacles only when making side jumps
//  (as shown at point 2).

//🔸exmaple 2:
// lane1  ______________________________________________
//                [stone]   [stone]
// lane2  ----------------------------------------------
//         [frog] ------>------->------>------------->
// lane3  ----------------------------------------------
//                                   [stone]  [stone]
//       ________________________________________________
// 0          1          2         3       4      5

// Input: obstacles = [0,1,1,3,3,0]
// Output: 0
// Explanation: There are no obstacles on lane 2. No side jumps are required

// Constraints:
// obstacles.length == n + 1
// 1 <= n <= 5 * 105
// 0 <= obstacles[i] <= 3
// obstacles[0] == obstacles[n] == 0

//🔴appraoch : Recursion
// TIME lIMIT EXCEEDED 
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &obstacles, int currlane, int currpos) {
//     int n = obstacles.size() - 1;
//     //base case
//     if(currpos == n) {
//         return 0 ;
//     }

//     // if no obstacles in same lane (2 lane) where frog is starting from, go forwward
//     if(obstacles[currpos + 1] != currlane) {
//         return solve(obstacles, currlane, currpos+1) ;
//     }
//     else{
//         // else go sideways 
//         int ans = INT_MAX;                 // for case: if cannot go further but, can go both sideways, lane1 and lane3 as well 
//         for(int i=1; i<=3; i++) {          //   then to decide which side to go we will go to the minimum side, ans = min
//             if(currlane != i && obstacles[currpos] != i)
//             ans = min(ans, 1+solve(obstacles, i, currpos)) ;
//         }
//         return ans;
//     }
// }

// int minSidejumps(vector<int> &obstacles) {
//     return solve(obstacles, 2, 0) ;
// }
//🔸time complexity: exponential
//🔸space complexity: exponential


//🔴appraoch : Recursion +Memoization
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &obstacles, int currlane, int currpos, vector<vector<int>> &dp) {
//     int n = obstacles.size() - 1;
//     //base case
//     if(currpos == n) {
//         return 0 ;
//     }

//     if(dp[currlane][currpos] != -1){
//         return dp[currlane][currpos] ;
//     }

//     if(obstacles[currpos + 1] != currlane) {
//         return solve(obstacles, currlane, currpos+1, dp) ;
//     }
//     else{
//         int ans = INT_MAX;                 
//         for(int i=1; i<=3; i++) {          
//             if(currlane != i && obstacles[currpos] != i)
//             ans = min(ans, 1+solve(obstacles, i, currpos, dp)) ;
//         }
//         dp[currlane][currpos] = ans;
//         return dp[currlane][currpos];
//     }
// }

// int minSidejumps(vector<int> &obstacles) {
//     int n = obstacles.size();
//     vector<vector<int>> dp(4, vector<int>(n, -1)) ;

//     return solve(obstacles, 2, 0, dp) ;
// }
//🔸time complexity: O(n)
//🔸space complexity: O(4 * n)


//🔴appraoch : Tabulation
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &obstacles) {
//     int n = obstacles.size() -1 ;
//     vector<vector<int>> dp(4, vector<int>(obstacles.size(), 1e9)) ;  // to tackle integer overflow error
    
//     dp[0][n] = 0;
//     dp[1][n] = 0;
//     dp[2][n] = 0;
//     dp[3][n] = 0;

//     for(int currpos = n-1; currpos>=0; currpos--) {
//         for(int currlane = 1; currlane<=3; currlane++) {

//             if(obstacles[currpos + 1] != currlane) {
//                 dp[currlane][currpos] = dp[currlane][currpos + 1] ;
//             }
//             else{
//                 int ans = 1e9;                 // to tackle integer overflow error
//                 for(int i=1; i<=3; i++){
//                     if(currlane != i && obstacles[currpos] != i) {
//                         ans = min(ans, 1 + dp[i][currpos + 1]) ;
//                     }
//                 }
//                 dp[currlane][currpos] = ans ;
//             }
//         }
//     }
//        return min(dp[2][0], min(1+dp[1][0], 1+dp[3][0])) ;
// }

// int minSidejumps(vector<int> &obstacles) {
//     return solve(obstacles) ;
// }
//🔸time complexity: O(n)                     // O(3 * 3*n)
//🔸space complexity: O(4 * n)



//🔴appraoch : space optimisation
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &obstacles) {
//     int n = obstacles.size() -1 ;
    
//     vector<int> curr(4, INT_MAX) ;
//     vector<int> next(4, INT_MAX) ;

//     next[0] = 0;
//     next[1] = 0;
//     next[2] = 0;
//     next[3] = 0;

//     for(int currpos = n-1; currpos>=0; currpos--) {
//         for(int currlane = 1; currlane<=3; currlane++) {

//             if(obstacles[currpos + 1] != currlane) {
//                 curr[currlane] = next[currlane] ; 
//             }
//             else{
//                 int ans = 1e9;                 // to tackle integer overflow error
//                 for(int i=1; i<=3; i++){
//                     if(currlane != i && obstacles[currpos] != i) {
//                         ans = min(ans, 1 + next[i]) ;
//                     }
//                 }
//                 curr[currlane] = ans ;
//             }
//         }
//         next = curr;
//     }
//        return min(next[2], min(1+next[1], 1+next[3])) ;
// }

// int minSidejumps(vector<int> &obstacles) {
//     return solve(obstacles) ;
// }
//🔸time complexity:  O(n)             // O(3 * 3*n)
//🔸space complexity: O(1)               // O(4)



//                    //❓Question: 1402. Reducing Dishes (hard)

// A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.
// Like-time coefficient of a dish is defined as the time taken to cook that dish 
// including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i].
// Return the maximum sum of like-time coefficient that the chef can obtain after dishes preparation.
// Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.

// Example 1:
// Input: satisfaction = [-1,-8,0,5,-9]
// Output: 14
// Explanation: After Removing the second and last dish, the maximum total like-time coefficient will be equal to (-1*1 + 0*2 + 5*3 = 14).
// Each dish is prepared in one unit of time.

// Example 2:
// Input: satisfaction = [4,3,2]
// Output: 20
// Explanation: Dishes can be prepared in any order, (2*1 + 3*2 + 4*3 = 20)

// Example 3:
// Input: satisfaction = [-1,-4,-5]
// Output: 0
// Explanation: People do not like the dishes. No dish is prepared.

//🔴intuition: 0/1 knapsack, like question
//🔴approach: Recursion 
// time limit exceeded
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int solve(vector<int> &satisfaction, int index, int time) {
//     //base case
//     if(index == satisfaction.size()) {
//         return 0 ;
//     }

//     int include = satisfaction[index] * (time+1) + solve(satisfaction, index+1, time+1) ;
//     int exclude = 0 + solve(satisfaction, index+1, time) ;

//     return max(include, exclude) ;
// }

// int maxSatisfaction(vector<int> &satisfaction){

//     sort(satisfaction.begin(), satisfaction.end()) ;
//     return solve(satisfaction, 0, 0) ;
// }
//🔸time complexity: exponential
//🔸space complexity: exponential


//🔴approach: Recursion + Memoization
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int solve(vector<int> &satisfaction, int index, int time, vector<vector<int>> &dp) {
//     //base case
//     if(index == satisfaction.size()) {
//         return 0 ;
//     }

//     if(dp[index][time] != -1){
//         return dp[index][time] ;
//     }

//     int include = satisfaction[index] * (time+1) + solve(satisfaction, index+1, time+1, dp) ;
//     int exclude = 0 + solve(satisfaction, index+1, time, dp) ;

//     return dp[index][time] =  max(include, exclude) ;
// }

// int maxSatisfaction(vector<int> &satisfaction){

//     sort(satisfaction.begin(), satisfaction.end()) ;
//     int n = satisfaction.size() ;
//     vector<vector<int>> dp(n+1, vector<int>(n+1, -1)) ;

//     return solve(satisfaction, 0, 0, dp) ;
// }
//🔸time complexity: O(n^2)
//🔸space complexity: O(n^2)



//🔴approach: Tabulation
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int solve(vector<int> &satisfaction) {
    
//     int n = satisfaction.size() ;
//     vector<vector<int>> dp(n+1, vector<int>(n+1, 0)) ;

//     for(int index = n-1; index >= 0; index--){
//         for(int time=index; time >= 0; time--) {
//             int include = satisfaction[index] * (time+1) + dp[index+1][time+1];
//             int exclude = 0 + dp[index+1][time] ;

//             dp[index][time] = max(include, exclude) ;
//         }
//     }
//     return dp[0][0] ;
// }

// int maxSatisfaction(vector<int> &satisfaction){

//     sort(satisfaction.begin(), satisfaction.end()) ;
//     return solve(satisfaction) ;
// }
//🔸time complexity: O(n^2)
//🔸space complexity: O(n^2)



//🔴approach: spaace optimisation
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int solve(vector<int> &satisfaction) {
    
//     int n = satisfaction.size() ;
//     vector<int> curr(n+1, 0) ;
//     vector<int> next(n+1, 0) ;

//     for(int index = n-1; index >= 0; index--){
//         for(int time=index; time >= 0; time--) {
//             int include = satisfaction[index] * (time+1) + next[time+1];
//             int exclude = 0 + next[time] ;

//             curr[time] = max(include, exclude) ;
//         }
//         next = curr;
//     }
//     return next[0] ;
// }

// int maxSatisfaction(vector<int> &satisfaction){

//     sort(satisfaction.begin(), satisfaction.end()) ;
//     return solve(satisfaction) ;
// }
//🔸time complexity: O(n^2)
//🔸space complexity: O(n)



//                  //❓Question: Longest Increasing Subsequence

// Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

// Example 1:
// Input:
// N = 16
// A[]={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15}
// Output: 6
// Explanation:Longest increasing subsequence
// 0 2 6 9 13 15, which has length 6

// Example 2:
// Input:
// N = 6
// A[] = {5,8,3,7,9,1}
// Output: 3
// Explanation:Longest increasing subsequence
// 5 7 9, with length 3
// Your Task:
// Complete the function longestSubsequence() which takes the input array and its size as input parameters and returns the length of the longest increasing subsequence.

// Expected Time Complexity : O( N*log(N) )
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 ≤ N ≤ 104
// 0 ≤ A[i] ≤ 106


//🔴approach: Recursion
// Time limit Exceeded
// #include<iostream>
// using namespace std; 
// int solve(int n, int a[], int curr, int prev) {
//     //base case
//     if(curr == n) {
//         return 0;
//     }

//     //include
//     int take = 0 ;
//     if(prev == -1 || a[curr] > a[prev]) {
//         take = 1 + solve(n, a, curr + 1, curr) ;
//     }

//     // exclude
//     int notTake = 0 + solve(n, a, curr + 1, prev) ;

//     return max(take, notTake) ;
// }

// int longestSubsequence(int n, int a[]) {
//     return solve(n, a, 0, -1) ;
// }
//🔸time complexity: exponential
//🔸 space complexity: exponential


//🔴approach: Recursion + Memoization
//🔴 passing 111 / 116
// #include<iostream>
// #include<vector>
// using namespace std; 
// int solve(int n, int a[], int curr, int prev, vector<vector<int>> &dp) {
//     //base case
//     if(curr == n) {
//         return 0;
//     }

//     if(dp[curr][prev+1] != -1){
//         return dp[curr][prev+1] ;
//     }

//     //include
//     int take = 0 ;
//     if(prev == -1 || a[curr] > a[prev]) {
//         take = 1 + solve(n, a, curr + 1, curr, dp) ;
//     }

//     // exclude
//     int notTake = 0 + solve(n, a, curr + 1, prev, dp) ;

//     return dp[curr][prev+1] = max(take, notTake) ;
// }

// int longestSubsequence(int n, int a[]) {
//     vector<vector<int>> dp(n, vector<int>(n+1, -1));
//     return solve(n, a, 0, -1, dp) ;
// }
//🔸time complexity: O(n^2)
//🔸 space complexity: O(n^2)


//🔴approach: Tabulation
//🔴 passing 111 / 116
// #include<iostream>
// #include<vector>
// using namespace std; 

// int solve(int n, int a[]) {

//     vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

//     for(int curr = n-1; curr >= 0; curr--) {
//         for(int prev = curr-1; prev >= -1; prev--) {
//             // include
//             int take = 0;
//             if(prev == -1 || a[curr] > a[prev]) {
//                 take = 1 + dp[curr + 1][curr + 1] ;
//             }

//             // exclude
//             int notTake = 0 + dp[curr + 1][prev+1] ;

//             dp[curr][prev+1] = max(take, notTake) ;
//         }
//     }
//     return dp[0][0] ;
// }

// int longestSubsequence(int n, int a[]) {
//     return solve(n, a) ;
// }
//🔸time complexity: O(n^2)
//🔸 space complexity: O(n^2)


//🔴approach: space optimisation
//🔴 passing 111 / 116
// #include<iostream>
// #include<vector>
// using namespace std; 

// int solve(int n, int a[]) {

//     vector<int> currRow(n+1, 0);
//     vector<int> nextRow(n+1, 0);

//     for(int curr = n-1; curr >= 0; curr--) {
//         for(int prev = curr-1; prev >= -1; prev--) {
//             // include
//             int take = 0;
//             if(prev == -1 || a[curr] > a[prev]) {
//                 take = 1 + nextRow[curr + 1] ;
//             }

//             // exclude
//             int notTake = 0 + nextRow[prev+1] ;

//             currRow[prev+1] = max(take, notTake) ;
//         }
//         nextRow = currRow ;
//     }
//     return nextRow[0] ;
// }

// int longestSubsequence(int n, int a[]) {
//     return solve(n, a) ;
// }
//🔸time complexity: O(n^2)
//🔸 space complexity: O(n)




// 🔴approach: DP + Binary search
// #include<iostream>
// #include<vector>
// using namespace std;

//     int solveBS(int n, int a[]) {

//         if(n == 0) {
//             return 0;
//         }   

//         vector<int> ans;
//         ans.push_back(a[0]);
        
//         for(int i= 1; i<n; i++) {

//             if(a[i] > ans.back()) {
//                 ans.push_back(a[i]); 
//             }
//             else
//             {
//                 //finding index  of just greater element in ans array
//                 int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
//                 ans[index] = a[i];
//             }
//         } 
//         return ans.size();
//     }
//    int longestSubsequence(int n, int a[]){  
//         return solveBS(n,a);
//     }
// 🔴time complexity: O(n Log n)            // forloop => O(n)  , lower_bound == (binary search) ==> O(nlog n)
// 🔴space complexity: O(n)



//🔴 Lower_bound:
//  Iterator pointing to the first element in the range [first, last) 
//  such that element < value (or comp(element, value)) is false, 
//  or last if no such element is found.

//🔸parameterS:

// first, last	-	iterators defining the partially-ordered range to examine
// value	    -	value to compare the elements to
// comp     	-	binary predicate which returns ​true if the first argument is less than
//                 (i.e. is ordered before) the second.



//                  //❓ Question: 354. Russian Doll Envelopes (HARD)

//  You are given a 2D array of integers envelopes where envelopes[i] = [wi, hi]
//  represents the width and the height of an envelope.
//  One envelope can fit into another if and only if both the width and height 
//  of one envelope are greater than the other envelope's width and height.
//  Return the maximum number of envelopes you can Russian doll (i.e., put one inside the other).

// Note: You cannot rotate an envelope.

// Example 1:
// Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
// Output: 3
// Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).

// Example 2:
// Input: envelopes = [[1,1],[1,1],[1,1]]
// Output: 1
 
// Constraints:
// 1 <= envelopes.length <= 105
// envelopes[i].length == 2
// 1 <= wi, hi <= 105

//🔴approach: DP + Binary search 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

    // creating custom function, to sort the array: 
    // width wise in ascending order and if width are equal then sort height wise in descending order
    // given input: [5,4],[6,4],[6,7],[2,3]]
    // output: 
    //  2  3
    //  5  4
    //  6  7 
    //  6  4

    // static bool comp(vector<int> &a, vector<int> &b){
    //     if(a[0] == b[0]){
    //         return a[1] > b[1];
    //     }
    //     return a[0] < b[0];
    // }

    // int solveOptimal(int n, vector<vector<int>>& envelopes){
       
    //     if(n == 0)
    //         return 0;
            
    //     vector<int> ans;
    //     ans.push_back(envelopes[0][1]);
        
    //     for(int i=1; i<n; i++){
    //         if(envelopes[i][1] > ans.back())
    //             ans.push_back(envelopes[i][1]);
                
    //         else{
    //             // find index of just bigger element
    //             int index = lower_bound(ans.begin(), ans.end(), envelopes[i][1]) - ans.begin();
    //             ans[index] = envelopes[i][1];
    //         }
    //     }
        
    //     return ans.size();
    // }

    // int maxEnvelopes(vector<vector<int>>& envelopes) {

    //     int n = envelopes.size();
    //     sort(envelopes.begin(), envelopes.end(), comp);    // comp define at top
    //     return solveOptimal(n, envelopes);
    // }
//🔸time complexity: O(N log N)
//🔸space complexity: O(N )



//                      //❓Question: 1691. Maximum Height by Stacking Cuboids (Hards)

// Given n cuboids where the dimensions of the ith cuboid is cuboids[i] = [widthi, lengthi, heighti] (0-indexed).
// // Choose a subset of cuboids and place them on each other.
// You can place cuboid i on cuboid j if widthi <= widthj and lengthi <= lengthj and heighti <= heightj. 
// //You can rearrange any cuboid's dimensions by rotating it to put it on another cuboid.

// Return the maximum height of the stacked cuboids.

//🔸Example 1:
// Input: cuboids = [[50,45,20],[95,37,53],[45,23,12]]
// Output: 190
// Explanation:
// Cuboid 1 is placed on the bottom with the 53x37 side facing down with height 95.
// Cuboid 0 is placed next with the 45x20 side facing down with height 50.
// Cuboid 2 is placed next with the 23x12 side facing down with height 45.
// The total height is 95 + 50 + 45 = 190.


// Example 2:
// Input: cuboids = [[38,25,45],[76,35,3]]
// Output: 76
// Explanation:
// You can't place any of the cuboids on the other.
// We choose cuboid 1 and rotate it so that the 35x3 side is facing down and its height is 76.

// Example 3:
// Input: cuboids = [[7,11,17],[7,17,11],[11,7,17],[11,17,7],[17,7,11],[17,11,7]]
// Output: 102
// Explanation:
// After rearranging the cuboids, you can see that all cuboids have the same dimension.
// You can place the 11x7 side down on all cuboids so their heights are 17.
// The maximum height of stacked cuboids is 6 * 17 = 102.
 

// Constraints:
// n == cuboids.length
// 1 <= n <= 100
// 1 <= widthi, lengthi, heighti <= 100


//🔴approach 1: Tabulation 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// bool check(vector<int> base, vector<int> newBox) {
//     if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2]) {
//         return true ;
//     }
//     else{
//         return false ;
//     }
// }

// int solve(int n, vector<vector<int>> &a){

//     vector<int> currRow(n+1, 0) ;
//     vector<int> nextRow(n+1, 0) ;

//     for(int curr = n-1; curr >= 0; curr--) {
//         for( int prev = curr-1; prev >= -1; prev--) {
//             //include
//             int take = 0 ;
//             if( prev == -1 || check(a[curr] , a[prev]) ) {
//                 take = a[curr][2] + nextRow[curr + 1] ;
//             }

//             //exclude
//             int notTake = 0 + nextRow[prev + 1] ;

//             currRow[prev + 1] = max(take, notTake) ;
//         }
//         nextRow = currRow ;
//     }
//     return nextRow[0] ;
// }

// int maxHeight(vector<vector<int>> &cuboids) {

//     //step1: sort all diimensions for every cuboid
//     for(auto &a:cuboids) {
//         sort(a.begin(), a.end()) ;
//     }

//     //step2: sort all the dimensions on the basis of width and length  [ w | l | h]
//     sort(cuboids.begin(), cuboids.end()) ;

//     //step3: use LIS(longest increasing subsequnces) logic
//     return solve(cuboids.size(), cuboids) ;

// }
//🔸time complexity: O(n^2)
//🔸space complexity: O(n^2)



//               //❓Question: Pizzza with 3n slices (hard)

// There is a pizza with 3n slices of varying size, you and your friends will take slices of pizza as follows:

// You will pick any pizza slice.
// Your friend Alice will pick the next slice in the anti-clockwise direction of your pick.
// Your friend Bob will pick the next slice in the clockwise direction of your pick.
// Repeat until there are no more slices of pizzas.

// Given an integer array slices that represent the sizes of the pizza slices in a clockwise direction, 
// return the maximum possible sum of slice sizes that you can pick.

// example 1:
//  Input: slices = [1,2,3,4,5,6]
// Output: 10
// Explanation: Pick pizza slice of size 4, Alice and Bob will pick slices with size 3 and 5 respectively. 
// Then Pick slices with size 6, finally Alice and Bob will pick slice of size 2 and 1 respectively. 
// Total = 4 + 6.

//example 2:
// Input: slices = [8,9,8,6,1,1]
// Output: 16
// Explanation: Pick pizza slice of size 8 in each turn. 
// If you pick slice with size 9 your partners will pick slices of size 8.
 

// Constraints:
// 3 * n == slices.length
// 1 <= slices.length <= 500
// 1 <= slices[i] <= 1000


// //🔴appraoch: Recursion 
// //🔸time limit exceeded
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int index, int endIndex, vector<int> &slices, int n) {     // n = total no. of slices we will eat
//     //base case
//     if( n==0 || index > endIndex) { 
//         return 0;
//     }

//     int eat = slices[index] + solve(index+2, endIndex,  slices, n-1) ;
//     int notEat = 0 + solve(index+1, endIndex, slices, n ) ;
//     return max(eat, notEat) ;
// }

// int maxSizeSlices(vector<int> &slices) {
//     int k = slices.size() ;
//     int case1 = solve(0, k-2, slices, k/3) ;    // eating from 0th slice
//     int case2 = solve(1, k-1 ,slices, k/3) ;    // eating from 1th slice
//     return max(case1, case2) ;
// }
// //🔸time complexity: expo
// //🔸space complexity: expo


//🔴appraoch: Recursion + Memoization (top-down approach)
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int index, int endIndex, vector<int> &slices, int n, vector<vector<int>> &dp) {     
//     //base case
//     if( n==0 || index > endIndex) { 
//         return 0;
//     }

//     if(dp[index][n] != -1){
//         return dp[index][n] ;
//     }

//     int eat = slices[index] + solve(index+2, endIndex,  slices, n-1, dp) ;
//     int notEat = 0 + solve(index+1, endIndex, slices, n , dp) ;
//     return  dp[index][n] = max(eat, notEat) ;
// }

// int maxSizeSlices(vector<int> &slices) {
//     int k = slices.size() ;
//     //two different scenarios will require 2 different dp array
//     vector<vector<int>> dp1(k, vector<int>(k, -1)) ;  
//     int case1 = solve(0, k-2, slices, k/3, dp1) ;   

//     vector<vector<int>> dp2(k, vector<int>(k, -1)) ;
//     int case2 = solve(1, k-1 ,slices, k/3, dp2) ;   
//     return max(case1, case2) ;
// }
//🔸time complexity:  O(K^2)
//🔸space complexity: O(K^2)


//🔴appraoch: Tabulation (down-top approach)
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &slices) {     

//     int k = slices.size() ;

//     vector<vector<int>> dp1(k+2, vector<int>(k+2, 0)) ;  
//     vector<vector<int>> dp2(k+2, vector<int>(k+2, 0)) ;  

//     for(int index = k-2;  index >= 0; index--) {
//         for(int n = 1; n <= k/3; n++) {
//             int eat = slices[index] +  dp1[index+2][n-1] ;
//             int notEat = 0 + dp1[index+1][n] ;

//             dp1[index][n] = max(eat, notEat) ;
//         }
//     }

//     int case1 = dp1[0][k/3] ;

//     for(int index = k-1;  index >= 1; index--) {
//         for(int n = 1; n <= k/3; n++) {
//             int eat = slices[index] +  dp2[index+2][n-1] ;
//             int notEat = 0 + dp2[index+1][n] ;

//             dp2[index][n] = max(eat, notEat) ;
//         }
//     }

//     int case2 = dp2[1][k/3] ;

//     return max(case1, case2) ;
// }

// int maxSizeSlices(vector<int> &slices) {
//     return solve(slices) ;
// }
//🔸time complexity: O(K^2)
//🔸space complexity: O(k^2)         // slices of array size



//🔴appraoch: space Optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &slices) {     

//     int k = slices.size() ;

//     vector<int> prev1(k+2, 0) ;
//     vector<int> curr1(k+2, 0) ;
//     vector<int> next1(k+2, 0) ;

//     vector<int> prev2(k+2, 0) ;
//     vector<int> curr2(k+2, 0) ;
//     vector<int> next2(k+2, 0) ;

//     for(int index = k-2;  index >= 0; index--) {
//         for(int n = 1; n <= k/3; n++) {
//             int eat = slices[index] +  next1[n-1] ;
//             int notEat = 0 + curr1[n] ;

//             prev1[n] = max(eat, notEat) ;
//         }
//         next1 = curr1 ;
//         curr1 = prev1 ;
//     }

//     int case1 = curr1[k/3] ;

//     for(int index = k-1;  index >= 1; index--) {
//         for(int n = 1; n <= k/3; n++) {
//             int eat = slices[index] +  next2[n-1] ;
//             int notEat = 0 + curr2[n] ;

//             prev2[n] = max(eat, notEat) ;
//         }
//         next2 = curr2 ;
//         curr2 = prev2 ;
//     }

//     int case2 = curr2[k/3] ;

//     return max(case1, case2) ;
// }

// int maxSizeSlices(vector<int> &slices) {
//     return solve(slices) ;
// }
//🔸time complexity:  O(K^2)
//🔸space complexity: O(6*k)




//                   //❓Question: Dice Throw

// Given N dice each with M faces, numbered from 1 to M, find the number of ways to get sum X. 
// X is the summation of values on each face when all the dice are thrown.

//  Example 1:
// Input:
// M = 6, N = 3, X = 12
// Output:
// 25
// Explanation:
// There are 25 total ways to get
// the Sum 12 using 3 dices with
// faces from 1 to 6.

// Example 2:
// Input:
// M = 2, N = 3, X = 6
// Output:
// 1
// Explanation:
// There is only 1 way to get
// the Sum 6 using 3 dices with
// faces from 1 to 2. All the
// dices will have to land on 2.

// Constraints:
// 1 <= M,N,X <= 50


//🔴approach : Recursion 
// #include<iostream>
// using namespace std;

// long long solve(int dice , int faces, int target) {
//     //base case
//     if(target < 0) {
//         return 0;
//     }

//     if( dice == 0 && target != 0) {
//         return 0;
//     }

//     if( target == 0 && dice != 0) {
//         return 0;
//     }

//     if( dice == 0 && target == 0) {
//         return 1;
//     }

//     int ans = 0 ;
//     for( int i=1; i<=faces; i++ ){
//         ans = ans + solve(dice-1, faces, target - i) ;
//     }
// }

// long long noOfWays(int m, int n, int x) {
//     return solve(n, m, x) ;
// }
//🔸time complexity: expo 
//🔸space complexity: expo 



//🔴approach : Recursion + Memiozation
// #include<iostream>
// #include<vector>
// using namespace std;

// long long solve(int dice , int faces, int target, vector<vector<long long>> &dp) {
//     //base case
//     if(target < 0) {
//         return 0;
//     }

//     if( dice == 0 && target != 0) {
//         return 0;
//     }

//     if( target == 0 && dice != 0) {
//         return 0;
//     }

//     if( dice == 0 && target == 0) {
//         return 1;
//     }
//     //step2:
//     if(dp[dice][target] != -1) {
//         return dp[dice][target] ;
//     }

//     long long ans = 0 ;
//     for( int i=1; i<=faces; i++ ){
//         ans = ans + solve(dice-1, faces, target-i, dp) ;
//     }

//     return dp[dice][target] = ans ;
// }

// long long noOfWays(int m, int n, int x) {
//     vector<vector<long long>> dp(n+1, vector<long long>(x+1, -1)) ;
//     return solve(n, m, x, dp) ;
// }
//🔸time complexity: O(N * M * X)
//🔸space complexity: O(N * T)



// //🔴approach : Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// long long solve(int d , int f, int t) {
    
//     vector<vector<long long>> dp(d+1, vector<long long>(t+1, 0)) ;
//     dp[0][0] = 1 ;  // after analysing base case

//     for(int dice=1; dice <= d; dice++) {
//         for(int target=1; target <= t; target++) {
//                 long long ans = 0;
//                 for(int i=1; i<=f; i++){
//                     if( target - i >=0 )
//                       ans = ans + dp[dice-1][target-i] ;
//                 }
//                 dp[dice][target] = ans ;
//         }
//     }
//     return dp[d][t] ;
// }

// long long noOfWays(int m, int n, int x) {
//     return solve(n, m, x) ;
// }
// //🔸time complexity: O(N*M*X)
// //🔸space complexity: O( N * X)



//🔴approach : Space Optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// long long solve(int d , int f, int t) {
    
//     vector<long long> prev(t+1, 0) ;
//     vector<long long> curr(t+1, 0) ;
//     prev[0] = 1 ;

//     for(int dice=1; dice <= d; dice++) {
//         for(int target=1; target <= t; target++) {
//                 long long ans = 0;
//                 for(int i=1; i<=f; i++){
//                     if( target - i >=0 ){
//                      ans = ans + prev[target-i] ;
//                     }
//                 }
//                 curr[target] = ans ;
//         }
//         prev = curr ;
//     }
//     return prev[t] ;
// }

// long long noOfWays(int m, int n, int x) {
//     return solve(n, m, x) ;
// }
// //🔸time complexity: O(N * M * X)
// //🔸space complexity: O( X)




//                      //❓Question: partition equal subset sum

// Given an array arr[] of size N, 
// check if it can be partitioned into two parts such that the sum of elements 
// in both parts is the same.

// Example 1:
// Input: N = 4
// arr = {1, 5, 11, 5}
// Output: YES
// Explanation: 
// The two parts are {1, 5, 5} and {11}.

// Example 2:
// Input: N = 3
// arr = {1, 3, 5}
// Output: NO
// Explanation: This array can never be 
// partitioned into two such parts.

// Constraints:
// 1 ≤ N ≤ 100
// 1 ≤ arr[i] ≤ 1000
// N*sum of elements ≤ 5*106

// //🔴approach : Recursion
// #include<iostream>
// using namespace std;

// bool solve(int index, int arr[], int N, int target) {
//     //base case
//     if( index >= N) {
//         return 0;
//     }
//     if(target < 0) {
//         return 0;
//     }
//     if(target == 0) {
//         return 1;
//     }

//     bool include = solve(index+1, arr, N, target - arr[index]) ;
//     bool exclude = solve(index+1, arr, N, target - 0) ;

//     return include or exclude ;
// }

// int equalPartition(int N , int arr[]) {
//     int total = 0 ;
//     for(int i=0; i<N; i++) {
//         total += arr[i] ;
//     }

//     if( total & 1) {
//         return 0 ;
//     }

//     int target = total/2 ;
//     return solve(0, arr, N, target) ;
// }
// //🔸time complexity: expo
// //🔸space complexity: expo


//🔴approach : Recursion + Memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// bool solve(int index, int arr[], int N, int target, vector<vector<int>> &dp) {
//     //base case
//     if( index >= N) {
//         return 0;
//     }
//     if(target < 0) {
//         return 0;
//     }
//     if(target == 0) {
//         return 1;
//     }

//     //step2:
//     if(dp[index][target] != -1){
//         return dp[index][target] ;
//     }

//     bool include = solve(index+1, arr, N, target - arr[index], dp) ;
//     bool exclude = solve(index+1, arr, N, target - 0, dp) ;

//     return dp[index][target] = include or exclude ;
// }

// int equalPartition(int N , int arr[]) {
//     int total = 0 ;
//     for(int i=0; i<N; i++) {
//         total += arr[i] ;
//     }

//     if( total & 1) {
//         return 0 ;
//     }

//     int target = total/2 ;
//     vector<vector<int>> dp(N, vector<int>(target+1, -1)) ;

//     return solve(0, arr, N, target, dp) ;
// }
//🔸time complexity: o(N * sum of element)
//🔸space complexity: o(N * sum of element)


// //🔴approach : Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// bool solve( int N, int arr[], int total) {
    
//     vector<vector<int>> dp(N+1, vector<int>(total+1, 0)) ;

//     for(int i=0; i<=N ; i++) {
//         dp[i][0] = 1 ;
//     }

//     for(int index = N-1; index >= 0; index--) {
//         for(int target = 0; target <= total/2; target++) {
            
//             bool include = 0 ;

//             if(target - arr[index] >= 0) {
//                 include = dp[index+1][target - arr[index]] ;
//             }
//            bool exclude =  dp[index+1][target - 0];
       
//           dp[index][target] = include or exclude ;
//         }
//     }
//         return dp[0][total/2] ;
// }

// int equalPartition(int N , int arr[]) {
//     int total = 0 ;
//     for(int i=0; i<N; i++) {
//         total += arr[i] ;
//     }

//     if( total & 1) {
//         return 0 ;
//     }

//     int target = total/2 ;

//     return solve(N, arr, target) ;
// }
// //🔸time complexity: O(Sum OF element * N)
// //🔸space complexity: o(N * sum of element)


//🔴approach : space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// bool solve( int N, int arr[], int total) {
    
//     vector<int> curr(total/2 +1, 0) ;
//     vector<int> next(total/2 +1, 0) ;

//     curr[0] = 1;
//     next[0] = 1;

//     for(int index = N-1; index >= 0; index--) {
//         for(int target = 0; target <= total/2; target++) {
            
//             bool include = 0 ;

//             if(target - arr[index] >= 0) {
//                 include = next[target - arr[index]] ;
//             }
//            bool exclude =  next[target - 0];
       
//           curr[target] = include or exclude ;
//         }
//         next = curr ;
//     }
//         return next[total/2] ;
// }

// int equalPartition(int N , int arr[]) {
//     int total = 0 ;
//     for(int i=0; i<N; i++) {
//         total += arr[i] ;
//     }

//     if( total & 1) {
//         return 0 ;
//     }

//     int target = total/2 ;

//     return solve(N, arr, target) ;
// }
//🔸time complexity: O(Sum OF element * N)
//🔸space complexity: o(sum of element)



//                       //❓Question: 801. Minimum Swaps To Make Sequences Increasing (hard)

// You are given two integer arrays of the same length nums1 and nums2. In one operation, 
// you are allowed to swap nums1[i] with nums2[i].

// For example, if nums1 = [1,2,3,8], and nums2 = [5,6,7,4], you can swap the element at i = 3 to 
// obtain nums1 = [1,2,3,4] and nums2 = [5,6,7,8].
// Return the minimum number of needed operations to make nums1 and nums2 strictly increasing. 
// The test cases are generated so that the given input always makes it possible.

// An array arr is strictly increasing if and only if arr[0] < arr[1] < arr[2] < ... < arr[arr.length - 1].

// Example 1:
// Input: nums1 = [1,3,5,4], nums2 = [1,2,3,7]
// Output: 1
// Explanation: 
// Swap nums1[3] and nums2[3]. Then the sequences are:
// nums1 = [1, 3, 5, 7] and nums2 = [1, 2, 3, 4]
// which are both strictly increasing.

// Example 2:
// Input: nums1 = [0,3,5,8,9], nums2 = [2,1,4,6,9]
// Output: 1
 

// Constraints:

// 2 <= nums1.length <= 105
// nums2.length == nums1.length
// 0 <= nums1[i], nums2[i] <= 2 * 105


//🔴approach : Recursion 
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped) {
//     //base case
//     if(index == nums1.size()) {
//         return 0 ;
//     }

//     int ans = INT_MAX ;
//     int prev1 = nums1[index - 1] ;        
//     int prev2 = nums2[index - 1] ;    

//     //catch
//     if(swapped) {
//         swap(prev1, prev2) ;
//     }

//     // no swapped
//     if( nums1[index] > prev1 && nums2[index] > prev2)  {
//         ans = solve(nums1, nums2, index+1, 0) ;
//     }

//     //swapp
//     if( nums1[index] > prev2 && nums2[index] > prev1) {
//         ans = min(ans, 1 + solve(nums1, nums2, index+1, 1)) ;
//     }

//     return ans;
// }

// int minSwap(vector<int>& nums1, vector<int>& nums2) {

//     //initialise both array with -1 as first index element, 
//     //so that we can compare original first value with previous value which is -1
//     //whether they are in increasing order or not
//     nums1.insert(nums1.begin(), -1) ;
//     nums2.insert(nums2.begin(), -1) ;

//     int swapped = 0 ;  // means previous indexes were swapped or not
//     return solve(nums1, nums2, 0, swapped) ;
// }
//🔸time complexity : expo
//🔸space complexity : O(1)


//🔴approach : Recursion + Memiozation (top - down)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped, vector<vector<int>> &dp) {
//     //base case
//     if(index == nums1.size()) {
//         return 0 ;
//     }

//    //step2 
//     if(dp[index][swapped] != -1){
//         return dp[index][swapped] ;
//     }

//     int ans = INT_MAX ;
//     int prev1 = nums1[index - 1] ;        
//     int prev2 = nums2[index - 1] ;    

//     //catch
//     if(swapped) {
//         swap(prev1, prev2) ;
//     }

//     // no swapped
//     if( nums1[index] > prev1 && nums2[index] > prev2)  {
//         ans = solve(nums1, nums2, index+1, 0, dp) ;
//     }

//     //swapp
//     if( nums1[index] > prev2 && nums2[index] > prev1) {
//         ans = min(ans, 1 + solve(nums1, nums2, index+1, 1, dp)) ;
//     }

//     return dp[index][swapped] = ans;
// }

// int minSwap(vector<int>& nums1, vector<int>& nums2) {

//     nums1.insert(nums1.begin(), -1) ;
//     nums2.insert(nums2.begin(), -1) ;

//     int swapped = 0 ;  
//     int n = nums1.size() ;
//     vector<vector<int>> dp(n, vector<int>(2, -1)) ;   // vector<int>(2, -1) bcoz it is changing as either 0 or 1
//     return solve(nums1, nums2, 1, swapped, dp) ;
// }
//🔸time complexity : O(N)
//🔸space complexity : O(N)


//🔴approach : Tabulation (bottom - up)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &nums1, vector<int> &nums2) {
//   int n = nums1.size() ;
//    vector<vector<int>> dp(n+1, vector<int>(2, -1)) ;

//    for(int index = n-1; index >= 1; index--) {
//      for(int swapped = 1; swapped >= 0; swapped--) {

//             int ans = INT_MAX ;
//             int prev1 = nums1[index - 1] ;        
//             int prev2 = nums2[index - 1] ;    

//             //catch
//             if(swapped) {
//                 swap(prev1, prev2) ;
//             }

//             // no swapped
//             if( nums1[index] > prev1 && nums2[index] > prev2)  {
//                 ans = dp[index+1][0] ;
//             }

//             //swapp
//             if( nums1[index] > prev2 && nums2[index] > prev1) {
//                 ans = min(ans, 1 + dp[index+1][1]) ;
//             }

//             dp[index][swapped] = ans ;
//      }
//    }
//         return dp[1][0] ;
// }

// int minSwap(vector<int>& nums1, vector<int>& nums2) {

//     nums1.insert(nums1.begin(), -1) ;
//     nums2.insert(nums2.begin(), -1) ;
 
//     return solve(nums1, nums2) ;
// }
//🔸time complexity :  O(N)            // loop1 = n, loop2 = 0/1
//🔸space complexity : O(N)            // dp[n][0/1] == O(n)   , if(dp[n][n] == O(n^2))


//🔴approach : space optimisation
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> &nums1, vector<int> &nums2) {

//   int n = nums1.size() ;
//   int swapp = 0 ;
//   int noswapp = 0 ;
//   int currswapp = 0;
//   int currnoswapp = 0 ;

//    for(int index = n-1; index >= 1; index--) {
//      for(int swapped = 1; swapped >= 0; swapped--) {

//             int ans = INT_MAX ;
//             int prev1 = nums1[index - 1] ;        
//             int prev2 = nums2[index - 1] ;    

//             //catch
//             if(swapped) {
//                 swap(prev1, prev2) ;
//             }

//             // no swapped
//             if( nums1[index] > prev1 && nums2[index] > prev2)  {
//                 ans = noswapp ;
//             }

//             //swapp
//             if( nums1[index] > prev2 && nums2[index] > prev1) {
//                 ans = min(ans, 1 + swapp) ;
//             }

//             if(swapped) {
//                 currswapp = ans ;
//             }
//             else{
//                 currnoswapp = ans ;
//             }
//      }
//       swapp = currswapp ;
//       noswapp = currnoswapp ;
//    }
//         return min(swapp, noswapp) ; 
// }

// int minSwap(vector<int>& nums1, vector<int>& nums2) {

//     nums1.insert(nums1.begin(), -1) ;
//     nums2.insert(nums2.begin(), -1) ;
 
//     return solve(nums1, nums2) ;
// }
//🔸time complexity :  O(N)            
//🔸space complexity : O(1)            



//                 //❓Question : Longest arithmetic progression

// Given an array called A[] of sorted integers having no duplicates, 
// find the length of the Longest Arithmetic Progression (LLAP) in it.

// Example 1:
// Input:
// N = 6
// set[] = {1, 7, 10, 13, 14, 19}
// Output: 4
// Explanation: The longest arithmetic 
// progression is {1, 7, 13, 19}.

// Example 2:
// Input:
// N = 5
// A[] = {2, 4, 6, 8, 10}
// Output: 5
// Explanation: The whole set is in AP.

// Your Task:
// You don't need to read input or print anything. 
// Your task is to complete the function lenghtOfLongestAP() 
// which takes the array of integers called set[] and n as input parameters and returns the length of LLAP.

// Constraints:
// 1 ≤ N ≤ 1000
// 1 ≤ set[i] ≤ 104

//🔴approach : Recursion   TLE
// #include<iostream>
// using namespace std;

// int solve( int index, int diff, int A[]) {
//     //backward check 
//     //base case
//     if(index < 0) {
//         return 0 ;
//     }

//     int ans = 0 ;

//     for(int j=index-1; j>=0; j--) {
//         if( A[index]-A[j] == diff) {
//             ans = max(ans, 1 + solve(j, diff, A)) ;
//         }
//     }

//     return ans ;
// }

// int lengthOfLongestAP(int A[], int n) {

//     if(n <= 2) {
//         return n;
//     }

//     int ans = 0 ;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++) {
//             ans = max( ans, 2 + solve(i , A[j]- A[i], A)) ;
//         }
//     }

//     return ans ;
// }
//🔸 time complexity : O(N^2 + N)
//🔸 space complexity : O(1)



//🔴approach : Recursion + Memoization (top-down)   TLE
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int solve( int index, int diff, int A[], unordered_map<int, int> dp[]) {
//     //backward check 
//     //base case
//     if(index < 0) {
//         return 0 ;
//     }

//     if(dp[index].count(diff)) {       // is any element with value of diff is present on dp[j] or not
//         return dp[index][diff] ;
//     }
//     int ans = 0 ;

//     for(int j=index-1; j>=0; j--) {
//         if( A[index]-A[j] == diff) {
//             ans = max(ans, 1 + solve(j, diff, A, dp)) ;
//         }
//     }

//     return dp[index][diff] = ans ;
// }

// int lengthOfLongestAP(int A[], int n) {

//     if(n <= 2) {
//         return n;
//     }

//     int ans = 0 ;

//     unordered_map<int, int> dp[n+1] ;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++) {
//             ans = max( ans, 2 + solve(i , A[j]- A[i], A, dp)) ;
//         }
//     }

//     return ans ;
// }
//🔸 time complexity : O(N^2 + N)
//🔸 space complexity : O(N^2)


//🔴approach : Tabulation (Bottom - up )  TLE
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int lengthOfLongestAP(int A[], int n) {

//     if( n <= 2) {
//         return n ;
//     }

//     int ans = 0 ;

//     unordered_map<int, int> dp[n+1] ;

//     for(int i=1; i<n; i++){
//         for(int j=0; j<i; j++) {
//             int diff = A[i] - A[j] ;
//             int cnt = 1 ;

//             // check is answer already present
//             if( dp[j].count(diff)) {        // is any element with value of diff is present on dp[j] or not
//                 cnt = dp[j][diff] ;
//             }

//             dp[i][diff] = 1 + cnt ;
//             ans = max(ans, dp[i][diff]) ;
//         }
//     }

//     return ans ;
// }
//🔸 time complexity : O(n^2)
//🔸 space complexity : O(N^2)


//🔴Comment section gfg : optimised approach

//     int lengthOfLongestAP(int a[], int n) {
//          // code here
//           if(n == 1)
//            return 1;
       
//        vector<vector<int >> dp(n + 1, vector<int>(1e4 + 3, 1));
//        int ans = 0;
//        for(int i = 1; i <= n; ++i){
//            for(int j = i + 1; j <= n; ++j){
               
//                int df = a[j - 1] - a[i - 1];
//                dp[j][df] = 1 + dp[i][df];
//                ans = max(ans, dp[j][df]);
//            }
//        }
       
//        return ans;
       
//     }
//🔸 time complexity : O(n^2)
//🔸 space complexity : O(N^2)


//               //❓Question: Longest Arithmetic Subsequence of Given Difference

// Given an integer array arr and an integer difference, 
// return the length of the longest subsequence in arr which is an arithmetic sequence 
// such that the difference between adjacent elements in the subsequence equals difference.

// A subsequence is a sequence that can be derived from arr by deleting some or 
// no elements without changing the order of the remaining elements.


// Example 1:
// Input: arr = [1,2,3,4], difference = 1
// Output: 4
// Explanation: The longest arithmetic subsequence is [1,2,3,4].

// Example 2:
// Input: arr = [1,3,5,7], difference = 1
// Output: 1
// Explanation: The longest arithmetic subsequence is any single element.

// Example 3:
// Input: arr = [1,5,7,8,5,3,4,2,1], difference = -2
// Output: 4
// Explanation: The longest arithmetic subsequence is [7,5,3,1].

// Constraints:

// 1 <= arr.length <= 105
// -104 <= arr[i], difference <= 104

//🔴Approach : hashing  + dp
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int longestSubsequence(vector<int>& arr, int difference) {

//     unordered_map<int, int> dp ;
//     int ans = 0 ;

//     for(int i=0; i<arr.size(); i++) {
//         int temp = arr[i] - difference ;
//         int tempAns = 0 ;

//         //check ans exist for temp already or not
//         if(dp.count(temp)) {        // check dp me temp ka answer hai ya nahi
//             tempAns = dp[temp] ;
//         }

//         //update current answer
//         dp[arr[i]] = 1 + tempAns ;

//         // update main ans 
//         ans = max(ans, dp[arr[i]]) ;
//     }
//         return ans ;
// }
//🔸time complexity : O(N)
//🔸space complexity : O(n)



//            //❓Question: Unique Binary Search Trees

// Given an integer n, return the number of structurally unique BST's 
// (binary search trees) which has exactly n nodes of unique values from 1 to n.

// Example 1:

//  [1]         [1]              [2]                [3]          [3]
//     \           \           /     \             /            /
//     [3]          [2]     [1]       [3]       [2]           [1] 
//     /               \                       /                \
//  [2]                 [3]                 [1]                  [2]
//
// Input: n = 3
// Output: 5

// Example 2:
// Input: n = 1
// Output: 1
 

// Constraints:
// 1 <= n <= 19

//🔴appraoch: Recursion 
// TLE
// #include<iostream>
// using namespace std;

// int numTrees(int n) {
//     //base case
//     if( n<=1) {
//         return 1 ;
//     }

//     int ans = 0 ;
//     //think i as root node
//     for(int i=1; i<=n; i++) {
//         ans += numTrees(i-1) * numTrees(n-i) ;
//     }

//     return ans ;
// }
//🔸 time complexity : expo
//🔸 space complexity : O(1)


//🔴appraoch: Recursion + memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int n, vector<int> &dp) {
//     //base case
//     if( n<=1) {
//         return 1 ;
//     }

//     if(dp[n] != -1) {
//         return dp[n] ;
//     }
//     int ans = 0 ;
//     //think i as root node
//     for(int i=1; i<=n; i++) {
//         ans += solve(i-1, dp) * solve(n-i, dp) ;
//     }
//     return dp[n] = ans ;
// }

// int numTrees(int n) {
//     vector<int> dp(n+1, -1) ;
//     return solve(n, dp) ;
// }
//🔸 time complexity :  O(n)
//🔸 space complexity : O(n)



//🔴appraoch: Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int n) {
//     vector<int> dp(n+1, 0) ;
//     dp[0] = dp[1] = 1 ;

//     // i => number of nodes
//     for(int i=2; i<=n; i++) {
//         // j => root node
//         for(int j=1; j<=i; j++) {
//             dp[i] +=  dp[j-i] * dp[i-j] ;
//         }
//     }
//     return dp[n] ;
// }

// int numTrees(int n) {
//     return solve(n) ;
// }
//🔸 time complexity :  O(n^2)
//🔸 space complexity : O(n)

//🔴🔴 Most optimised way is to get Catalan number == Unique binary trees
// ex:
//  N == UBT                 // UBT = unique binary trees
//  1 == 1        
//  2 == 2
//  3 == 5
//  4 == 14
//  5 == 42
//  6 == 132

//🔸 expression for catalan number :
//
//    (2n)!
//   -------
//   (n+1)! n!

//🔸Implementaion:
// #include <iostream>
// using namespace std;
 
// // A recursive function to find nth catalan number :
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

// // Driver code :
// int main()
// {
//     for (int i = 0; i < 10; i++)
//         cout << catalan(i) << " ";
//     return 0;
// }

// Output :
// 1 1 2 5 14 42 132 429 1430 4862 


//                    //❓Question :375. Guess Number Higher or Lower II

// We are playing the Guessing Game. The game will work as follows:

// I pick a number between 1 and n.
// You guess a number.
// If you guess the right number, you win the game.
// If you guess the wrong number, then I will tell you whether the number I picked is higher or lower, and you will continue guessing.
// Every time you guess a wrong number x, you will pay x dollars. If you run out of money, you lose the game.
// Given a particular n, return the minimum amount of money you need to guarantee a win regardless of what number I pick.

 
// Example 1:
//                      [7]
//            lower /        \  higher
//              [3]            [9]
//    lower   /    \ high low /   \  higher  
//          [1]    [5]      [8]   [10]
//           \hi lo/  \ higher
//            [2] [4]  [6]

// Input: n = 10
// Output: 16
// Explanation: The winning strategy is as follows:
// - The range is [1,10]. Guess 7.
// - If this is my number, your total is $0. Otherwise, you pay $7.
// - If my number is higher, the range is [8,10]. Guess 9.
// - If this is my number, your total is $7. Otherwise, you pay $9.
// - If my number is higher, it must be 10. Guess 10. Your total is $7 + $9 = $16.
// - If my number is lower, it must be 8. Guess 8. Your total is $7 + $9 = $16.
// - If my number is lower, the range is [1,6]. Guess 3.
// - If this is my number, your total is $7. Otherwise, you pay $3.
// - If my number is higher, the range is [4,6]. Guess 5.
// - If this is my number, your total is $7 + $3 = $10. Otherwise, you pay $5.
// - If my number is higher, it must be 6. Guess 6. Your total is $7 + $3 + $5 = $15.
// - If my number is lower, it must be 4. Guess 4. Your total is $7 + $3 + $5 = $15.
// - If my number is lower, the range is [1,2]. Guess 1.
// - If this is my number, your total is $7 + $3 = $10. Otherwise, you pay $1.
// - If my number is higher, it must be 2. Guess 2. Your total is $7 + $3 + $1 = $11.
// The worst case in all these scenarios is that you pay $16. Hence, you only need $16 to guarantee a win.

// Example 2:
// Input: n = 1
// Output: 0
// Explanation: There is only one possible number, so you can guess 1 and not have to pay anything.
// Example 3:

// Input: n = 2
// Output: 1
// Explanation: There are two possible numbers, 1 and 2.
// - Guess 1.
// - If this is my number, your total is $0. Otherwise, you pay $1.
// - If my number is higher, it must be 2. Guess 2. Your total is $1.
// The worst case is that you pay $1.
 
// Constraints:
// 1 <= n <= 200

//🔴approach : Recursion
// TLE
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int solve(int start, int end) {
//     //worst case
//     if( start >= end) {
//         return 0 ;
//     }

//     int maxi = INT_MAX ;
//     for(int i=start; i<=end; i++) {
//         maxi = min(maxi, i+max(solve(start, i-1), solve(i+1, end))) ;
//     }
//     return maxi ;
// }

// int getMoneyAmount(int n) {
//     return solve(1, n) ;
// }
//🔸 time complexity :  expo
//🔸 space complexity : O(1)


//🔴approach : Recursion + Memoization
// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;

// int solve(int start, int end, vector<vector<int>> &dp) {
//     //worst case
//     if( start >= end) {
//         return 0 ;
//     }

//     if(dp[start][end] != -1){
//         return dp[start][end] ;
//     }

//     int maxi = INT_MAX ;
//     for(int i=start; i<=end; i++) {
//         maxi = min(maxi, i+max(solve(start, i-1, dp), solve(i+1, end, dp))) ;
//     }
//     return dp[start][end] = maxi ;
// }

// int getMoneyAmount(int n) {
//     vector<vector<int>> dp(n+1, vector<int>(n+1, -1)) ;
//     return solve(1, n, dp) ;
// }
//🔸 time complexity :  O(n^2)
//🔸 space complexity : O(n^2)



//🔴approach : Tabulation
// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;

// int solve(int n) {
//     vector<vector<int>> dp(n+2, vector<int>(n+2, 0)) ;
    
//     for(int start = n; start >= 1; start--) {
//         for(int end = start; end<=n; end++) {
//             if(start == end) {
//                 continue;
//             }
//             else{
//                 int maxi = INT_MAX ;
//                 for(int i=start; i<=end; i++) {
//                     maxi = min(maxi, i+max(dp[start][i-1], dp[i+1][end])) ;
//                 }
//                 dp[start][end] = maxi ;
//             }
//         }
//     }

//     return dp[1][n] ;
// }

// int getMoneyAmount(int n) {
//     return solve(n) ;
// }
//🔸 time complexity :  O(n^2)
//🔸 space complexity : O(n^2)


//  138/149