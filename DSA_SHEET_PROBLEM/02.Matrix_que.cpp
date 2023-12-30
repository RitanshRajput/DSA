
//                      //🔘🔘🔘 Matrix 🔘🔘🔘 



//                      //❓Question: Spirally Traversing a Matrix

// Given a matrix of size r*c. Traverse the matrix in spiral form.

// Example 1:
// Input:
// r = 4, c = 4
// matrix[][] = {{1,  2, 3,  4 },
//              { 5,  6, 7,  8 },
//              { 9, 10, 11, 12},
//              { 13,14, 15, 16}}
// Output: 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Explanation:

// Example 2:
// Input:
// r = 3, c = 4  
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12}}
// Output: 
// 1 2 3 4 8 12 11 10 9 5 6 7
// Explanation:
// Applying same technique as shown above, 
// output for the 2nd testcase will be 
// 1 2 3 4 8 12 11 10 9 5 6 7.


//🔴approach : 

// vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
//     {
//         int rowStart = 0 ;
//         int rowEnd = r - 1 ;

//         int colStart = 0 ;
//         int colEnd = c - 1 ;
        
//         vector<int> ans ;
        
//         int total = r*c ;
//         int count = 0 ;
        
//         while(count < total) {
        
//             for(int i = colStart; i<=colEnd && count < total; i++) {
//                 ans.push_back(matrix[rowStart][i]) ;
//                 count++ ;
//             }
//             rowStart++ ;
            
//             for(int j = rowStart; j<=rowEnd && count < total; j++) {
//                 ans.push_back(matrix[j][colEnd]) ;
//                 count++ ;
//             }
//             colEnd-- ;
            
//             for(int i = colEnd; i>=colStart && count < total; i--) {
//                 ans.push_back(matrix[rowEnd][i]) ;
//                 count++ ;
//             }
//             rowEnd-- ;
            
//             for(int j = rowEnd; j>=rowStart && count < total; j--){
//                 ans.push_back(matrix[j][colStart]) ;
//                 count++ ;
//             }
//             colStart++ ;
      
//         }
//         return ans ;
//     }
// 🔸time complexity : O( r * c)
// 🔸space complexity : O( r * c)



//                       //❓Question : 74. Search a 2D Matrix

// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example 1:
// //  1   3   5   7
// //  10  11  16  20
// //  23  30  34  60

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Example 2:
// //  1   3   5   7
// //  10  11  16  20
// //  23  30  34  60

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:
// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104

//🔴 approach: Brute force
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size() ;
//         int col = matrix[0].size()  ;

//         if(target < matrix[0][0] || target > matrix[row-1][col-1]) {
//             return false ;
//         }

//         if(target == matrix[0][0] || target == matrix[row-1][col-1]) {
//             return true ;
//         }


//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//                 if(matrix[i][j] == target) {
//                     return true ;
//                 }
//             }
//         }
//         return false ;
// }
//🔸time complexity: O(n*m)
//🔸space complexity: O(1)


//🔴 approach: Optimised appraoch using binary search

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size() ;
//         int col = matrix[0].size() ;
//         int start = 0;
//         int end = row*col - 1;
//         int mid = start+(end-start)/2;

//         while(start<=end){

//          int result = matrix[mid/col][mid%col] ;
//          if(result==target){
//              return 1;
//          }
//          if(result<target){
//              start=mid+1 ;
//          }
//          else{
//              end=mid-1;
//          }
//          mid= start+(end-start)/2 ;
//         }
//         return 0;
//     }
//🔸time complexity: O(log (n*m))
//🔸space complexity: O(1)


//               //❓Question : Median in a row-wise sorted matrix

// Given a row wise sorted matrix of size R*C where R and C are always odd, 
// find the median of the matrix.

// Example 1:
// Input:
// R = 3, C = 3
// M = [[1, 3, 5], 
//      [2, 6, 9], 
//      [3, 6, 9]]
// Output: 5
// Explanation: Sorting matrix elements gives 
// us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

// Example 2:
// Input:
// R = 3, C = 1
// M = [[1], [2], [3]]
// Output: 2
// Explanation: Sorting matrix elements gives 
// us {1,2,3}. Hence, 2 is median.

