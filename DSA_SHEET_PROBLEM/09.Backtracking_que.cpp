
//                                  🔴🔴 RECURSION 🔴🔴🔴 //

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
//                                  🔴🔴🔴 BACKTRACKING 🔴🔴🔴
//

//
//                   ❓Question: Rat in a Maze Problem - I
//

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
//

//
//                            ❓Question: N-Q Problem
//

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
//

//
//                      ❓ Question: Word Break - part 2
//

// Given a string s and a dictionary of words dict of length n, add spaces in s to construct a 
// sentence where each word is a valid dictionary word. Each dictionary word can be used more 
// than once. Return all such possible sentences.

// Follow examples for better understanding.

// Example 1:
// Input: s = "catsanddog", n = 5 
// dict = {"cats", "cat", "and", "sand", "dog"}
// Output: (cats and dog)(cat sand dog)
// Explanation: All the words in the given 
// sentences are present in the dictionary.

// Example 2:
// Input: s = "catsandog", n = 5
// dict = {"cats", "cat", "and", "sand", "dog"}
// Output: Empty
// Explanation: There is no possible breaking 
// of the string s where all the words are present 
// in dict.
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function wordBreak() which takes n, dict and s as input parameters and returns a list of possible sentences. If no sentence is possible it returns an empty list.

// Expected Time Complexity: O(N2*n) where N = |s|
// Expected Auxiliary Space: O(N2)

// Constraints:
// 1 ≤ n ≤ 20
// 1 ≤ dict[i] ≤ 15
// 1 ≤ |s| ≤ 500 

//🔴appraoch : 
// class Solution{
// public:
//     void solve(string curr,int n, vector<string>& dict, string s, vector<string> &ans, int index){
//         if(index == s.length()){
//             curr.pop_back();
//             ans.push_back(curr);
//             return;
//         }    
        
//         for(int i=0; i<n; i++){
//             string word = dict[i];
//             int wordLen = word.length();
            
//             if(word == s.substr(index, wordLen)) {
//                 solve(curr+word+" ", n, dict, s, ans, index+wordLen);
//             }
//         }
//     }
    
    
//     vector<string> wordBreak(int n, vector<string>& dict, string s)
//     {
//         vector<string> ans;
//         string curr = "";
//         solve(curr, n, dict, s, ans, 0);
        
//         return ans;
//     }
// };
//🔸Time complexity:  O(2^m * n * m)  // n = string s length , m = average length of word in the dictionary
//🔸Space complexity: O(2^m * n * m)
//

//
//                      ❓Question: Remove Invalid Paranthesis
//

// Given a string s that contains parentheses and letters, remove the minimum number 
// of invalid parentheses to make the input string valid.
// Return a list of unique strings that are valid with the minimum number of removals. 
// You may return the answer in any order.

// Example 1:
// Input: s = "()())()"
// Output: ["(())()","()()()"]

// Example 2:
// Input: s = "(a)())()"
// Output: ["(a())()","(a)()()"]

// Example 3:
// Input: s = ")("
// Output: [""]
 
// Constraints:
// 1 <= s.length <= 25
// s consists of lowercase English letters and parentheses '(' and ')'.
// There will be at most 20 parentheses in s.

//🔴approach : 
// class Solution {
// public:
//       vector<string> ans;
//     unordered_set<string> set; 
//     int countRemoval(string s){
//         stack<char> st;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('){
//                 st.push('(');
//             }
//             else if(s[i]==')'){
//                 if(st.size()==0){
//                     st.push(')');
//                 }
//                 else if(st.top()==')'){
//                     st.push(')');
//                 }
//                 else if(st.top()=='('){
//                     st.pop();
//                 }
//             }
//         }
        
//         int invalid=st.size(); //minimum removals
        
//         return invalid;
//     }
   
//     void helper(int invalid,string s){
//         if(invalid<0) return;
//         if(invalid==0){ 
//             int invalidNow=countRemoval(s);
//             if(invalidNow==0){
//                 ans.push_back(s);
//             }
//             return;
//         }
        
//       for(int i=0;i<s.size();i++){
//           if (s[i] != ')' && s[i] != '('){
//                 continue;
//           }
          
