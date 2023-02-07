
                     //🔴🔴 2D arrays

//🔸Two-dimensional array
// A 2D array is also known as a matrix (a table of rows and columns). 
// To create a 2D array of integers, take a look at the following example:
//  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; 
// The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3]

// When we want to create rows and column together like a matrix we use 2D array

//Representation :
// A 2-dimensional array 
// Looks like this :        
//  [1, 2, 3, 4, 5, 6, 7, 8, 9]         // store in linear form in the memory

// But actually we have use some mathematical expression to store and represent like this :
//              COLUMN 
//           0     1     2
//       0   1  |  2  |  3
//          ---------------
// ROW   1   4  |  5  |  6                        // Like a matrix
//          ---------------
//       2   7  |  8  |  9



//🔸Creation of 2-D array

//      3row 3column
// int arr[3][3] ;             // initialisation
// cin >> arr[i][j] ;          // taking input in 2d array
// cout>>arr[i][j] ;           // output
//              COLUMN 
//           0     1     2
//       0   1  |  2  |  3
//          ---------------
// ROW   1   4  |  5  |  6                        // Like a matrix
//          ---------------
//       2   7  |  8  |  9


//🔸how to access an 2d array element :
// 1  = arr[0][0]        //  row = 0 , coulmn =  0
// 2  = arr[0][1]        //  row = 0 , coulmn =  1
// 3  = arr[0][2]        //  row = 0 , coulmn =  2
// 4  = arr[1][0]        //  row = 1 , coulmn =  0
// 5  = arr[1][1]        //  row = 1 , coulmn =  1
// 6  = arr[1][2]        //  row = 1 , coulmn =  2
// 7  = arr[2][0]        //  row = 2 , coulmn =  0
// 8  = arr[2][1]        //  row = 2 , coulmn =  1
// 9  = arr[2][2]        //  row = 2 , coulmn =  2


//🔸Implememtation :

// #include<iostream>
// using namespace std;

// int main(){

// // int arr[3][3] = {1,2,3,4,5,6,7,8,9} ;          // static input in 2d array :

// // int arr[3][3] = {{1,4,7}, {2,5,8},{3,6,9} } ;     // suggested way for static input in 2d array :

// int arr[3][3] ;                    // Dynamic input in 2d array :

// cout<<"ENter 9 numbers one by one :"<<endl;

// // loop for taking input in 2d array row wise : =>
//  for(int row=0; row<3; row++) {
//      for(int column=0; column<3; column++){
//          cin>>arr[row][column] ;
//      }
//  }

// // //loop for taking input in 2d array column wise : ⬇
// for(int col=0; col<3; col++) {
//     for(int row=0; row<3; row++){
//         cin>>arr[row][col] ;
//     }
// }

// //loop for giving output in 2d array
// for(int row=0; row<3; row++) {
//     for(int column=0; column<3; column++){
//         cout<<arr[row][column]<<" | " ;
//     }
//     cout<<endl ;
// }

//     return 0;
// }



//❓ Question 
// Search the given number in the 2d array :

// #include<iostream>
// using namespace std;

// //🔸whenever we pass 2d array as an argument we need to specify atleast size of row or column in the parameter .
// bool isPresent(int arr[3][3], int target, int row, int col) {
//       for(int row=0; row<3; row++){
//          for(int col=0; col<3; col++){
//             if(arr[row][col] == target) {
//                 return 1 ;
//             }
//          }
//       }
//       return 0;
// }

// int main(){
// int arr[3][3] ;
// cout<<"enter 9 numbers : "<<endl ;

// // to take input 
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>arr[i][j] ;
//     }
// }

// // to print 
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j] << " | " ;
//     }
//     cout<<endl ;
// }

// cout<<" enter element you want to search is present or not : "<<endl ;
// int target ;
// cin>>target ;

// if(isPresent(arr, target, 3 , 3) ){
//     cout<<" Element found "<<endl;
// }
// else{
//     cout<<" Not found "<<endl ;
// }

//     return 0;
// }



//❓ Question :
// Row wise sum and column wise :  sum of all element ROW-wise  ➡️ and Column-wise ⬇️ 
//   1 | 2 | 3           => 6
//   4 | 5 | 6           => 15       // sum row-wise
//   7 | 8 | 9           => 24
//   ⬇️ ⬇️ ⬇️
//  =12 =15 =18                    // sum column-wise


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[3][3] ;

//     cout<<"enter 9 element :"<<endl ;

// // for Input
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[i][j] ;
//         }
//     }

// // for output 
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j] <<" | " ;
//         }
//         cout<<endl ;
//     }

// //for sum answer Row-wise :
//    for(int i=0; i<3; i++){
//       int sum = 0;
//     for(int j=0; j<3; j++){
//         sum = sum + arr[i][j] ;
//     }
//     cout<<"Sum of row "<<i+1<<" : "<<sum <<endl ;
//    }

// //for sum answer column-wise:
//    for(int i=0; i<3; i++){
//       int sum = 0;
//     for(int j=0; j<3; j++){
//         sum = sum + arr[j][i] ;
//     }
//     cout<<"Sum of column "<<i+1<<" : "<<sum <<endl ;
//    }