// Your Task:  
// You don't need to read input or print anything. 
// Your task is to complete the function median() which takes the integers R and C along 
// with the 2D matrix as input parameters and returns the median of the matrix.

// Expected Time Complexity: O(32 * R * log(C))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= R, C <= 400
// 1 <= matrix[i][j] <= 2000

//🔴approach :  Brute force TLE  461/580

//  int median(vector<vector<int>> &matrix, int R, int C){
        
//         vector<int> v;
        
//         for(int i=0; i<R; i++) {
//             for(int j=0; j<C; j++) {
//                v.push_back(matrix[i][j])  ;
//             }
//         }         
        
//         int size = v.size() ;
//         int median = size / 2 ;
//         int ans = 0 ;
//         sort(v.begin(), v.end()) ;
        
//         for(int i=0; i<=median; i++) {
//             ans = v[i];
//         }
        
//         return ans ;
//     }
//🔸time complexity : O(N logn + N) == (2n logn) // N = r*c
//🔸space complexity : O(R*C)

//🔴appraoch : strivers optimised appraoch 
//  int countSmaller(vector<int> &arr, int k) {
//          int l = 0, h = arr.size() - 1;
        
//         while(l <= h){
            
//             int mid = l + (h - l) / 2;
            
//             if(arr[mid] <= k)   l = mid + 1;
            
//             else h = mid - 1;
            
//         }
        
//         return l;
        
//     }

//     int median(vector<vector<int>> &matrix, int R, int C){
        
          
//         int l = matrix[0][0], h = matrix[0][C - 1];
        
//         for(int i = 1; i < R; i++){
            
//             l = min(l, matrix[i][0]);
            
//             h = max(h, matrix[i][C - 1]);
//         }
        
//         while(l <= h){
            
//             int mid = l + (h - l) / 2;
            
//             int count = 0, target = (R * C) / 2;
            
//             for(int i = 0; i < R; i++){
//                 count += countSmaller(matrix[i], mid);
//             }
            
//             if(count > target)  h = mid - 1;
            
//             else l = mid + 1;
//         }
        
//         return l;
//     }
//🔸time complexity : O( R * log(C))
//🔸space complexity : O(1)


//                       //❓Question: Row with max 1s

// Given a boolean 2D array of n x m dimensions where each row is sorted. 
// Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:
// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

// Example 2:
// Input: 
// N = 2, M = 2
// Arr[][] = {{0, 0}, {1, 1}}
// Output: 1
// Explanation: Row 1 contains 2 1's (0-based
// indexing).

// Constraints:
// 1 ≤ N, M ≤ 103
// 0 ≤ Arr[i][j] ≤ 1 

 

//🔴approach:  
// int solve(vector<int> &arr) {
//         int count = 0;
//         for(auto i:arr) {
//             if( i == 1) {
//                 count++ ;
//             }
//         }
        
//         return count ;
//     }

// 	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
// 	    int count = 0 ;
// 	    int ans = -1;
// 	    int temp = count ;
// 	    for(int i=0; i<n; i++) {
// 	        count = solve(arr[i]) ;
// 	        if(count > temp) {
// 	            ans = i ;
// 	            temp = count ;
// 	        }
// 	    }
	    
// 	    return ans ;
// 	}
//🔸time complexity: O( R*R)
//🔸space complexity: O(1)


//                       //❓Question: Sorted Matrix 

// Given an NxN matrix Mat. Sort all elements of the matrix.

// Example 1:
// Input:
// N=4
// Mat=[[10,20,30,40],
// [15,25,35,45] 
// [27,29,37,48] 
// [32,33,39,50]]
// Output:
// 10 15 20 25 
// 27 29 30 32
// 33 35 37 39
// 40 45 48 50
// Explanation:
// Sorting the matrix gives this result.

// Example 2:
// Input:
// N=3
// Mat=[[1,5,3],[2,8,7],[4,6,9]]
// Output:
// 1 2 3 
// 4 5 6
// 7 8 9
// Explanation:
// Sorting the matrix gives this result.

