
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
