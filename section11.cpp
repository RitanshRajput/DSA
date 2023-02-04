
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



// 46:00  25/149