// Expected Time Complexity:O(N2LogN)
// Expected Auxillary Space:O(N2)

// Constraints:
// 1<=N<=1000
// 1<=Mat[i][j]<=105

//🔴approach : 
// vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
           
//            vector<int> temp ;
           
//            for(int i=0; i<N; i++) {
//                for(int j=0; j<N; j++) {
//                    temp.push_back(Mat[i][j]) ;
//                }
//            }
           
//            sort(temp.begin(), temp.end()) ;
           
//            int index = 0 ;
           
//            for(int i=0; i<N; i++) {
//                for(int j=0; j<N; j++) {
//                    Mat[i][j] = temp[index++] ;
//                }
//            }
           
//            return Mat ;
//     }
//🔸time complexitY: O(N^2 LogN)
//🔸space complexitY: O(N^2)



//                  //❓Question: Max Rectangle

// Given a binary matrix M of size n X m. 
//Find the maximum area of a rectangle formed only of 1s in the given matrix.

// Example 1:
// Input:
// n = 4, m = 4
// M[][] = {{0 1 1 0},
//          {1 1 1 1},
//          {1 1 1 1},
//          {1 1 0 0}}
// Output: 8
// Explanation: For the above test case the
// matrix will look like
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1
// 1 1 0 0
// the max size rectangle is 
// 1 1 1 1
// 1 1 1 1
// and area is 4 *2 = 8.

// Your Task: 
// Your task is to complete the function maxArea which returns the maximum size rectangle area in a binary-sub-matrix with all 1’s. The function takes 3 arguments the first argument is the Matrix M[ ] [ ] and the next two are two integers n and m which denotes the size of the matrix M. 

// Expected Time Complexity : O(n*m)
// Expected Auixiliary Space : O(m)

// Constraints:
// 1<=n,m<=1000
// 0<=M[][]<=1

// Note:The Input/Ouput format and Example given are used for system's 
// internal purpose, and should be used by a user for Expected Output only.
// As it is a function problem, hence a user should not read any input from stdin/console.
//The task is to complete the function specified, and not to write the full code.

//🔴approach:
// compute max-area for 1st row
// for every remaining row  (add elem of above row)
// compute area 
// here we are also using concept from (Largest Rectangle in Histogram) problem

// #include<bits/stdc++.h>
// using namespace std;

// //next smaller elem code:
// vector<int> nextSmallerElement(int* arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=n-1; i>=0; i--) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //prev smaller elem code:
// vector<int> prevSmallerElement(int* arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=0; i<n; i++) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //largest histogram  main code:
// int largestRectangleArea(int* heights, int n ){

//     vector<int> next(n) ;
//     next = nextSmallerElement(heights, n) ;

//     vector<int> prev(n) ;
//     prev = prevSmallerElement(heights, n) ;

//     int area = INT_MIN; 
//     for(int i=0; i<n; i++) {
//         int length = heights[i] ;
         
//         if(next[i] == -1){
//             next[i] = n ;
//         }

//         int breadth = next[i] - prev[i] - 1 ;

//         int newArea = length * breadth ;
//         area = max(area, newArea) ;
//     }  
//    return area ;
// }

// //main code:
// int maxArea(int M[MAX][MAX], int n, int m) {
//     //compute area for first row
//     int area = largestRectangleArea(M[0], m) ;

//    //for every remaining rows
//     for(int i=1; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             //update row by adding previous rows value
//             if(M[i][j] != 0)
//             M[i][j] = M[i][j] + M[i-1][j] ;
//             else
//             M[i][j] = 0 ;
//         }
//         //entire row is updated now
//         int newArea = largestRectangleArea(M[i], m) ;
//         area = max(area, newArea) ;
//     }
//     return area;
//  }
//  int main() {}
 //🔴Time complexity: O(N x M)     (n=rows, m=column)
 //🔴space complexity: o(M)        (m=columns)




//                 //❓Question: Find a Specific Pair in Matrix 