//           string left=s.substr(0,i);
//           string right=s.substr(i+1);
//           string temp=left+right;
//           if(set.find(temp)==set.end()){
//               set.insert(temp);
//             helper(invalid-1,temp);       
//           }
               
//       }  
//     }
    
//     vector<string> removeInvalidParentheses(string s) {
//         int invalid=countRemoval(s);
//         helper(invalid,s);
//         return ans;
//     }
// };
//🔸Time complexity:  O(2^n*n)
//🔸Space complexity: O(2^n*n)
//

//
//                              ❓Question: Soduku Solver
//

// Given an incomplete Sudoku configuration in terms of a 9 x 9  2-D square matrix (grid[][]),
// the task is to find a solved Sudoku. For simplicity, you may assume that there will be only one unique solution.
// A sudoku solution must satisfy all of the following rules:
// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// Zeros in the grid indicates blanks, which are to be filled with some number between 1-9. You can not replace the element in the cell which is not blank.
// Sample Sudoku for you to get the logic for its solution:

// Example 1:
// Input:
// grid[][] = 
// [[3 0 6 5 0 8 4 0 0],
// [5 2 0 0 0 0 0 0 0],
// [0 8 7 0 0 0 0 3 1 ],
// [0 0 3 0 1 0 0 8 0],
// [9 0 0 8 6 3 0 0 5],
// [0 5 0 0 9 0 6 0 0],
// [1 3 0 0 0 0 2 5 0],
// [0 0 0 0 0 0 0 7 4],
// [0 0 5 2 0 6 3 0 0]]
// Output:
// True
// 3 1 6 5 7 8 4 9 2
// 5 2 9 1 3 4 7 6 8
// 4 8 7 6 2 9 5 3 1
// 2 6 3 4 1 5 9 8 7
// 9 7 4 8 6 3 1 2 5
// 8 5 1 7 9 2 6 4 3
// 1 3 8 9 4 7 2 5 6
// 6 9 2 3 5 1 8 7 4
// 7 4 5 2 8 6 3 1 9
// Explanation: 
// There exists a valid Sudoku for the input grid, which is shown in output.

// Example 2:
// Input:
// grid[][] = 
// [[3 6 6 5 0 8 4 0 0],
// [5 2 0 0 0 0 0 0 0],
// [0 8 7 0 0 0 0 3 1 ],
// [0 0 3 0 1 0 0 8 0],
// [9 0 0 8 6 3 0 0 5],
// [0 5 0 0 9 0 6 0 0],
// [1 3 0 0 0 0 2 5 0],
// [0 0 0 0 0 0 0 7 4],
// [0 0 5 2 0 6 3 0 0]]
// Output:
// False
// Explanation: 
// There does not exists a valid Sudoku for the input grid, since there are two 6s in the first row. Which cannot replaced.
// Your Task:
// You need to complete the two functions:

// SolveSudoku(): Takes a grid as its argument and returns true if a solution is possible and false if it is not, on returning false driver will print "No solution exists".

// printGrid(): Takes a grid as its argument and prints the 81 numbers of the solved Sudoku in a single line with space separation. Do not give a new line character after printing the grid.

// Expected Time Complexity: O(9N*N).
// Expected Auxiliary Space: O(N*N).

// Constraints:
// 0 ≤ grid[i][j] ≤ 9

//🔴appraoch : 
// class Solution 
// {
//     public:
//     bool isPossible(int grid[N][N], int row, int col, int val){
//         for(int i=0; i<N; i++){
//             if(grid[row][i] == val){
//                 return false;
//             }
//             if(grid[i][col] == val){
//                 return false;
//             }
//         }
        
//         for(int i=0; i<N; i++){
//             if(grid[3*(row/3)+ i/3][3*(col/3)+ i%3] == val){
//                 return false;
//             }
//         }
        
//         return true;
//     }
    
//     //Function to find a solved Sudoku. 
//     bool SolveSudoku(int grid[N][N])  
//     { 
//         for(int i=0; i<N; i++){
//             for(int j=0; j<N; j++){
//                 if(grid[i][j] == 0){
//                     for(int index =1; index<=9; index++) {
//                         if(isPossible(grid, i, j, index)){
//                             grid[i][j] = index;
//                             bool nextFunCall = SolveSudoku(grid);
                            
