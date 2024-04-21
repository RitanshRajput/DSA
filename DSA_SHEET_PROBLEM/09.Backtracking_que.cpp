
// 🔴🔴 RECURSION 🔴🔴🔴 //

//              //❓ Question: Write a recursion function to compute sum of list of numbers
// Example 1:
// Input:
// n = 4
// arr[] = {1, 2, 3, 4}
// Output: 10
// Explanation: 1 + 2 + 3 + 4 = 10.

// Example 2:
// Input:
// n = 3
// arr[] = {1, 3, 3}
// Output: 7
// Explanation: 1 + 3 + 3 = 7.

// 🔴Approach : recursion
//   int solve(int arr[], int n, int index){
//       if(index == n){
//           return 0;
//       }

//       int sum = arr[index] + solve(arr, n, index+1);

//       return sum;
//   }
//   int sum(int arr[], int n) {
//      return solve(arr, n, 0);
//   }

// 🔸Time complexity: O(N)
// 🔸space complexity: O(N)
//

//
//              // ❓Question: Write a program based on recursion to calculate the nth fibonacci number
//
// Given a positive integer n, find the nth fibonacci number.
// Note: for the reference of this question take first fibonacci number to be 1.

// Example 1:
// Input:
// n = 2
// Output:
// 1
// Explanation:
// 1 is the 2nd number of fibonacci series.

// Example 2:
// Input:
// n = 5
// Output:
// 5
// Explanation:
// 5 is the 5th number of fibonacci series.
// Your Task:
// You dont need to read input or print anything. Complete the function nthFibonacci() which takes n as input parameter and returns nth fibonacci number.

// Expected Time Complexity: O(2^n)
// Expected Auxiliary Space: O(2^n)

// Constraints:
// 1<= n <=105

// 🔴Approach :
//  int solve(int n){
//         if(n <= 0){
//             return 0;
//         }
//         if(n == 1){
//             return 1;
//         }

//         return solve(n-2) + solve(n-1);
//     }
//     int nthFibonacci(int n){
//        if(n == 1 || n == 2) return 1;
//        return solve(n);
//     }
//
// 🔸Time complexity: O(N)
// 🔸space complexity: O(N)
//

//
//                  //❓Question: Write a program to print 1 to N without using any loops
// You are given an integer N. Print numbers from 1 to N without the help of loops.

// Examples:

// Input: N = 5
// Output: 1 2 3 4 5
// Explanation: We have to print numbers from 1 to 5.

// Input: N = 10
// Output: 1 2 3 4 5 6 7 8 9 10
// Explanation: We have to print numbers from 1 to 10.

// 🔴approach :
// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     void printN(int n) {
//         if (n > 0) {
//             printN(n - 1);
//             cout << n << ", ";
//         }
//         return;
//     }
// };

// int main(){
//     cout << "Startin" << endl;

//     int n = 10;
//     Solution g;
//     g.printN(n);

//     return 0;
// }
// 🔸Time complexity: O(N)
// 🔸space complexity: O(N)
//

//
//              //❓Question: write a program to get the sum of digits of a number using recursion
//
// Given a number, we need to find sum of its digits using recursion.
// Examples:
// Input : 12345
// Output : 15

// Input : 45632
// Output :20
//
// 🔴appraoch:
// #include <iostream>
// using namespace std;

// 🔸approach 1:
// int sum = 0;
// int solve(int num)
// {
//     if (num <= 0)
//     {
//         return 0;
//     }

//     int digit = num % 10;
//     sum += digit;
//     solve(num /= 10);

//     return sum;
// }
// 🔸approach 2:
// int solve(int num)
// {
//     if (num <= 0) return 0;
//     return (n%10 + solve(n/10));
// }

// int main()
// {
//     int num = 45632;
//     cout << "In main" << endl;
//     int result = solve(num);
//     cout << "Sum of digits in " << num << " is " << result << endl;

//     return 0;
// }
// 🔸Time complexity: O(LogN)
// 🔸space complexity: O(LogN)
//

//
//              //❓Question: write a program to get the length of a string using recursion
// Given a string calculate length of the string using recursion.

// Examples:
// Input : str = "abcd"
// Output :4

// Input : str = "GEEKSFORGEEKS"
// Output :13

// 🔴appraoch :
// #include <bits/stdc++.h>
// using namespace std;