//     return 0;
// }


//❓ Question
// Largest Row sum and largest Column sum also tell at which row and col it exist.
// In the above question we found sum of all the row and col, now 
// we need to find largest sum among all the sums for row and column .
//   1 | 2 | 3           => 6
//   4 | 5 | 6           => 15       // largest sum row-wise is 24 at 3 row
//   7 | 8 | 9           => 24
//   ⬇️ ⬇️ ⬇️
//  =12 =15 =18                    // largest sum col-wise is 18  at 3 col


// #include<iostream>
// using namespace std;

// int main(){
// int arr[3][3] ;
// cout<<" enter 9 numbers :"<<endl ;

// // for input
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>arr[i][j] ;
//     }
// }

// // for output :
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j] <<" | " ;
//     }
//     cout<<endl ;
// }


// // for largest sum Row-wise :
// int largestRow = 0;
// int row = 0 ;
// for(int i=0; i<3; i++){
//     int sum = 0;
//     for(int j=0; j<3; j++){
//        sum = sum + arr[i][j] ;

//        if(largestRow < sum){
//         largestRow = sum ;
//         row = i+1 ;
//        }
//     }
//     cout<<" Sum of row "<<i+1<<" : "<<sum <<endl ;
// }
//    cout<<" Largest sum in Row is : "<<largestRow <<" at : "<<row<<" row "<<endl ;

   
// // for largest sum column-wise :
// int largestCol = 0;
// int col = 0;
// for(int i=0; i<3; i++){
//     int sum = 0;
//     for(int j=0; j<3; j++){
//        sum = sum + arr[j][i] ;
       
//        if(largestCol < sum){
//         largestCol = sum ;
//         col = j+1 ;
//        }
//     }
//     cout<<" Sum of Column "<<i+1<<" : "<<sum <<endl ;
// }
//    cout<<" largest sum in C0lumn is : "<<largestCol <<" at : "<<col<<" col " <<endl ;


//     return 0;
// }


//🔸 Vector<vector<int>> = is same like arr[i][j]  2darray 

//❓ Question :
// Print Like A wave :
//For a given 2-dimensional integer array list of size'N*M' print the 'arr' in a sineWave order
// i.e: print the first column top to bottom and next column bottom to top and so on :

//ex:
// the sine wave for the matrix :
//  1   2
//  3   4

//output : 1 , 3,  2,  4
     
//              /4      
//       /3    / 
//      /   \2/
//     /1                   // wave like pattern



// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int nCols){
   
//    vector<int> ans ;

//     for(int col=0; col<nCols; col++){

//         if( col & 1){
//             //odd index => bottom to top
//             for(int row=nRows-1; row>=0; row--){
//                 cout<< arr[row][col] <<" ";
//                 ans.push_back(arr[row][col]) ;
//             }
//         }
    
//     else {
//         // even index => top to bottom
//         for(int row=0; row<nRows; row++){
//             cout<< arr[row][col]<<" " ;
//             ans.push_back(arr[row][col]) ;
//         }
//     }
//     }
//     return ans ;
// }


// int main(){
  
//     vector<vector<int>> vect
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
      
//       int nRows = 3 ;
//       int nCols = 3;
//     /*
//     Now we print the values that 
//     we just declared on lines
//     14, 15 and 16 using a simple 
//     nested for loop.
//     */
      
//     for (int i = 0; i < vect.size(); i++)
//     {
//         for (int j = 0; j < vect[i].size(); j++)
//         {
//             cout << vect[i][j] << " ";
//         }    
//         cout << endl;
//     }


//   wavePrint(vect, nRows, nCols) ;
  
//     return 0;
// }


//🔸everytime we are traversing n*mtimes up and n*m time down therefor :
//🔸 Time-complexity = O(n*m) 
//🔸 Space-complexity = O(n*m)




//❓ Quesstion AMAZON:
// SPIRAL PRINT :
// Return output in the spiral form
//   1  2  3           
//   4  5  6           
//   7  8  9           

// output :  1 2 3 6 9 8 7 4 5


// #include<iostream>
// using namespace std;

// int main(){

// int arr[3][3] = {{1,2,3}, {4,5,6},{7,8,9}} ;

// // to print in matrix form :
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j]<<" | " ;
//     }
//     cout<<endl;
// }

// // // Main answer :
//         int row = 3;
//         int col = 3;

//         int total = row*col;
//         int count = 0;

//         int StrCol = 0;
//         int StrRow = 0;
//         int EndCol = col-1;
//         int EndRow = row-1;

//         while(count < total){
//             /* print first row */
//         for(int index = StrCol; index <= EndCol && count < total; index++){
//             cout<<arr [StrRow][index] <<" "; // 1 2 3 
//             count++;
//         }
//         StrRow++;  //  strrow =  1

//         /* print last column */
//         for(int index = StrRow; index <= EndRow && count < total; index++){
//             cout<< arr[index][EndCol] <<" " ; // 3 6 9 --> 6 9 
//             count++;
//         }
//         EndCol--; // endcol = 