//                             if(nextFunCall) {
//                                 return true ;
//                             }else{
//                                 grid[i][j] = 0;
//                             }
//                         }
//                     }
                    
//                     if(grid[i][j] == 0){
//                         return false;
//                     }
//                 }
//             }
//         }
        
//         return true;
//     }
    
//     //Function to print grids of the Sudoku.
//     void printGrid (int grid[N][N]) 
//     {
//         for(int i=0; i<N; i++){
//             for(int j=0; j<N; j++){
//                 cout<<grid[i][j]<<" ";
//             }
//         }
//     }
// };
//🔸Time complexity:  O(n^2)
//🔸Space complexity: O(n^2)
//

//
//                    ❓Question: m-colouring problem
//
// Given an undirected graph and an integer M. The task is to determine if the graph can be 
// colored with at most M colors such that no two adjacent vertices of the graph are colored 
// with the same color. Here coloring of a graph means the assignment of colors to all vertices. 
// Print 1 if it is possible to colour vertices and 0 otherwise.

// Example 1:
// Input:
// N = 4
// M = 3
// E = 5
// Edges[] = {(0,1),(1,2),(2,3),(3,0),(0,2)}
// Output: 1
// Explanation: It is possible to colour the
// given graph using 3 colours.

// Example 2:
// Input:
// N = 3
// M = 2
// E = 3
// Edges[] = {(0,1),(1,2),(0,2)}
// Output: 0

// Your Task:
// Your task is to complete the function graphColoring() which takes the 2d-array graph[], the number of colours and the number of nodes as inputs and returns true if answer exists otherwise false. 1 is printed if the returned value is true, 0 otherwise. The printing is done by the driver's code.
// Note: In Example there are Edges not the graph.Graph will be like, if there is an edge between vertex X and vertex Y graph[] will contain 1 at graph[X-1][Y-1], else 0. In 2d-array graph[ ], nodes are 0-based indexed, i.e. from 0 to N-1.Function will be contain 2-D graph not the edges.

// Expected Time Complexity: O(MN).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 ≤ N ≤ 20
// 1 ≤ E ≤ (N*(N-1))/2
// 1 ≤ M ≤ N

//🔴approach: 
// class Solution{
// public:

//     bool isSafe(int id, bool mat[101][101], vector<int>& colors , int n, int col){
//         for(int j=0; j<n; j++){
//             if(j != id && mat[j][id]==1 && colors[j]== col){
//                 return false;
//             }
//         }
        
//         return true;
//     }
   
//     bool solve(int id, bool mat[101][101], vector<int>& colors, int m, int n){
//         if(id == n){
//             return true;
//         }
        
//         for(int i=1; i<=m; i++){
//             if(isSafe(id, mat, colors, n, i)){
//                 colors[id] = i;
//                 if(solve(id+1, mat, colors, m, n)){
//                     return true;
//                 }
                
//                 colors[id] = 0;
//             }
//         }
        
//         return false;
//     }
    
   
//     bool graphColoring(bool mat[101][101], int m, int n) {
//         vector<int> colors(n,0);
        
//         if(solve(0, mat, colors, m, n)){
//             return true;
//         }
        
//         return false;
//     }
// };
//🔸Time complexity:  O(M^n)
//🔸Space complexity: O(N^2)
//

//
//                      ❓Question: Find all possible palindromic partitions of a String
//
// Given a String S, Find all possible Palindromic partitions of the given String.
 
// Example 1:
// Input:
// S = "geeks"
// Output:
// g e e k s
// g ee k s
// Explanation:
// All possible palindromic partitions are printed.

// Example 2:
// Input:
// S = "madam"
// Output:
// m a d a m
// m ada m
// madam

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function allPalindromicPerms() which takes a String S as input parameter and returns a list of lists denoting all the possible palindromic partitions in the order of their appearance in the original string.

// Expected Time Complexity: O(N*2N)
// Expected Auxiliary Space: O(N2), where N is the length of the String

// Constraints:
// 1 <= |S| <= 20