// Problem Statement
//                                                                 
// You have been given a 2-D matrix 'MAT' of size 'N' x 'N' i.e. N rows and N columns.
// Your task is to find the maximum value of' matrix[a][b] - matrix[c][d] 'over all possible
// indices (О <= 'a', 'b', 'c', 'd' < 'N') such that. 'a'> 'c' and 'b'> 'd'.
// For example:
//     МАТ[3][3] =11  [    [1, 2, 3]
//                         [4, 5, 6]
//                         [7, 8, 9]  ]
//    In this example, to maximise the value of  matrix[a][b] - matrix[c][d]
//    fulfilling the given conditions on indices ('a' > 'c' and 'b' > 'd'),
//    we take 'a' = 2, 'b' = 2, 'C'==0 and 'd' =0. So, 'MAT[a][b]' - MAT[c][d]'=> 9 - 1 = 8
//    which is maximum among all possible combinations

// Constraints:
//    1 <= 'T' <= 100
//    2 <= 'N' <= 100
//    -10^5 <= 'MAT[i][j]" <= 10^5
//    Time Limit : 1 second


// Sample Input 1:
// 2
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 3
// -1 -2 -3
// -4 -5 -6
// -7 -8 -9
// Sample Output 1:
// 8
// -4
// Explanation For Sample Output 1:
// For sample test case 1: 

// In this sample test case, to maximise the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ fulfilling the given conditions on indices (‘a’ > ‘c’ and ‘b’ > ‘d’), we take ‘a’ = 3, ‘b’ = 3, ‘c’ = 0 and ‘d’ = 0 .  So, ‘MAT[a][b]’ = 9 and ‘MAT[c][d]’ = 1 and the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ => 9 - 1 = 8 which is maximum among all possible combinations.

// For sample test case 2: 

// In this sample test case, to maximise the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ fulfilling the given conditions on indices (‘a’ > ‘c’ and ‘b’ > ‘d’), we take ‘a’ = 1, ‘b’ = 1, ‘c’ = 0 and ‘d’ = 0 .  So, ‘MAT[a][b]’ = -5 and ‘MAT[c][d]’ = -1 and the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ => (-5) - (-1) = -4 which is maximum among all possible combinations.
// Sample Input 2:
// 2
// 2
// 1 5 
// 4 2 
// 3
// -1 5 -3
// -14 -5 -2
// -7 8 -9
// Sample Output 2:
// 1
// 22

//🔴approach ;
// #include <bits/stdc++.h> 
// int findMaxValue(vector<vector<int>>& mat, int n) {

//   vector<vector<int>> temp(mat.size(), vector<int>(mat[0].size(), INT32_MIN));

//     int ans = INT32_MIN;
//     for(int i = n-2; i>=0; i--){
//         for(int j = n-2; j>=0; j--){
//             temp[i][j] = max(mat[i+1][j+1], max(temp[i+1][j+1], max(temp[i+1][j], temp[i][j+1])));
//             ans = max(ans, temp[i][j]-mat[i][j]);
//         }
//     }

//     return ans;
// }
//🔸time complexity: O(N^2)
//🔸space complexity: O(N^2)



//                      //❓Question: Rotate a 2D array/matrix without using extra space

// Given a N x N 2D matrix Arr representing an image. 
// Rotate the image by 90 degrees (anti-clockwise). 
// You need to do this in place. Note that if you end up using an additional array, 
// you will only receive partial score.

// Example 1:
// Input:
// N = 3
// Arr[][] = {{1,  2,  3}
//            {4,  5,  6}
//            {7,  8,  9}}
// Output:
//  3  6  9 
//  2  5  8 
//  1  4  7 
// Explanation: The given matrix is rotated
// by 90 degree in anti-clockwise direction.

// Example 2:
// Input:
// N = 4
// Arr[][] = {{1,  2,  3,  4}
//            {5,  6,  7,  8}
//            {9, 10, 11, 12}
//            {13, 14, 15, 16}}
// Output:
//  4  8 12 16 
//  3  7 11 15 
//  2  6 10 14 
//  1  5  9 13
// Explanation: The given matrix is rotated
// by 90 degree in anti-clockwise direction.

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 1000
// 1 ≤ Arr[i][j] ≤ 1000

