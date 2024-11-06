
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



//❓ Question :
//🔸 Rotate array w.r.t given index k :
//ex:
// Input = {1, 3, 5, 7} ;
// k = 2 ;
// output : {5, 7, 1, 3} ;         // each element is rotated 2 index from its original index

//input = {11, 12, 13, 14, 15};
// k = 3 ;
//output = {13, 14, 15, 11, 12}    // each element is rotated 3 index from its original index


// #include<iostream>
// using namespace std ;

// int rotateArray(int arr[], int k, int n){
//          int temp[n] ;                      // creating temporary array

//          for(int i=0; i<n; i++){
//              temp[(i+k) % n] = arr[i] ;            //ex: for i=0 : temp[ (0+3) % 5 ] = [3%5] = 3, for i=1 : temp[ (1+3) % 5 ] = [4%5] = 4;  for i=2 : temp[ (2+3) % 5 ] = [5%5] = 0;
//          }
        
//         for(int i=0; i<n; i++){               // loop to copy temp into arr and print it ;
//             arr[i] = temp[i] ;
//             cout<<arr[i]<<" ";
//         }
// }


// int main(){

// int k ;               // index to shift/rotate 
// cout<<"enter step to rotate element :"<<endl ;
// cin>> k;
// int n ;             // size of array
// cout<<"enter size of array :"<<endl ;
// cin>> n;

// int arr[n] ;
// cout<<"enter array element :"<<endl ;
// for(int i=0; i<n; i++){
//     cin>>arr[i]; 
// }

// cout<<" After Rotating array : " ;
// rotateArray(arr, k, n) ;           // output : 13 14 15 11 12 
      
//     return 0 ;
// }

//🔸Time complexity : O(n)
//🔸Space complexity: O(n)


//🔴Another approach to rotate an array :
// #include<iostream>
// using namespace std ;

// int rotateArray(int arr[],int N,int K){

//     for(int i=K;i<N;i++){

//         cout<<arr[i]<<" ";         // print array from index = K, to less than N

//     }

//     for(int i=0;i<K;i++){

//         cout<<arr[i]<<" ";      // print remaining from index = 0, to less than K

//     }

// }

// int main(){

//    int N, K, i ;
//    cout<<"enter size N :" <<endl ;
//    cin>>N ;
//    cout<<"enter steps to rotate K :"<<endl ;
//    cin>>K ;

//     int arr[N];
//   cout<<"enter array element : "<<endl ;
//     for(i=0;i<N;i++){

//         cin>>arr[i];

//     }
//     rotateArray(arr,N,K);

//     return 0;

// }

//❓ Question :
// check if array is sorted and rotated :
//ex:
// input : {3, 4, 5, 1, 2} ;
// output :  true (sorted and rotated)

// input : {2, 1, 3, 4} ;
// output :  false (not sorted array once rotated)

// input : {1, 1, 1} ;
// output :  true (sorted and rotated)


// #include<iostream>
// using namespace std ;

// int check(int arr[], int n) {
//     int count = 0 ;

//     for(int i=1; i<n; i++){
//         if( arr[i-1] > arr[i]) {          // loop to check if (i-1th index > ith index)  if true then count++ ;
//             count++ ;
//         }
//     }

//     if(arr[n-1] > arr[0]) {
//         count++ ;                        // also if (n-1th index > 0th index) then count++ ;
//     }
    
//     if(count<=1) {
//       cout<<" True " ;                   // if count==1 return true , else false ;
//     }
//     else{ 
//        cout<<" false " ; 
//     }

// }

// int main(){

// int arr[5] = {3, 4, 5, 1, 2} ;
// int n = 5 ;
// check(arr,n) ;

// return 0;
// }
//🔸Time complexity : O(n)
//🔸Space complexity: O(1)




//❓ Question :
// Sum of Two array : sum should be done normally as we do in books
//ex:
// input : arr1[4] = [1, 2, 3, 4]
// input : arr2[1] =          [6]