//🔴appraoch :
// class Solution {
//   public:
//     bool isPossible(string& s, int start, int end){
//         while(start<end){
//             if(s[start++] != s[end--]){
//                 return false;
//             }
//         }
        
//         return true;
//     }
    
//     void solve(int index, vector<vector<string>>& ans, vector<string>& temp, string S){
//         if(index == S.size()){
//             ans.push_back(temp);
//             return;
//         }
        
//         string str= "";
//         for(int i=index; i<S.size(); i++){
//             str += S[i];
//             if(isPossible(S, index, i)){
//                 temp.push_back(str);
//                 solve(i+1, ans, temp, S);
//                 temp.pop_back();
//             }
//         }
//     }
    
//     vector<vector<string>> allPalindromicPerms(string S) {
//         vector<vector<string>> ans;
//         vector<string> temp;
//         solve(0, ans, temp, S);

//         return ans;
//     }
// };
//🔸Time complexity:  O(N*2^N)
//🔸Space complexity: O(N* 2^N)
//

//
//                          ❓Question: Partition Equal Subset Sum
//
// Given an array arr[] of size N, check if it can be partitioned into two parts 
// such that the sum of elements in both parts is the same.

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
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function equalPartition() which takes the value N and the array as input parameters and returns 1 if the partition is possible. Otherwise, returns 0.

// Expected Time Complexity: O(N*sum of elements)
// Expected Auxiliary Space: O(sum of elements)

// Constraints:
// 1 ≤ N ≤ 100
// 1 ≤ arr[i] ≤ 1000
// N*sum of elements ≤ 5*106

//🔴approach :
// class Solution{
// public:
//       bool solve(int i,int N, int arr[],vector<vector<int>> &dp,int target) {
//         if(i >= N || target < 0) {
//             return 0;
//         }    
//         if(target == 0) {
//             return 1;
//         }
//         if(dp[i][target] != -1) {
//             return dp[i][target];
//         }
//         bool include = solve(i+1,N,arr,dp,target-arr[i]);
//         bool exclude = solve(i+1,N,arr,dp,target);
        
//         return dp[i][target] = (include || exclude);
//     }
    
//     int equalPartition(int N, int arr[]) {
//         int sum = 0;
//         for(int i=0;i<N;i++) {
//             sum += arr[i];
//         }
//         if(sum%2 != 0) {
//             return 0;
//         }
//         sum = sum/2;
//         vector<vector<int>> dp(N,vector<int>(sum+1,-1));
//         return solve(0,N,arr,dp,sum);
//     }
// };
//🔸Time complexity:  O(2^N)
//🔸Space complexity: O(N*sum)
//

//
//                      ❓Question: Combination Sum
//

// Given an array of integers and a sum B, find all unique combinations in the array where 
// the sum is equal to B. The same number may be chosen from the array any number of times to make B.
// Note:
//         1. All numbers will be positive integers.
//         2. Elements in a combination (a1, a2, …, ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
//         3. The combinations themselves must be sorted in ascending order.

// Example 1:
// Input:
// N = 4
// arr[] = {7,2,6,5}
// B = 16
// Output:
// (2 2 2 2 2 2 2 2)
// (2 2 2 2 2 6)
// (2 2 2 5 5)
// (2 2 5 7)
// (2 2 6 6)
// (2 7 7)
// (5 5 6)

// Example 2:
// Input:
// N = 11
// arr[] = {6,5,7,1,8,2,9,9,7,7,9}
// B = 6
// Output:
// (1 1 1 1 1 1)
// (1 1 1 1 2)
// (1 1 2 2)
// (1 5)
// (2 2 2)
// (6)

// Your Task:
// Your task is to complete the function combinationSum() which takes the array A and a sum B as inputs and returns a list of list denoting the required combinations in the order specified in the problem description. The printing is done by the driver's code. If no set can be formed with the given set, then  "Empty" (without quotes) is printed.

// Expected Time Complexity: O(X2 * 2N), where X is average of summation B/arri for every number in the array.
// Expected Auxiliary Space: O(X * 2N)

// Constraints:
// 1 <= N <= 30
// 1 <= A[i] <= 20
// 1 <= B <= 100