//🔴approach: 
// void rotateMatrix(vector<vector<int>>& arr, int n) {
	     
// 	     //🔸first transpose the matrix
// 	     for(int i=0; i<n; i++) {
// 	         for(int j=0; j<=i; j++) {
// 	             swap(arr[i][j], arr[j][i]) ;
// 	         }
// 	     }
	     
// 	     //🔸now swap lower index row with higher index row value till the condition (lower <= higher)
// 	     int i=0; 
// 	     int j= n-1;
	     
// 	     while( i <= j) {
// 	         swap(arr[i], arr[j]) ;
// 	         i++ ;
// 	         j-- ;
// 	     }
// 	}
//🔸time complxeity: O(N^N)
//🔸space complxeity: O(1)



//                   //❓Question : Kth smallest element in matrix

// Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
// Find the kth smallest element in the matrix.

// Example 1:
// Input:
// N = 4
// mat[][] =         {{16, 28, 60, 64},
//                    {22, 41, 63, 91},
//                    {27, 50, 87, 93},
//                    {36, 78, 87, 94 }}
// K = 3
// Output: 27
// Explanation: 27 is the 3rd smallest element.
 

// Example 2:
// Input:
// N = 4
// mat[][] =     {{10, 20, 30, 40}
//                    {15, 25, 35, 45}
//                    {24, 29, 37, 48}
//                    {32, 33, 39, 50}}
// K = 7
// Output: 30
// Explanation: 30 is the 7th smallest element.

// Expected Time Complexity: O(K*Log(N))
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 50
// 1 <= mat[][] <= 10000
// 1 <= K <= N*N

//🔴approach 1 :
 //🔸using vector 
    // vector<int> temp;
    
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         temp.push_back(mat[i][j]) ;
    //     }
    // } 
    
    // sort(temp.begin(), temp.end()) ;
    
    // return temp[k-1] ;
 
//🔸time complexity: O(N^N logN)
//🔸space complexity: O(n)   

//🔴approach 2 : Optimised approach
//🔸using Priority queue
//     priority_queue<int> pq;
//    for(int i =0 ;i<n;i++){
//        for(int j = 0;j<n;j++)
//        {
//            if(pq.size()<k)
//            {
//                pq.push(mat[i][j]);
//            }
//            else if(mat[i][j]<pq.top())
//            {
//                pq.pop();
//                pq.push(mat[i][j]);
//            }
//            else
//            break;
//        }
//    }
   
//    return pq.top();

//🔸time complexity: O(n^N)
//🔸space complexity: O(k)



//                  //❓Question : Common elements in all row in matrix

// Problem Statement
// You are given a 2-D Matrix 'MAT' having 'N' rows and 'M' columns,
// respectively. Your task is to find all elements which are present in each
// row of the matrix.
// Note :
//    1. The output array can contain the elements in any particular order.
//    2. Even if a particular element appears more than once in each matrix row, it
//    should still be present only once in the output array.

// For Example:
//    Consider the matrix MAT [ [ 2, 3, 4, 7
//    ] , [ 0, 0, 3, 5],[1, 3, 8, 9]]
//    having 3 rows and 4 columns
//    respectively.
//    The output array should be [ 3 ] as 3
//    is the only element that is present in
//    all three rows.

// Sample Input 1 :
// 2
// 3 4
// 1 4 5 6
// 3 4 5 6
// 5 6 7 2
// 3 2
// 4 6 
// 6 4
// 2 6
// Sample Output 1 :
// 5 6
// 6
// Explanation For Sample Input 1 :
// For the first test case : 
// Elements that are common in the first two rows are 4, 5, and 6.
//  Out of which only 5 and 6 are present in the third row. 
//  Therefore the output array is [ 5, 6 ] in this case.

// For the second test case : 
// We can see that only 6 are present in all three rows. 
// Therefore the output array is [ 6 ] in this case.

// Sample Input 2 :
// 2
// 4 3
// 1 2 3
// 2 2 3
// 2 3 1
// 2 3 4
// 3 3
// 1 2 3
// 0 6 0
// 4 6 1
// Sample Output 2 :
// 2 3 
// Explanation For Sample Input 2 :
// For the first test case : 
// As elements 2 and 3 are present in all three rows of the matrix. 
// Therefore the output array is [ 2, 3 ] in this case.