// int recLen(char* str)
// {
//    if(*str == '\0'){
//     return 0;
//    }
//    else{
//     return 1 + recLen(str+1);
//    }
// }

// int main()
// {
//     char str[] = "GeeksforGeeks";
//     cout<<recLen(str);
//     return 0;
// }
// 🔸Time complexity: O(N)
// 🔸space complexity: O(N)
//

//
//                  //❓Question: Implement a recursive function to reverse a string
//
//  Write a recursive function to print the reverse of a given string
// #include <iostream>
// using namespace std;

// void reverse(string &str, int left, int right)
// {
//     if (left > right)
//     {
//         return;
//     }

//     swap(str[right], str[left]);
//     reverse(str, left + 1, right - 1);
// }

// int main()
// {
//     string a = "Pandorium";
//     reverse(a, 0, a.length() - 1);
//     cout << a << endl;
//     return 0;
// }
// 🔸Time complexity: O(N)
// 🔸space complexity: O(N)
//

//
//                  //❓Question: Implement a recursive function to solve the tower of hanoi Problem
//
// Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules:

// Only one disk can be moved at a time.
// Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
// No disk may be placed on top of a smaller disk.

// Examples:
// Input: 2
// Output: Disk 1 moved from A to B
// Disk 2 moved from A to C
// Disk 1 moved from B to C

// Input: 3
// Output: Disk 1 moved from A to C
// Disk 2 moved from A to B
// Disk 1 moved from C to B
// Disk 3 moved from A to C
// Disk 1 moved from B to A
// Disk 2 moved from B to C
// Disk 1 moved from A to C

// 🔴approach :
// #include <bits/stdc++.h>
// using namespace std;

// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
//     if (n == 0)
//         return;

//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

//     cout << "Move disk " << n << " from rod " << from_rod
//          << " to rod " << to_rod << endl;

//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// int main()
// {
//     int N = 3;
//     // A, B and C are names of rods
//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }
// 🔸Time complexity: O(2^N)
// 🔸space complexity: O(N)
//

//
// 🔴🔴🔴 BACKTRACKING 🔴🔴🔴

//              ❓Question: Rat in a Maze Problem - I

// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has
// to reach the destination at (N - 1, N - 1). Find all possible paths that the
// rat can take to reach from source to destination. The directions in which the
// rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell
// in the matrix represents that it is blocked and rat cannot move to it while value
//  1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell
// is 0, the rat cannot move to any other cell.

// Example 1:
// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1},
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at
// (3, 3) from (0, 0) by two paths - DRDDRR
// and DDRDRR, when printed in sorted order
// we get DDRDRR DRDDRR.

// Example 2:
// Input:
// N = 2
// m[][] = {{1, 0},
//          {1, 0}}
// Output:
// -1
// Explanation:
// No path exists and destination cell is
// blocked.

// Your Task:
// You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order.
// Note: In case of no path, return an empty list. The driver will output "-1" automatically.

// Expected Time Complexity: O((3N^2)).
// Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.

// Constraints:
// 2 ≤ N ≤ 5
// 0 ≤ m[i][j] ≤ 1

// 🔴approach :
// class Solution{
//     public:
//     void solve(int i, int j,vector<vector<int>>&m,int n, vector<vector<bool>>&visited, vector<string>& result, string& temp){
//         if(i==n-1 && j==n-1 && m[i][j] == 1){
//             result.push_back(temp);
//             return;
//         }

//         if(i<0 || j<0 || i>=n || j>=n || visited[i][j] == true || m[i][j] == 0){
//             return;
//         }

//         //UP
//         temp.push_back('U');
//         visited[i][j] = true;
//         solve(i-1, j, m, n, visited, result, temp);
//         temp.pop_back();
//         visited[i][j] = false;

//         //DOWN
//         temp.push_back('D');
//         visited[i][j] = true;
//         solve(i+1, j, m, n, visited, result, temp);
//         temp.pop_back();
//         visited[i][j] = false;

//         //LEFT
//         temp.push_back('L');
//         visited[i][j] = true;
//         solve(i, j-1, m, n, visited, result, temp);
//         temp.pop_back();
//         visited[i][j] = false;

//         //RIGHT
//         temp.push_back('R');
//         visited[i][j] = true;
//         solve(i, j+1, m, n, visited, result, temp);
//         temp.pop_back();
//         visited[i][j] = false;

//     }