//🔴approach : 
// class Solution {
//   public:
//    void solve(int i,int n,vector<int>&arr, int B, vector<vector<int>>& ans, vector<int>& ds) {
//         if(i==n) {
//             if(B==0){
//                 ans.push_back(ds);
//             }
//             return;
//         }
//         // take
//         if(arr[i]<=B) {
//             ds.push_back(arr[i]);
//             solve(i,n,arr,B-arr[i],ans,ds);
//             ds.pop_back();
//         }
//         //notTake
//         solve(i+1,n,arr,B,ans,ds);
//     }
    
    
//     vector<vector<int> > combinationSum(vector<int> &A, int B) {
//         set<int>st(A.begin(),A.end());
        
//         vector<int>arr(st.begin(),st.end());
        
//         vector<int> ds;
//         int n = arr.size();
//         vector<vector<int>> ans;
        
//         solve(0,n,arr,B,ans,ds);
//         return ans;
//     }
// };
//🔸Time complexity:  O(2^N)
//🔸Space complexity: O(2^N)
//

//
//                      ❓ Question: Largest Number in K swaps
//

// Given a number K and string str of digits denoting a positive integer, build the largest number possible
// by performing swap operations on the digits of str at most K times.

// Example 1:
// Input:
// K = 4
// str = "1234567"
// Output:
// 7654321
// Explanation:
// Three swaps can make the
// input 1234567 to 7654321, swapping 1
// with 7, 2 with 6 and finally 3 with 5

// Example 2:
// Input:
// K = 3
// str = "3435335"
// Output:
// 5543333
// Explanation:
// Three swaps can make the input
// 3435335 to 5543333, swapping 3 
// with 5, 4 with 5 and finally 3 with 4 

// Your task:
// You don't have to read input or print anything. Your task is to complete the function findMaximumNum() which takes the string and an integer as input and returns a string containing the largest number formed by perfoming the swap operation at most k times.

// Expected Time Complexity: O(n!/(n-k)!) , where n = length of input string
// Expected Auxiliary Space: O(n)

// Constraints:
// 1 ≤ |str| ≤ 30
// 1 ≤ K ≤ 10

//🔴approach : 
// class Solution
// {
//     public:
//    void solve(string str, int k,int ind,string& maxi) {
       
//         maxi = max(maxi,str);
//         if (k == 0) return; 
//         int n = str.length();
        
//         for (int i = ind; i < n-1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (str[i] < str[j]) {
//                     swap(str[i], str[j]);
//                     solve(str, k - 1,i+1,maxi); 
//                     swap(str[i], str[j]);
                    
//                 }
//             }
//         }
//     }
//     string findMaximumNum(string str, int k)
//     {
//        string maxi = "";
//        solve(str,k,0,maxi);
//        return maxi;
//     }
// };
//🔸Time complexity:  O(n-1!)
//🔸Space complexity: O(N)
//

//🔴appraoch2: 
// class Solution
// {
//     public:
//     void solve(int ind,int k,string &nums, string& ans) {
        
//         int n=nums.size();
        
//         if(ind>=n || k<=0) {
//             ans = max(ans,nums);
//             return ;
//         }
        
//         for(int i=ind+1; i<n && k>0; i++) {
//             if(nums[ind]<nums[i]) {  
//                 swap(nums[ind],nums[i]);
//                 solve(ind+1,k-1,nums, ans);
//                 swap(nums[i],nums[ind]);
//             }
//         }
        
//         solve(ind+1,k,nums, ans);   
//     }
    
//     string findMaximumNum(string str, int k)
//     {
//         string ans = str;
//         solve(0,k,str, ans);
//         return ans;
//     }
// };
//🔸Time complexity:  O(2^N) exponential
//🔸Space complexity: O(N)
//

//
//                          ❓Question: Permutations of a given string
//
// Given a string S. The task is to print all unique permutations of the given string that
//  may contain dulplicates in lexicographically sorted order. 

// Example 1:
// Input: ABC
// Output:
// ABC ACB BAC BCA CAB CBA
// Explanation:
// Given string ABC has permutations in 6 
// forms as ABC, ACB, BAC, BCA, CAB and CBA .