// For the second test case : 
// There is no such element that is present in all three rows. 
// Therefore the output array is an empty array in this case.

//🔴approach : using Unordered_map

// vector<int> findCommonElements(vector<vector<int>> &mat)
// {
//    int row = mat.size() ;
//    int col = mat[0].size() ;

//    unordered_map<int, int> mp ;
//    for(int j=0; j<col; j++) {
//        mp[mat[0][j]] = 1 ;
//    }

//🔸 dry run
// 1 2 3           //  1=1 2=1 3=1
// 2 2 3           //      2=2 3=2
// 2 3 1           //  2=3 3=3 
// 2 3 4           //  2=4 3=4 
//🔸 dry run 

//    for(int i=1; i<row; i++) {
//        for(int j=0; j<col; j++) {
//            if(mp[mat[i][j]] == i) {
//                mp[mat[i][j]] = i+1 ;
//            }
//        }
//    }

//    vector<int> ans ;
   
//    for(auto i:mp) {
//        if(i.second == row) {
//            ans.push_back(i.first) ;
//        }
//    }

//    return ans ;
// }

//🔸time complexity: O(row*col)
//🔸space complexity: O(col)



//                //❓Question: Number of enclaves

// You are given an n x m binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.
// A move consists of walking from one land cell to another adjacent (4-directionally) 
// land cell or walking off the boundary of the grid.

// Find the number of land cells in grid for which we cannot walk off the boundary of the grid in 
// any number of moves.

// Example 1:
// Input:
// grid[][] = {{0, 0, 0, 0},
//             {1, 0, 1, 0},
//             {0, 1, 1, 0},
//             {0, 0, 0, 0}}
// Output:
// 3
// Explanation:
// 0 0 0 0
// 1 0 1 0
// 0 1 1 0
// 0 0 0 0
// The highlighted cells represents the land cells.

// Example 2:
// Input:
// grid[][] = {{0, 0, 0, 1},
//             {0, 1, 1, 0},
//             {0, 1, 1, 0},
//             {0, 0, 0, 1},
//             {0, 1, 1, 0}}
// Output:
// 4
// Explanation:
// 0 0 0 1
// 0 1 1 0
// 0 1 1 0
// 0 0 0 1
// 0 1 1 0
// The highlighted cells represents the land cells.

// Your Task:
// You don't need to print or input anything. Complete the function numberOfEnclaves() which takes a 2D integer matrix grid as the input parameter and returns an integer, denoting the number of land cells.
// Expected Time Complexity: O(n * m)
// Expected Space Complexity: O(n * m)

// Constraints:
// 1 <= n, m <= 500
// grid[i][j] == 0 or 1

//🔴Approach : 
//  int numberOfEnclaves(vector<vector<int>> &grid) {
        
//         queue<pair<int,int>> q ;
//         int n = grid.size() ;
//         int m = grid[0].size() ;
//         int vis[n][m] = {0} ;
        
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i==0 || j==0 || i == n-1 || j == m-1) {
//                     if(grid[i][j] == 1){
//                         q.push({i,j});
//                         vis[i][j] = 1;
//                     }
//                 }
//             }
//         }
        
//         int delrow[4] = {-1, 0, 1, 0 } ;
//         int delcol[4] = { 0, 1, 0, -1} ;
        
//         while( !q.empty()) {
//             int row = q.front().first ;
//             int col = q.front().second; 
//             q.pop() ;
            
//             for(int i=0; i<4; i++) {
//                 int nrow = row + delrow[i] ;
//                 int ncol = col + delcol[i] ;
                
//                 if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0){
//                     q.push({nrow, ncol}) ;
//                     vis[nrow][ncol] = 1;
//                 }
//             }
//         }
        
//         int count = 0 ;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++) {
//                 if(grid[i][j] == 1 && vis[i][j] == 0) {
//                     count++ ;
//                 }
//             }
//         }
        
//         return count;
//     }