//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<vector<bool>> visited(n, vector<bool>(n, false));
//         vector<string> result;
//         string temp = "";
//         solve(0, 0, m, n, visited, result, temp);
//         return result;
//     }
// };
// 🔸Time Complexity: O(3^n^2)
// 🔸Space Complexity: O(Length of route)

// 🔴approach 2:
// class Solution{
//     public:
//     bool canGo(int row, int col, vector<vector<int> > &m, int n){
//         return row >= 0 && col >= 0 && row < n && col < n && m[row][col] != 0;
//     }
//     void helper(vector<string> &ans, string str, int row, int col, vector<vector<int> > &m, int n){
//         if(m[row][col] == 0) return;
//         if(row == n-1 && col == n-1){
//             ans.push_back(str);
//             return;
//         }

//         m[row][col] = 0;

//         if(canGo(row-1, col, m, n)){
//             str.push_back('U');
//             helper(ans, str, row-1, col, m, n);
//             str.pop_back();
//         }
//         if(canGo(row, col+1, m, n)){
//             str.push_back('R');
//             helper(ans, str, row, col+1, m, n);
//             str.pop_back();
//         }
//         if(canGo(row+1, col, m, n)){
//             str.push_back('D');
//             helper(ans, str, row+1, col, m, n);
//             str.pop_back();
//         }
//         if(canGo(row, col-1, m, n)){
//             str.push_back('L');
//             helper(ans, str, row, col-1, m, n);
//             str.pop_back();
//         }

//         m[row][col] = 1;
//     }
//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<string> ans;
//         helper(ans, "", 0, 0, m, n);
//         return ans;
//     }
// };
// 🔸Time Complexity: O(3^n^2)
// 🔸Space Complexity: O(Length of route)

//              ❓Question: N-Q Problem

// The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such
// that no two queens can attack each other.
// Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution
// contains distinct board configurations of the n-queens’ placement, where
// the solutions are a permutation of [1,2,3..n] in increasing order, here the number
// in the ith place denotes that the ith-column queen is placed in the row with that number.
//  For eg below figure represents a chessboard [3 1 4 2].

// Example 1:
// Input:
// 1
// Output:
// [1]
// Explaination:
// Only one queen can be placed
// in the single cell available.

// Example 2:
// Input:
// 4
// Output:
// [2 4 1 3 ] [3 1 4 2 ]
// Explaination:
// These are the 2 possible solutions.

// Your Task:
// You do not need to read input or print anything. Your task is to complete the function nQueen() which takes n as input parameter and returns a list containing all the possible chessboard configurations in sorted order. Return an empty list if no solution exists.

// Expected Time Complexity: O(n!)
// Expected Auxiliary Space: O(n2)

// Constraints:
// 1 ≤ n ≤ 10

// 🔴approach :
// class Solution{
// public:
//     bool isValid(int row, int col, vector<vector<int>>& grid){
//         int n = grid.size();

//         for(int i=0; i<n; i++){
//             if(grid[i][col]==1 || grid[row][i]==1){
//                 return false;
//             }
//         }

//         int i=row, j=col;
//         while(i>=0 && j>=0) {
//             if(grid[i--][j--] == 1) return false;
//         }

//         i=row, j=col;
//         while(i<n && j<n) {
//             if(grid[i++][j++] == 1) return false;
//         }

//         i=row, j=col;
//         while(i<n && j>=0) {
//             if(grid[i++][j--] == 1) return false;
//         }

//         i=row, j=col;
//         while(i>=0 && j<n) {
//             if(grid[i--][j++] == 1) return false;
//         }

//         return true;
//     }

//     void solve(int i, vector<int>&temp, vector<vector<int>>& grid, vector<vector<int>>& ans){
//         int n = grid.size();

//         if(i==n){
//             ans.push_back(temp);
//         }

//         for(int j=0; j<n && i<n; j++){
//             if( isValid(i, j, grid)){
//                 grid[i][j] = 1;
//                 temp.push_back(j+1);
//                 solve(i+1, temp, grid, ans);

//                 temp.pop_back();
//                 grid[i][j]= 0;
//             }
//         }
//     }

//     vector<vector<int>> nQueen(int n) {
//         vector<vector<int>> ans;
//         vector<vector<int>> grid(n, vector<int>(n, 0));
//         vector<int> temp;

//         solve(0, temp, grid, ans);
//         return ans;
//     }
// };
//  🔸Time Complexity: O(n!)
//  🔸Space Complexity: O(N^2)