// Example 2:
// Input: ABSG
// Output:
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
// BASG BGAS BGSA BSAG BSGA GABS GASB 
// GBAS GBSA GSAB GSBA SABG SAGB SBAG 
// SBGA SGAB SGBA
// Explanation:
// Given string ABSG has 24 permutations.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function find_permutation() which takes the string S as input parameter and returns a vector of string in lexicographical order.

// Expected Time Complexity: O(n! * n)
// Expected Space Complexity: O(n! * n)

// Constraints:
// 1 <= length of string <= 5

//🔴approach : 
// class Solution
// {
// 	public:
// 	    void removeDuplicate(vector<string>& ans){
// 	        vector<string> temp;
// 	        temp.push_back(ans[0]);
	        
// 	        for(int i=1; i<ans.size(); i++){
// 	            if(ans[i] != ans[i-1]){
// 	                temp.push_back(ans[i]);
// 	            }else{
// 	                continue;
// 	            }
// 	        }
	        
// 	        ans.clear();
	        
// 	        for(string i: temp){
// 	            ans.push_back(i);
// 	        }
// 	    }
	
// 	    void solve(int index, vector<string>& ans, string S){
	        
// 	        int n = S.size();
// 	        if(index >= n) {
// 	            ans.push_back(S);
// 	            return;
// 	        }
	        
// 	        for(int i=index; i<n; i++){
// 	            swap(S[i], S[index]);
// 	            solve(index+1, ans, S);
// 	            swap(S[i], S[index]);
// 	        }
// 	    }
	
// 		vector<string>find_permutation(string S)
// 		{
// 		    vector<string> ans;
// 		    solve(0, ans, S);
// 		    sort(ans.begin(),ans.end());
		    
// 		    removeDuplicate(ans);
		    
// 		    return ans;
// 		}
// };
//🔸Time complexity:  O(N!)   // O(Nlogn) + O(N!) == O(N!)
//🔸Space complexity: O(N!)
//

//
//                      ❓ Question: Longest Possible Route in a Matrix with Hurdles
//
// Given an M x N matrix, with a few hurdles arbitrarily placed, calculate the length of the longest possible 
// route possible from source to a destination within the matrix. We are allowed to move to only adjacent 
// cells which are not hurdles. The route cannot contain any diagonal moves and a location once visited
// in a particular path cannot be visited again.

// https://www.geeksforgeeks.org/longest-possible-route-in-a-matrix-with-hurdles/
// For example, the longest path with no hurdles from source to destination 
// is highlighted below. The length of the path is 24.

//        (1)-1 1 1--1 1 1-1-1-1
//            |   |  |   |     |
//          1-1 0 1  1 0 1(1)0 1
//          |     |  |   | |   |
//          1-1-1-1  1-1-1 1-1-1



// The idea is to use Backtracking. We start from the source cell of the matrix, move forward in all four allowed directions,
// and recursively checks if they lead to the solution or not. If the destination is found, we update the value of the 
// longest path else if none of the above solutions work we return false from our function.

//🔴approach :

// Function for finding the longest path
// 'ans' is -1 if we can't reach
// 'cur' is the number of steps we have traversed

// int findLongestPath(vector<vector<int> >& mat, int i, int j, int di, int dj, int n, int m,  int cur = 0, int ans = -1)
// {
//     // If we reach the destination
//     if (i == di && j == dj) {
//         // If current path steps are more than previous path steps
//         if (cur > ans) ans = cur;
//
//         return ans;
//     }
   
//       //if the source or destination is a hurdle itself
//       if(mat[i][j]==0 || mat[di][dj]==0) return;
 
//     // Mark as visited
//     mat[i][j] = 0;
 
//     // Checking if we can reach the destination going right
//     if (j != m - 1 && mat[i][j + 1] > 0)
//         ans = findLongestPath(mat, i, j + 1, di, dj, n, m, cur + 1, ans);
 
//     // Checking if we can reach the destination going down
//     if (i != n - 1 && mat[i + 1][j] > 0)
//         ans = findLongestPath(mat, i + 1, j, di, dj, n, m,  cur + 1, ans);
 
//     // Checking if we can reach the destination going left
//     if (j != 0 && mat[i][j - 1] > 0)
//         ans = findLongestPath(mat, i, j - 1, di, dj, n, m, cur + 1, ans);
 