// output :           1, 2, 4, 0          // 4+6 = 0 (1 carry) , 3+1 = 4,  2,  1  =  [1, 2, 4, 0]


// input : arr1[3] = [1, 2, 3]
// input : arr2[2] =    [9, 9]

//output :         =     2,2,2          // 3+9 = 2 (1carry),  (2+1carry) = 3 + 9 = 2(1carry) ,  1+1carry = 2,   = [2, 2, 2]


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int sum(int arr1[], int n, int arr2[], int m){
//     int i = n-1;
//     int j = m-1;
//     int ans[n+m] ;
//     int k = 0 ;
//     int carry = 0 ;

//      while( i>=0 && j>=0 ){
//         int val1 = arr1[i] ;
//         int val2 = arr2[j] ;

//         int sum = val1 + val2 + carry ;

//         carry = sum /10 ;
//         sum  = sum % 10 ;

//         ans[k] = sum ;
         
//          k++ ;
//          i-- ;
//          j-- ;
//      }

//     // for case 1 :  where 1st array has more element than 2nd array
//      while(i>=0) {
//         int sum = arr1[i] + carry ;
//         carry = sum /10 ;
//         sum = sum % 10 ;
//         ans[k] = sum ;
//         k++ ;
//         i-- ;
//      }

//     //for case 2 : where 2nd array has more element than 1st array 
//      while( j>=0){
//         int sum = arr2[j] + carry ;
//         carry = sum /10 ;
//         sum = sum %10; 
//         ans[k] = sum ;
//         k++ ;
//         j-- ;
//      }

//     //for case 3 : where both array are same but there carry remains to be added in result array 
//      while( carry != 0) {
//         int sum = carry ;
//         carry = sum /10 ;
//         sum = sum % 10;
//         ans[k] = sum ;
//         k++ ;
//      }

//     // The answer stored is in reverse mannner we need to reverse it again so it makes sense :
//     // reversing the final ans[] ;
//     int start = 0 ;
//     int end = k - 1 ;
//     while(start <= end) {
//         swap(ans[start], ans[end]) ;
//         start++ ;
//         end-- ;
//     }

//     // print result :
//     for(int i=0; i<k; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// int main(){

// int arr1[3] = {1, 2, 3};
// int n = 3;
// int arr2[2] = {9, 9};
// int m = 2;

// sum(arr1, n, arr2, m) ;

//     return 0;
// }

//🔸Time complexity : O(max(n+m))
//🔸Space complexity: O(max(n+m))


//                                 //❓Hard : Merge two sorted array without without extra space

// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
// Merge them in sorted order without using any extra space.
//  Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// Example 1:

// Input: 
// n = 4, arr1[] = [1 3 5 7] 
// m = 5, arr2[] = [0 2 6 8 9]
// Output: 
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]
// Explanation:
// After merging the two 
// non-decreasing arrays, we get, 
// 0 1 2 3 5 6 7 8 9.
// Example 2:

// Input: 
// n = 2, arr1[] = [10 12] 
// m = 3, arr2[] = [5 18 20]
// Output: 
// arr1[] = [5 10]
// arr2[] = [12 18 20]
// Explanation:
// After merging two sorted arrays 
// we get 5 10 12 18 20.

// #include<iostream>
// using namespace std;

//     void merge(long long arr1[], long long arr2[], int n, int m) 
//     { 
         
//         int left = n-1;
//         int right = 0;
            
//         while( right < m && left >= 0) {
//             if(arr1[left] >= arr2[right]) {
//                 swap(arr1[left], arr2[right]) ;
//                 left--;
//                 right++ ;
//             }
//             else break;
//         }
//         sort(arr1, arr1+n) ;
//         sort(arr2, arr2+m) ; 
        
//     } 
//🔸time complexity: O(Nlog n)             // loop => O(n)  , sort() => O(nlog n)
//🔸space complexity: O(1)