//         /* print last row-backwards */
//         for(int index = EndCol; index >= StrCol && count < total; index--){
//             cout<< arr[EndRow][index]  <<" " ; // 7 8 9 -->  8 7 
//             count++;
//         }
//         EndRow--;

//         /* print first Col-backwards */
//         for(int index = EndRow; index >= StrRow && count < total; index--){
//             cout<< arr[index][StrCol] <<" " ;     // 4 5 6 ---> 4
//             count++;
//         }
//         StrCol++;
//     }
       
//     return 0;
// }

//🔸 Time-complexity : O(n*m)
//🔸 space-complexity: O(n*m)



//❓ Question leetcode medium:
// Rotate matrix by 90  degree :
//  input        output
//  1 2 3        7 4 1
//  4 5 6   ==>  8 5 2
//  7 8 9        9 6 3


// #include<iostream>
// #include<algorithm>
// using namespace std ;

// int main() {

// int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9} } ;

// // to print
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j] <<" " ;
//     }
//     cout<<endl ;
// }
// cout<<endl;

// // main answer :
//  int n = 3 ;              // size of array

//  for(int i=0; i<n; i++){
//   for(int j=i+1; j<n; j++){
//    swap(arr[i][j], arr[j][i]) ;
//   }
//  }

// for(int i=0,k=n-1; i<k; i++,k--){
//   for(int j=0; j<n; j++){
//     swap(arr[j][i], arr[j][k]) ;
//   }
// }

// //to print 90 degree 2d array
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j] <<" " ;
//     }
//     cout<<endl ;
// }
// cout<<endl;


//   return 0;
// }




//🔴 Binary search in 2d array :

//❓Question leetcode medium :
//Search 2d matrix :
// write an efficient algorithm that searches for a value in an m*n matrix.
// this matrix has the following property:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

//ex: 
//input :    1  3  5  7
//           10 11 16 20
//           23 30 34 60
//target = 3 ;           // search 3 in 2d array

//output : true :       // 3 is present


// #include<iostream>
// using namespace std;

// int main(){

// int arr[3][4] = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}} ;


// //to print original array in linear form
// for(int i=0; i<3; i++){
//   for(int j=0; j<4; j++){
//      cout<<arr[i][j] <<" ";
//   }
// }

// cout<<endl ;
// //output : 1 3 5 7 10 11 16 20 23 30 34 60   
// // In linear form we can see that its in sorted order so we can easily analyze and apply Binary search in 2d array

// // Main Answer :

// int target = 16 ;
// int count = 0;
// int row = 3 ;
// int col = 4 ;
// int start = 0 ;
// int end = row*col - 1; 
// int mid = start + (end - start) /2 ;

//   while(start <= end){

//     int result = arr[mid / col][mid % col] ;      // to get index number of that element

//     if(result == target){                             // below this line is same code for binary search 
//      cout<<"target "<<target<<" is found " ;
//     }
//     if( result <  target ){
//       start = mid + 1 ;
//     }
//     else{
//       end = mid - 1 ;
//     }
//     mid = start + (end - start)/2 ;
//   }

//   return 0;
// }


//🔴Time complexity :
// Binary search = O(log n)
// In 2d array n = row * col

// Therefore Time-complexity for binary search in 2d array is :
//🔸 O(log (row*col)) 
//🔸 O(log (m*n))           // m = row, n = col




//❓ Question Leetcode medium :
// Search a 2D matrix II :
// write an efficient algorithm that searched for a value (target) in an (m*n) integer matrix.
// this matrix has the following properties 
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Input : (5*5) = 25
//         1  4  7  11 15
//         2  5  8  12 19
//         3  6  9  16 22
//         10 13 14 17 24
//         18 21 23 26 30

// Linear :
//     1 4 7 11 15 2 5 8 12 19 3 6 9 16 22 10 13 14 17 24 18 21 23 26 30


// #include<iostream>
// using namespace std;

// int main(){

// int arr[5][5] = {
//               {1,4,7,11,15},
//               {2,5,8,12,19},
//               {3,6,9,16,22},
//               {10,13,14,17,24},
//               {18,21,23,26,30}
// } ;

// // to print 2d array in linear 
//  for(int i=0; i<3; i++){
//   for(int j=0; j<4; j++){
//      cout<<arr[i][j] <<" ";
//   }
// }

// cout<<endl ;

// // to print 2d array in matrix form 
// for(int i=0; i<3; i++){
//   for(int j=0; j<4; j++){
//      cout<<arr[i][j] <<" | ";
//   }
//   cout<<endl ;
// }

// cout<<endl ;

// // Main answer 

// int target = 1 ;
// int row = 5 ;
// int col = 5 ;
// int rowIndex = 0 ;              // starting row index
// int colIndex = col - 1;         // ending column index

// while( rowIndex < row && colIndex >= 0){
 
//  int result = arr[rowIndex][colIndex] ;
 
//  if( result == target){
//   cout<<" Target "<<target <<" Is found !" ;
//  }
//  if(result < target){
//      rowIndex++ ;
//  }
//  else{
//   colIndex-- ;
//  }

// }

//  return 0;
// }

// 26/149