//     // Checking if we can reach the destination going up
//     if (i != 0 && mat[i - 1][j] > 0)
//         ans = findLongestPath(mat, i - 1, j, di, dj, n, m,  cur + 1, ans);
 
//     // Marking visited to backtrack
//     mat[i][j] = 1;
 
//     // Returning the answer we got so far
//     return ans;
// }
 
// int main()
// {
//     // input matrix with hurdles shown with number 0
//     int mat[R][C] = { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//                       { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
//                       { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
 
//     // find longest path with source (0, 0) and destination (1, 7)
//     findLongestPath(mat, 0, 0, 1, 7);
 
//     return 0;
// }
//🔸Time complexity:  O(4^N)
//🔸Space complexity: O(1)
//

//
//                      ❓Question: Print all possible paths from top left to bottom right in matrix
//

// Given a 2D matrix of dimension m✕n, the task is to print all the possible paths 
// from the top left corner to the bottom right corner in a 2D matrix with the constraints 
// that from each cell you can either move to right or down only.

// Examples : 
// Input: [[1,2,3],
// [4,5,6]]
// Output: [[1,4,5,6],
// [1,2,5,6],
// [1,2,3,6]]

// Examples :
// Input: [[1,2],
// [3,4]]
// Output: [[1,2,4],
// [1,3,4]]

// Print all possible paths from top left to bottom right in matrix using Backtracking
// Explore all the possible paths from a current cell using recursion and backtracking to reach bottom right cell.

// Base cases: Check If the bottom right cell, print the current path.
// Boundary cases: In case in we reach out of the matrix, return from it.
// Otherwise, Include the current cell in the path
// Make two recursive call:
// Move right in the matrix
// Move down in the matrix
// Backtrack: Remove the current cell from the current path

//🔴approach : 

// Function to print the path taken to reach destination
// void printPath(vector<int>& path)
// {
//     for (int i : path) {
//         cout << i << ", ";
//     }
//     cout << endl;
// }

// // Function to find all possible path in matrix from top left cell to bottom right cell
// void findPaths(vector<vector<int> >& arr, vector<int>& path, int i, int j, int M, int N) {

//     // if the bottom right cell, print the path
//     if (i == M - 1 && j == N - 1) {
//         path.push_back(arr[i][j]);
//         printPath(path);
//         path.pop_back();
//         return;
//     }

//     // Boundary cases: In case in we reach out of the matrix
//     if (i < 0 || i >= M || j < 0 || j >= N) {
//         return;
//     }

//     // Include the current cell in the path
//     path.push_back(arr[i][j]);

//     // Move right in the matrix
//     if (j + 1 < N) {
//         findPaths(arr, path, i, j + 1, M, N);
//     }

//     // Move down in the matrix
//     if (i + 1 < M) {
//         findPaths(arr, path, i + 1, j, M, N);
//     }

//     // Backtrack: Remove the current cell from the current path
//     path.pop_back();
// }


// int main()
// {
//     vector<vector<int>> arr= { { 1, 2, 3 }, 
//                                { 4, 5, 6 }, 
//                                { 7, 8, 9 } 
//                             };
//     vector<int> path;
//     int i = 0, j = 0;
//     int M = arr.size();
//     int N = arr[0].size();

//     findPaths(arr, path, i, j, M, N);
//     return 0;
// }
//
//🔸 Time complexity : O(2^n*m)
//🔸 Space complexity: O(N+M)
//

//
//                      ❓Question: Partition Array to K subset
//
// Given an integer array a[ ] of N elements and an integer K, the task is to check if the array 
// a[ ] could be divided into K non-empty subsets with equal sum of elements.
// Note: All elements of this array should be part of exactly one partition.

// Example 1:
// Input: 
// N = 5
// a[] = {2,1,4,5,6}
// K = 3
// Output: 
// 1
// Explanation: we can divide above array 
// into 3 parts with equal sum as (2, 4), 
// (1, 5), (6)

// Example 2:
// Input: 
// N = 5 
// a[] = {2,1,5,5,6}
// K = 3
// Output: 
// 0
// Explanation: It is not possible to divide
// above array into 3 parts with equal sum.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isKPartitionPossible() which takes the array a[], the size of the array N, and the value of K as inputs and returns true(same as 1) if possible, otherwise false(same as 0).

