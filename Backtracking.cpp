
//                       //🔴🔴BackTracking

// Backtracking is an algorithmic technique for solving problems recursively 
// by trying to build a solution incrementally, one piece at a time,
// removing those solutions that fail to satisfy the constraints of the problem at any point 
// of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).


//🔴 Types of Backtracking Algorithm:
// There are three types of problems in backtracking:

//🔸Decision Problem – In this, we search for a feasible solution.
//🔸Optimization Problem – In this, we search for the best solution.
//🔸Enumeration Problem – In this, we find all feasible solutions.

//❓When can be Backtracking Algorithm used?
// For example, consider the SudoKo solving Problem, we try filling digits one by one. 
// Whenever we find that current digit cannot lead to a solution, we remove it (backtrack) and try next digit.
// This is better than naive approach (generating all possible combinations of digits and then trying every combination one by one) 
// as it drops a set of permutations whenever it backtracks.



//🔴🔴🔴                   //❓Question: Rat in A Maze

// You are given a starting position for a rat which is stuck in a maze at an initial point (О, 0) (the maze can be thought of as a 2-dimensional
//  plane). The maze would be given in the form of a square matrix of order 'N' * 'N' where the cells with value 0 represent the maze's blocked
//  locations while value 1 is the open/available path that the rat can take to reach its destination. The rat's destination is at ('N' - 1, 'N' - 1).
//Your task is to find all the possible paths that the rat can take to reach from source to destination in the maze. The possible directions that
//  it can take to move in the maze are 'U'(up) i.e. (x, y-1), 'D'(down) i.e. (x, y + 1). 'L' (left) i.e. (x-1, y). 'R' (right) i.e. (x + 1, y).

//  Note:
//    Here, sorted paths mean that the expected output should be in alphabetical order.


// For Example:
//    Given a square matrix of size 4*4 (i.e. here 'N' = 4):
//    1 0 0 0
//    1 1 0 0
//    1 1 0 0
//    0 1 1 1 
//    Expected Output:
//    DDRDRR DRDDRR
//    i.e. Path-1: DDRDRR and Path-2: DRDDRR
//    The rat can reach the destination at (3, 3) from (0, 0) by two paths, i.e. DRDDRR and DDRDRR when printed in sorted
//    order, we get DDRDRR DRDDRR.

// Constraints:
//    2 < N <= 5
//    0 <= MATRIX[i][j] <= 1
//    Where N is the size of the square matrix.
//    Time Limit: 1sec

// Sample Input 1:
// 4
// 1 0 0 0 
// 1 1 0 1
// 1 1 0 0
// 0 1 1 1
// Sample Output 1:
// DDRDRR DRDDRR
// Explanation For Sample Input 1:
// The rat can reach the destination at (3, 3) from (0, 0) by two paths, i.e. DRDDRR and DDRDRR when printed in sorted order, we get DDRDRR DRDDRR.
// Sample Input 2:
// 2
// 1 0
// 1 0

// Sample Output 2:
// []
// Explanation For Sample Input 2:
// As no valid path exists in Sample input 2 so we return an empty list.


// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSafe(int newX, int newY, vector<vector<bool>> &visited, vector<vector<int>> &arr, int n ){
    
//     if( (newX >=0 && newX < n) && 
//         (newY >=0 && newY < n) && 
//         (visited[newX][newY] != 1) && 
//         arr[newX][newY] == 1 ) {

//         return true ;
//     }
//     else{
//         return false ;
//     }
// }

// void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &visited, string path) {
//     //base case
//     if(x == n-1 && y == n-1){
//         ans.push_back(path) ;
//         return ;
//     }

//     // 4 moments to follow  D(down), L(left), R(right), U(up)   --> in alphabetical order

//     visited[x][y] = 1;

//     // for Down⬇️
//     if( isSafe(x+1, y, visited, arr, n)) { 
//         solve(x+1, y, arr, n, ans, visited, path + 'D') ;
//     }

//     // for Left⬅️
//     if( isSafe(x, y-1, visited, arr, n)) { 
//         solve(x, y-1, arr, n, ans, visited, path + 'L') ;
//     }

//     // for Right➡️ 
//     if( isSafe(x, y+1, visited, arr, n)) { 
//         solve(x, y+1, arr, n, ans, visited, path + 'R') ;
//     }

//     // for Up⬆️
//     if( isSafe(x-1, y, visited, arr, n)) { 
//         solve(x-1, y, arr, n, ans, visited, path + 'U') ;
//     }

//     visited[x][y] = 0 ;

// } 

// vector<string> searchMaze(vector<vector<int>> &arr, int n) {

//     vector<string> ans ;
//     vector<vector<bool>> visited (n, vector<bool> (n,0)) ;
//     string path = "" ;

//     //edge case
//     if(arr[0][0] == 0){
//         return ans ;
//     }

//     solve(0, 0, arr, n, ans, visited, path) ;
//     return ans;
// }
//🔴Time complexity: O( 4 ^n^2)          // 4^n*m
//🔴space complexity: O(n*m)




//🔴🔴🔴              //❓Question: The N-Queen Puzzle


// The N Queens puzzle is the problem of placing N chess queens on an N*N chessboard such that no two queens attack each other.
//  Given an integer 'N', print all distinct solutions to the 'N' queen puzzle.
//    Two queens on the same chessboard can attack each other if any of the below condition satisfies:
//    1. They share a row.
//    2. They share a column.
//    3. They share a diagonal.


// Sample Input 1:
// 1
// 4   
// Sample Output 1:
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// Explanation for Sample Input 1:
// The 4 queens can be placed in two ways in a 4*4 chessboard. Both the configurations are shown in the below figure. 

