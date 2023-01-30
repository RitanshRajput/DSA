
//🔘Array question :

//❓ Question :
//🔸 Reverse an array :
//ex:
// input : {1, 3, 4, 3} ;
//output : {3, 4, 3, 1} ;


// #include<iostream>
// #include<vector>
// using namespace std ;

// vector<int> reverse(vector<int> arr){
//     int start = 0;
//     int end = arr.size() - 1 ;

//      while(start<=end){
//         swap(arr[start], arr[end]) ;
//         start++ ;
//         end-- ;
//      }
//   return arr ;
// }

// void printVector(vector<int> arr) {
//     for(int i=0; i<arr.size(); i++ ){
//          cout<<arr[i]<<" ";
//     }
//     cout<<endl ;
// }

// int main(){

// vector<int> arr ;

// arr.push_back(1) ;
// arr.push_back(2) ;
// arr.push_back(3) ;
// arr.push_back(4) ;
// arr.push_back(5) ;

// vector<int> ans = reverse(arr) ;

// cout<<" Reverse array : ";
// printVector(ans) ;

//     return 0;
// }



//❓Question :
//🔸Reverse an array from the given position 'm' ;
//ex:
// input : {1,2, 3, 4, 5} ; 
//  m = 3 ;
//output :  {1, 2, 3, 5, 4} ;            // reverse the from the given position m = 3 means element 4 and afterward ;

// #include<iostream>
// #include<vector> 
// using namespace std ;

// vector<int> positionReverse(vector<int> arr, int m) {

//             int start = 0;
//             int end = arr.size() - 1;
             
//              while(m<=end){
//                 swap(arr[m], arr[end]) ;
//                 m++;
//                 end-- ;
//              }
//              return arr ;
// }

// void printArray(vector<int> arr){
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" " ;
//     }
// }

// int main(){

// vector<int> arr ;

// arr.push_back(1) ;
// arr.push_back(2) ;
// arr.push_back(3) ;
// arr.push_back(4) ;
// arr.push_back(5) ;
// arr.push_back(6) ;

// int m = 2 ;

// vector<int> ans = positionReverse(arr, m) ;

// cout<<" Reverse array from given position : " ;
// printArray(ans) ;

//     return 0;
// }



//❓ Question :
//🔸 Merge sorted array and the output should be sorted too:
//ex:
// input arr1 = {1, 3, 5, 7} ;
// input arr2 = {2, 4, 6} ;

// output = {1, 2, 3, 4, 5, 6, 7} ;


// #include<iostream>
// using namespace std; 

// int merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

//              int i =0 ;           // for 1st arr  starting index
//              int j =0 ;           // for 2nd arr  starting index
//              int k =0 ;           // for 3rd arr  starting index

//             //copying first and second array element into third array
//              while( i<n && j<m ){

//                 if(arr1[i] < arr2[j]){
//                     arr3[k++] = arr1[i++] ;      // we can write like this instead of below 3 line this works same like below 3 line
//                     // arr3[k] = arr1[i] ;
//                     // k++ ;
//                     // i++ ;
//                 }
//                 else {
//                      arr3[k++] = arr2[j++] ;      // we can write like this instead of below 3 line this works same like below 3 line
//                     // arr3[k] = arr2[j] ;
//                     // k++ ;
//                     // j++ ;
//                 }
//              }

//             //copy first array remaining element into 3rd array 
//              while(i<n) {
//               arr3[k++] = arr1[i++] ;          // we can write like this instead of below 3 line this works same like below 3 line
//             //  arr3[k] = arr1[i] ;
//             //  k++ ;
//             //  i++ ;
//             }

//             //copy second array remaining element into 3rd array 
//              while(j<n) {
//              arr3[k++] = arr2[j++] ;           // we can write like this instead of below 3 line this works same like below 3 line   
//             //  arr3[k] = arr2[j] ;
//             //  k++ ;
//             //  j++ ;
//             }
// }

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

// int odd[4] = {1, 3, 5, 7} ;
// int even[3] = {2, 4, 6} ;

// int arr[7] = {0} ;

// merge(odd,4, even,3, arr) ;

// cout<<" after merging two arrays : ";
// printArray(arr, 7) ;

//     return 0 ;
// }



//❓ Question :
//🔸Merage sorted array in first array :
//ex :
// input arr1 = {1,2,3,0,0,0} ;   m = 3
// input arr2 = {2,5,6} ;         n = 3

//output : arr1 = {1,2,2,3,5,6} ;

//ex:
// input arr1 = {1} ;   m = 1
// input arr2 = {0} ;   n = 0

//output : arr1 = {1} ;

//ex:
// input arr1 = {0} ;   m = 0
// input arr2 = {1} ;   n = 1

//output : arr1 = {1} ;


// #include<iostream>
// using namespace std;

// int merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

//              int i =0 ;           // for 1st arr  starting index
//              int j =0 ;           // for 2nd arr  starting index
//              int k =0 ;           // for 3rd arr  starting index

//             //copying first and second array element into third array
//              while( i<n && j<m ){

//                 if(arr1[i] < arr2[j] && arr1[i] > 0 ){
//                     arr3[k] = arr1[i] ;
//                     k++ ;
//                     i++ ;
//                 }
//                 else {
//                     arr3[k] = arr2[j] ;
//                     k++ ;
//                     j++ ;
//                 }
//              }

//             //copy first array remaining element into 3rd array 
//              while(i<m) {
//              arr3[k] = arr1[i] ;
//              k++ ;
//              i++ ;
//             }

//             //copy second array remaining element into 3rd array 
//              while(j<n) {
//              arr3[k] = arr2[j] ;
//              k++ ;
//              j++ ;
//             }
// }

// void printArray(int arr1[], int arr3[ ],  int m, int n) {
//     int k = m +n ;

//     for(int j=0,i=0 ; j<k,i<k ; j++,i++ ){

//         arr1[i] = arr3[j] ;
//         cout<<arr1[i]<<" ";
//     }
// }

// int main(){

// int odd[6] = {1, 2, 3, 0, 0, 0} ;
// int even[3] = {2, 5, 6} ; 

// int m = 3;
// int n = 3 ;
// int k = m + n;
// int arr[k] = {0} ;

// merge(odd,4, even,3, arr) ;

// cout<<" after merging two arrays : ";
// printArray(odd, arr , m, n) ;

//     return 0 ;
// }


//❓ Question :
// Move Zeros by preserving the order of other elements :
//  means order of other elements should be same only move zeros to the right side 
//ex:
// input : {0, 1, 0, 3, 12}
//output : {1,3,12,0,0} ;

//input:{2,0, 1, 3, 0,0,0} 
//output: {2, 1, 3, 0,0,0,0 }


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int move(int arr[], int n){
     
//    int i=0;

//    for(int j=0; j<n; j++){

//     if(arr[j] != 0){
//         swap(arr[j], arr[i]) ;
//         i++ ;
//     }
//    }  
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

// int arr[5] ={0, 1, 0, 3, 12} ;
// int n = 5 ;

// move(arr,  n) ;
// cout<<" after moving zeros : " ;

// printArray(arr, n) ;

//     return 0;
// }