// Expected Time Complexity: O(N*2N).
// Expected Auxiliary Space: O(2N).

// Constraints:
// 1 ≤ K ≤ N ≤ 10
// 1 ≤ a[i] ≤ 100

//🔴approach : 
// class Solution{
//     int count = 0;
    
//     bool solve(int a[], int n, int index, int curr_sum, int target, int visit[]) {
        
//         if (index >= n) {
//             return false;
//         }
        
//         if (curr_sum > target) {
//             return false;
//         }
        
//         if (curr_sum == target) {
//             count++;
//             return true;
//         }
        
//         for (int i = index; i < n; i++) {
//             if (visit[i] == 1) continue;
            
//             visit[i] = 1;
//             int completed = solve(a, n, index + 1, curr_sum + a[i], target, visit);
            
//             if (completed) return true;
//             visit[i] = 0;
//         }
        
//         return false;
//     }
//   public:
//     bool isKPartitionPossible(int a[], int n, int k)
//     {
//         if (k == 1) return true;
        
//         int sum = accumulate(a, a + n, 0);
//         int visit[n] = {0}; 
        
//         if (sum % k) return false;
        
//         sort(a, a + n, greater<int>());
        
//         for (int i = 0; i < k; i++) {
//             solve(a, n, 0, 0, sum / k, visit);
//         }
        
//         if (count == k) return true;
//         return false;
//     }
// };


//🔴explanation: using chatgpt

// Recursive Function solve:
// Start with index  0
// At each index, try including the current element in the subset and recursively call solve for the next index.
// Backtrack by excluding the current element from the subset and try the next element.

// Dry Run:
// Start with index 0
// 0)
// Include 6 
// in the subset and recursively call solve for the next index. Start with index 1
// 1)
// Include 5 
// in the subset and recursively call solve for the next index. Start with index 2
// 2)
// Include 4 
// in the subset and recursively call solve for the next index.
// Check if the current sum equals the target sum.
// No more elements to include, return to the previous index.

// Exclude 4
// from the subset and try the next element.
// No more elements to include, return to the previous index.
// Exclude 5
// from the subset and try the next element.
// No more elements to include, return to the previous index.
// Exclude 6
// from the subset and try the next element.
// No more elements to include, return to the previous index.

// Final Result:
// The count variable will hold the number of successful partitions. In this case, it will be incremented when a subset with sum equal to the target sum is found.
// After the function execution, if the count matches k

//🔸 Time complexity : O(k * n * 2^n) 
//🔸 Space complexity: O(N)
//

//
//                      ❓Question: Find the K-th Permutation Sequence of first N natural numbers
//

// Given two integers N and K, find the Kth permutation sequence of numbers from 1 to N without using STL function.
// Note: Assume that the inputs are such that Kth permutation of N number is always possible.
//
// Examples: 
// Input: N = 3, K = 4 
// Output: 231 
// Explanation: 
// The ordered list of permutation sequence from integer 1 to 3 is : 123, 132, 213, 231, 312, 321. So, the 4th permutation sequence is “231”.

// Input: N = 2, K = 1 
// Output: 12 
// Explanation: 
// For n = 2, only 2 permutations are possible 12 21. So, the 1st permutation sequence is “12”. 

//🔴approach :
// void generate_permutations(string& str, int idx, vector<string>& result) {
//     // base case
//     if (idx == str.size()) {
//         result.push_back(str);
//         return;
//     }
//
//     for (int i = idx; i < str.size(); i++) {
//         swap(str[i], str[idx]);
//         generate_permutations(str, idx + 1, result);
//         swap(str[i], str[idx]);
//     }
// }
// 
//  string findKthPermutation(int n, int k) {
//     string str = "";
//     vector<string> result;
//  
//     for (int i = 1; i <= n; i++) {
//         str.push_back(i + '0'); 
//     }
//  
//     generate_permutations(str, 0, result);
//     sort(result.begin(), result.end());
//
//    return result[k-1];
//  }
//
//🔸 Time complexity : O((N! * N) + (N! * log N!)) 
//🔸 Space complexity: O(N)
//