// The chessboard matrix for the first configuration looks as follows:-
// 0 0 1 0
// 1 0 0 0
// 0 0 0 1
// 0 1 0 0
// Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is a valid configuration.

// Similarly, the chessboard matrix for the second configuration looks as follows:-
// 0 1 0 0
// 0 0 0 1
// 1 0 0 0
// 0 0 1 0
// Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is also a valid configuration.

// These are the only two valid configurations for 4-Queens. 


// Sample Input 2:
// 1
// 3
// Sample Output 2:
// Explanation of Sample Input 2:
// Since no possible configuration exists for 3 Queen's, the output remains empty. 

//🔴 approach 1:  correct solution
// void addSol(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
// {
// 	vector<int> temp;
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			temp.push_back(board[i][j]);
// 		}
// 	}
// 	ans.push_back(temp);
// }
// bool isSafe(int row, int col, vector<vector<int>> &board, int n)
// {
// 	int x = row;
// 	int y = col;
// 	//for same row
// 	while(y>=0){
// 		if(board[x][y] == 1)
// 			return false;
// 			y--;		
// 	}
// 	//for diagonal
// 	x = row;
// 	y = col;
// 	while(x>=0 && y>=0){
// 		if(board[x][y] == 1)
// 			return false;
// 			y--;
// 			x--;		
// 	}
// 	//for diagonal
// 	x = row;
// 	y = col;
// 	while(x<n && y>=0){
// 		if(board[x][y] == 1)
// 			return false;
// 			y--;
// 			x++;		
// 	}
// 	return true;
// }
// void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
// {
// 	if(col == n){
// 		addSol(board, ans, n);
// 		return;
// 	}

// 	for(int row=0; row<n; row++){
// 		if(isSafe(row, col, board, n)){
// 			board[row][col] = 1;
// 			solve(col+1, board, ans, n);
// 			board[row][col] = 0;
// 		}
// 	}
// }
// vector<vector<int>> nQueens(int n)
// {
// 	vector<vector<int>> board(n, vector<int>(n,0));
// 	vector<vector<int>> ans;
// 	solve(0, board, ans, n);

// 	return ans;	
// }
//🔴time complexity: O(n!)



//🔴🔴🔴                //❓Question: Sudoku Solver

// You have been given a 9x9 2d integer matrix 'MAT' representing a Sudoku puzzle. The empty cells of the Sudoku are filled with zeros, and
//  the rest of the cells are filled with integers from 1 to 9. Your task is to fill all the empty cells such that the final matrix represents a Sudoku
//  solution.
//  Note:
//    A Sudoku solution must satisfy all the following conditions-
//    1. Each of the digits 1-9 must occur exactly once in each row.
//    2. Each of the digits 1-9 must occur exactly once in each column.
//    3. Each of the digits 1-9 must occur

// Constraints :
//    Size of MAT is 9x9
//    0 <= MAT[i][j] <= 9
//    where an empty cell is given by 0 in the matrix.

// Output Format:
//    The output is consists of 9 lines. Each line contains 9 single space-separated integers where the empty cells from
//    the input matrix are replaced by some integers.
//  Note
//    You are not required to print anything, and it has already been taken care of. Just implement the function.

// Sample Input 1
// 3 0 6 5 0 8 4 0 0
// 5 2 0 0 0 0 0 0 0
// 0 8 7 0 0 0 0 3 1
// 0 0 3 0 1 0 0 8 0
// 9 0 0 8 6 3 0 0 5
// 0 5 0 0 9 0 6 0 0
// 1 3 0 0 0 0 2 5 0
// 0 0 0 0 0 0 0 7 4
// 0 0 5 2 0 6 3 0 0
// Sample Output 1
// 3 1 6 5 7 8 4 9 2
// 5 2 9 1 3 4 7 6 8
// 4 8 7 6 2 9 5 3 1
// 2 6 3 4 1 5 9 8 7
// 9 7 4 8 6 3 1 2 5
// 8 5 1 7 9 2 6 4 3
// 1 3 8 9 4 7 2 5 6
// 6 9 2 3 5 1 8 7 4
// 7 4 5 2 8 6 3 1 9
// Explanation For Sample Output 1
// In the output:
// In each row, each of the digits 1-9 is occurring exactly once.
// In each column, each of the digits 1-9 is occurring exactly once.
// In each 3x3 sub-grids of the grid, each of the digits is occurring exactly once.


// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSafe(int row, int col, vector<vector<int>> &board, int value, int n) {

//     for(int i=0; i<n; i++){
//         //row check
//         if(board[row][i] == value){
//             return false ;
//         }
        
//         //col check
//         if(board[i][col] == value){
//             return false ;
//         }

//         // 3*3 matrix check
//         if(board[3*(row/3) + i/3][3*(col/3) + i%3] == value){
//             return false ;
//         }
//     }
//     return true ;
// }

// bool solve(vector<vector<int>> &board) {
    
//     int n = board[0].size() ;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<n; col++){
//             //if cell empty
//             if(board[row][col] == 0){
//                 for(int val=1; val<=9; val++){
//                     if( isSafe(row, col, board, val, n)){
//                         board[row][col] = val ;
//                         //recursion call
//                         bool isFurtherSolutionPossible = solve(board) ;

//                         if(isFurtherSolutionPossible){
//                             return true ;
//                         }
//                         else{
//                             //backtracking
//                             board[row][col] = 0 ;
//                         }
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true ;
// }

// void solveSodoku(vector<vector<int>> &sudoku){
//     // No need to print the final sudoku
//     // Just fill the values in the given matrix

//     solve(sudoku);
// }
//🔴time complexity: O(9^m)             // m= no. of empty cells
//🔴space complexity: O(1)